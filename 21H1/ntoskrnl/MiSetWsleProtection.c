/*
 * XREFs of MiSetWsleProtection @ 0x1403685D0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x140325190 (MiWriteWsle.c)
 */

signed __int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2)
{
  char WsleContents; // al
  char v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // r10

  WsleContents = MiGetWsleContents(a1, a2);
  return MiWriteWsle(v4, v5, (16 * (v3 & 7)) | WsleContents & 0x8Fu);
}
