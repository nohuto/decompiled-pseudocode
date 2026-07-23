/*
 * XREFs of BiWasFirmwareModified @ 0x14039B61C
 * Callers:
 *     BiCloseStore @ 0x140781EC0 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  BugCheckParameter2 = 0LL;
  v4 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &BugCheckParameter2, &v4) >= 0 )
  {
    v3 = *(_DWORD *)BugCheckParameter2;
    ExFreeHeapPool(BugCheckParameter2);
    return v3 != 0;
  }
  return v1;
}
