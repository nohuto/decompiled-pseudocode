/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x14096C000
 * Callers:
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 * Callees:
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 *     BiBindEfiBootManager @ 0x14096BB64 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14096BDA0 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x14096C0A0 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x14096D748 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(HANDLE BcdStoreHandle)
{
  int v2; // ebx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v4[1] = (__int64)v4;
  v4[0] = (__int64)v4;
  v2 = BiBuildIdentifierList(BcdStoreHandle);
  if ( v2 < 0
    || (v2 = BiBindEfiEntries(BcdStoreHandle, v4), v2 < 0)
    || (v2 = BiBindEfiBootManager(BcdStoreHandle, (__int64)v4), v2 < 0) )
  {
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v2);
  }
  BiFreeIdentifierList(v4);
  return (unsigned int)v2;
}
