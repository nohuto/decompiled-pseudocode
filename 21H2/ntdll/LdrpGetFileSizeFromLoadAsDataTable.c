/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x180033AE4
 * Callers:
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x1800578D0 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180033B68 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v4 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      v3 = 6LL * --v5;
      if ( *(_QWORD *)(LoadAsDataTable + 48LL * v5) == a1 )
      {
        v2 = *(_QWORD *)(LoadAsDataTable + 48LL * v5 + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits, v3, v4);
  return v2;
}
