/*
 * XREFs of MiUpdateWsleAge @ 0x14023D07C
 * Callers:
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 * Callees:
 *     MiGetVaAge @ 0x140313E40 (MiGetVaAge.c)
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 */

__int64 __fastcall MiUpdateWsleAge(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // r9

  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  result = MiGetVaAge(a1, v6);
  if ( a3 != (_BYTE)result && (unsigned __int8)result < 8u && (a3 == 7 || (_BYTE)result == 7) )
  {
    if ( !a3 )
      *a2 |= 0x20uLL;
    LOBYTE(v8) = a3;
    return MiSetVaAgeList(a1, v6, 1LL, v8);
  }
  return result;
}
