/*
 * XREFs of MiUpdateWsleAge @ 0x14031D1EC
 * Callers:
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 * Callees:
 *     MiSetVaAgeList @ 0x1402B0AC0 (MiSetVaAgeList.c)
 *     MiGetVaAge @ 0x1402CFC10 (MiGetVaAge.c)
 */

char __fastcall MiUpdateWsleAge(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  unsigned __int64 v6; // rdi
  char result; // al

  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  result = MiGetVaAge(a1, v6);
  if ( a3 != result && (unsigned __int8)result < 8u && (a3 == 7 || result == 7) )
  {
    if ( !a3 )
      *a2 |= 0x20uLL;
    return MiSetVaAgeList(a1, v6, 1u, a3);
  }
  return result;
}
