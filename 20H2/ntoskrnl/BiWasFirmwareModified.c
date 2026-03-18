/*
 * XREFs of BiWasFirmwareModified @ 0x14039AC00
 * Callers:
 *     BiCloseStore @ 0x14077DF20 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14077FA3C (BiOpenSystemStore.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     BiGetRegistryValue @ 0x140780018 (BiGetRegistryValue.c)
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
