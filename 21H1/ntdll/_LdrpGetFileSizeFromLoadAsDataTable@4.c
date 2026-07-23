/*
 * XREFs of _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C
 * Callers:
 *     _LdrpResGetMappingSize@16 @ 0x4B2BAB30 (_LdrpResGetMappingSize@16.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _LdrpGetImageSize@8 @ 0x4B33F62D (_LdrpGetImageSize@8.c)
 * Callees:
 *     _LdrpInitMuiCrits@8 @ 0x4B2B8C84 (_LdrpInitMuiCrits@8.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __thiscall LdrpGetFileSizeFromLoadAsDataTable(void *this)
{
  int v2; // esi
  int v3; // eax

  if ( !this )
    return 0;
  v2 = 0;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      if ( *((void **)LoadAsDataTable + 6 * v3 - 6) == this )
      {
        v2 = *((_DWORD *)LoadAsDataTable + 6 * v3 - 4);
        break;
      }
      --v3;
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v2;
}
