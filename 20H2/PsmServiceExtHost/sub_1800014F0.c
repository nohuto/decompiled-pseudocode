/*
 * XREFs of sub_1800014F0 @ 0x1800014F0
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 * Callees:
 *     sub_180001608 @ 0x180001608 (sub_180001608.c)
 *     sub_180001664 @ 0x180001664 (sub_180001664.c)
 *     sub_1800084E8 @ 0x1800084E8 (sub_1800084E8.c)
 *     sub_180008518 @ 0x180008518 (sub_180008518.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180076720 @ 0x180076720 (sub_180076720.c)
 */

__int64 __fastcall sub_1800014F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  struct _TP_TIMER *v6; // rcx
  int v7; // edi
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int v13; // ecx
  char v14; // al
  __int64 v15; // [rsp+60h] [rbp+17h] BYREF
  __int64 v16; // [rsp+68h] [rbp+1Fh] BYREF
  _QWORD v17[6]; // [rsp+70h] [rbp+27h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp+67h] BYREF
  bool v19; // [rsp+B8h] [rbp+6Fh] BYREF
  bool v20; // [rsp+C0h] [rbp+77h] BYREF
  int v21; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = a1 + 104;
  sub_180008518(a1 + 104);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 2712) & 1) != 0 )
    {
      v7 = -1073741585;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(v2 + 64) & 1) != 0 )
    {
      RtlQueryUnbiasedInterruptTime(&v18);
      v12 = v18 / 0x2710;
      ++*(_QWORD *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = v12;
    }
    else
    {
      RtlQueryUnbiasedInterruptTime(&v18);
      v11 = v18 / 0x2710;
      *(_QWORD *)v2 = v18 / 0x2710;
      *(_QWORD *)(v2 + 8) = v11;
      v7 = sub_180001608(a2);
      if ( v7 < 0 )
        goto LABEL_6;
      *(_DWORD *)(v2 + 64) |= 2u;
      *(_QWORD *)(v2 + 16) = 1LL;
      sub_180001664(v2);
    }
  }
  else
  {
    v5 = *(_QWORD *)(v2 + 16);
    if ( v5 == 1 && (*(_BYTE *)(v2 + 64) & 2) != 0 )
    {
      sub_180001608(0LL);
      v6 = *(struct _TP_TIMER **)(v2 + 24);
      *(_DWORD *)(v2 + 64) &= ~2u;
      *(_QWORD *)(v2 + 16) = 0LL;
      SetThreadpoolTimer(v6, 0LL, 0, 0);
      *(_DWORD *)(v2 + 64) &= ~1u;
    }
    else
    {
      *(_QWORD *)(v2 + 16) = v5 - 1;
    }
  }
  v7 = 0;
LABEL_6:
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
  {
    v13 = *(_DWORD *)(v2 + 64);
    v14 = v13;
    v21 = v7;
    LOBYTE(v13) = v13 & 1;
    LOBYTE(v18) = v13;
    v19 = (v14 & 2) != 0;
    v15 = *(_QWORD *)(v2 + 16);
    v20 = a2 != 0;
    v16 = *(_QWORD *)(v2 + 8);
    v17[0] = *(_QWORD *)v2;
    sub_180076720(
      v13,
      (unsigned int)&unk_18009E7E1,
      v8,
      v9,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v19);
  }
  sub_1800084E8(v2);
  return (unsigned int)v7;
}
