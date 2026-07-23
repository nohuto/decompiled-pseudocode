/*
 * XREFs of MiExpandVadBitMapDown @ 0x1408D0F84
 * Callers:
 *     MiExpandVadBitMap @ 0x1406BFED0 (MiExpandVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x1406C0020 (MiUpdateVadBits.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(_QWORD *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1[1];
  v12 = 0LL;
  v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
  if ( a2 > 8 * (v5 - qword_140C4E3A0) )
    return 0LL;
  v7 = (a2 >> 6) + ((a2 & 0x3F) != 0);
  v8 = ((8 * v7) >> 12) + (((8 * v7) & 0xFFF) != 0);
  v9 = (_QWORD *)(v5 - (v8 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v9, v5 - 1, &v12, a4) < 0 )
    return 0LL;
  *(_QWORD *)(v6 + 272) += v12;
  *a1 += v8 << 15;
  a1[1] = v9;
  if ( v9 == (_QWORD *)qword_140C4E3A0 )
  {
    *v9 |= 1uLL;
    v10 = 1LL;
  }
  else
  {
    v10 = 0LL;
  }
  a1[2] = v10;
  a1[4] = v10;
  a1[3] = 0LL;
  MiUpdateVadBits((a1[1] - qword_140C4E3A0) << 19, ((a1[1] - qword_140C4E3A0) << 19) + (v8 << 31));
  return 1LL;
}
