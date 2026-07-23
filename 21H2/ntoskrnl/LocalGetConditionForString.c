/*
 * XREFs of LocalGetConditionForString @ 0x140928054
 * Callers:
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     iswspace @ 0x1403D29C0 (iswspace.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     GetOperatorIndexByToken @ 0x140669B7C (GetOperatorIndexByToken.c)
 *     AppendCondition @ 0x140926D94 (AppendCondition.c)
 *     FreeOperandValue @ 0x140927154 (FreeOperandValue.c)
 *     GetConditionToken @ 0x140927444 (GetConditionToken.c)
 *     GetOperandValue @ 0x140927664 (GetOperandValue.c)
 *     IsValueSizeFixed @ 0x140928024 (IsValueSizeFixed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetConditionForString(wint_t *a1, __int64 a2, const void **a3, unsigned int *a4)
{
  unsigned int *v4; // r14
  const void **v5; // r15
  wint_t *v6; // r12
  int v7; // esi
  unsigned int OperandValue; // ebx
  unsigned int v9; // edi
  int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  size_t v15; // rcx
  unsigned __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rax
  char ConditionToken; // al
  unsigned int v20; // r10d
  char v21; // r15
  __int64 v22; // rax
  __int64 v23; // r14
  char v24; // r15
  char v25; // al
  int v26; // eax
  char v27; // r10
  int v28; // eax
  char v29; // r10
  __int64 v30; // r8
  char v31; // r11
  int v32; // eax
  char v33; // r10
  char v34; // r10
  __int64 v35; // r8
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rax
  char v39; // cl
  int v40; // eax
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // r8
  int OperatorIndexByToken; // eax
  __int64 v45; // r8
  int v46; // r9d
  char v47; // cl
  char v48; // cl
  char *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rdi
  char v52; // al
  char v54; // [rsp+50h] [rbp-B0h] BYREF
  char v55; // [rsp+51h] [rbp-AFh]
  char v56; // [rsp+52h] [rbp-AEh]
  const void **v57; // [rsp+58h] [rbp-A8h]
  char v58; // [rsp+60h] [rbp-A0h]
  unsigned int *v59; // [rsp+68h] [rbp-98h]
  unsigned int v60[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v61; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v63[33]; // [rsp+88h] [rbp-78h] BYREF

  v59 = a4;
  v57 = a3;
  v4 = a4;
  v63[0] = a2;
  v5 = a3;
  v55 = 0;
  v6 = a1;
  v61 = 0;
  v7 = 0;
  P = 0LL;
  OperandValue = 0;
  v58 = 0;
  v9 = 0;
  v56 = 0;
  v10 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a3 = 0LL;
  v11 = -1LL;
  *a4 = 0;
  do
    ++v11;
  while ( a1[v11] );
  if ( (unsigned int)v11 < 3 || *a1 != 40 )
  {
    OperandValue = 1336;
    goto LABEL_128;
  }
  v12 = v11 + 1;
  v13 = -1;
  if ( v12 )
    v13 = v12;
  *a4 = v13;
  if ( !v12 )
    goto LABEL_13;
  v14 = v13;
  v15 = 0xFFFFFFFFLL;
  v16 = 2 * v14;
  if ( v16 <= 0xFFFFFFFF )
    v15 = (unsigned int)v16;
  *a4 = v15;
  if ( v16 > 0xFFFFFFFF )
  {
LABEL_13:
    OperandValue = 534;
    goto LABEL_124;
  }
  v17 = SddlpAlloc(v15);
  *v5 = v17;
  if ( !v17 )
  {
    OperandValue = 8;
    goto LABEL_124;
  }
  *v17 = 2020897377;
  v60[0] = 4;
  while ( 1 )
  {
    if ( !*v6 )
      goto LABEL_110;
    if ( iswspace(*v6) )
    {
      v18 = 2LL;
      goto LABEL_108;
    }
    if ( v7 == 255 )
    {
      OperandValue = 1001;
      goto LABEL_124;
    }
    ConditionToken = GetConditionToken(v6, &v61);
    v20 = 0;
    v21 = ConditionToken;
    if ( !ConditionToken )
    {
      if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 || v10 == 3 )
        goto LABEL_116;
      if ( !v10 )
      {
        v10 = 5;
        if ( !v7 )
          goto LABEL_94;
        v43 = v7 - 1;
        if ( v7 - 1 < 0 )
          goto LABEL_94;
        while ( 1 )
        {
          v55 = *((_BYTE *)&v63[1] + v43);
          OperatorIndexByToken = GetOperatorIndexByToken(v55);
          if ( OperatorIndexByToken != -1 )
            break;
          --v46;
          v43 = v45 - 1;
          if ( v43 < 0 )
            goto LABEL_93;
        }
        v47 = *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8);
        if ( (unsigned __int8)(v47 + 119) > 3u
          && (unsigned __int8)(v47 + 112) > 3u
          && BYTE1((&Operators)[3 * OperatorIndexByToken + 1]) != (_BYTE)v20 )
        {
          v10 = 4;
        }
        if ( v47 == -121 || v47 == -115 )
          v56 = 1;
LABEL_93:
        if ( v46 < 0 )
LABEL_94:
          v10 = 4;
      }
      v9 = v10;
      OperandValue = GetOperandValue(v6, v10 == 4, v20, (__int64 *)&P, &v61, v20, v20, v20, v20);
      if ( OperandValue )
        goto LABEL_123;
      if ( v56 )
      {
        v56 = 0;
        v48 = *((_BYTE *)P + 1);
        if ( ((v48 + 7) & 0xFC) == 0 && v48 != -6 )
        {
LABEL_116:
          OperandValue = 1336;
          goto LABEL_123;
        }
      }
      v5 = v57;
      OperandValue = AppendCondition(v57, v4, v60, (char *)P + 1, 1u);
      if ( OperandValue )
        goto LABEL_124;
      if ( !IsValueSizeFixed(*((_BYTE *)P + 1)) )
      {
        OperandValue = AppendCondition(v5, v4, v60, v49 + 4, 4u);
        if ( OperandValue )
          goto LABEL_124;
        v49 = (char *)P;
      }
      v50 = *((_DWORD *)v49 + 1);
      if ( v50 )
      {
        OperandValue = AppendCondition(v5, v4, v60, *((const void **)v49 + 1), v50);
        if ( OperandValue )
          goto LABEL_124;
        v49 = (char *)P;
      }
      FreeOperandValue(v49);
      P = 0LL;
      v10 = 3;
      goto LABEL_107;
    }
    if ( ConditionToken == -2 )
    {
      if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 )
        goto LABEL_116;
      v22 = v7;
      v9 = 1;
      ++v7;
      *((_BYTE *)&v63[1] + v22) = v21;
      goto LABEL_76;
    }
    v23 = v7;
    if ( ConditionToken == -1 )
    {
      if ( !v7 || v9 == 3 || v9 == 1 )
        break;
      v24 = *((_BYTE *)v63 + v7 + 7);
      v58 = v24 == -2;
      while ( 1 )
      {
        v25 = *((_BYTE *)v63 + v23-- + 7);
        --v7;
        v55 = v25;
        v54 = v25;
        if ( v25 == -2 )
          break;
        OperandValue = AppendCondition(v57, v59, v60, &v54, 1u);
        if ( OperandValue )
          goto LABEL_118;
        if ( !v23 )
        {
          v55 = v54;
          if ( v54 != -2 )
            goto LABEL_117;
          break;
        }
      }
      if ( !v7 )
      {
        v6 += v61;
LABEL_110:
        v4 = v59;
        v51 = v7;
        if ( v7 )
        {
          v5 = v57;
          while ( 1 )
          {
            v52 = *((_BYTE *)v63 + v51-- + 7);
            v54 = v52;
            if ( v52 == -2 )
              break;
            OperandValue = AppendCondition(v5, v4, v60, &v54, 1u);
            if ( OperandValue )
              goto LABEL_124;
            if ( !v51 )
              goto LABEL_122;
          }
          OperandValue = 1336;
        }
LABEL_122:
        *v4 = v60[0];
        *(_QWORD *)v63[0] = v6;
        goto LABEL_123;
      }
      v26 = GetOperatorIndexByToken(*((_BYTE *)v63 + v7 + 7));
      if ( v26 != -1
        && v24 != -2
        && *((_BYTE *)&Operators + 24 * v26 + 19) != v27
        && *((_BYTE *)&Operators + 24 * v26 + 8) != 0xA2 )
      {
        break;
      }
      v9 = 2;
      goto LABEL_75;
    }
    v28 = GetOperatorIndexByToken(ConditionToken);
    v30 = 3LL * v28;
    v60[1] = *((_DWORD *)&Operators + 6 * v28 + 3);
    if ( *((_BYTE *)&Operators + 24 * v28 + 18) != v29 && v9 != 4 && (v9 != 2 || v58 == v29) )
      break;
    v31 = (char)(&Operators)[3 * v28 + 1];
    if ( v31 )
    {
      if ( v9 > 1 )
      {
        if ( v9 != 3 )
          break;
        v32 = GetOperatorIndexByToken(*((_BYTE *)v63 + v7 + 7));
        if ( *((_BYTE *)&Operators + 24 * v32 + 19) != v33 )
          break;
      }
    }
    v34 = *((_BYTE *)&Operators + 8 * v30 + 19);
    if ( !v34 && (v9 & 0xFFFFFFFC) == 0 && v9 != 2 )
      break;
    if ( (unsigned int)(v10 - 4) <= 1 )
      break;
    if ( v7 )
    {
      if ( v34 )
      {
        v35 = v7 - 1;
        if ( v7 - 1 >= 0 )
        {
          while ( (unsigned int)GetOperatorIndexByToken(*((_BYTE *)&v63[1] + v35)) == -1 )
          {
            v35 = v36 - 1;
            if ( v35 < 0 )
              goto LABEL_63;
          }
          v38 = 3LL * (int)GetOperatorIndexByToken(*((_BYTE *)&v63[1] + v37));
          if ( *((_BYTE *)&Operators + 8 * v38 + 19) )
          {
            if ( *((_BYTE *)&Operators + 8 * v38 + 8) != 0xA2 )
              break;
          }
        }
      }
    }
LABEL_63:
    if ( v31 || !v34 )
      v10 = 0;
    else
      v10 = 5;
    if ( v7 )
    {
      while ( 1 )
      {
        v39 = *((_BYTE *)v63 + v23 + 7);
        if ( v39 == -2 )
          break;
        v55 = *((_BYTE *)v63 + v23 + 7);
        v54 = v39;
        v40 = GetOperatorIndexByToken(v39);
        if ( v41 > *((_DWORD *)&Operators + 6 * v40 + 3) )
          break;
        --v7;
        --v23;
        OperandValue = AppendCondition(v57, v59, v60, &v54, 1u);
        if ( OperandValue )
          goto LABEL_118;
        v55 = v54;
        if ( !v23 )
          goto LABEL_74;
      }
      v42 = v7++;
      *((_BYTE *)&v63[1] + v42) = v21;
    }
LABEL_74:
    v9 = 3;
LABEL_75:
    v4 = v59;
LABEL_76:
    v5 = v57;
LABEL_107:
    v18 = 2LL * v61;
LABEL_108:
    v6 = (wint_t *)((char *)v6 + v18);
  }
LABEL_117:
  OperandValue = 1336;
LABEL_118:
  v4 = v59;
LABEL_123:
  v5 = v57;
LABEL_124:
  if ( P )
    FreeOperandValue(P);
  if ( *v4 == 4 || OperandValue )
  {
LABEL_128:
    if ( *v5 )
    {
      ExFreePoolWithTag((PVOID)*v5, 0);
      *v5 = 0LL;
      *v4 = 0;
    }
  }
  return OperandValue;
}
