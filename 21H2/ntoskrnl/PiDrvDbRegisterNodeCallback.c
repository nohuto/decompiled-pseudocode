/*
 * XREFs of PiDrvDbRegisterNodeCallback @ 0x1407D49C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     PiDrvDbRegisterNode @ 0x1407A3A78 (PiDrvDbRegisterNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

bool __fastcall PiDrvDbRegisterNodeCallback(const WCHAR *a1, int *a2)
{
  int v4; // ebx
  __int64 v6; // rax
  SIZE_T v7; // rbx
  wchar_t *PoolWithTag; // rsi

  if ( wcsicmp(a1, L"SYSTEM") )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a1[v6] );
    v7 = (unsigned int)(2 * v6 + 76);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x62647050u);
    if ( PoolWithTag )
    {
      v4 = RtlStringCchPrintfW(
             PoolWithTag,
             v7 >> 1,
             L"%ws\\%ws%ws%ws",
             L"\\DriverStores",
             a1,
             L"\\System32\\config\\",
             L"SYSTEM");
      if ( v4 >= 0 )
      {
        v4 = PiDrvDbRegisterNode(a1, 10);
        if ( v4 == 0x40000000 )
          v4 = 0;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = 0;
  }
  *a2 = v4;
  return v4 >= 0;
}
