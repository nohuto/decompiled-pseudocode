/*
 * XREFs of sub_18004997C @ 0x18004997C
 * Callers:
 *     sub_1800483B0 @ 0x1800483B0 (sub_1800483B0.c)
 * Callees:
 *     sub_1800104CC @ 0x1800104CC (sub_1800104CC.c)
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C0F0 @ 0x18004C0F0 (sub_18004C0F0.c)
 *     sub_18004C134 @ 0x18004C134 (sub_18004C134.c)
 *     sub_18004C1E0 @ 0x18004C1E0 (sub_18004C1E0.c)
 *     sub_18004C23C @ 0x18004C23C (sub_18004C23C.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_18012399C @ 0x18012399C (sub_18012399C.c)
 *     sub_180123C54 @ 0x180123C54 (sub_180123C54.c)
 *     sub_180124080 @ 0x180124080 (sub_180124080.c)
 *     sub_1801246E0 @ 0x1801246E0 (sub_1801246E0.c)
 *     sub_18012513C @ 0x18012513C (sub_18012513C.c)
 *     sub_180125444 @ 0x180125444 (sub_180125444.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_18004997C(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned __int16 *a4,
        __int128 *a5,
        _BYTE *a6,
        __int64 a7)
{
  __int64 v11; // r13
  int v12; // r14d
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int16 *v15; // r13
  char *v16; // rax
  unsigned __int64 v17; // r8
  int v18; // r9d
  unsigned int v19; // edx
  __int64 v20; // r9
  __int64 (__fastcall ***v21)(_QWORD, _WORD *); // rcx
  __int64 v22; // r15
  unsigned __int64 v23; // r8
  int v24; // r10d
  __int64 v25; // r9
  _OWORD *v26; // r15
  __int64 v27; // r13
  int v28; // eax
  int v29; // eax
  unsigned __int8 v30; // dl
  unsigned int v31; // r14d
  char *v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int v39; // ecx
  char v40; // dl
  int v41; // ecx
  int v42; // r8d
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  char v46; // dl
  char v47; // r10
  __int64 v48; // rcx
  int v49; // eax
  int v50; // ecx
  int v51; // ecx
  int v52; // r9d
  int v53; // ecx
  int v54; // r9d
  int v55; // r8d
  int v56; // r9d
  int v57; // ecx
  char v58; // [rsp+A0h] [rbp-80h] BYREF
  char v59; // [rsp+A1h] [rbp-7Fh]
  __int16 v60; // [rsp+A2h] [rbp-7Eh] BYREF
  __int16 v61; // [rsp+A4h] [rbp-7Ch] BYREF
  __int16 v62; // [rsp+A6h] [rbp-7Ah] BYREF
  _WORD v63[2]; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v64; // [rsp+ACh] [rbp-74h] BYREF
  char *v65; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v67; // [rsp+BCh] [rbp-64h] BYREF
  unsigned int v68; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v69; // [rsp+C4h] [rbp-5Ch] BYREF
  int v70; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-50h]
  __int64 v72; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v73; // [rsp+E0h] [rbp-40h] BYREF
  unsigned __int16 *v74[2]; // [rsp+E8h] [rbp-38h] BYREF
  unsigned int v75; // [rsp+F8h] [rbp-28h] BYREF
  int v76; // [rsp+FCh] [rbp-24h] BYREF
  int v77; // [rsp+100h] [rbp-20h]
  int v78; // [rsp+104h] [rbp-1Ch] BYREF
  char *v79; // [rsp+108h] [rbp-18h] BYREF
  __int128 *v80; // [rsp+110h] [rbp-10h] BYREF
  char *v81; // [rsp+118h] [rbp-8h] BYREF
  _QWORD v82[2]; // [rsp+120h] [rbp+0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+130h] [rbp+10h] BYREF
  __int64 v84; // [rsp+140h] [rbp+20h]
  _OWORD Buf2[5]; // [rsp+150h] [rbp+30h] BYREF
  __int128 v86; // [rsp+1A0h] [rbp+80h] BYREF
  __int128 v87; // [rsp+1B0h] [rbp+90h] BYREF
  _WORD v88[2]; // [rsp+1C0h] [rbp+A0h] BYREF
  unsigned int v89; // [rsp+1C4h] [rbp+A4h]
  __int16 v90; // [rsp+1C8h] [rbp+A8h]
  __int16 v91; // [rsp+1CAh] [rbp+AAh]
  char v92; // [rsp+1CCh] [rbp+ACh] BYREF
  int v93; // [rsp+1DCh] [rbp+BCh]
  __int64 v94; // [rsp+1F8h] [rbp+D8h]
  _OWORD Src[417]; // [rsp+200h] [rbp+E0h] BYREF

  v74[0] = a4;
  v72 = a2;
  v11 = a7;
  v71 = a7;
  v82[1] = a7;
  v64 = 0;
  v78 = 0;
  v80 = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int128 *))(*(_QWORD *)a5 + 8LL))(a5);
  v75 = 10;
  v86 = xmmword_18015B730;
  v12 = sub_1800104CC();
  memset(Buf2, 0, 0x48uLL);
  memset(Src, 0, sizeof(Src));
  LODWORD(v73) = -1;
  v67 = -1;
  v66 = -1;
  v59 = 0;
  v76 = 2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  *(_QWORD *)&v87 = a1;
  *(_BYTE *)(a1 + 76) = 0;
  if ( a3
    && a4
    && a5
    && *(_QWORD *)(a1 + 40)
    && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56)) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v64) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(*(_QWORD *)(a1 + 56), &v78) >= 0 )
  {
    if ( !*(_DWORD *)a3 && !v64 && *a4 == 0xFFFE && (unsigned __int8)sub_18004C134(a4 + 12) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
    }
    else
    {
      *(_OWORD *)pvar = xmmword_18015C470;
      LODWORD(v84) = 0;
      if ( (int)sub_18004A4F4(&v80, pvar, 10LL, &v75) >= 0 )
      {
        *(_OWORD *)pvar = xmmword_1801609E0;
        LODWORD(v84) = 2;
        if ( (int)sub_18004A4F4(&v80, pvar, 2LL, &v76) >= 0
          && (*(int (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 56) + 48LL))(*(_QWORD *)(a1 + 56), &v86) >= 0 )
        {
          *(_OWORD *)pvar = *(_OWORD *)sub_18004C23C(pvar, v64, a3);
          v15 = (unsigned __int16 *)(a3 + 12);
          v16 = (char *)pvar[0] - *(_QWORD *)(a3 + 12);
          if ( pvar[0] == *(PROPVARIANT *)(a3 + 12) )
            v16 = (char *)pvar[1] - *(_QWORD *)(a3 + 20);
          if ( v16 )
          {
            if ( (unsigned int)dword_18019C448 > 2
              && __vcrt_trace_logging_provider::_TlgKeywordOn(
                   (__vcrt_trace_logging_provider *)&dword_18019C448,
                   (const struct _TlgProvider_t *)0x10,
                   v14) )
            {
              v87 = *(_OWORD *)sub_18004C23C(v74, v64, a3);
              v80 = &v87;
              v65 = a3 + 12;
              v72 = *(_QWORD *)(v72 + 24);
              sub_180123C54(v36, (unsigned int)&unk_18016B172, v37, v38, (__int64)&v72, (__int64)&v65, (__int64)&v80);
            }
            goto LABEL_63;
          }
          v77 = sub_18004C0F0(a1);
          if ( v77 < 0 )
          {
LABEL_63:
            v11 = v71;
            goto LABEL_64;
          }
          if ( (v12 & 2) != 0 )
          {
            if ( v75 == 1 )
            {
              *(_OWORD *)pvar = 0LL;
              v84 = 0LL;
              if ( (*(int (__fastcall **)(__int128 *, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
                     a5,
                     &unk_18015C4B0,
                     pvar) < 0
                || !LOWORD(pvar[0])
                || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
              {
                v12 &= ~2u;
              }
              PropVariantClear(pvar);
            }
            else
            {
              v12 &= ~2u;
            }
          }
          sub_18004C1E0(v88, a4);
          v19 = dword_18019C448;
          if ( (unsigned int)dword_18019C448 > 4
            && (byte_18019C458 & 0x10) != 0
            && (qword_18019C460 & 0x10) == qword_18019C460 )
          {
            v39 = *((unsigned __int16 *)a3 + 34);
            v40 = *a3;
            v62 = v91;
            v61 = v90;
            v81 = &v92;
            v68 = v89;
            v70 = v93;
            v60 = v88[0];
            v82[0] = &v86;
            v69 = v64;
            v63[0] = v39;
            v79 = a3 + 12;
            v58 = v40;
            LODWORD(v65) = v12;
            pvar[0] = *(PROPVARIANT *)(a2 + 24);
            sub_18012513C(
              v39,
              (unsigned int)&unk_18016B2A0,
              v17,
              v18,
              (__int64)pvar,
              (__int64)&v65,
              (__int64)&v58,
              (__int64)&v79,
              (__int64)v63,
              (__int64)&v69,
              (__int64)v82,
              (__int64)&v60,
              (__int64)&v70,
              (__int64)&v68,
              (__int64)&v81,
              (__int64)&v61,
              (__int64)&v62);
            v19 = dword_18019C448;
          }
          LODWORD(Buf2[0]) = *(_DWORD *)a3;
          *(_OWORD *)((char *)Buf2 + 12) = *(_OWORD *)v15;
          DWORD1(Buf2[4]) = *((_DWORD *)a3 + 17);
          v20 = 0LL;
          if ( LODWORD(Buf2[0]) && (v12 & 3) != 0 )
          {
            if ( v19 > 4
              && __vcrt_trace_logging_provider::_TlgKeywordOn(
                   (__vcrt_trace_logging_provider *)&dword_18019C448,
                   (const struct _TlgProvider_t *)0x10,
                   v17) )
            {
              LODWORD(v65) = v12;
              pvar[0] = *(PROPVARIANT *)(v72 + 24);
              sub_1800512F4(v41, (unsigned int)&unk_18016B25C, v42, v20, (__int64)pvar, (__int64)&v65);
              v20 = 0LL;
            }
            LODWORD(Buf2[0]) = v20;
          }
          v69 = -1;
          LODWORD(v65) = -1;
          pvar[0] = v88;
          v94 = v20;
          v21 = *(__int64 (__fastcall ****)(_QWORD, _WORD *))(v71 + 56);
          if ( v21 )
          {
            v94 = (**v21)(v21, v88);
            v20 = 0LL;
          }
          v22 = v72;
          v68 = sub_18001D9E0(
                  a1,
                  1,
                  (__int64)Buf2,
                  0,
                  v20,
                  v75,
                  v64,
                  v20,
                  v74[0],
                  v20,
                  (__int64)v88,
                  *(_QWORD *)(v72 + 24),
                  v76,
                  (__int64)Src,
                  &v69,
                  (unsigned int *)&v73,
                  &v67,
                  (__int64)&v66,
                  (__int64)&v65,
                  (__int64)Buf2);
          v23 = (unsigned int)v73;
          v24 = 0;
          v25 = 0xFFFFFFFFLL;
          if ( LODWORD(Buf2[0]) && (_DWORD)v73 == -1 )
          {
            if ( (unsigned int)dword_18019C448 > 4
              && __vcrt_trace_logging_provider::_TlgKeywordOn(
                   (__vcrt_trace_logging_provider *)&dword_18019C448,
                   (const struct _TlgProvider_t *)0x10,
                   (unsigned int)v73) )
            {
              v74[0] = v15;
              pvar[0] = *(PROPVARIANT *)(v22 + 24);
              sub_18012399C(v43, (unsigned int)&unk_18016AFD4, v44, v45, (__int64)pvar, (__int64)v74);
            }
            goto LABEL_63;
          }
          LODWORD(Buf2[4]) = v12;
          *(_OWORD *)((char *)Buf2 + 12) = xmmword_18015B730;
          *(_OWORD *)((char *)&Buf2[1] + 12) = xmmword_18015B730;
          *(_OWORD *)((char *)&Buf2[2] + 12) = xmmword_18015B730;
          HIDWORD(Buf2[3]) = Buf2[0];
          if ( *a6 || (v13 = 1LL, !LODWORD(Buf2[0])) )
            v13 = 0LL;
          LODWORD(Buf2[0]) = v13;
          *(_QWORD *)((char *)Buf2 + 4) = 0LL;
          if ( (_DWORD)v73 != -1 )
          {
            *(_OWORD *)((char *)Buf2 + 12) = *(_OWORD *)((char *)&Src[48] + 834 * (unsigned int)v73);
            DWORD1(Buf2[0]) = *(_DWORD *)((char *)&Src[49] + 834 * (unsigned int)v73 + 4);
            if ( *(_DWORD *)((char *)&Src[49] + 834 * (unsigned int)v73 + 8)
              && DWORD1(Buf2[4]) == 1
              && (_DWORD)v13
              && (v12 & 4) == 0 )
            {
              DWORD2(Buf2[0]) = 1;
            }
            else
            {
              DWORD1(Buf2[4]) = 0;
            }
          }
          if ( v67 != -1 )
            *(_OWORD *)((char *)&Buf2[1] + 12) = *(_OWORD *)((char *)&Src[48] + 834 * v67);
          if ( v66 != -1 )
            *(_OWORD *)((char *)&Buf2[1] + 12) = *(_OWORD *)((char *)&Src[48] + 834 * v66);
          v26 = (_OWORD *)(a1 + 6856);
          *(_OWORD *)(a1 + 6856) = xmmword_18015B730;
          if ( (_DWORD)v23 != -1 && ((_DWORD)v13 || v64) )
            *v26 = *(_OWORD *)((char *)&Src[48] + 834 * v23);
          v27 = v68;
          if ( *(_DWORD *)(a1 + 176) != v68
            || (v28 = memcmp((const void *)(a1 + 104), Buf2, 0x48uLL), v24 = 0, v28)
            || (v29 = memcmp((const void *)(a1 + 180), Src, 834 * v27), v24 = 0, v29) )
          {
            v30 = 1;
            v59 = 1;
          }
          else
          {
            v30 = 0;
          }
          if ( (unsigned int)dword_18019C448 > 4
            && (byte_18019C458 & 0x10) != 0
            && (qword_18019C460 & 0x10) == qword_18019C460 )
          {
            v74[0] = (unsigned __int16 *)&Buf2[2] + 6;
            pvar[0] = (char *)&Buf2[1] + 12;
            v58 = BYTE4(Buf2[0]);
            LODWORD(v65) = v12;
            v69 = v27;
            v70 = v30;
            v79 = (char *)(a1 + 6856);
            v63[0] = WORD2(Buf2[4]);
            LOBYTE(v60) = BYTE8(Buf2[0]);
            v82[0] = (char *)Buf2 + 12;
            LOBYTE(v61) = BYTE12(Buf2[3]);
            LOBYTE(v62) = Buf2[0];
            v81 = *(char **)(v72 + 24);
            sub_180124080(
              v30,
              (unsigned int)&unk_18016AEB6,
              v23,
              v25,
              (__int64)&v81,
              (__int64)&v62,
              (__int64)&v61,
              (__int64)v82,
              (__int64)&v60,
              (__int64)v63,
              (__int64)&v79,
              (__int64)&v70,
              (__int64)&v69,
              (__int64)&v65,
              (__int64)&v58,
              (__int64)pvar,
              (__int64)v74);
            v24 = 0;
          }
          v31 = 0;
          if ( (_DWORD)v27 )
          {
            v32 = (char *)&Src[49] + 8;
            v33 = v68;
            do
            {
              if ( (unsigned int)dword_18019C448 > 4 && (byte_18019C458 & 0x10) != 0 )
              {
                if ( (qword_18019C460 & 0x10) == qword_18019C460 )
                {
                  v46 = v32[4];
                  LOBYTE(v23) = *v32;
                  LOBYTE(v25) = *(v32 - 4);
                  v47 = *(v32 - 8);
                  v48 = 834LL * v31;
                  v74[0] = (unsigned __int16 *)((char *)Src + v48);
                  v63[0] = *((_WORD *)v32 + 20);
                  LOWORD(v66) = *((_WORD *)v32 + 19);
                  LOWORD(v67) = *((_WORD *)v32 + 18);
                  pvar[0] = (char *)&Src[50] + v48 + 12;
                  LODWORD(v65) = *((_DWORD *)v32 + 4);
                  v69 = *((_DWORD *)v32 + 3);
                  v70 = *((_DWORD *)v32 + 2);
                  LOBYTE(v62) = v46;
                  LOBYTE(v61) = v23;
                  LOBYTE(v60) = v25;
                  v58 = v47;
                  v79 = (char *)&Src[48] + v48;
                  LODWORD(v73) = v31;
                  sub_180125444(
                    v48,
                    (unsigned int)&unk_18016B069,
                    v23,
                    v25,
                    (__int64)&v73,
                    (__int64)&v79,
                    (__int64)&v58,
                    (__int64)&v60,
                    (__int64)&v61,
                    (__int64)&v62,
                    (__int64)&v70,
                    (__int64)&v69,
                    (__int64)&v65,
                    (__int64)pvar,
                    (__int64)&v67,
                    (__int64)&v66,
                    (__int64)v63,
                    (__int64)v74);
                }
                v33 = v68;
              }
              ++v31;
              v32 += 834;
            }
            while ( v31 < v33 );
            LODWORD(v27) = v68;
            v24 = 0;
          }
          v34 = *(_QWORD *)v26 - v86;
          if ( *(_QWORD *)v26 == (_QWORD)v86 )
            v34 = *(_QWORD *)(a1 + 6864) - *((_QWORD *)&v86 + 1);
          if ( v34 )
          {
            v49 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 56LL))(
                    *(_QWORD *)(a1 + 64),
                    a1 + 6856);
            v25 = (unsigned int)v49;
            v77 = v49;
            v24 = 0;
            if ( v49 >= 0 )
              goto LABEL_60;
            if ( (unsigned int)dword_18019C448 > 2
              && __vcrt_trace_logging_provider::_TlgKeywordOn(
                   (__vcrt_trace_logging_provider *)&dword_18019C448,
                   (const struct _TlgProvider_t *)0x10,
                   v23) )
            {
              LODWORD(v65) = v25;
              v74[0] = *(unsigned __int16 **)(v72 + 24);
              sub_1800512F4(v50, (unsigned int)&unk_18016B024, v23, v25, (__int64)v74, (__int64)&v65);
              v24 = 0;
            }
          }
          if ( v77 < v24 )
          {
LABEL_61:
            if ( v59 )
            {
              if ( (*(int (__fastcall **)(_QWORD, _OWORD *, _OWORD *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                     *(_QWORD *)(a1 + 40),
                     Buf2,
                     Src,
                     (unsigned int)(834 * v27)) < 0 )
              {
                if ( (unsigned int)dword_18019C448 > 2
                  && __vcrt_trace_logging_provider::_TlgKeywordOn(
                       (__vcrt_trace_logging_provider *)&dword_18019C448,
                       (const struct _TlgProvider_t *)0x10,
                       v23) )
                {
                  LODWORD(v65) = v54;
                  v74[0] = *(unsigned __int16 **)(v72 + 24);
                  sub_1800512F4(v53, (unsigned int)&unk_18016AC12, v23, v54, (__int64)v74, (__int64)&v65);
                }
              }
              else
              {
                *(_OWORD *)(a1 + 104) = Buf2[0];
                *(_OWORD *)(a1 + 120) = Buf2[1];
                *(_OWORD *)(a1 + 136) = Buf2[2];
                *(_OWORD *)(a1 + 152) = Buf2[3];
                *(_QWORD *)(a1 + 168) = *(_QWORD *)&Buf2[4];
                *(_DWORD *)(a1 + 176) = v27;
                memcpy((void *)(a1 + 180), Src, 834LL * (unsigned int)v27);
                *(_BYTE *)(a1 + 6852) = 1;
              }
            }
            if ( DWORD2(Buf2[0]) != *(_DWORD *)(a1 + 80) )
            {
              if ( (unsigned int)dword_18019C448 > 4
                && __vcrt_trace_logging_provider::_TlgKeywordOn(
                     (__vcrt_trace_logging_provider *)&dword_18019C448,
                     (const struct _TlgProvider_t *)0x10,
                     v23) )
              {
                v57 = *(unsigned __int16 *)(a1 + 80);
                LOWORD(v67) = WORD4(Buf2[0]);
                LOWORD(v66) = v57;
                v74[0] = *(unsigned __int16 **)(v72 + 24);
                sub_1801246E0(v57, (unsigned int)&unk_18016AE6C, v55, v56, (__int64)v74, (__int64)&v66, (__int64)&v67);
              }
              *(_DWORD *)(a1 + 80) = DWORD2(Buf2[0]);
            }
            goto LABEL_63;
          }
LABEL_60:
          if ( v64 != v24
            && v78 == v24
            && (*(int (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64))(**(_QWORD **)(a1 + 64) + 48LL))(
                 *(_QWORD *)(a1 + 64),
                 1LL,
                 v23,
                 v25) < 0
            && (unsigned int)dword_18019C448 > 2
            && __vcrt_trace_logging_provider::_TlgKeywordOn(
                 (__vcrt_trace_logging_provider *)&dword_18019C448,
                 (const struct _TlgProvider_t *)0x10,
                 v23) )
          {
            LODWORD(v65) = v52;
            v74[0] = *(unsigned __int16 **)(v72 + 24);
            sub_1800512F4(v51, (unsigned int)&unk_18016AC50, v23, v52, (__int64)v74, (__int64)&v65);
          }
          goto LABEL_61;
        }
      }
    }
  }
LABEL_64:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a5 )
    (*(void (__fastcall **)(__int128 *))(*(_QWORD *)a5 + 16LL))(a5);
  v35 = *(_QWORD *)(v11 + 56);
  if ( v35 )
  {
    LOBYTE(v13) = v35 != v11;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 32LL))(v35, v13);
    *(_QWORD *)(v11 + 56) = 0LL;
  }
}
