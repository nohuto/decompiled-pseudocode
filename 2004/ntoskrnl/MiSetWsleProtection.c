/*
 * XREFs of MiSetWsleProtection @ 0x140368F90
 * Callers:
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x1402E0090 (MiWriteWsle.c)
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
