/*
 * XREFs of RtlClearBitsEx @ 0x1800EB9E0
 * Callers:
 *     RtlFindSetBitsAndClearEx @ 0x1800EC810 (RtlFindSetBitsAndClearEx.c)
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = ~(RtlIsSystemAceType[a3 + 16] << v4);
LABEL_10:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ &= RtlIsSystemAceType[v4 + 16];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 0, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_18012E6B0[v6];
      goto LABEL_10;
    }
  }
}
