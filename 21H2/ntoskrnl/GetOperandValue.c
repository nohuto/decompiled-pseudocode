/*
 * XREFs of GetOperandValue @ 0x140927664
 * Callers:
 *     GetOperandValue @ 0x140927664 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140928054 (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     wcstoxq @ 0x1403D483C (wcstoxq.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x140788000 (LocalGetSidForString.c)
 *     SddlpReAlloc @ 0x140926B4C (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x140927154 (FreeOperandValue.c)
 *     GetAttributeName @ 0x140927190 (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x1409273E8 (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x1409274D4 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x1409275E8 (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x140927664 (GetOperandValue.c)
 *     GetStringOperandValue @ 0x140927DD0 (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x140928024 (IsValueSizeFixed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall GetOperandValue(
        wchar_t *a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        char a6,
        unsigned int a7,
        int a8,
        char a9)
{
  unsigned int *v9; // r15
  unsigned int AttributeName; // esi
  char v14; // r13
  PVOID v15; // rax
  PSID v16; // rbx
  __int64 v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // r9
  __int64 v23; // rsi
  char v24; // r12
  void *v25; // r8
  unsigned int v26; // edx
  unsigned int v27; // r10d
  unsigned int v28; // eax
  unsigned int v29; // r14d
  void *v30; // rax
  __int64 v31; // r8
  bool v32; // zf
  char v33; // r14
  __int64 v34; // r14
  __int64 v35; // rdi
  PSID v36; // rcx
  unsigned int v37; // r13d
  __int64 v38; // rax
  __int64 v39; // r14
  PVOID v40; // rax
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  wint_t *v47; // rdx
  unsigned __int64 v48; // r13
  wchar_t v49; // ax
  unsigned __int64 v50; // rax
  __int16 v51; // r15
  wint_t *v52; // rbx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  PVOID v56; // [rsp+58h] [rbp-28h] BYREF
  PSID Sid; // [rsp+60h] [rbp-20h] BYREF
  wint_t *v58; // [rsp+68h] [rbp-18h] BYREF
  __int64 v59; // [rsp+70h] [rbp-10h] BYREF
  char v61; // [rsp+D8h] [rbp+58h] BYREF

  v9 = a5;
  a7 = 0;
  a6 = 0;
  v61 = 0;
  v58 = 0LL;
  AttributeName = 0;
  Sid = 0LL;
  v14 = 0;
  a9 = 0;
  v56 = 0LL;
  v59 = 0LL;
  a8 = 0;
  *a5 = 0;
  v15 = SddlpAlloc(0x10uLL);
  *a4 = (__int64)v15;
  if ( !v15 )
    goto LABEL_2;
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, a4, v9);
LABEL_80:
    if ( AttributeName )
      goto LABEL_81;
    goto LABEL_7;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, a4, v9);
    if ( !AttributeName )
      goto LABEL_7;
    goto LABEL_80;
  }
  if ( *a1 == 123 )
  {
    v18 = *a4;
    a7 = 1;
    *(_BYTE *)(v18 + 1) = 80;
    if ( a1[1] )
    {
      while ( 1 )
      {
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
        if ( AttributeName )
          goto LABEL_81;
        v19 = &a1[a7];
        if ( *v19 == 123 )
          goto LABEL_37;
        AttributeName = GetOperandValue((_DWORD)v19, 0, 0, (unsigned int)&v56, (__int64)v9, 0, 0, 0, 0);
        if ( AttributeName )
          goto LABEL_81;
        if ( a3 )
        {
          if ( v14 && v14 != *((_BYTE *)v56 + 1) )
            goto LABEL_37;
          v14 = *((_BYTE *)v56 + 1);
        }
        LOBYTE(v20) = *((_BYTE *)v56 + 1);
        v21 = IsValueSizeFixed(v20);
        v23 = *a4;
        v24 = v21;
        v25 = *(void **)(*a4 + 8);
        v26 = v21 != 0 ? 1 : 5;
        if ( v25 )
        {
          v27 = *(_DWORD *)(v23 + 4);
          v28 = v27 + *(_DWORD *)(v22 + 4);
          if ( v28 < v27 || (v29 = v26 + v28, v26 + v28 < v28) )
          {
LABEL_38:
            AttributeName = 534;
            goto LABEL_81;
          }
          v30 = SddlpReAlloc(v27, v29, v25);
          *(_QWORD *)(v23 + 8) = v30;
          if ( !v30 )
            goto LABEL_2;
        }
        else
        {
          v29 = v26 + *(_DWORD *)(v22 + 4);
          if ( v29 < v26 )
            goto LABEL_38;
          *(_QWORD *)(v23 + 8) = SddlpAlloc(v29);
        }
        v31 = *(_QWORD *)(v23 + 8);
        if ( !v31 )
          goto LABEL_2;
        *(_BYTE *)(*(unsigned int *)(v23 + 4) + v31) = *((_BYTE *)v56 + 1);
        if ( !v24 )
          *(_DWORD *)(*(unsigned int *)(v23 + 4) + *(_QWORD *)(v23 + 8) + 1LL) = *((_DWORD *)v56 + 1);
        memmove(
          (void *)(*(_QWORD *)(v23 + 8) + *(unsigned int *)(v23 + 4)
                                        + (-(__int64)(v24 != 0) & 0xFFFFFFFFFFFFFFFCuLL)
                                        + 5),
          *((const void **)v56 + 1),
          *((unsigned int *)v56 + 1));
        *(_DWORD *)(v23 + 4) = v29;
        FreeOperandValue(v56);
        v56 = 0LL;
        a7 += *v9;
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
        if ( AttributeName )
          goto LABEL_81;
        if ( a1[a7] != 44 )
        {
          v32 = a1[a7] == 125;
          v16 = 0LL;
          if ( !v32 )
            goto LABEL_41;
          *v9 = a7 + 1;
          goto LABEL_8;
        }
        if ( !a1[++a7] )
          goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  v33 = 3;
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    a7 = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
    if ( AttributeName )
      goto LABEL_81;
    if ( a1[a7] == 40 )
    {
      v34 = a7 + 1;
      AttributeName = LocalGetSidForString(&a1[v34], &Sid, &v59, &a9);
      if ( AttributeName
        || (a7 = v34 + ((v59 - 2 * v34 - (__int64)a1) >> 1),
            (AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7)) != 0) )
      {
        v16 = Sid;
      }
      else
      {
        v32 = a1[a7] == 41;
        v16 = Sid;
        if ( v32 )
        {
          v35 = *a4;
          v36 = Sid;
          *v9 = a7 + 1;
          *(_BYTE *)(v35 + 1) = 81;
          *(_DWORD *)(v35 + 4) = RtlLengthSid(v36);
          v32 = a9 == 0;
          *(_QWORD *)(v35 + 8) = v16;
          v16 = 0LL;
          *(_BYTE *)v35 = v32;
          goto LABEL_8;
        }
LABEL_41:
        AttributeName = 1336;
      }
      goto LABEL_82;
    }
    goto LABEL_37;
  }
  GetBinaryOperandLen(a1, &a7);
  if ( *a1 == 35 )
  {
    v37 = a7;
    if ( a7 >= 2 )
    {
      v38 = *a4;
      LODWORD(v39) = a7 >> 1;
      *v9 = a7;
      *(_BYTE *)(v38 + 1) = 24;
      *(_DWORD *)(v38 + 4) = v39;
      v40 = SddlpAlloc((unsigned int)v39);
      *(_QWORD *)(*a4 + 8) = v40;
      if ( !v40 )
      {
LABEL_2:
        AttributeName = 8;
LABEL_81:
        v16 = 0LL;
        goto LABEL_82;
      }
      v41 = (int)(v37 - 1);
      while ( v41 >= 1 )
      {
        if ( !GetDigitFromChar(a1[v41], &a6) || !GetDigitFromChar(a1[v42 - 1], &v61) )
          goto LABEL_2;
        v39 = (unsigned int)(v39 - 1);
        v41 = v43 - 2;
        *(_BYTE *)(v39 + *(_QWORD *)(v44 + 8)) = a6 | (16 * v61);
      }
LABEL_7:
      v16 = 0LL;
      goto LABEL_8;
    }
LABEL_37:
    AttributeName = 1336;
    goto LABEL_81;
  }
  v45 = a7;
  if ( !a7 )
    goto LABEL_37;
  *v9 = a7;
  v46 = wcstoxq(0LL, a1, &v58, 0, 1, &a8);
  v47 = v58;
  v48 = v46;
  if ( v58 == a1 && !v46 )
    goto LABEL_37;
  if ( v58 != &a1[v45] || a8 )
    goto LABEL_37;
  v49 = *a1;
  if ( *a1 == 45 )
  {
    v50 = wcstoxq(0LL, ++a1, &v58, 0, 1, &a8);
    if ( v50 >= v48 && v50 )
      goto LABEL_37;
    v49 = *a1;
    v51 = 2;
    v47 = v58;
  }
  else if ( v49 == 43 )
  {
    ++a1;
    v51 = 1;
    v49 = *a1;
  }
  else
  {
    v51 = 3;
  }
  if ( v49 == 48 )
  {
    v52 = a1 + 1;
    if ( v52 >= v47 || ((*v52 - 88) & 0xFFDF) != 0 )
      v33 = 1;
  }
  else
  {
    v33 = 2;
  }
  v53 = *a4;
  *(_BYTE *)(v53 + 1) = 4;
  *(_DWORD *)(v53 + 4) = 10;
  v54 = SddlpAlloc(0xAuLL);
  v55 = *a4;
  v16 = 0LL;
  *(_QWORD *)(*a4 + 8) = v54;
  if ( v54 )
  {
    *v54 = v48;
    *(_WORD *)(*(_QWORD *)(v55 + 8) + 8LL) = v51;
    *(_BYTE *)(*(_QWORD *)(v55 + 8) + 9LL) = v33;
    goto LABEL_8;
  }
  AttributeName = 8;
LABEL_82:
  FreeOperandValue((_QWORD *)*a4);
  *a4 = 0LL;
LABEL_8:
  if ( v56 )
    FreeOperandValue(v56);
  if ( v16 && a9 )
    ExFreePoolWithTag(v16, 0);
  return AttributeName;
}
