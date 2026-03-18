/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x1C002D644
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C0022780 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // r8d
  char v4; // cl
  unsigned __int8 v5; // r8
  unsigned __int16 v6; // r14
  _QWORD *v7; // rsi
  char v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r9
  unsigned int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // r10
  _QWORD *v14; // rax
  bool v15; // zf
  unsigned int v16; // edi
  unsigned int v17; // ebx
  __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // r9
  _QWORD *v22; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 1644) & 0x80u) != 0
    || (v2 = *(_DWORD **)a1, (v2[10] & 0x8000) != 0)
    || (v3 = *(_DWORD *)(a1 + 2216), (v3 & 0x140) != 0)
    || (v2[11] & 8) != 0
    || (v2[624] & 8) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x400) != 0 )
  {
LABEL_45:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2216), 0xFFFFFFEF);
    goto LABEL_46;
  }
  v4 = *(_BYTE *)(a1 + 2220);
  *(_DWORD *)(a1 + 2216) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(16 * v4)) & 0x10;
  if ( (v4 & 4) == 0 )
  {
LABEL_46:
    v5 = 0;
    goto LABEL_47;
  }
  if ( (v4 & 0x10) == 0 )
  {
    v5 = -1;
    goto LABEL_47;
  }
  if ( v4 < 0 )
  {
    v5 = 1;
    goto LABEL_47;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v5 = 127;
    goto LABEL_47;
  }
  v6 = 0;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  v8 = 0;
  v9 = *v7 - 8LL;
  v10 = v9;
  if ( v7 != (_QWORD *)*v7 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 24);
      v12 = 0;
      if ( v11 )
        break;
LABEL_19:
      v14 = *(_QWORD **)(v10 + 8);
      v10 = (__int64)(v14 - 1);
      if ( v7 == v14 )
        goto LABEL_22;
    }
    v13 = v10 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v13 + 3LL) & 3) == 0 )
    {
      ++v12;
      v13 += 72LL;
      if ( v12 >= v11 )
        goto LABEL_19;
    }
    v8 = 1;
LABEL_22:
    v15 = v7 == (_QWORD *)*v7;
    while ( 1 )
    {
      if ( v15 )
        goto LABEL_42;
      v16 = *(_DWORD *)(v9 + 24);
      v17 = 0;
      if ( v16 )
        break;
LABEL_41:
      v22 = *(_QWORD **)(v9 + 8);
      v15 = v7 == v22;
      v9 = (__int64)(v22 - 1);
    }
    v18 = v9 + 72;
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      if ( *(char *)(*(_QWORD *)v18 + 2LL) >= 0 )
        v20 = *(_WORD *)(a1 + 2202);
      else
        v20 = *(unsigned __int8 *)(a1 + 2196);
      if ( (*(_BYTE *)(v19 + 3) & 3) != 0 )
      {
        if ( (*(_BYTE *)(v19 + 3) & 3) == 1 )
        {
          if ( v20 > 125 * (unsigned int)*(unsigned __int8 *)(v19 + 6) )
            goto LABEL_45;
          v21 = 1;
          goto LABEL_38;
        }
        if ( (*(_BYTE *)(v19 + 3) & 3u) - 2 < 2 )
        {
LABEL_37:
          v21 = 5 * v20;
          goto LABEL_38;
        }
        v21 = 0;
      }
      else
      {
        if ( !v8 )
          goto LABEL_37;
        v21 = 5;
      }
LABEL_38:
      if ( v6 > v21 )
        v21 = v6;
      ++v17;
      v18 += 72LL;
      v6 = v21;
      if ( v17 >= v16 )
        goto LABEL_41;
    }
  }
LABEL_42:
  v5 = 127;
  if ( (unsigned __int8)v6 < 0x7Fu )
    v5 = v6;
LABEL_47:
  result = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x10000000) != 0 )
  {
    result = *(unsigned int *)(a1 + 1632);
    if ( (result & 2) != 0 )
    {
      result = v5;
      if ( v5 )
        result = 255LL;
      v5 = result;
    }
  }
  *(_BYTE *)(a1 + 2214) = v5;
  return result;
}
