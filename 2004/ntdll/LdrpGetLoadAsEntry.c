/*
 * XREFs of LdrpGetLoadAsEntry @ 0x18006A17C
 * Callers:
 *     LdrpIsReparsePoint @ 0x180069ED4 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x18006A008 (LdrpGetDataModulePath.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800E0E70 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180033B68 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ecx

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v7 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v7 > 0 )
    {
      v5 = 6LL * --v7;
      if ( *(_QWORD *)(v6 + 48LL * v7) == a1 )
      {
        if ( *(_QWORD *)(v6 + 48LL * v7 + 8) )
        {
          *a2 = *(_OWORD *)(v6 + 48LL * v7);
          a2[1] = *(_OWORD *)(v6 + 48LL * v7 + 16);
          a2[2] = *(_OWORD *)(v6 + 48LL * v7 + 32);
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits, v5, v6);
  return v4;
}
