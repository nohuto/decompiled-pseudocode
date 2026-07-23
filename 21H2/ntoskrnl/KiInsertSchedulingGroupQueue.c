/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x14029D14C
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x14029D0EC (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x14029D27C (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  BOOLEAN v9; // r8
  int v10; // r11d
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  BOOLEAN result; // al
  unsigned int v15; // r8d
  int v16; // r10d
  int v17; // eax

  v3 = *(_QWORD *)(a2 + 408);
  v4 = a1 + 31856;
  *(_BYTE *)(a2 + 112) |= 1u;
  v7 = v3 + 392;
  if ( !v3 )
    v7 = v4;
  v8 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v8 )
    v8 ^= v7;
  v9 = 0;
  if ( v8 )
  {
    v10 = *(_DWORD *)(a2 + 116);
    while ( 1 )
    {
      v11 = v10 - *(_DWORD *)(v8 + 28);
      if ( v10 != *(_DWORD *)(v8 + 28) )
        goto LABEL_11;
      v12 = *(unsigned __int16 *)(a2 + 114);
      if ( (_WORD)v12 )
        break;
      if ( v10 )
      {
        v11 = 1;
        goto LABEL_11;
      }
      if ( *(_QWORD *)a2 <= *(_QWORD *)(v8 - 88) )
      {
LABEL_17:
        v13 = *(_QWORD *)v8;
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_21;
          v13 ^= v8;
        }
        if ( !v13 )
        {
LABEL_21:
          v9 = 0;
          goto LABEL_22;
        }
        goto LABEL_16;
      }
LABEL_12:
      v13 = *(_QWORD *)(v8 + 8);
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_31;
        v13 ^= v8;
      }
      if ( !v13 )
      {
LABEL_31:
        v9 = 1;
        goto LABEL_22;
      }
LABEL_16:
      v8 = v13;
    }
    v15 = *(unsigned __int16 *)(v8 + 26);
    _BitScanReverse((unsigned int *)&v16, v12);
    v17 = 0;
    if ( (_WORD)v15 )
      _BitScanReverse((unsigned int *)&v17, v15);
    v11 = v17 - v16;
LABEL_11:
    if ( v11 < 0 )
      goto LABEL_17;
    goto LABEL_12;
  }
LABEL_22:
  result = RtlRbInsertNodeEx((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v8, v9, (PRTL_BALANCED_NODE)(a2 + 88));
  if ( a3 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
