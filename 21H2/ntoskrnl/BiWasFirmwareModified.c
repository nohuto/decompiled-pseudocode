/*
 * XREFs of BiWasFirmwareModified @ 0x14039B4CC
 * Callers:
 *     BiCloseStore @ 0x140781D00 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     BiGetRegistryValue @ 0x140783DF8 (BiGetRegistryValue.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  int v6; // ebx
  int v7; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  BugCheckParameter2 = 0LL;
  v7 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &BugCheckParameter2, &v7) >= 0 )
  {
    v6 = *(_DWORD *)BugCheckParameter2;
    ExFreeHeapPool(BugCheckParameter2, v2, v3, v4);
    return v6 != 0;
  }
  return v1;
}
