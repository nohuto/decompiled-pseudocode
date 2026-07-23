/*
 * XREFs of MiExpandVadBitMap @ 0x1406BFED0
 * Callers:
 *     MiInitializeVadBitMap @ 0x1406BFDE4 (MiInitializeVadBitMap.c)
 *     MiFindEmptyAddressRange @ 0x1406EA2A0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x1406C0020 (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x1408D0F84 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = *a1;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
  v8 = a1[1];
  v9 = *a1 + 8 * (v8 - qword_140C4E3A0);
  if ( a2 > a1[5] - v9 + 1 )
    return MiExpandVadBitMapDown(a1);
  v10 = (v6 + 8 * (v8 - qword_140C4E3A0)) << 16;
  v11 = v8 + (v6 >> 3);
  if ( (int)MiMakeHyperRangeAccessible(v11, v8 + ((v6 + a2 - 1) >> 3), &v17, a4) < 0 )
    return 0LL;
  *(_QWORD *)(v7 + 272) += v17;
  v12 = ((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) >> 12) + (((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) & 0xFFF) != 0);
  v13 = (v12 << 15) + *a1;
  v14 = (v12 << 15) + v9;
  *a1 = v13;
  v15 = a1[5];
  if ( v14 > v15 + 1 )
    *a1 = v15 - v14 + v13 + 1;
  if ( v11 == qword_140C4E3A0 )
  {
    *(_QWORD *)a1[1] |= 1uLL;
    if ( v6 )
      a1[2] = 1LL;
  }
  MiUpdateVadBits(v10, v10 + (v12 << 31));
  return 1LL;
}
