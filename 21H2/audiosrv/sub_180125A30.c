/*
 * XREFs of sub_180125A30 @ 0x180125A30
 * Callers:
 *     sub_18011BA2C @ 0x18011BA2C (sub_18011BA2C.c)
 * Callees:
 *     sub_1800104CC @ 0x1800104CC (sub_1800104CC.c)
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004B9F0 @ 0x18004B9F0 (sub_18004B9F0.c)
 *     sub_18004C0F0 @ 0x18004C0F0 (sub_18004C0F0.c)
 *     sub_18004C134 @ 0x18004C134 (sub_18004C134.c)
 *     sub_18004C1E0 @ 0x18004C1E0 (sub_18004C1E0.c)
 *     sub_18004C23C @ 0x18004C23C (sub_18004C23C.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_1800E4318 @ 0x1800E4318 (sub_1800E4318.c)
 *     sub_18012399C @ 0x18012399C (sub_18012399C.c)
 *     sub_180123C54 @ 0x180123C54 (sub_180123C54.c)
 *     sub_180124B10 @ 0x180124B10 (sub_180124B10.c)
 *     sub_180124F14 @ 0x180124F14 (sub_180124F14.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180125A30(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int16 *a5,
        _QWORD *a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9,
        __int64 a10,
        _BYTE *a11)
{
  int v14; // r14d
  _QWORD *v15; // rdx
  int v16; // ebx
  unsigned __int16 *v17; // r8
  _QWORD *v18; // r11
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  char v22; // dl
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 *v26; // rdx
  char v27; // al
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r9d
  char *v34; // rax
  void *v35; // r10
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __int16 v52; // ax
  int v53; // edx
  unsigned __int16 v54; // cx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rcx
  LPVOID pv; // [rsp+D0h] [rbp-80h] BYREF
  char v63; // [rsp+D8h] [rbp-78h] BYREF
  char v64; // [rsp+D9h] [rbp-77h] BYREF
  char v65; // [rsp+DAh] [rbp-76h] BYREF
  char v66; // [rsp+DBh] [rbp-75h]
  _WORD v67[2]; // [rsp+DCh] [rbp-74h] BYREF
  unsigned int v68; // [rsp+E0h] [rbp-70h] BYREF
  _WORD v69[2]; // [rsp+E4h] [rbp-6Ch] BYREF
  int v70; // [rsp+E8h] [rbp-68h] BYREF
  int v71; // [rsp+ECh] [rbp-64h] BYREF
  ULONG v72; // [rsp+F0h] [rbp-60h] BYREF
  int v73; // [rsp+F4h] [rbp-5Ch] BYREF
  void *v74; // [rsp+F8h] [rbp-58h] BYREF
  __int16 v75; // [rsp+100h] [rbp-50h] BYREF
  __int16 v76; // [rsp+102h] [rbp-4Eh] BYREF
  __int16 v77; // [rsp+104h] [rbp-4Ch] BYREF
  unsigned int v78; // [rsp+108h] [rbp-48h] BYREF
  unsigned int v79; // [rsp+10Ch] [rbp-44h] BYREF
  __int16 v80; // [rsp+110h] [rbp-40h] BYREF
  __int16 v81; // [rsp+112h] [rbp-3Eh] BYREF
  _QWORD *v82; // [rsp+118h] [rbp-38h]
  _BYTE *v83; // [rsp+120h] [rbp-30h]
  void *v84; // [rsp+128h] [rbp-28h] BYREF
  _BYTE *v85; // [rsp+130h] [rbp-20h] BYREF
  __int64 v86; // [rsp+138h] [rbp-18h] BYREF
  __int64 v87; // [rsp+140h] [rbp-10h]
  __int128 v88; // [rsp+148h] [rbp-8h] BYREF
  __int64 v89; // [rsp+158h] [rbp+8h]
  PROPVARIANT pvar[2]; // [rsp+160h] [rbp+10h] BYREF
  __int64 v91; // [rsp+170h] [rbp+20h]
  __int16 v92[2]; // [rsp+180h] [rbp+30h] BYREF
  int v93; // [rsp+184h] [rbp+34h]
  __int16 v94; // [rsp+188h] [rbp+38h]
  __int16 v95; // [rsp+18Ah] [rbp+3Ah]
  char v96; // [rsp+18Ch] [rbp+3Ch] BYREF
  unsigned int v97; // [rsp+19Ch] [rbp+4Ch]
  __int128 v98; // [rsp+1A0h] [rbp+50h] BYREF
  _WORD v99[2]; // [rsp+1B0h] [rbp+60h] BYREF
  unsigned int v100; // [rsp+1B4h] [rbp+64h]
  __int16 v101; // [rsp+1B8h] [rbp+68h]
  __int16 v102; // [rsp+1BAh] [rbp+6Ah]
  _BYTE v103[16]; // [rsp+1BCh] [rbp+6Ch] BYREF
  int v104; // [rsp+1CCh] [rbp+7Ch]
  _DWORD v105[1668]; // [rsp+1F0h] [rbp+A0h] BYREF

  v66 = a3;
  v82 = a6;
  v87 = a9;
  v89 = a9;
  v83 = a11;
  v72 = 10;
  v14 = sub_1800104CC();
  v70 = 0;
  v86 = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  *(_QWORD *)&v98 = a1;
  *(_BYTE *)(a1 + 76) = 1;
  if ( !v83
    || (*v83 = 0, !a10)
    || (*(_OWORD *)a10 = 0LL, *(_OWORD *)(a10 + 16) = 0LL, *(_QWORD *)(a10 + 32) = 0LL, !a4)
    || !a6
    || !a7 )
  {
    v16 = -2147467261;
    goto LABEL_94;
  }
  *(_OWORD *)pvar = xmmword_18015C470;
  LODWORD(v91) = 0;
  v16 = sub_18004A4F4(&v86, (__int128 *)pvar, 0xAu, &v72);
  if ( v16 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v70);
    if ( v16 >= 0 )
    {
      if ( (v14 & 2) != 0 )
      {
        if ( v72 == 1 )
        {
          *(_OWORD *)pvar = 0LL;
          v91 = 0LL;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a7 + 40LL))(a7, &unk_18015C4B0, pvar) < 0
            || !LOWORD(pvar[0])
            || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
          {
            v14 &= ~2u;
          }
          PropVariantClear(pvar);
        }
        else
        {
          v14 &= ~2u;
        }
      }
      sub_18004C1E0((__int64)v99, (__int64)a5);
      sub_18004C1E0((__int64)v92, (__int64)v82);
      LODWORD(v19) = dword_18019C448;
      if ( (unsigned int)dword_18019C448 > 4 )
      {
        if ( __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
        {
          v21 = *(unsigned __int16 *)(a4 + 68);
          v22 = *(_BYTE *)(a4 + 8);
          LOBYTE(v20) = *(_BYTE *)(a4 + 60);
          LOBYTE(v19) = *(_BYTE *)a4;
          v80 = v95;
          v81 = v94;
          *(_QWORD *)&v88 = &v96;
          LODWORD(v84) = v93;
          v78 = v97;
          v75 = v92[0];
          v76 = v102;
          v77 = v101;
          v85 = v103;
          v79 = v100;
          v71 = v104;
          LOWORD(v73) = v99[0];
          v69[0] = v72;
          v67[0] = v70;
          LOWORD(v68) = v21;
          v63 = v22;
          v74 = (void *)(a4 + 12);
          v64 = v20;
          v65 = v19;
          LODWORD(pv) = v14;
          pvar[0] = *(PROPVARIANT *)(a2 + 24);
          sub_180124F14(
            v21,
            byte_18016AC91,
            v20,
            v19,
            pvar,
            (__int64)&pv,
            (__int64)&v65,
            (__int64)&v64,
            (__int64 *)&v74,
            (__int64)&v63,
            (__int64)&v68,
            (__int64)v67,
            (__int64)v69,
            (__int64)&v73,
            (__int64)&v71,
            (__int64)&v79,
            (__int64 *)&v85,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v75,
            (__int64)&v78,
            (__int64)&v84,
            (__int64 *)&v88,
            (__int64)&v81,
            (__int64)&v80);
          LODWORD(v19) = dword_18019C448;
          LODWORD(v18) = 0;
        }
        v15 = v82;
        v17 = a5;
      }
      if ( *(_DWORD *)a4 == (_DWORD)v18 )
      {
        if ( v17 )
        {
          if ( *v17 != 0xFFFE )
            goto LABEL_48;
          v23 = sub_18004C134((_QWORD *)v17 + 3);
          LOBYTE(v18) = 0;
          if ( v23 )
          {
            if ( (unsigned int)dword_18019C448 <= 2
              || !__vcrt_trace_logging_provider::_TlgKeywordOn(
                    (__vcrt_trace_logging_provider *)&dword_18019C448,
                    0x10uLL) )
            {
              goto LABEL_32;
            }
            v26 = (unsigned __int8 *)&unk_18016AB4D;
LABEL_31:
            pvar[0] = *(PROPVARIANT *)(a2 + 24);
            sub_1800B7704((__int64)&dword_18019C448, v26, v24, v25, pvar);
LABEL_32:
            v16 = -2147024846;
            goto LABEL_94;
          }
          goto LABEL_47;
        }
        if ( *(_WORD *)v15 != 0xFFFE )
          goto LABEL_48;
        v27 = sub_18004C134(v15 + 3);
        v18 = 0LL;
        if ( !v27 )
        {
LABEL_47:
          LODWORD(v19) = dword_18019C448;
LABEL_48:
          if ( (unsigned int)v19 > 4
            && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
          {
            pvar[0] = *(PROPVARIANT *)(a2 + 24);
            sub_1800B7704((__int64)&dword_18019C448, byte_18016ABD0, v31, v32, pvar);
            LOBYTE(v18) = 0;
          }
          *v83 = (_BYTE)v18;
          goto LABEL_94;
        }
        if ( (unsigned int)dword_18019C448 > 4
          && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
        {
          pvar[0] = *(PROPVARIANT *)(a2 + 24);
          sub_1800B7704((__int64)&dword_18019C448, byte_18016AB04, v28, v29, pvar);
          v18 = 0LL;
        }
        pv = v18;
        pvar[0] = &pv;
        pvar[1] = v18;
        LOBYTE(v91) = 1;
        v16 = sub_180028AD0(a2, 0, 1, &pvar[1], v18, v18, v18);
        if ( (_BYTE)v91 )
        {
          v15 = *(_QWORD **)pvar[0];
          *(_QWORD *)pvar[0] = pvar[1];
          if ( v15 )
            CoTaskMemFree(v15);
        }
        if ( v16 >= 0 )
        {
          if ( (unsigned int)sub_1800E4318(a10, (unsigned __int16 *)pv) )
            *v83 = 1;
          else
            v16 = -2147418113;
        }
        v30 = pv;
        pv = 0LL;
        if ( v30 )
          CoTaskMemFree(v30);
      }
      else
      {
        if ( v66 != (_BYTE)v18 )
        {
          if ( (unsigned int)v19 > 4
            && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
          {
            sub_1800521E8((__int64)&dword_18019C448, byte_18016AB94, 0LL, 0LL, 2, (__int64)v99);
          }
          goto LABEL_32;
        }
        *(_OWORD *)pvar = *sub_18004C23C(pvar, v70, a4);
        v84 = (void *)(a4 + 12);
        v34 = (char *)pvar[0] - *(_QWORD *)(a4 + 12);
        if ( pvar[0] == *(PROPVARIANT *)(a4 + 12) )
          v34 = (char *)pvar[1] - *(_QWORD *)(a4 + 20);
        if ( v34 )
        {
          if ( v33 > 4
            && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
          {
            v98 = *sub_18004C23C(&v88, v70, a4);
            pvar[0] = &v98;
            v74 = v35;
            v85 = *(_BYTE **)(a2 + 24);
            sub_180123C54(v36, byte_18016A9FF, v37, v38, (void **)&v85, (__int64 *)&v74, (__int64 *)pvar);
          }
          goto LABEL_32;
        }
        v78 = -1;
        v68 = -1;
        v79 = -1;
        v71 = -1;
        LODWORD(pv) = -1;
        v73 = 2;
        memset(v105, 0, sizeof(v105));
        v16 = sub_18004C0F0(a1);
        if ( v16 >= 0 )
        {
          sub_18004B9F0(v39, (__int64)v15, v40);
          if ( dword_18019F770[0] <= 8u )
          {
            *(_OWORD *)pvar = xmmword_1801609E0;
            LODWORD(v91) = 2;
            v16 = sub_18004A4F4(&v86, (__int128 *)pvar, 2u, (ULONG *)&v73);
            if ( v16 >= 0 )
            {
              v41 = sub_18005B754((__int64)v99, v87);
              v42 = (__int64)v82;
              if ( a5 )
                v42 = 0LL;
              sub_18001D9E0(
                a1,
                1,
                a4,
                0,
                0LL,
                v72,
                v70,
                v42,
                a5,
                0,
                v41,
                *(_QWORD *)(a2 + 24),
                v73,
                (__int64)v105,
                &v78,
                &v68,
                &v79,
                (__int64)&v71,
                (__int64)&pv,
                0LL);
              if ( v68 == -1 )
              {
                if ( (unsigned int)dword_18019C448 > 2
                  && __vcrt_trace_logging_provider::_TlgKeywordOn(
                       (__vcrt_trace_logging_provider *)&dword_18019C448,
                       0x10uLL) )
                {
                  pvar[0] = v84;
                  v74 = *(void **)(a2 + 24);
                  sub_18012399C(v43, byte_18016A9A8, v44, v45, &v74, (__int64 *)pvar);
                }
                goto LABEL_32;
              }
              v46 = 834LL * v68;
              if ( *(_DWORD *)((char *)&v105[196] + v46) )
              {
                if ( *a8 )
                {
                  if ( (unsigned int)dword_18019C448 <= 2
                    || !__vcrt_trace_logging_provider::_TlgKeywordOn(
                          (__vcrt_trace_logging_provider *)&dword_18019C448,
                          0x10uLL) )
                  {
                    goto LABEL_32;
                  }
                  v26 = (unsigned __int8 *)&unk_18016AA6D;
                  goto LABEL_31;
                }
                if ( *(_DWORD *)(a4 + 68) == 1 && (v14 & 4) != 0 )
                {
                  if ( (unsigned int)dword_18019C448 <= 2
                    || !__vcrt_trace_logging_provider::_TlgKeywordOn(
                          (__vcrt_trace_logging_provider *)&dword_18019C448,
                          0x10uLL) )
                  {
                    goto LABEL_32;
                  }
                  v26 = (unsigned __int8 *)&unk_18016A892;
                  goto LABEL_31;
                }
                if ( (v14 & 3) != 0 )
                {
                  if ( (unsigned int)dword_18019C448 > 2
                    && __vcrt_trace_logging_provider::_TlgKeywordOn(
                         (__vcrt_trace_logging_provider *)&dword_18019C448,
                         0x10uLL) )
                  {
                    LODWORD(pv) = v14;
                    pvar[0] = *(PROPVARIANT *)(a2 + 24);
                    sub_1800512F4((__int64)&dword_18019C448, byte_18016A84F, v50, v51, pvar, (__int64)&pv);
                  }
                  goto LABEL_32;
                }
                *(_WORD *)a10 = -2;
                v52 = *(_WORD *)((char *)&v105[207] + v46);
                *(_WORD *)(a10 + 2) = v52;
                v53 = *(_DWORD *)((char *)&v105[201] + v46);
                *(_DWORD *)(a10 + 4) = v53;
                v54 = *(_WORD *)((char *)&v105[207] + v46 + 2);
                *(_WORD *)(a10 + 14) = v54;
                v55 = (unsigned __int16)(v52 * (v54 >> 3));
                *(_WORD *)(a10 + 12) = v55;
                *(_DWORD *)(a10 + 8) = v53 * v55;
                *(_WORD *)(a10 + 16) = 22;
                *(_DWORD *)(a10 + 20) = *(_DWORD *)((char *)&v105[202] + v46);
                *(_OWORD *)(a10 + 24) = *(_OWORD *)((char *)&v105[203] + v46);
                *(_WORD *)(a10 + 18) = *(_WORD *)((char *)&v105[208] + v46);
                sub_18004C1E0((__int64)v99, a10);
                if ( (unsigned int)dword_18019C448 > 4
                  && __vcrt_trace_logging_provider::_TlgKeywordOn(
                       (__vcrt_trace_logging_provider *)&dword_18019C448,
                       0x10uLL) )
                {
                  LOWORD(v68) = v102;
                  v67[0] = v101;
                  pvar[0] = v103;
                  LODWORD(pv) = v100;
                  v71 = v104;
                  v69[0] = v99[0];
                  v74 = *(void **)(a2 + 24);
                  sub_180124B10(
                    v56,
                    byte_18016A921,
                    v57,
                    v58,
                    &v74,
                    (__int64)v69,
                    (__int64)&v71,
                    (__int64)&pv,
                    (__int64 *)pvar,
                    (__int64)v67,
                    (__int64)&v68);
                }
                *v83 = 1;
              }
              else
              {
                if ( (unsigned int)dword_18019C448 > 2
                  && __vcrt_trace_logging_provider::_TlgKeywordOn(
                       (__vcrt_trace_logging_provider *)&dword_18019C448,
                       0x10uLL) )
                {
                  pvar[0] = v84;
                  v74 = *(void **)(a2 + 24);
                  sub_18012399C(v47, byte_18016AAAE, v48, v49, &v74, (__int64 *)pvar);
                }
                v16 = -2147009035;
              }
            }
          }
          else
          {
            v16 = -2147418113;
          }
        }
      }
    }
  }
LABEL_94:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
  v59 = v87;
  v60 = *(_QWORD *)(v87 + 56);
  if ( v60 )
  {
    LOBYTE(v15) = v60 != v87;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v60 + 32LL))(v60, v15);
    *(_QWORD *)(v59 + 56) = 0LL;
  }
  return (unsigned int)v16;
}
