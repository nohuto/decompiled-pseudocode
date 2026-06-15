/*
 * XREFs of sub_18000C210 @ 0x18000C210
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     sub_1800F26E0 @ 0x1800F26E0 (sub_1800F26E0.c)
 *     sub_1800F2970 @ 0x1800F2970 (sub_1800F2970.c)
 *     sub_1800F357C @ 0x1800F357C (sub_1800F357C.c)
 *     sub_1800F580C @ 0x1800F580C (sub_1800F580C.c)
 *     sub_180138DF4 @ 0x180138DF4 (sub_180138DF4.c)
 *     sub_1801398F0 @ 0x1801398F0 (sub_1801398F0.c)
 */

__int64 __fastcall sub_18000C210(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2,
        int a3,
        __int128 *a4,
        int a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 v8; // rdi
  int v9; // esi
  BOOL v10; // ebx
  void *v11; // r13
  int v12; // edi
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rsi
  int *v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  char *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rsi
  DWORD LastError; // ebx
  __int64 *i; // rsi
  int v29; // eax
  int v30; // eax
  LPCRITICAL_SECTION v31; // rbx
  __int128 v32; // xmm0
  DWORD v33; // ebx
  HANDLE ProcessHeap; // rax
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h]
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  void *v42; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v43; // [rsp+78h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-80h] BYREF
  char v45; // [rsp+88h] [rbp-78h]
  PROPVARIANT pvar[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall **v48)(); // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+C0h] [rbp-40h] BYREF
  char v51; // [rsp+252h] [rbp+152h] BYREF
  int v52; // [rsp+45Ch] [rbp+35Ch]
  __int128 v53; // [rsp+460h] [rbp+360h]
  int v54; // [rsp+470h] [rbp+370h]
  _QWORD v55[154]; // [rsp+480h] [rbp+380h] BYREF
  char v56; // [rsp+950h] [rbp+850h] BYREF
  _BYTE v57[528]; // [rsp+AF0h] [rbp+9F0h] BYREF

  v43 = a4;
  v37 = a3;
  lpCriticalSection = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  memset(v55, 0, sizeof(v55));
  v8 = *a7;
  if ( *a7 )
  {
    LastError = GetLastError();
    sub_1800ED08C(v8);
    SetLastError(LastError);
  }
  *a7 = 0LL;
  v41 = 0LL;
  v9 = 0;
  v36 = 0;
  v10 = 1;
  v42 = 0LL;
  v11 = 0LL;
  ppv = 0LL;
  v12 = 0;
  v39 = 0LL;
  v38 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v47 = 0LL;
  if ( (unsigned int)MMDevAPI_7(a2) )
  {
    v10 = 0;
  }
  else
  {
    v12 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(LPVOID, struct _RTL_CRITICAL_SECTION *, __int64 *))(*(_QWORD *)ppv + 40LL))(
              ppv,
              a2,
              &v39);
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 32LL))(v39, 0LL, &v38);
        if ( v12 >= 0
          && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v38 + 40LL))(v38, &unk_18015AF70, pvar) >= 0 )
        {
          v10 = LOWORD(pvar[0]) != 72;
        }
      }
    }
    PropVariantClear(pvar);
  }
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  LODWORD(v15) = (_DWORD)ppv;
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v12 < 0 )
    goto LABEL_67;
  if ( v10 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    v12 = sub_18000C5F0(v15, (_DWORD)a2, (unsigned int)&v56, v14, (__int64)v57);
    if ( v12 < 0 )
      goto LABEL_32;
    v49 = 1;
    v48 = off_180146580;
    v17 = &v50;
    v52 = v38;
    v18 = 201LL;
    v54 = a5;
    v53 = *v43;
    while ( v18 != -2147483445 )
    {
      v19 = *((_WORD *)v17 + 1096);
      if ( !v19 )
        break;
      *(_WORD *)v17 = v19;
      v17 = (int *)((char *)v17 + 2);
      if ( !--v18 )
      {
        v17 = (int *)((char *)v17 - 2);
        break;
      }
    }
    *(_WORD *)v17 = 0;
    v20 = &v51;
    v21 = 261LL;
    while ( 1 )
    {
      LODWORD(v15) = v21 + 2147483385;
      if ( v21 == -2147483385 )
        break;
      LODWORD(v15) = *((unsigned __int16 *)v20 + 1103);
      if ( !(_WORD)v15 )
        break;
      *(_WORD *)v20 = v15;
      v20 += 2;
      if ( !--v21 )
      {
        v20 -= 2;
        break;
      }
    }
    *(_WORD *)v20 = 0;
    v12 = 0;
    v14 = v49;
    v22 = v49;
    if ( v49 == 1 )
      v22 = (v52 << 16) | (4 * v54) | 1;
    v13 = *(_QWORD *)(v16 + 128);
    if ( v13 )
    {
      for ( i = *(__int64 **)(v13 + 8LL * (v22 % *(_DWORD *)(v16 + 144))); i; i = (__int64 *)i[2] )
      {
        if ( *((_DWORD *)i + 6) == v22 )
        {
          v15 = *i;
          v29 = *(_DWORD *)(*i + 8);
          if ( v29 == 1 )
          {
            if ( v14 == 1 )
            {
              if ( (unsigned __int8)sub_180138DF4(v15, &v48) )
                goto LABEL_54;
              v14 = v49;
            }
          }
          else if ( v29 )
          {
            if ( v29 == v14 )
              goto LABEL_54;
          }
          else if ( !v14 && *(_DWORD *)(v15 + 16) == v50 )
          {
LABEL_54:
            v30 = sub_1801398F0(v15, i[1], v13, v14, (__int64)&v36, (__int64)&v42);
            v11 = v42;
            v12 = v30;
            break;
          }
        }
      }
    }
LABEL_32:
    v9 = v36;
  }
  if ( v12 < 0 )
    goto LABEL_67;
  if ( v9 )
  {
    v31 = lpCriticalSection;
    v12 = sub_18000C5F0(v15, (_DWORD)lpCriticalSection, (unsigned int)&v55[37], v14, (__int64)&v55[87] + 2);
    if ( v12 < 0 )
      goto LABEL_67;
    v12 = sub_1800F357C(a1, (unsigned int)&v55[37], (unsigned int)&v55[87] + 2, HIDWORD(v55[152]), a6, v37, 0);
    if ( v12 < 0 )
      goto LABEL_67;
    v12 = sub_1800F26E0(a1, (_DWORD)v11, v9, a6, 0, (__int64)&v41);
    if ( v12 < 0 )
      goto LABEL_67;
    sub_180066980(&lpCriticalSection, a1 + 120);
    LODWORD(v55[36]) = a5;
    v23 = v41;
    v55[0] = v41;
    v32 = *v43;
    HIDWORD(v55[35]) = v37;
    *(_OWORD *)((char *)&v55[33] + 4) = v32;
    LODWORD(v55[1]) = 0;
    LODWORD(v55[153]) = a6;
    v12 = sub_180057300((char *)&v55[1] + 4, 128LL, v31);
    v24 = a1;
    if ( v12 >= 0 )
      sub_1800F2970(a1 + 160, v55);
    if ( v45 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v23 = v41;
    v24 = a1;
  }
  if ( v12 >= 0 )
  {
    v25 = *a7;
    if ( *a7 )
    {
      v33 = GetLastError();
      sub_1800ED08C(v25);
      SetLastError(v33);
      v24 = a1;
    }
    *a7 = v23;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800F580C(*((_QWORD *)off_18019C348 + 2), 20LL, v13, a6, v23);
    }
    goto LABEL_41;
  }
LABEL_67:
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 21LL, &unk_180171BD8, (unsigned int)v12);
  }
  v24 = a1;
LABEL_41:
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(v24 + 24));
  return (unsigned int)v12;
}
