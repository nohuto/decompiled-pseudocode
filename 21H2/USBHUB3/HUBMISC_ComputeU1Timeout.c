/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x1C002DCD0
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C0022BD0 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // r8d
  char v4; // cl
  unsigned __int8 v5; // r8
  unsigned __int16 v6; // r15
  _QWORD *v7; // r14
  bool v8; // zf
  __int64 v9; // rsi
  __int64 i; // r9
  unsigned int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // r10
  _QWORD *v14; // rax
  char v15; // bp
  bool v16; // zf
  unsigned int v17; // edi
  unsigned int v18; // ebx
  __int64 v19; // r11
  __int64 v20; // r10
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r9
  _QWORD *v23; // rax
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
  v8 = v7 == (_QWORD *)*v7;
  v9 = *v7 - 8LL;
  for ( i = v9; ; i = (__int64)(v14 - 1) )
  {
    if ( v8 )
    {
      v15 = 0;
      v16 = v7 == (_QWORD *)*v7;
      goto LABEL_23;
    }
    v11 = *(_DWORD *)(i + 24);
    v12 = 0;
    if ( v11 )
      break;
LABEL_20:
    v14 = *(_QWORD **)(i + 8);
    v8 = v7 == v14;
  }
  v13 = i + 72;
  while ( (*(_BYTE *)(*(_QWORD *)v13 + 3LL) & 3) == 0 )
  {
    ++v12;
    v13 += 72LL;
    if ( v12 >= v11 )
      goto LABEL_20;
  }
  v15 = 1;
  do
  {
    v17 = *(_DWORD *)(v9 + 24);
    v18 = 0;
    if ( v17 )
    {
      v19 = v9 + 72;
      do
      {
        v20 = *(_QWORD *)v19;
        if ( *(char *)(*(_QWORD *)v19 + 2LL) >= 0 )
          v21 = *(_WORD *)(a1 + 2202);
        else
          v21 = *(unsigned __int8 *)(a1 + 2196);
        if ( (*(_BYTE *)(v20 + 3) & 3) != 0 )
        {
          if ( (*(_BYTE *)(v20 + 3) & 3) == 1 )
          {
            if ( v21 > 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6) )
              goto LABEL_45;
            v22 = 1;
            goto LABEL_38;
          }
          if ( (*(_BYTE *)(v20 + 3) & 3u) - 2 < 2 )
          {
LABEL_37:
            v22 = 5 * v21;
            goto LABEL_38;
          }
          v22 = 0;
        }
        else
        {
          if ( !v15 )
            goto LABEL_37;
          v22 = 5;
        }
LABEL_38:
        if ( v6 > v22 )
          v22 = v6;
        ++v18;
        v19 += 72LL;
        v6 = v22;
      }
      while ( v18 < v17 );
    }
    v23 = *(_QWORD **)(v9 + 8);
    v16 = v7 == v23;
    v9 = (__int64)(v23 - 1);
LABEL_23:
    ;
  }
  while ( !v16 );
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
