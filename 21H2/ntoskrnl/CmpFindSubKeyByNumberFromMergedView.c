/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x1408705A8
 * Callers:
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1406DE0FC (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406E2D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpCompareKeysByName @ 0x140875EB4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        ULONG_PTR *a8,
        _DWORD *a9)
{
  unsigned int v9; // r12d
  int v10; // r14d
  unsigned int v11; // edi
  char v12; // r13
  unsigned int v13; // ebx
  ULONG_PTR v14; // rsi
  ULONG_PTR v15; // r15
  __int64 v16; // r12
  int SubKeyByNumber; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r14d
  __int64 v23; // rcx
  int v24; // r14d
  unsigned int v25; // eax
  bool v26; // zf
  __int64 v27; // r14
  unsigned int v28; // eax
  char v29; // al
  int v30; // eax
  bool v31; // sf
  bool v32; // cc
  unsigned int v34; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v35; // [rsp+60h] [rbp-49h]
  BOOL v36; // [rsp+64h] [rbp-45h]
  int v37; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-3Dh]
  unsigned int v39; // [rsp+70h] [rbp-39h]
  __int64 v40; // [rsp+78h] [rbp-31h]
  __int64 v41; // [rsp+80h] [rbp-29h]
  ULONG_PTR v42; // [rsp+88h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v44[2]; // [rsp+98h] [rbp-11h] BYREF
  _DWORD v45[18]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int v48; // [rsp+108h] [rbp+5Fh]

  v48 = a3;
  v45[0] = -1;
  v44[0] = -1;
  v45[1] = 0;
  v9 = -1;
  v44[1] = 0;
  v10 = -1;
  v11 = -1073741670;
  v38 = 0;
  v39 = 0;
  v12 = 0;
  v13 = 0;
  v40 = 0LL;
  *a6 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v37 = -1;
  v34 = -1;
  LOBYTE(v35) = 0;
  *a7 = -1;
  v42 = 0LL;
  BugCheckParameter2 = 0LL;
  v36 = a2 == 0;
LABEL_2:
  v41 = 0LL;
  while ( 1 )
  {
    if ( v12 && v13 >= (unsigned int)a3 )
    {
LABEL_64:
      v11 = -2147483622;
LABEL_68:
      v16 = a1;
LABEL_69:
      v27 = a2;
      goto LABEL_70;
    }
    if ( v14 )
    {
      CmpDelayDerefKeyControlBlock(v14, a5);
      v14 = 0LL;
      v42 = 0LL;
    }
    if ( v15 )
    {
      CmpDelayDerefKeyControlBlock(v15, a5);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    if ( !(_BYTE)v35 && v9 == -1 )
    {
      v16 = a1;
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(a1 + 32),
                         *(unsigned int *)(a1 + 40),
                         v38,
                         &v37,
                         a1 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         a5,
                         (ULONG_PTR *)((unsigned __int64)&v42 & -(__int64)(a4 != 0)));
      v14 = v42;
      v11 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_69;
      v9 = v37;
      v18 = (unsigned __int8)v35;
      if ( v37 == -1 )
        v18 = 1;
      v35 = v18;
    }
    LOBYTE(v19) = v36;
    if ( v36 || v10 != -1 )
    {
      v21 = v34;
    }
    else
    {
      v20 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 32),
              *(unsigned int *)(a2 + 40),
              v39,
              &v34,
              a2 & -(__int64)(a4 != 0),
              a1 & -(__int64)(a4 != 0),
              a4,
              a5,
              (ULONG_PTR *)((unsigned __int64)&BugCheckParameter2 & -(__int64)(a4 != 0)));
      v15 = BugCheckParameter2;
      v11 = v20;
      if ( v20 < 0 )
        goto LABEL_68;
      v21 = v34;
      v19 = v36;
      if ( v34 == -1 )
        v19 = 1;
      v36 = v19;
    }
    if ( (_BYTE)v35 )
    {
      if ( (_BYTE)v19 )
        goto LABEL_64;
      v22 = 2;
    }
    else
    {
      v22 = (_BYTE)v19 != 0;
    }
    if ( (_DWORD)v21 != -1 )
    {
      v41 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, _QWORD))(*(_QWORD *)(a2 + 32) + 8LL))(
              *(_QWORD *)(a2 + 32),
              v21,
              v44,
              0LL);
      if ( !v41 )
        goto LABEL_68;
    }
    if ( v9 == -1 )
    {
      v23 = v40;
    }
    else
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)(a1 + 32) + 8LL))(
              *(_QWORD *)(a1 + 32),
              v9,
              v45,
              0LL);
      v23 = v40;
      if ( !v40 )
        goto LABEL_68;
    }
    if ( !v22 )
      break;
    v24 = v22 - 1;
    if ( !v24 )
    {
      v26 = v12 == 0;
      v28 = v13 + 1;
      v12 = 1;
      if ( v26 )
        v28 = v13;
      v13 = v28;
      if ( v28 == v48 )
        goto LABEL_65;
      v29 = 0;
      goto LABEL_55;
    }
    if ( v24 == 1 )
    {
      v25 = v13 + 1;
      goto LABEL_36;
    }
    v10 = v34;
LABEL_60:
    if ( v23 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD))(*(_QWORD *)(a1 + 32) + 16LL))(
        *(_QWORD *)(a1 + 32),
        v45,
        a3,
        0LL);
      v40 = 0LL;
    }
    a3 = v48;
    if ( v41 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 16LL))(
        *(_QWORD *)(a2 + 32),
        v44,
        v48,
        0LL);
      a3 = v48;
      goto LABEL_2;
    }
  }
  v30 = CmpCompareKeysByName(v23, v41);
  v31 = v30 < 0;
  v32 = v30 <= 0;
  v25 = v13 + 1;
  if ( v31 )
  {
    v26 = v12 == 0;
    v12 = 1;
    if ( v26 )
      v25 = v13;
    v13 = v25;
    if ( v25 == v48 )
      goto LABEL_65;
    v29 = 0;
    goto LABEL_55;
  }
  if ( v32 )
  {
    if ( !v12 )
      v25 = v13;
    v13 = v25;
    v29 = 1;
    v12 = 1;
    if ( v13 == v48 )
    {
LABEL_65:
      *a6 = *(_QWORD *)(a1 + 32);
      *a7 = v9;
      if ( a8 )
      {
        *a8 = v14;
        v14 = 0LL;
      }
      v11 = 0;
      goto LABEL_68;
    }
LABEL_55:
    v9 = -1;
    v12 = 1;
    ++v38;
    v37 = -1;
    if ( !v29 )
    {
      v10 = v34;
      goto LABEL_59;
    }
LABEL_56:
    v10 = -1;
    v12 = 1;
    ++v39;
    v34 = -1;
LABEL_59:
    v23 = v40;
    goto LABEL_60;
  }
LABEL_36:
  v26 = v12 == 0;
  v12 = 1;
  if ( v26 )
    v25 = v13;
  v13 = v25;
  if ( v25 != v48 )
    goto LABEL_56;
  v27 = a2;
  *a6 = *(_QWORD *)(a2 + 32);
  *a7 = v34;
  if ( a8 )
  {
    *a8 = v15;
    v15 = 0LL;
  }
  v16 = a1;
  v11 = 0;
LABEL_70:
  if ( v14 )
    CmpDelayDerefKeyControlBlock(v14, a5);
  if ( v15 )
    CmpDelayDerefKeyControlBlock(v15, a5);
  if ( v41 )
    (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD))(*(_QWORD *)(v27 + 32) + 16LL))(
      *(_QWORD *)(v27 + 32),
      v44,
      a3,
      0LL);
  if ( v40 )
    (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD))(*(_QWORD *)(v16 + 32) + 16LL))(
      *(_QWORD *)(v16 + 32),
      v45,
      a3,
      0LL);
  *a9 = v12 != 0 ? v13 + 1 : 0;
  return v11;
}
