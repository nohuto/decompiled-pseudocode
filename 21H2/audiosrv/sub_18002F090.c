/*
 * XREFs of sub_18002F090 @ 0x18002F090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800274A0 @ 0x1800274A0 (sub_1800274A0.c)
 *     sub_18002F780 @ 0x18002F780 (sub_18002F780.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     sub_180071C40 @ 0x180071C40 (sub_180071C40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3438 @ 0x1800E3438 (sub_1800E3438.c)
 *     sub_18011F400 @ 0x18011F400 (sub_18011F400.c)
 */

__int64 __fastcall sub_18002F090(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        _QWORD *a9)
{
  BOOL v12; // edi
  _WORD *v13; // rdx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  int v17; // ebx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  signed __int64 v22; // rax
  int v23; // ecx
  signed __int64 v24; // rtt
  __int64 v25; // r10
  __int64 v26; // rcx
  int v27; // eax
  _WORD *v28; // rcx
  __int64 v29; // rax
  int v31; // edx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 (__fastcall ***v36)(_QWORD, void *, __int64 *); // rcx
  __int64 (__fastcall ***v37)(_QWORD, void *, __int64 *); // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v46; // [rsp+80h] [rbp-88h] BYREF
  WINBOOL fPending; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v49; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v51; // [rsp+A0h] [rbp-68h] BYREF
  LPCRITICAL_SECTION v52[2]; // [rsp+A8h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-48h] BYREF
  __int64 (__fastcall ***v55)(_QWORD, void *, __int64 *); // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v56; // [rsp+D0h] [rbp-38h]
  LPCRITICAL_SECTION v57; // [rsp+D8h] [rbp-30h]
  _DWORD v58[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-20h]
  unsigned __int16 *v60; // [rsp+F8h] [rbp-10h]
  int v61; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+104h] [rbp-4h]
  void *v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+110h] [rbp+8h]
  int v65; // [rsp+114h] [rbp+Ch]
  __int64 (__fastcall ****v66)(_QWORD, void *, __int64 *); // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  __int64 *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  _WORD *v70; // [rsp+138h] [rbp+30h]
  int v71; // [rsp+140h] [rbp+38h]
  int v72; // [rsp+144h] [rbp+3Ch]
  int *v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  __int64 *v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  __int64 v77; // [rsp+168h] [rbp+60h]
  __int64 v78; // [rsp+170h] [rbp+68h]
  __int64 *v79; // [rsp+178h] [rbp+70h]
  __int64 v80; // [rsp+180h] [rbp+78h]
  int *v81; // [rsp+188h] [rbp+80h]
  __int64 v82; // [rsp+190h] [rbp+88h]
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v50 = a7;
  Context = a8;
  v56 = a9;
  v57 = (LPCRITICAL_SECTION)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v12 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 168LL))(qword_18019E618)
     && (unsigned __int8)sub_18011F400(a2);
  v13 = *(_WORD **)a3;
  v43 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, _WORD *, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
          qword_18019EE50,
          v13,
          &v43);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = 2431LL;
LABEL_10:
    sub_18004BD84(
      retaddr,
      v16,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v14);
    goto LABEL_57;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, BOOL, _QWORD *))(*(_QWORD *)v43 + 56LL))(
          v43,
          a3,
          a5,
          v12,
          a9);
  v15 = v14;
  if ( v14 >= 0 )
    goto LABEL_56;
  if ( v14 != -2005139430 )
  {
    v16 = 2436LL;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v43 + 72LL))(v43, v52);
  v17 = v43;
  v42 = 0LL;
  v18 = (_QWORD *)sub_18006A18C(120LL, &unk_18019F848);
  v46 = v18;
  v19 = v18;
  if ( v18 )
  {
    v20 = qword_18019E418;
    v18[5] = 1LL;
    *v18 = off_18014A668;
    v18[1] = off_18014A588;
    v18[2] = off_18014A568;
    v18[3] = off_18014A538;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v51 = v19;
    *v19 = off_18014A960;
    v19[1] = off_18014A880;
    v19[2] = off_18014A860;
    v19[3] = off_18014A830;
    v19[6] = 0LL;
    v19[7] = 0LL;
    v19[8] = 0LL;
    *((_BYTE *)v19 + 72) = 0;
    v19[10] = 0LL;
    v19[11] = 0LL;
    v19[12] = 0LL;
    v19[13] = 0LL;
    v19[14] = 0LL;
    v46 = 0LL;
    v15 = sub_18002F780((_DWORD)v19, a3, a2, v17, a5, a4, a6, v50, (__int64)Context);
    if ( v15 >= 0 )
    {
      v42 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))(v19 + 1);
      (*(void (__fastcall **)(_QWORD *))(v19[1] + 8LL))(v19 + 1);
      if ( v19 )
      {
        v21 = v19[14];
        v51 = 0LL;
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v21 + 72LL))(v21, &lpCriticalSection);
        v22 = v19[5];
        v52[1] = (LPCRITICAL_SECTION)v22;
        while ( v22 >= 0 )
        {
          if ( (_DWORD)v22 == 0x7FFFFFFF )
            goto LABEL_27;
          v23 = v22 - 1;
          v24 = v22;
          v22 = _InterlockedCompareExchange64(v19 + 5, v22 - 1, v22);
          if ( v24 == v22 )
            goto LABEL_24;
        }
        v23 = sub_18006D208(2 * v22 + 16);
LABEL_24:
        if ( !v23 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v19 + 48LL))(v19, 1LL);
          if ( qword_18019E418 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
        }
LABEL_27:
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      v15 = 0;
    }
    else
    {
      sub_1800E3438(&v51);
      sub_180071C40(&v46);
    }
  }
  else
  {
    sub_180071C40(&v46);
    v15 = -2147024882;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v25 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v25 > 4u )
  {
    v26 = *(_QWORD *)(a3 + 16);
    v48 = *(_DWORD *)(a3 + 8);
    v54 = *(_QWORD *)(a3 + 32);
    LOWORD(v41) = *(_WORD *)(v26 + 2);
    v27 = *(_DWORD *)(v26 + 4);
    v28 = *(_WORD **)a3;
    v49 = v27;
    v55 = v42;
    v81 = &v48;
    v79 = &v54;
    v77 = a3 + 48;
    v75 = &v41;
    v73 = &v49;
    LODWORD(v50) = v15;
    v82 = 4LL;
    v80 = 8LL;
    v78 = 16LL;
    v76 = 2LL;
    v74 = 4LL;
    if ( v28 )
    {
      v29 = -1LL;
      while ( v28[++v29] != 0 )
        ;
      v31 = 2 * v29 + 2;
    }
    else
    {
      v28 = &unk_18015C744;
      v31 = 2;
    }
    v70 = v28;
    v68 = &v50;
    v71 = v31;
    v66 = &v55;
    v58[1] = 4;
    v60 = *(unsigned __int16 **)(v25 + 8);
    v72 = 0;
    v69 = 4LL;
    v67 = 8LL;
    v58[0] = 184549376;
    v59 = 0LL;
    v61 = *v60;
    v63 = &unk_1801677D7;
    v62 = 2;
    v32 = *(_QWORD *)(v25 + 32);
    v64 = 129;
    v65 = 1;
    LODWORD(v46) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EtwEventWriteTransfer(v32, v58, 0LL);
  }
  if ( v15 >= 0 )
  {
    v44 = 0LL;
    v33 = sub_1800274A0(v42, &v44);
    v15 = v33;
    if ( v33 < 0 )
    {
      v34 = 2462LL;
      goto LABEL_46;
    }
    v33 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v43 + 64LL))(v43, a3, &v44);
    v15 = v33;
    if ( v33 < 0 )
    {
      v34 = 2463LL;
LABEL_46:
      sub_18004BD84(
        retaddr,
        v34,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v33);
      v35 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      goto LABEL_48;
    }
    v36 = 0LL;
    v37 = v42;
    v42 = 0LL;
    *v56 = v37;
    v38 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v36 = v42;
    }
    if ( v36 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v36)[2])(v36);
    if ( v52[0] )
      LeaveCriticalSection(v52[0]);
LABEL_56:
    v15 = 0;
    goto LABEL_57;
  }
  sub_18004BD84(
    retaddr,
    2458LL,
    "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (unsigned int)v15);
LABEL_48:
  sub_1800461B8(&v42);
  if ( v52[0] )
    LeaveCriticalSection(v52[0]);
LABEL_57:
  v39 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v57 )
    LeaveCriticalSection(v57);
  return (unsigned int)v15;
}
