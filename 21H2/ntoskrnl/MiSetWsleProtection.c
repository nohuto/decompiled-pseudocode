/*
 * XREFs of MiSetWsleProtection @ 0x14036B3D0
 * Callers:
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     MiWriteWsle @ 0x14023F36C (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 */

__int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r10

  MiGetWsleContents(a1, a2);
  return MiWriteWsle(v2, v3);
}
