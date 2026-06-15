/*
 * XREFs of sub_180027DD0 @ 0x180027DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800274A0 @ 0x1800274A0 (sub_1800274A0.c)
 *     sub_1800284E0 @ 0x1800284E0 (sub_1800284E0.c)
 *     sub_180028850 @ 0x180028850 (sub_180028850.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_180071C40 @ 0x180071C40 (sub_180071C40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CDFEC @ 0x1800CDFEC (sub_1800CDFEC.c)
 *     sub_1800D542C @ 0x1800D542C (sub_1800D542C.c)
 *     sub_1800E25B8 @ 0x1800E25B8 (sub_1800E25B8.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_180027DD0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 *j; // r12
  __int64 *k; // rbx
  __int64 *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  _QWORD *v19; // rdx
  __int64 (__fastcall ***v20)(_QWORD, void *, __int64 *); // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  signed int v24; // edi
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  std::_Ref_count_base *v31; // rcx
  struct _TP_WORK *ThreadpoolWork; // r14
  __int64 (__fastcall ***v33)(_QWORD, void *, __int64 *); // rax
  PTP_POOL Threadpool; // rax
  __int64 *i; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r12
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 (__fastcall ***v48)(_QWORD, void *, __int64 *); // rax
  __int64 (__fastcall ***v49)(_QWORD, void *, __int64 *); // rbx
  __int64 v50; // rcx
  __int64 v51; // rcx
  signed int LastError; // eax
  signed int v53; // eax
  signed int v54; // eax
  __int64 v55; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 (__fastcall ***v56)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-1E0h] BYREF
  __int64 (__fastcall ***v57)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-1D0h] BYREF
  _BYTE *v59; // [rsp+50h] [rbp-1C8h]
  _QWORD *v60; // [rsp+58h] [rbp-1C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v61; // [rsp+60h] [rbp-1B8h]
  char *v62; // [rsp+68h] [rbp-1B0h] BYREF
  _QWORD *v63; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v64; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, void *, __int64 *); // [rsp+80h] [rbp-198h] BYREF
  _QWORD *v66; // [rsp+88h] [rbp-190h]
  _QWORD v67[7]; // [rsp+90h] [rbp-188h] BYREF
  _QWORD *v68; // [rsp+C8h] [rbp-150h]
  _BYTE v69[56]; // [rsp+D0h] [rbp-148h] BYREF
  _BYTE *v70; // [rsp+108h] [rbp-110h]
  _QWORD *v71; // [rsp+110h] [rbp-108h]
  _QWORD *v72; // [rsp+118h] [rbp-100h]
  _DWORD v73[4]; // [rsp+120h] [rbp-F8h] BYREF
  __int64 v74; // [rsp+130h] [rbp-E8h]
  int v75; // [rsp+138h] [rbp-E0h]
  int v76; // [rsp+13Ch] [rbp-DCh]
  __int64 v77; // [rsp+140h] [rbp-D8h]
  int v78; // [rsp+148h] [rbp-D0h]
  int v79; // [rsp+14Ch] [rbp-CCh]
  __int64 v80; // [rsp+150h] [rbp-C8h]
  __int64 v81; // [rsp+158h] [rbp-C0h]
  int v82; // [rsp+160h] [rbp-B8h]
  __int128 v83; // [rsp+164h] [rbp-B4h]
  __int128 v84; // [rsp+174h] [rbp-A4h]
  __int128 v85; // [rsp+184h] [rbp-94h]
  __int128 v86; // [rsp+194h] [rbp-84h]
  __int128 v87; // [rsp+1A4h] [rbp-74h]
  __int128 v88; // [rsp+1B4h] [rbp-64h]
  int v89; // [rsp+1C4h] [rbp-54h]
  void *retaddr; // [rsp+218h] [rbp+0h]

  v66 = a4;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v61 = v6;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
  {
    sub_18004BD84(retaddr, 359LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", 2147942487LL);
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2147942487LL;
  }
  EnterCriticalSection(v6);
  v8 = *(__int64 **)(a1 + 224);
  v9 = *(__int64 **)(a1 + 216);
  if ( v9 != v8 )
  {
    do
    {
      if ( (unsigned __int8)sub_1800CDFEC(v7, v9) )
        break;
      ++v9;
    }
    while ( v9 != v8 );
    if ( v9 != v8 )
    {
      for ( i = v9 + 1; i != v8; ++i )
      {
        if ( !(unsigned __int8)sub_1800CDFEC(v7, i) )
        {
          v37 = 0LL;
          if ( &v63 != (_QWORD **)i )
          {
            v37 = *i;
            *i = 0LL;
          }
          v7 = *v9;
          *v9 = v37;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          ++v9;
        }
      }
    }
  }
  v10 = *(__int64 **)(a1 + 224);
  for ( j = v9; j != v10; ++j )
  {
    v38 = *j;
    if ( *j )
    {
      *j = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
  }
  *(_QWORD *)(a1 + 224) = v9;
  if ( v6 )
    LeaveCriticalSection(v6);
  v56 = 0LL;
  for ( k = *(__int64 **)(a1 + 216); k != *(__int64 **)(a1 + 224); ++k )
  {
    v39 = *k;
    v64 = v39;
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
    v55 = 0LL;
    v40 = sub_1800CD4DC(&v64, &v55);
    v41 = v55;
    if ( v40 >= 0 && v55 )
    {
      v57 = 0LL;
      if ( (int)sub_1800E25B8(&v55, &v57) >= 0 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v57)[26])(v57) )
        {
          sub_1800461B8(&v57);
          v43 = v55;
          if ( v55 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          }
          if ( v39 )
            goto LABEL_114;
        }
        else
        {
          v44 = *a2;
          LODWORD(v58) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v57)[13])(v57);
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 40LL))(v44);
          if ( v45 == (_DWORD)v58 )
          {
            if ( *((_BYTE *)a2 + 8) == ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v57)[15])(v57) )
            {
              v48 = v56;
              v49 = v57;
              if ( v56 != v57 )
              {
                if ( v57 )
                {
                  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v57)[1])(v57);
                  v48 = v56;
                }
                v65 = v48;
                v56 = v49;
                sub_1800461B8(&v65);
              }
              sub_1800461B8(&v57);
              v50 = v55;
              if ( v55 )
              {
                v55 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
              }
              if ( v39 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              break;
            }
            sub_1800461B8(&v57);
            v47 = v55;
            if ( v55 )
            {
              v55 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
            }
            if ( v39 )
            {
LABEL_114:
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              continue;
            }
          }
          else
          {
            sub_1800461B8(&v57);
            v46 = v55;
            if ( v55 )
            {
              v55 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
            }
            if ( v39 )
              goto LABEL_114;
          }
        }
      }
      else
      {
        sub_1800461B8(&v57);
        v42 = v55;
        if ( v55 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        }
        if ( v39 )
          goto LABEL_114;
      }
    }
    else
    {
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      if ( v39 )
        goto LABEL_114;
    }
  }
  if ( v56 )
    goto LABEL_54;
  v73[3] = 0;
  v76 = 0;
  v79 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0;
  v13 = (__int64 *)a2[2];
  v73[0] = *((_DWORD *)v13 + 2);
  v73[1] = 0;
  v77 = *v13;
  v73[2] = *(unsigned __int16 *)(v13[2] + 16) + 18;
  v74 = v13[2];
  v78 = *(unsigned __int16 *)(v13[2] + 16) + 18;
  v80 = v13[2];
  v81 = v13[3];
  v82 = 0;
  v83 = *((_OWORD *)v13 + 2);
  v75 = *((unsigned __int8 *)v13 + 50);
  v56 = 0LL;
  v14 = (_QWORD *)sub_18006A18C(224LL, &unk_18019F848);
  v15 = v14;
  v60 = v14;
  if ( !v14 )
  {
    sub_180071C40(&v60);
    v16 = -2147024882;
LABEL_117:
    sub_18004BD84(
      retaddr,
      400LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v16);
    sub_1800461B8(&v56);
    if ( v6 )
      LeaveCriticalSection(v6);
    return (unsigned int)v16;
  }
  v14[5] = 1LL;
  *v14 = off_180146BD8;
  v14[1] = off_180146AF8;
  v14[2] = off_1801469C0;
  v14[3] = off_180146990;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *v15 = off_180146AC0;
  v15[1] = off_1801469E0;
  v15[2] = off_1801469C0;
  v15[3] = off_180146990;
  v15[6] = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v15 + 7), 0, 0);
  v15[12] = 0LL;
  *((_DWORD *)v15 + 26) = 0;
  v15[14] = 0LL;
  *((_DWORD *)v15 + 30) = 0;
  *((_WORD *)v15 + 62) = 0;
  *((_DWORD *)v15 + 32) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v15 + 17), 0, 0);
  v15[22] = 0LL;
  v15[23] = 0LL;
  v15[24] = 0LL;
  v15[25] = 0LL;
  v15[26] = 0LL;
  v15[27] = 0LL;
  v62 = (char *)v15;
  v60 = 0LL;
  v16 = sub_1800284E0(v15, a2, v73, a1);
  if ( v16 < 0 )
  {
    sub_180071C14(&v62);
    sub_180071C40(&v60);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD *, void *, _QWORD))*v15)(v15, &unk_18015B820, &v56);
    if ( v15 )
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
  }
  if ( v16 < 0 )
    goto LABEL_117;
  v58 = 0LL;
  v17 = sub_1800274A0(v56, &v58);
  v18 = v17;
  if ( v17 < 0 )
  {
    sub_18004BD84(
      retaddr,
      404LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v17);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    sub_1800461B8(&v56);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v18;
  }
  else
  {
    v19 = *(_QWORD **)(a1 + 224);
    if ( *(_QWORD **)(a1 + 232) == v19 )
    {
      sub_180028850(a1 + 216, v19, &v58);
    }
    else
    {
      v51 = v58;
      *v19 = v58;
      if ( v51 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
      *(_QWORD *)(a1 + 224) += 8LL;
    }
    v63 = v67;
    v20 = v56;
    if ( v56 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v56)[1])(v56);
    v67[0] = off_180146960;
    v67[1] = v20;
    v68 = v67;
    v71 = v67;
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 120LL))(qword_18019E678);
    v23 = v21;
    v24 = 0;
    if ( !*(_BYTE *)(v21 + 80) )
    {
      if ( *(_QWORD *)v21 )
        goto LABEL_23;
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v23 = Threadpool;
      if ( Threadpool )
        goto LABEL_135;
      LastError = GetLastError();
      v24 = LastError;
      if ( LastError > 0 )
        v24 = (unsigned __int16)LastError | 0x80070000;
      if ( v24 >= 0 )
      {
LABEL_135:
        if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)v23, 1u) )
          goto LABEL_59;
        v53 = GetLastError();
        v24 = v53;
        if ( v53 > 0 )
          v24 = (unsigned __int16)v53 | 0x80070000;
        if ( v24 >= 0 )
        {
LABEL_59:
          SetThreadpoolThreadMaximum(*(PTP_POOL *)v23, 1u);
          *(_QWORD *)(v23 + 16) = *(_QWORD *)v23;
LABEL_23:
          v25 = (_QWORD *)sub_18006A18C(24LL, &unk_18019F848);
          v26 = v25;
          v59 = v25;
          if ( v25 )
          {
            *v25 = 0LL;
            v25[1] = 0LL;
            v25[2] = 0LL;
          }
          else
          {
            v26 = 0LL;
          }
          v72 = v26;
          if ( v26 )
          {
            v59 = v69;
            v70 = 0LL;
            if ( v68 )
              v70 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v68)(v68, v69);
            v59 = v69;
            v26[2] = v23;
            ProcessHeap = GetProcessHeap();
            v28 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
            v29 = v28;
            v63 = v28;
            if ( v28 )
            {
              *((_DWORD *)v28 + 2) = 1;
              *((_DWORD *)v28 + 3) = 1;
              *v28 = off_180146940;
              v62 = (char *)(v28 + 2);
              v28[9] = 0LL;
              if ( v70 )
                v28[9] = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v70)(v70, (__int64)(v28 + 2));
            }
            else
            {
              v29 = 0LL;
            }
            v30 = v29 + 2;
            *v26 = v29 + 2;
            v31 = (std::_Ref_count_base *)v26[1];
            v26[1] = v29;
            if ( v31 )
            {
              sub_180052600(v31);
              v30 = (_QWORD *)*v26;
            }
            if ( v30 )
              v24 = 0;
            else
              v24 = -2147024882;
            if ( v70 )
            {
              if ( v70 == v69 )
                v22 = 0LL;
              else
                LOBYTE(v22) = 1;
              (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v70 + 32LL))(v70, v22);
              v70 = 0LL;
            }
            if ( v24 >= 0 )
            {
              ThreadpoolWork = CreateThreadpoolWork(pfnwk, v26, (PTP_CALLBACK_ENVIRON)(v23 + 8));
              if ( ThreadpoolWork )
              {
                v24 = 0;
                goto LABEL_42;
              }
              v54 = GetLastError();
              v24 = v54;
              if ( v54 > 0 )
                v24 = (unsigned __int16)v54 | 0x80070000;
              if ( v24 >= 0 )
              {
LABEL_42:
                v26 = 0LL;
                SubmitThreadpoolWork(ThreadpoolWork);
              }
            }
          }
          else
          {
            v24 = -2147024882;
          }
          if ( v26 )
            sub_1800D542C(v26);
        }
      }
    }
    if ( v68 )
    {
      if ( v68 == v67 )
        v22 = 0LL;
      else
        LOBYTE(v22) = 1;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v68 + 32LL))(v68, v22);
      v68 = 0LL;
    }
    if ( v24 < 0 )
      sub_18006D26C(
        retaddr,
        412LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v24);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    v6 = v61;
LABEL_54:
    v33 = v56;
    v56 = 0LL;
    *v66 = v33;
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
}
