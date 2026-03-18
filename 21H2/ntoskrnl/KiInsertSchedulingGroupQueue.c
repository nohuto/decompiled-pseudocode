/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x140210AD0
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x140210A70 (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x140210D6C (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // r11d
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // r10d
  int v15; // eax

  v3 = *(_QWORD *)(a2 + 408);
  v4 = a1 + 32560;
  *(_BYTE *)(a2 + 112) |= 1u;
  v6 = a3;
  v7 = v3 + 392;
  if ( !v3 )
    v7 = v4;
  v8 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v8 )
    v8 ^= v7;
  LOBYTE(a3) = 0;
  if ( v8 )
  {
    v9 = *(_DWORD *)(a2 + 116);
    while ( 1 )
    {
      v10 = v9 - *(_DWORD *)(v8 + 28);
      if ( v9 != *(_DWORD *)(v8 + 28) )
        goto LABEL_19;
      v11 = *(unsigned __int16 *)(a2 + 114);
      if ( (_WORD)v11 )
        break;
      if ( v9 || *(_QWORD *)a2 > *(_QWORD *)(v8 - 88) )
      {
LABEL_10:
        v12 = *(_QWORD *)(v8 + 8);
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_14;
          v12 ^= v8;
        }
        if ( !v12 )
        {
LABEL_14:
          LOBYTE(a3) = 1;
          goto LABEL_15;
        }
        goto LABEL_24;
      }
LABEL_20:
      v12 = *(_QWORD *)v8;
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_29;
        v12 ^= v8;
      }
      if ( !v12 )
      {
LABEL_29:
        LOBYTE(a3) = 0;
        goto LABEL_15;
      }
LABEL_24:
      v8 = v12;
    }
    a3 = *(unsigned __int16 *)(v8 + 26);
    _BitScanReverse((unsigned int *)&v14, v11);
    v15 = 0;
    if ( (_WORD)a3 )
      _BitScanReverse((unsigned int *)&v15, a3);
    v10 = v15 - v14;
LABEL_19:
    if ( v10 >= 0 )
      goto LABEL_10;
    goto LABEL_20;
  }
LABEL_15:
  result = RtlRbInsertNodeEx(v7, v8, a3, a2 + 88);
  if ( v6 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
