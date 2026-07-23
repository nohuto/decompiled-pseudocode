/*
 * XREFs of LocalpGetStringForCondition @ 0x140668028
 * Callers:
 *     LocalGetAceCondition @ 0x140669250 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     memset @ 0x140414300 (memset.c)
 *     ULongAddStringSize @ 0x1406683F8 (ULongAddStringSize.c)
 *     EncloseSubCondition @ 0x140668450 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14066849C (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x1406685F0 (GetPrintableAttributeName.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     GetOperatorIndexByToken @ 0x140669B7C (GetOperatorIndexByToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        PVOID *a1,
        unsigned int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int v9; // r12d
  PVOID *v10; // rsi
  unsigned int v11; // ebx
  PVOID *v12; // rcx
  __int64 v13; // rdx
  int v14; // r13d
  __int64 v15; // r15
  __int64 v16; // r14
  int v17; // r8d
  unsigned __int8 *v18; // rsi
  unsigned __int8 v19; // di
  bool v20; // zf
  int OperatorIndexByToken; // eax
  unsigned int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  PVOID v28; // rdi
  PVOID v29; // r15
  size_t v30; // r12
  wchar_t *v31; // rsi
  __int64 v32; // rax
  int v33; // edx
  unsigned int PrintableAttributeName; // eax
  unsigned int PrintableOperandValue; // eax
  _QWORD *v36; // rdi
  PVOID v37; // rcx
  bool v39; // zf
  wchar_t *v40; // r15
  size_t v41; // r12
  NTSTATUS v42; // eax
  __int64 v43; // rdi
  char v44; // al
  __int64 v45; // rdi
  PVOID v46; // rcx
  wchar_t *v47; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+4Ch] [rbp-B4h]
  unsigned int v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  PVOID *v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  PVOID v56[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v57[256]; // [rsp+90h] [rbp-70h] BYREF

  v55 = a5;
  v9 = a2;
  v10 = a1;
  v54 = a6;
  v53 = a7;
  v56[0] = a3;
  v11 = 0;
  v50 = a2;
  v52 = a1;
  v47 = 0LL;
  memset(v57, 0, sizeof(v57));
  v13 = 0LL;
  v48 = 0;
  v14 = 0;
  if ( !v10 || !a3 || !v9 )
    return 87LL;
  if ( v9 < 6 || *(_DWORD *)v10 != 2020897377 )
    return 805LL;
  LODWORD(v15) = 4;
  v16 = 0LL;
  v49 = 4;
  while ( 1 )
  {
    v17 = 1336;
    if ( v16 == 255 )
    {
      v11 = 1001;
      goto LABEL_80;
    }
    v18 = (unsigned __int8 *)v10 + (unsigned int)v15;
    v19 = *v18;
    if ( *v18 > 0x51u )
    {
      if ( v19 < 0x80u )
        goto LABEL_55;
      if ( v19 > 0x93u )
      {
        if ( v19 <= 0x9Fu )
          goto LABEL_55;
        if ( v19 > 0xA3u )
        {
          if ( v19 <= 0xF7u || v19 > 0xFCu )
            goto LABEL_55;
          LOBYTE(v17) = *v18;
          PrintableAttributeName = GetPrintableAttributeName(
                                     (_DWORD)v18,
                                     v9 - (unsigned int)v15,
                                     v17,
                                     (unsigned int)&v47,
                                     (__int64)&v48);
          v13 = 0LL;
          v11 = PrintableAttributeName;
          if ( PrintableAttributeName )
            goto LABEL_52;
          v57[v16] = v47;
          goto LABEL_40;
        }
      }
      if ( (unsigned __int8)(v19 + 96) <= 1u )
      {
        if ( v16 < 2 )
          goto LABEL_55;
        v11 = EncloseSubCondition(&v57[v14 - 1]);
        if ( v11 )
          goto LABEL_80;
        v11 = EncloseSubCondition(&v57[v14 - 2]);
        v39 = v11 == 0;
      }
      else
      {
        if ( v19 != 0xA2 )
        {
LABEL_19:
          LOBYTE(v12) = *v18;
          OperatorIndexByToken = GetOperatorIndexByToken(v12, v13, 1336LL, &Operators);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_89;
          v24 = 3LL * OperatorIndexByToken;
          v25 = -1LL;
          v26 = *(_QWORD *)(v23 + 8 * v24);
          v51 = v24;
          do
            ++v25;
          while ( *(_WORD *)(v26 + 2 * v25) );
          v27 = 2 * v25;
          LODWORD(v47) = v27;
          if ( *(_BYTE *)(v23 + 8 * v24 + 16) )
          {
            if ( !v16 )
            {
LABEL_89:
              v11 = v22;
              goto LABEL_80;
            }
            v40 = (wchar_t *)v56[v16 + 1];
            if ( (int)ULongAddStringSize(v27, v40, &v47) < 0 )
              goto LABEL_88;
            v41 = (unsigned int)((_DWORD)v47 + 8);
            v31 = (wchar_t *)SddlpAlloc(v41);
            if ( !v31 )
            {
LABEL_79:
              v11 = 8;
              goto LABEL_80;
            }
            if ( v19 == 0xA2 )
            {
              v42 = RtlStringCchPrintfW(v31, v41 >> 1, L"(%ls%ls)", (&Operators)[v51], v40);
            }
            else
            {
              v43 = v51;
              v44 = *((_BYTE *)&Operators + 8 * v51 + 8);
              if ( (v44 == -121 || v44 == -115)
                && (!wcsnicmp(v40, L"@USER.", 6uLL)
                 || !wcsnicmp(v40, L"@DEVICE.", 8uLL)
                 || !wcsnicmp(v40, L"@TOKEN.", 7uLL)) )
              {
                v11 = 1336;
                goto LABEL_92;
              }
              v42 = RtlStringCchPrintfW(v31, v41 >> 1, L"(%ls %ls)", (&Operators)[v43], v40);
            }
            v33 = 0;
            if ( v42 < 0 )
              goto LABEL_91;
            if ( v40 )
            {
              ExFreePoolWithTag(v40, 0);
              v33 = 0;
            }
            v32 = 0LL;
            v12 = &v56[v16 + 1];
          }
          else
          {
            if ( v16 < 2 )
              goto LABEL_89;
            v28 = v56[v16 + 1];
            if ( (int)ULongAddStringSize(v27, v28, &v47) < 0
              || (v29 = v56[v16], (int)ULongAddStringSize((unsigned int)v47, v29, &v47) < 0) )
            {
LABEL_88:
              v11 = 534;
              goto LABEL_80;
            }
            v30 = (unsigned int)((_DWORD)v47 + 10);
            v31 = (wchar_t *)SddlpAlloc(v30);
            if ( !v31 )
              goto LABEL_79;
            if ( RtlStringCchPrintfW(v31, v30 >> 1, L"(%ls %ls %ls)", v29, (&Operators)[v51], v28) < 0 )
            {
LABEL_91:
              v11 = 50;
LABEL_92:
              if ( v31 )
                ExFreePoolWithTag(v31, 0);
              goto LABEL_80;
            }
            if ( v28 )
              ExFreePoolWithTag(v28, 0);
            if ( v29 )
              ExFreePoolWithTag(v29, 0);
            v32 = -1LL;
            v12 = &v56[v16];
            v33 = -1;
          }
          LODWORD(v15) = v49;
          v14 += v33;
          v9 = v50;
          v13 = 0LL;
          v16 += v32;
          *v12 = v31;
          v48 = 1;
          goto LABEL_41;
        }
        if ( v16 < 1 )
          goto LABEL_55;
        v11 = EncloseSubCondition(&v57[v14 - 1]);
        v39 = v11 == 0;
      }
      if ( !v39 )
        goto LABEL_80;
      goto LABEL_19;
    }
    if ( v19 >= 0x50u )
      goto LABEL_45;
    if ( v19 )
    {
      if ( v19 != 16 && v19 > 4u && v19 != 24 )
        goto LABEL_55;
LABEL_45:
      PrintableOperandValue = GetPrintableOperandValue(
                                (_DWORD)v18,
                                v9 - (unsigned int)v15,
                                (unsigned int)&v47,
                                (unsigned int)&v48,
                                v55,
                                v54,
                                v53,
                                a8);
      v13 = 0LL;
      v11 = PrintableOperandValue;
      if ( PrintableOperandValue )
      {
LABEL_52:
        v31 = v47;
        goto LABEL_92;
      }
      v12 = (PVOID *)v47;
      v57[v16] = v47;
LABEL_40:
      ++v14;
      ++v16;
LABEL_41:
      v47 = 0LL;
      goto LABEL_42;
    }
    v12 = v52;
    while ( 1 )
    {
      v15 = (unsigned int)(v15 + 1);
      v20 = (_DWORD)v15 == v9;
      if ( (unsigned int)v15 >= v9 )
        break;
      if ( *((_BYTE *)v52 + v15) )
      {
        v20 = (_DWORD)v15 == v9;
        break;
      }
    }
    if ( !v20 )
    {
LABEL_55:
      v11 = 1336;
      goto LABEL_80;
    }
LABEL_42:
    LODWORD(v15) = v48 + v15;
    v49 = v15;
    if ( (unsigned int)v15 >= v9 )
      break;
    v10 = v52;
  }
  if ( v14 == 1 )
  {
    v36 = v56[0];
    v37 = v56[0];
    *(_QWORD *)v56[0] = v57[0];
    v11 = EncloseSubCondition(v37);
    if ( !v11 )
      return v11;
    *v36 = 0LL;
    goto LABEL_81;
  }
LABEL_80:
  if ( !v14 )
    return v11;
LABEL_81:
  if ( !v11 )
    v11 = 1336;
  v45 = v14;
  do
  {
    v46 = v56[v45-- + 1];
    if ( v46 )
      ExFreePoolWithTag(v46, 0);
  }
  while ( v45 );
  return v11;
}
