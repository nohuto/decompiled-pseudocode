/*
 * XREFs of MiFindEmptyAddressRange @ 0x1406EA2A0
 * Callers:
 *     MiSelectUserAddress @ 0x1406EA100 (MiSelectUserAddress.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x1402CCEA0 (RtlFindClearBitsEx.c)
 *     MiFindEmptyAddressRangeInTree @ 0x1405F1C70 (MiFindEmptyAddressRangeInTree.c)
 *     MiFindClearVadBitsAligned @ 0x1405F38E0 (MiFindClearVadBitsAligned.c)
 *     MiExpandVadBitMap @ 0x1406BFED0 (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v12; // r10
  int v15; // edi
  _DWORD *v16; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // r14
  unsigned __int64 ClearBits; // rax
  __int64 v25; // r8
  _DWORD *v26; // r9
  unsigned __int64 v27; // rcx
  __int64 result; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  bool v35; // cf
  unsigned __int8 *v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _KPROCESS *v39; // [rsp+88h] [rbp+10h]
  unsigned __int64 v42; // [rsp+A0h] [rbp+28h]
  unsigned __int64 v43; // [rsp+A8h] [rbp+30h]

  v9 = a6;
  v10 = a4;
  v12 = a3;
  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v15 = 1;
  v16 = a9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v39 = Process;
  *a9 = 1;
  if ( (a7 & 2) != 0 )
  {
    v29 = Process[1].ActiveProcessors.Bitmap[5];
    v18 = (unsigned __int8)*(_DWORD *)(a1 + 64);
    v19 = *(_QWORD *)(a1 + 48) >> 16;
    v42 = v19;
    v43 = v18;
    if ( v29 > 0x100000000LL )
    {
      v19 = (v29 >> 16) - (unsigned __int8)v19 - 1;
      v42 = v19;
    }
    Process = v39;
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 64) )
    {
      v18 = 1LL;
      v43 = 1LL;
    }
  }
  else
  {
    v18 = 0LL;
    v15 = 0;
    v19 = 0LL;
    v43 = 0LL;
    v42 = 0LL;
  }
  if ( !a4 )
  {
    if ( v12 == 0x10000 )
    {
      v20 = a2 + 0xFFFF;
    }
    else
    {
      if ( v12 - 0x200000 > 0x7FE00000 || ((v12 - 1) & a2) != 0 )
        goto LABEL_35;
      v20 = a2;
    }
    v21 = v20 >> 16;
    if ( !a5 && v9 >= (*(_QWORD *)(a1 + 40) << 16) + 0xFFFFLL )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)(a1 + 16);
        if ( v21 != 1 && v21 >= *(_QWORD *)(a1 + 24) )
          v22 = *(_QWORD *)(a1 + 32);
        v23 = *(_QWORD *)(a1 + 8) - qword_140C4E3A0;
        if ( v15 == 1 )
        {
          v30 = v22 + 8 * v23;
          if ( v30 < v18 || v30 >= v19 )
          {
            v22 = v18;
            *v16 = 0;
          }
        }
        if ( v12 == 0x10000 )
          ClearBits = RtlFindClearBitsEx((unsigned __int64 *)a1, v21, v22);
        else
          ClearBits = MiFindClearVadBitsAligned((unsigned __int64 *)a1, v12, v21, v22);
        v27 = ClearBits;
        if ( ClearBits != -1LL )
        {
          if ( v15 != 1 || (v31 = ClearBits + 8 * v23, v31 >= v43) && v31 < v42 )
          {
            *a8 = (v27 + 8 * (*(_QWORD *)(a1 + 8) - qword_140C4E3A0)) << 16;
            return 0LL;
          }
        }
        if ( (unsigned int)MiExpandVadBitMap((unsigned __int64 *)a1, v21, v25, v26) != 1 )
          break;
        v12 = a3;
        v16 = a9;
        v19 = v42;
        v18 = v43;
      }
      if ( v15 == 1 )
        return 3221225495LL;
      v12 = a3;
      v16 = a9;
      v19 = v42;
      v18 = v43;
      Process = v39;
    }
    v10 = a4;
  }
LABEL_35:
  *v16 = 0;
  if ( v15 == 1 )
  {
    v32 = v19 << 16;
    if ( v9 > v32 )
      v9 = v32;
  }
  v33 = *(_QWORD *)(a1 + 56);
  v34 = a5;
  if ( v33 > a5 )
    v34 = v33;
  v35 = v34 < v9;
  if ( v34 > v9 )
  {
    if ( ((__int64)Process[2].ReadyListHead.Blink & 0x20) == 0 || (v37 = 0x3FFFFFFFLL, v9 <= 0x3FFFFFFF) )
      v37 = 0xFFFFFFLL;
    v34 &= v37;
    if ( !v34 || v34 > v9 )
      v34 = 0x10000LL;
    if ( v15 == 1 && v34 < v33 )
      v34 = v18 << 16;
    if ( v34 < a5 )
      v34 = a5;
    v35 = v34 < v9;
  }
  if ( !v35 || v9 - v34 + 1 < a2 )
    return 3221225495LL;
  v36 = &Process[1].Spare2[15];
  result = MiFindEmptyAddressRangeInTree((_QWORD **)&Process[1].Spare2[15], a2, v12, v10, v34, v9, a8);
  if ( (int)result < 0 )
  {
    v38 = v43 << 16;
    if ( v15 != 1 )
      v38 = 0x10000LL;
    if ( v38 < a5 )
      v38 = a5;
    if ( v38 < v34 )
      return MiFindEmptyAddressRangeInTree((_QWORD **)v36, a2, a3, v10, v38, v9, a8);
  }
  return result;
}
