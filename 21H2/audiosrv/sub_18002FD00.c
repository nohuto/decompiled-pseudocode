/*
 * XREFs of sub_18002FD00 @ 0x18002FD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800274A0 @ 0x1800274A0 (sub_1800274A0.c)
 *     sub_180030500 @ 0x180030500 (sub_180030500.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     sub_180071C40 @ 0x180071C40 (sub_180071C40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E2748 @ 0x1800E2748 (sub_1800E2748.c)
 *     sub_1800E3414 @ 0x1800E3414 (sub_1800E3414.c)
 */

__int64 __fastcall sub_18002FD00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, LPCRITICAL_SECTION *); // rax
  __int64 v8; // rdi
  __int64 v10; // r14
  char *v12; // r13
  int v13; // esi
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  char *v16; // rbx
  char *v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  signed __int64 v28; // rax
  int v29; // ecx
  signed __int64 v30; // rtt
  __int64 v31; // r10
  int v32; // ecx
  __int64 v33; // rax
  _WORD *v34; // rcx
  __int64 v35; // rax
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 (__fastcall ***v40)(_QWORD, void *, __int64 *); // rax
  __int64 (__fastcall ***v41)(_QWORD, void *, __int64 *); // rcx
  char v43; // [rsp+38h] [rbp-D0h] BYREF
  char v44; // [rsp+39h] [rbp-CFh] BYREF
  char v45; // [rsp+3Ah] [rbp-CEh] BYREF
  __int64 (__fastcall ***v46)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  int v50; // [rsp+5Ch] [rbp-ACh] BYREF
  int v51; // [rsp+60h] [rbp-A8h] BYREF
  int v52; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v53; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v57[2]; // [rsp+88h] [rbp-80h] BYREF
  int *v58; // [rsp+98h] [rbp-70h]
  char *v59; // [rsp+A0h] [rbp-68h]
  __int64 *v60; // [rsp+A8h] [rbp-60h]
  __int64 *v61; // [rsp+B0h] [rbp-58h]
  __int64 v62; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall ***v64)(_QWORD, void *, __int64 *); // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v65; // [rsp+D0h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v67[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-20h]
  unsigned __int16 *v69; // [rsp+F8h] [rbp-10h]
  int v70; // [rsp+100h] [rbp-8h]
  int v71; // [rsp+104h] [rbp-4h]
  void *v72; // [rsp+108h] [rbp+0h]
  int v73; // [rsp+110h] [rbp+8h]
  int v74; // [rsp+114h] [rbp+Ch]
  __int64 (__fastcall ****v75)(_QWORD, void *, __int64 *); // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  int *v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  _WORD *v79; // [rsp+138h] [rbp+30h]
  int v80; // [rsp+140h] [rbp+38h]
  int v81; // [rsp+144h] [rbp+3Ch]
  int *v82; // [rsp+148h] [rbp+40h]
  __int64 v83; // [rsp+150h] [rbp+48h]
  __int64 *v84; // [rsp+158h] [rbp+50h]
  __int64 v85; // [rsp+160h] [rbp+58h]
  __int64 v86; // [rsp+168h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+68h]
  __int64 *v88; // [rsp+178h] [rbp+70h]
  __int64 v89; // [rsp+180h] [rbp+78h]
  int *v90; // [rsp+188h] [rbp+80h]
  __int64 v91; // [rsp+190h] [rbp+88h]
  char *v92; // [rsp+198h] [rbp+90h]
  __int64 v93; // [rsp+1A0h] [rbp+98h]
  char *v94; // [rsp+1A8h] [rbp+A0h]
  __int64 v95; // [rsp+1B0h] [rbp+A8h]
  char *v96; // [rsp+1B8h] [rbp+B0h]
  __int64 v97; // [rsp+1C0h] [rbp+B8h]
  unsigned int v98; // [rsp+230h] [rbp+128h] BYREF

  v98 = a4;
  v6 = (__int64)a6;
  v7 = *(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)a2 + 72LL);
  v8 = a5;
  v10 = a3;
  v54 = a3;
  v65 = a6;
  v7(a2, &lpCriticalSection);
  v12 = (char *)(v10 + 48);
  if ( *(_BYTE *)(v10 + 48)
    || *(_BYTE *)(v10 + 50)
    || (v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 32LL))(a2, v10, v6),
        v13 == -2147023728) )
  {
    v46 = 0LL;
    if ( v8 )
      v14 = *(_DWORD *)(v8 + 56);
    else
      v14 = 0;
    v15 = 16 * (v14 + 5LL);
    if ( v15 <= 0x7FFFFFFF )
    {
      v17 = (char *)CoTaskMemAlloc((unsigned int)v15);
      v57[0] = v17;
      v16 = v17;
      if ( v17 )
      {
        v58 = (int *)(v10 + 8);
        *(_DWORD *)v17 = *(_DWORD *)(v10 + 8);
        *(_QWORD *)(v17 + 4) = (unsigned __int8)*v12;
        if ( v8 )
          v18 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 16) + 16LL) + 18;
        else
          v18 = 0;
        *((_DWORD *)v17 + 3) = v18;
        if ( v8 )
          v19 = *(_QWORD *)(v8 + 16);
        else
          v19 = 0LL;
        *((_QWORD *)v16 + 2) = v19;
        *((_QWORD *)v16 + 3) = *(_QWORD *)v10;
        v20 = *(_QWORD *)(v10 + 16);
        v61 = (__int64 *)(v10 + 16);
        *((_DWORD *)v16 + 9) = *(unsigned __int16 *)(v20 + 16) + 18;
        *((_QWORD *)v16 + 5) = *(_QWORD *)(v10 + 16);
        v60 = (__int64 *)(v10 + 24);
        *((_QWORD *)v16 + 6) = *(_QWORD *)(v10 + 24);
        if ( v8 )
          v21 = *(_DWORD *)(v8 + 32);
        else
          v21 = 0;
        *((_DWORD *)v16 + 14) = v21;
        v22 = *(_OWORD *)(v10 + 32);
        v63 = v10 + 32;
        v59 = (char *)(v10 + 50);
        *(_OWORD *)(v16 + 60) = v22;
        *((_DWORD *)v16 + 19) = v14;
        v23 = 0LL;
        for ( *((_DWORD *)v16 + 8) = *(unsigned __int8 *)(v10 + 50);
              (unsigned int)v23 < *((_DWORD *)v16 + 19);
              *(_OWORD *)&v16[16 * v25] = *(_OWORD *)(v8 + 8 * v24 + 60) )
        {
          v24 = 2LL * (unsigned int)v23;
          v25 = (unsigned int)v23 + 5LL;
          v23 = (unsigned int)(v23 + 1);
        }
        if ( *v12 )
        {
          sub_1800461B8(&v46);
          v13 = sub_1800E2748(&v46, &v54, v57, &v98);
        }
        else
        {
          if ( v46 )
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), __int64))(*v46)[2])(v46, v23);
          v53 = sub_18006A18C(1616LL, &unk_18019F848);
          v26 = v53;
          if ( v53 )
          {
            *(_QWORD *)(v53 + 48) = 0LL;
            *(_QWORD *)(v26 + 8) = &off_180148300;
            *(_QWORD *)(v26 + 56) = 0LL;
            *(_QWORD *)(v26 + 72) = 0LL;
            *(_QWORD *)(v26 + 80) = 0LL;
            *(_QWORD *)(v26 + 88) = 0LL;
            *(_QWORD *)(v26 + 96) = 0LL;
            InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v26 + 104), 0, 0);
            InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v26 + 160), 0, 0);
            v27 = qword_18019E418;
            *(_QWORD *)(v26 + 200) = 0LL;
            *(_QWORD *)(v26 + 208) = 0LL;
            *(_QWORD *)(v26 + 216) = 0LL;
            *(_QWORD *)(v26 + 224) = 0LL;
            *(_QWORD *)(v26 + 232) = 0LL;
            *(_QWORD *)(v26 + 240) = 0LL;
            *(_QWORD *)v26 = off_18014A418;
            *(_QWORD *)(v26 + 8) = off_18014A288;
            *(_QWORD *)(v26 + 248) = off_18014A268;
            *(_QWORD *)(v26 + 256) = off_18014A238;
            *(_QWORD *)(v26 + 272) = 1LL;
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
            *(_DWORD *)(v26 + 280) = 0;
            *(_QWORD *)v26 = off_18014A418;
            *(_QWORD *)(v26 + 8) = off_18014A6A0;
            *(_QWORD *)(v26 + 248) = off_18014A268;
            *(_QWORD *)(v26 + 256) = off_18014A238;
            InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v26 + 288), 0, 0);
            *(_BYTE *)(v26 + 328) = 0;
            memset((void *)(v26 + 336), 0, 0x4F0uLL);
            *(_QWORD *)(v26 + 1600) = 0LL;
            *(_QWORD *)(v26 + 1608) = 0LL;
            v56 = v26;
            v53 = 0LL;
            v13 = sub_180030500(v26, v10, v16, a4);
            if ( v13 >= 0 )
            {
              v46 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))(v26 + 8);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v26 + 8) + 8LL))(v26 + 8);
              if ( v26 )
              {
                v28 = *(_QWORD *)(v26 + 272);
                v57[1] = v28;
                v56 = 0LL;
                while ( v28 >= 0 )
                {
                  if ( (_DWORD)v28 == 0x7FFFFFFF )
                    goto LABEL_42;
                  v29 = v28 - 1;
                  v30 = v28;
                  v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 272), v28 - 1, v28);
                  if ( v30 == v28 )
                    goto LABEL_39;
                }
                v29 = sub_18006D208(2 * v28 + 16);
LABEL_39:
                if ( !v29 )
                {
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v26 + 8) + 392LL))(v26 + 8, 1LL);
                  if ( qword_18019E418 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
                }
LABEL_42:
                v10 = v54;
              }
              v13 = 0;
            }
            else
            {
              sub_1800E3414(&v56);
              sub_180071C40(&v53);
            }
          }
          else
          {
            sub_180071C40(&v53);
            v13 = -2147024882;
          }
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
        v31 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v31 > 4u )
        {
          v97 = 1LL;
          v95 = 1LL;
          v32 = *v58;
          v93 = 1LL;
          v91 = 4LL;
          v89 = 8LL;
          v43 = *v59;
          v44 = *(_BYTE *)(v10 + 49);
          v45 = *v12;
          v50 = v32;
          v87 = 16LL;
          v85 = 2LL;
          v62 = *v60;
          v33 = *v61;
          v83 = 4LL;
          LOWORD(v47) = *(_WORD *)(v33 + 2);
          v51 = *(_DWORD *)(*v61 + 4);
          v34 = *(_WORD **)v10;
          v64 = v46;
          v96 = &v43;
          v94 = &v44;
          v92 = &v45;
          v90 = &v50;
          v88 = &v62;
          v86 = v63;
          v84 = &v47;
          v82 = &v51;
          v52 = v13;
          if ( v34 )
          {
            v35 = -1LL;
            while ( v34[++v35] != 0 )
              ;
            v37 = 2 * v35 + 2;
          }
          else
          {
            v34 = &unk_18015C744;
            v37 = 2;
          }
          v79 = v34;
          v77 = &v52;
          v80 = v37;
          v75 = &v64;
          v67[1] = 4;
          v69 = *(unsigned __int16 **)(v31 + 8);
          v81 = 0;
          v78 = 4LL;
          v76 = 8LL;
          v67[0] = 184549376;
          v68 = 0LL;
          v70 = *v69;
          v72 = &unk_180167864;
          v71 = 2;
          v38 = *(_QWORD *)(v31 + 32);
          v73 = 163;
          v74 = 1;
          LODWORD(v48) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
          EtwEventWriteTransfer(v38, v67, 0LL);
        }
        if ( v13 >= 0 )
        {
          v48 = 0LL;
          v13 = sub_1800274A0(v46, &v48);
          if ( v13 >= 0 )
            v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v48);
          v39 = v48;
          if ( v48 )
          {
            v48 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          }
          if ( v13 >= 0 )
          {
            v40 = v46;
            v46 = 0LL;
            *v65 = v40;
          }
        }
      }
      else
      {
        v13 = -2147024882;
      }
    }
    else
    {
      v13 = -2147024882;
      v16 = 0LL;
    }
    v41 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v41)[2])(v41);
    }
    CoTaskMemFree(v16);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v13;
}
