/*
 * XREFs of RtlUpperString @ 0x1800EB970
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180060D70 (RtlUpperChar.c)
 */

char __fastcall RtlUpperString(__int64 a1, unsigned __int16 *a2)
{
  __int16 v2; // ax
  int v3; // ebx
  char *v4; // rsi
  _BYTE *v5; // rdi

  v2 = *a2;
  v3 = *(unsigned __int16 *)(a1 + 2);
  v4 = (char *)*((_QWORD *)a2 + 1);
  v5 = *(_BYTE **)(a1 + 8);
  if ( *a2 <= (unsigned __int16)v3 )
    v3 = *a2;
  for ( *(_WORD *)a1 = v3; v3; --v3 )
  {
    LOBYTE(v2) = RtlUpperChar(*v4);
    *v5 = v2;
    ++v4;
    ++v5;
  }
  return v2;
}
