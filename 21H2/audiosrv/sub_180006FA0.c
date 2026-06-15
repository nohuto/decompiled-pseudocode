/*
 * XREFs of sub_180006FA0 @ 0x180006FA0
 * Callers:
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 *     sub_1800D4BAC @ 0x1800D4BAC (sub_1800D4BAC.c)
 *     sub_1800D50E8 @ 0x1800D50E8 (sub_1800D50E8.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 *     sub_1800D5670 @ 0x1800D5670 (sub_1800D5670.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall sub_180006FA0(__int64 a1, struct _ACL *a2)
{
  DWORD i; // r15d
  int v5; // esi
  char v6; // al
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  DWORD LengthSid; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  HANDLE ProcessHeap; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, __int64); // rax
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 (__fastcall ***v26)(_QWORD, _QWORD, __int64); // rax
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 (__fastcall ***v29)(_QWORD, _QWORD, __int64); // rax
  __int64 v30; // r13
  DWORD v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  void *v39; // rax
  void *v40; // r12
  __int64 v41; // rcx
  size_t v42; // r8
  __int64 v43; // rax
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  _QWORD *v46; // rdx
  signed __int32 v47; // eax
  bool v48; // cc
  __int64 result; // rax
  _QWORD *v50; // rdx
  char *v51; // rdi
  char *v52; // rbx
  char *v53; // rdx
  int v54; // r9d
  __int64 v55; // rbx
  __int64 v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // r9
  unsigned int v64; // eax
  bool v65; // [rsp+40h] [rbp-118h]
  char v66; // [rsp+41h] [rbp-117h]
  int v67; // [rsp+50h] [rbp-108h] BYREF
  int v68; // [rsp+54h] [rbp-104h]
  LPVOID pAce[2]; // [rsp+58h] [rbp-100h] BYREF
  char *v70; // [rsp+68h] [rbp-F0h]
  PACL pAcl; // [rsp+70h] [rbp-E8h]
  __int64 v72; // [rsp+78h] [rbp-E0h]
  _QWORD *v73; // [rsp+80h] [rbp-D8h]
  char *v74; // [rsp+88h] [rbp-D0h]
  __int64 (__fastcall **v75)(); // [rsp+90h] [rbp-C8h] BYREF
  _BYTE pDestinationSid[68]; // [rsp+98h] [rbp-C0h] BYREF
  char v77; // [rsp+DCh] [rbp-7Ch]
  int v78; // [rsp+E0h] [rbp-78h]
  __int64 v79; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v82; // [rsp+100h] [rbp-58h] BYREF
  DWORD pAclInformation[4]; // [rsp+110h] [rbp-48h] BYREF

  pAce[1] = (LPVOID)a1;
  pAcl = a2;
  if ( a2 )
  {
    v75 = off_180146480;
    v77 = 0;
    v78 = 7;
    v79 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
    v80 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
    v81 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
    v82 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
    _o_free(*(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation)
      || !GetAclInformation(a2, &v67, 4u, AclRevisionInformation) )
    {
LABEL_61:
      sub_1800D5670();
    }
    *(_DWORD *)(a1 + 20) = v67;
    for ( i = 0; i < pAclInformation[0]; ++i )
    {
      if ( !GetAce(pAcl, i, pAce) )
        goto LABEL_61;
      v5 = *((_DWORD *)pAce[0] + 1);
      v68 = v5;
      v6 = *(_BYTE *)pAce[0];
      if ( !*(_BYTE *)pAce[0] || v6 == 1 )
      {
        v7 = (char *)pAce[0] + 8;
        if ( !v77 || pDestinationSid != v7 )
        {
          v78 = 7;
          v8 = v79 - 24;
          v9 = *(_QWORD *)(v79 - 24);
          if ( *(_DWORD *)(v79 - 24 + 8) )
          {
            if ( *(int *)(v8 + 16) >= 0 )
            {
              sub_180006A30((volatile signed __int32 *)v8);
              v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) + 24;
            }
            else
            {
              sub_1800448E4(&v79, 0LL);
            }
          }
          v10 = v80 - 24;
          v11 = *(_QWORD *)(v80 - 24);
          if ( *(_DWORD *)(v80 - 24 + 8) )
          {
            if ( *(int *)(v10 + 16) >= 0 )
            {
              sub_180006A30((volatile signed __int32 *)v10);
              v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) + 24;
            }
            else
            {
              sub_1800448E4(&v80, 0LL);
            }
          }
          v12 = v81 - 24;
          v13 = *(_QWORD *)(v81 - 24);
          if ( *(_DWORD *)(v81 - 24 + 8) )
          {
            if ( *(int *)(v12 + 16) >= 0 )
            {
              sub_180006A30((volatile signed __int32 *)v12);
              v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) + 24;
            }
            else
            {
              sub_1800448E4(&v81, 0LL);
            }
          }
          v14 = v82 - 24;
          v15 = *(_QWORD *)(v82 - 24);
          if ( *(_DWORD *)(v82 - 24 + 8) )
          {
            if ( *(int *)(v14 + 16) >= 0 )
            {
              sub_180006A30((volatile signed __int32 *)v14);
              v82 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) + 24;
            }
            else
            {
              sub_1800448E4(&v82, 0LL);
            }
          }
          v77 = 0;
          if ( !IsValidSid(v7) )
            goto LABEL_100;
          LengthSid = GetLengthSid(v7);
          if ( LengthSid > 0x44 )
            goto LABEL_100;
          v77 = 1;
          if ( !CopySid(LengthSid, pDestinationSid, v7) )
          {
            v57 = sub_1800D5648(v18, v17, v19);
            v77 = 0;
            sub_1800B8610(v57);
          }
          v78 = 8;
        }
        ProcessHeap = GetProcessHeap();
        v21 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
        v73 = v21;
        if ( v21 )
        {
          v65 = *(_BYTE *)pAce[0] == 0;
          v66 = *((_BYTE *)pAce[0] + 1);
          *v21 = &off_180146488;
          v74 = (char *)(v21 + 1);
          v21[1] = off_180146480;
          *((_BYTE *)v21 + 84) = v77;
          *((_DWORD *)v21 + 22) = v78;
          v70 = (char *)(v21 + 12);
          v22 = v79;
          v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v79 - 24) + 32LL))(*(_QWORD *)(v79 - 24));
          if ( *(int *)(v22 - 8) >= 0 && v23 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(v22 - 24) )
          {
            v24 = v22 - 24;
            _InterlockedIncrement((volatile signed __int32 *)(v22 - 8));
          }
          else
          {
            v58 = (**v23)(v23, *(unsigned int *)(v22 - 16), 2LL);
            v24 = v58;
            if ( !v58 )
              sub_1800BABDC();
            *(_DWORD *)(v58 + 8) = *(_DWORD *)(v22 - 16);
            v59 = 2LL * (*(_DWORD *)(v22 - 16) + 1);
            sub_18003447C(v58 + 24, v59, v22, v59);
          }
          v21[12] = v24 + 24;
          v70 = (char *)(v21 + 13);
          v25 = v80;
          v26 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v80 - 24) + 32LL))(*(_QWORD *)(v80 - 24));
          if ( *(int *)(v25 - 8) >= 0 && v26 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(v25 - 24) )
          {
            v27 = v25 - 24;
            _InterlockedIncrement((volatile signed __int32 *)(v25 - 8));
          }
          else
          {
            v60 = (**v26)(v26, *(unsigned int *)(v25 - 16), 2LL);
            v27 = v60;
            if ( !v60 )
              sub_1800BABDC();
            *(_DWORD *)(v60 + 8) = *(_DWORD *)(v25 - 16);
            v61 = 2LL * (*(_DWORD *)(v25 - 16) + 1);
            sub_18003447C(v60 + 24, v61, v25, v61);
          }
          v21[13] = v27 + 24;
          v70 = (char *)(v21 + 14);
          v28 = v81;
          v29 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v81 - 24) + 32LL))(*(_QWORD *)(v81 - 24));
          if ( *(int *)(v28 - 8) >= 0 && v29 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(v28 - 24) )
          {
            v30 = v28 - 24;
            _InterlockedIncrement((volatile signed __int32 *)(v28 - 8));
          }
          else
          {
            v62 = (**v29)(v29, *(unsigned int *)(v28 - 16), 2LL);
            v30 = v62;
            if ( !v62 )
              sub_1800BABDC();
            *(_DWORD *)(v62 + 8) = *(_DWORD *)(v28 - 16);
            v63 = 2LL * (*(_DWORD *)(v28 - 16) + 1);
            sub_18003447C(v62 + 24, v63, v28, v63);
          }
          v21[14] = v30 + 24;
          v21[15] = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
          if ( v77 )
          {
            if ( !IsValidSid(pDestinationSid) )
              sub_1800B8610(2147942487LL);
            v31 = GetLengthSid(pDestinationSid);
            if ( !CopySid(v31, v21 + 2, pDestinationSid) )
            {
              v64 = sub_1800D5648(v33, v32, v34);
              sub_1800B8610(v64);
            }
          }
          *((_DWORD *)v21 + 32) = v68;
          *((_BYTE *)v21 + 132) = v66;
          v21[17] = 0LL;
          *v21 = off_1801464C0;
          *((_BYTE *)v21 + 144) = v65;
        }
        else
        {
          v21 = 0LL;
        }
        if ( !v21 )
LABEL_101:
          sub_1800B8610(2147942414LL);
        v35 = *(_QWORD *)(a1 + 32);
        v36 = *(_QWORD *)(a1 + 40);
        if ( v35 >= v36 )
        {
          v37 = v35 + 1;
          if ( v35 + 1 > v36 )
          {
            v38 = *(int *)(a1 + 48);
            if ( *(_QWORD *)(a1 + 24) )
            {
              if ( !*(_DWORD *)(a1 + 48) )
              {
                v38 = v36 >> 1;
                if ( v37 - v36 > v36 >> 1 )
                  v38 = v37 - v36;
              }
              v38 += v36;
              if ( v37 >= v38 )
                v38 = v35 + 1;
              v39 = (void *)o_calloc(v38, 8LL);
              v40 = v39;
              if ( !v39 )
                goto LABEL_101;
              v41 = *(_QWORD *)(a1 + 24);
              v42 = 8LL * *(_QWORD *)(a1 + 32);
              if ( v42 )
              {
                if ( !v41 )
                {
                  *(_DWORD *)o__errno() = 22;
                  o__invalid_parameter_noinfo();
LABEL_100:
                  sub_1800B8610(2147942487LL);
                }
                memmove(v39, *(const void **)(a1 + 24), v42);
                v41 = *(_QWORD *)(a1 + 24);
              }
              _o_free(v41);
              *(_QWORD *)(a1 + 24) = v40;
            }
            else
            {
              if ( v38 <= v37 )
                v38 = v35 + 1;
              v43 = o_calloc(v38, 8LL);
              *(_QWORD *)(a1 + 24) = v43;
              if ( !v43 )
                goto LABEL_101;
            }
            *(_QWORD *)(a1 + 40) = v38;
          }
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v35) = v21;
        ++*(_QWORD *)(a1 + 32);
      }
      else if ( (unsigned __int8)(v6 - 5) <= 1u )
      {
        v51 = 0LL;
        v52 = 0LL;
        v53 = (char *)pAce[0] + 44;
        v54 = *((_DWORD *)pAce[0] + 2);
        if ( (v54 & 1) != 0 )
          v51 = (char *)pAce[0] + 12;
        else
          v53 = (char *)pAce[0] + 28;
        if ( (v54 & 2) != 0 )
        {
          v55 = 28LL;
          if ( !v51 )
            v55 = 12LL;
          v52 = (char *)pAce[0] + v55;
        }
        else
        {
          v53 -= 16;
        }
        sub_1800D50E8(&v75, v53);
        v56 = sub_180055F40(168LL);
        v72 = v56;
        if ( v56 )
          sub_1800D4BAC(
            v56,
            (unsigned int)&v75,
            v5,
            *((unsigned __int8 *)pAce[0] + 1),
            *(_BYTE *)pAce[0] == 5,
            (__int64)v51,
            (__int64)v52);
        JUMPOUT(0x18007F406LL);
      }
    }
    v75 = off_180146480;
    v44 = (_QWORD *)(v82 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v82 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v44 + 8LL))(*v44);
    v45 = (_QWORD *)(v81 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v81 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v45 + 8LL))(*v45);
    v46 = (_QWORD *)(v80 - 24);
    v47 = _InterlockedExchangeAdd((volatile signed __int32 *)(v80 - 24 + 16), 0xFFFFFFFF);
    v48 = v47 <= 1;
    result = (unsigned int)(v47 - 1);
    if ( v48 )
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v46 + 8LL))(*v46);
    v50 = (_QWORD *)(v79 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v79 - 24 + 16), 0xFFFFFFFF) <= 1 )
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v50 + 8LL))(*v50);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
