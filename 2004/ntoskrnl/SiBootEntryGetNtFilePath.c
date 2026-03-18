/*
 * XREFs of SiBootEntryGetNtFilePath @ 0x14097055C
 * Callers:
 *     SiGetEspFromFirmware @ 0x140970AC0 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x1403F6E40 (ZwTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiBootEntryGetNtFilePath(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  PVOID PoolWithTag; // rbx
  int v5; // edi
  __int64 v6; // rsi

  v2 = *(unsigned int *)(a1 + 20);
  PoolWithTag = 0LL;
  if ( (_DWORD)v2 )
  {
    v6 = a1 + v2;
    v5 = ZwTranslateFilePath(a1 + v2, 3LL);
    if ( v5 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x4B505953u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v5 = ZwTranslateFilePath(v6, 3LL);
    }
    if ( v5 >= 0 )
    {
      *a2 = PoolWithTag;
      PoolWithTag = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v5;
}
