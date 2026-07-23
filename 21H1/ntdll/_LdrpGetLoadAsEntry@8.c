/*
 * XREFs of _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA
 * Callers:
 *     _LdrpIsReparsePoint@4 @ 0x4B2A87A0 (_LdrpIsReparsePoint@4.c)
 *     _LdrpGetDataModulePath@28 @ 0x4B2B8EDE (_LdrpGetDataModulePath@28.c)
 *     _LdrGetFileNameFromLoadAsDataTable@8 @ 0x4B33F280 (_LdrGetFileNameFromLoadAsDataTable@8.c)
 * Callees:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 *     _LdrpInitMuiCrits@8 @ 0x4B2B8C84 (_LdrpInitMuiCrits@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall LdrpGetLoadAsEntry(int a1, char *a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // edx

  if ( !a1 || !a2 )
    return -1073741811;
  v3 = -1073741823;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v4 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v5 = LoadAsDataTable;
    while ( v4 > 0 )
    {
      if ( v5[6 * v4 - 6] == a1 )
      {
        if ( v5[6 * v4 - 5] )
        {
          qmemcpy(a2, &v5[6 * v4 - 6], 0x18u);
          v3 = 0;
        }
      }
      --v4;
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v3;
}
