/*
 * XREFs of BiWasFirmwareModified @ 0x140398740
 * Callers:
 *     BiCloseStore @ 0x14076F920 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     BiGetRegistryValue @ 0x140771A18 (BiGetRegistryValue.c)
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
