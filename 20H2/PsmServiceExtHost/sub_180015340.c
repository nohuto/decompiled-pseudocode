/*
 * XREFs of sub_180015340 @ 0x180015340
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 * Callees:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180011518 @ 0x180011518 (sub_180011518.c)
 *     sub_180012984 @ 0x180012984 (sub_180012984.c)
 *     sub_180012A60 @ 0x180012A60 (sub_180012A60.c)
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_180015170 @ 0x180015170 (sub_180015170.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 *     sub_180033C34 @ 0x180033C34 (sub_180033C34.c)
 *     sub_18003C57C @ 0x18003C57C (sub_18003C57C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180015340(__int64 a1, int a2)
{
  char v2; // r12
  _QWORD *v3; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  _OWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r15
  int v24; // ebx
  __int64 v25; // r8
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  WCHAR *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r14
  __int64 v35; // r10
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rcx
  unsigned int v41; // [rsp+20h] [rbp-E0h]
  _BYTE v42[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  int v44; // [rsp+58h] [rbp-A8h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int128 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  _WORD v49[232]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v50; // [rsp+260h] [rbp+160h] BYREF
  __int128 v51; // [rsp+270h] [rbp+170h]
  __int128 v52; // [rsp+280h] [rbp+180h]
  __int128 v53; // [rsp+290h] [rbp+190h]
  int v54; // [rsp+2A0h] [rbp+1A0h]
  int v55; // [rsp+2A4h] [rbp+1A4h]
  _BYTE v56[464]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v2 = a2;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 1312) + 80LL);
  v44 = a2;
  v5 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_38;
  v6 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v6 != v3 )
    goto LABEL_38;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_OWORD *)v3 = 0LL;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 1480);
  v41 = *(_DWORD *)(a1 + 8);
  v47 = *(_OWORD *)(a1 + 1464);
  v48 = v8;
  LODWORD(v9) = sub_180015170(v7, 1, 1u, (int *)&v47, v41, 1, &v43, v42, 0LL, a1);
  v10 = *(_QWORD *)(a1 + 1320);
  *(_DWORD *)(a1 + 1280) = 2;
  if ( (*(_BYTE *)(v10 + 836) & 1) == 0 )
    goto LABEL_25;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = (_OWORD *)(a1 + 1296);
  v13 = *(_QWORD *)(a1 + 1296);
  v45 = v11;
  if ( *(_QWORD *)(v13 + 8) != a1 + 1296 )
    goto LABEL_38;
  v14 = *(_QWORD **)(a1 + 1304);
  if ( (_OWORD *)*v14 != v12 )
    goto LABEL_38;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  --*(_DWORD *)(v10 + 1128);
  v15 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 1328) = 2;
  (*(void (__fastcall **)(__int64))(v15 + 16))(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v16 = *(_QWORD *)(a1 + 1320);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v17 = (_DWORD *)(v16 + 1136);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v18 = *(_QWORD *)v17;
  if ( *(_DWORD **)(*(_QWORD *)v17 + 8LL) != v17 )
LABEL_38:
    __fastfail(3u);
  *(_QWORD *)v12 = v18;
  *(_QWORD *)(a1 + 1304) = v17;
  *(_QWORD *)(v18 + 8) = v12;
  *(_QWORD *)v17 = v12;
  ++v17[4];
  *(_DWORD *)(a1 + 1328) = 1;
  *(_BYTE *)(a1 + 12) = 1;
  sub_180012A60(v10, 3);
  sub_180016840(v10, 3LL);
  QueryUnbiasedInterruptTime((PULONGLONG)(v10 + 1456));
  if ( (unsigned int)sub_180012D40(v10) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v10 + 56) + 88LL));
  v19 = *(_QWORD *)(v10 + 48);
  v20 = 0LL;
  *(_QWORD *)(v10 + 1208) = 0LL;
  v21 = *(_QWORD *)(v19 + 2720);
  v22 = *(_DWORD *)(v21 + 160);
  if ( (v22 & 3) == 0 )
  {
    *(_DWORD *)(v21 + 160) = v22 | 1;
    TpPostWork(*(_QWORD *)(v21 + 144));
  }
  if ( (*(_BYTE *)(v10 + 836) & 1) != 0 || (LODWORD(v9) = sub_180007A80((_QWORD *)v10), (int)v9 >= 0) )
  {
    LODWORD(v9) = sub_180012DB4(v11, v10);
    if ( *(_DWORD *)(v10 + 624) == 2 )
    {
      v42[0] = 0;
      LODWORD(v9) = sub_180011518(v10 + 88, v42);
      if ( !v42[0] )
      {
        v23 = *(_QWORD *)(v10 + 48);
        v46 = v23;
        LODWORD(v9) = sub_180010220(v10 + 88, (__int64)v56);
        if ( (int)v9 >= 0 )
        {
          v24 = *(_DWORD *)(v10 + 620);
          memset(v49, 0, sizeof(v49));
          sub_1800114C0(v49, 232LL, v25, (__int64)v56);
          v26 = *(_OWORD *)(v10 + 552);
          v27 = *(_OWORD *)(v10 + 568);
          v54 = *(_DWORD *)(v10 + 616);
          v50 = v26;
          v28 = *(_OWORD *)(v10 + 584);
          v55 = v24;
          v51 = v27;
          v29 = *(_OWORD *)(v10 + 600);
          v52 = v28;
          v53 = v29;
          v30 = v49;
          v31 = 314159LL;
          do
          {
            LOWORD(v43) = RtlUpcaseUnicodeChar(*v30++);
            v31 = BYTE1(v43) + 37 * ((unsigned __int8)v43 + 37 * v31);
          }
          while ( v30 < (WCHAR *)&v50 );
          v32 = BYTE1(v55)
              + 37
              * ((unsigned __int8)v55
               + 37
               * (HIBYTE(v54)
                + 37
                * (BYTE2(v54)
                 + 37
                 * (BYTE1(v54)
                  + 37
                  * ((unsigned __int8)v54
                   + 37
                   * (HIBYTE(v53) + 37 * (BYTE14(v53) + 37 * (BYTE13(v53) + 37 * (BYTE12(v53) + 37LL * BYTE11(v53))))))))));
          v33 = 0xBEEC149AF4096455uLL * BYTE2(v52)
              + 0x3C82EBCCD629C471LL * BYTE3(v52)
              + 0x8DBD43762DDB26BDuLL * BYTE12(v51)
              + 0x78803D01F0C17231LL * BYTE3(v51)
              + 0xF5BCA5B282606D41uLL * BYTE7(v51)
              + 0x423D249C25A50325LL * BYTE6(v50)
              + 0x407AFAF12AFB592DLL * BYTE8(v52)
              + 0x4128EAEEFF459821LL * HIBYTE(v50)
              + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v53
              + 0xAA604B65C241EDD5uLL * BYTE2(v50)
              + 0xBD1CBAC2ED25B97DuLL * BYTE12(v50)
              + 0xBD90C36322378919uLL * BYTE5(v53)
              + 0x2B26220C747DAB5DLL * BYTE4(v52)
              + 0x84417E6FF051D6ADuLL * BYTE8(v50)
              + 0x92D64A9170D97459uLL * BYTE5(v50)
              + 0x38F8C7054F6DD0DDLL * BYTE4(v50)
              + 0x1CF3332BD290D80DLL * (unsigned __int8)v50
              + 0x2ECBEADD94E1B3F5LL * BYTE10(v52)
              + 0xDB9C20F4D76948E5uLL * BYTE6(v53)
              + 0x1D77462DBBD40701LL * BYTE7(v50)
              + 0xB5A728F1B3DF494DuLL * (unsigned __int8)v51
              + 0x6A88D147CBF58115LL * BYTE2(v51)
              + 0x8443F2CCD7EFCA65uLL * BYTE6(v51)
              + 0x4FE1DAF580C363FDLL * BYTE12(v52)
              + 0x8B7970C2A4EFB2A9uLL * BYTE9(v53)
              + 0x4D463845869B9CD9LL * BYTE5(v52)
              + 0x5D853AC4C14E51E9LL * BYTE9(v50)
              + 0x65EC3D53F206D09DLL * BYTE4(v53)
              + 0x1DD2179B35A84099LL * BYTE5(v51)
              + 0xC8228AB72E6AE889uLL * BYTE1(v53)
              + 0x7C5AC014A0AC9951LL * BYTE11(v51)
              + 0x6AE9F48AE50EFCC5LL * BYTE14(v50)
              + 0x65C63F607A7BA809LL * BYTE1(v51)
              + 0x3433B6F080FF8F35LL * BYTE10(v53)
              + 0x5A90B6DB573C2B45LL * BYTE14(v52)
              + 0xD1A7F3AEDA1FE1A5uLL * BYTE6(v52)
              + 0x7DA9078FE6510661LL * HIBYTE(v51)
              + 0x296E17CC49B5EC05LL * BYTE14(v51)
              + 0x981EFA65455B8049uLL * BYTE1(v52)
              + 0x14D2E4F3AFFE229LL * (BYTE9(v51) + 37LL * BYTE8(v51))
              + 37 * (BYTE2(v55) + 37 * v32);
          v34 = HIBYTE(v55)
              + 0x2F2665556EEF39E1LL * v31
              + 0xC53F5E946719795LL * BYTE2(v53)
              + 0x16EA6DB39BB240F9LL * BYTE13(v52)
              + 0x5526FE2C4673CF11LL * BYTE11(v50)
              + 0xF91DC2FB38F228B5uLL * BYTE10(v51)
              + 0x3BF4C3C47ADF2FF1LL * BYTE3(v50)
              + 0x40B7CD9739B584A1LL * HIBYTE(v52)
              + 0xDC6C00E405D269C1uLL * BYTE7(v53)
              + 0x4EA2BC662EBCED75LL * BYTE10(v50)
              + 0x4F5D696EC151561DLL * BYTE4(v51)
              + 0x9FEAE5B513875FC9uLL * BYTE1(v50)
              + 0xFCE97086A74B1CB9uLL * BYTE13(v51)
              + 0xC378F206849F0269uLL * BYTE9(v52)
              + 0xFC7A30A306398A8DuLL * (unsigned __int8)v52
              + 0x51C644DB3653E381LL * BYTE7(v52)
              + 0x73D058131B2A8879LL * BYTE13(v50)
              + 0x8BA4A57B9C3D7391uLL * BYTE11(v52)
              + 0x288D4C21D6A4D26DLL * BYTE8(v53)
              + 0xBB24DD21FAFC26B1uLL * BYTE3(v53)
              + v33;
          v20 = 0LL;
LABEL_18:
          v43 = *(_DWORD *)(v23 + 2548);
          LODWORD(v9) = v43 & 0x1F;
          v35 = -1LL << (v43 & 0x1F);
          v36 = v34 & v35;
          v37 = (v34 & v35) >> 48;
          if ( v20 )
          {
            v23 = v46;
            goto LABEL_20;
          }
          if ( v43 >> 5 )
          {
            v23 = v46;
            v9 = *(_QWORD *)(v46 + 2552);
            v20 = (_QWORD *)(v9
                           + 8
                           * ((((v34 & v35) >> 56)
                             + 37
                             * ((unsigned __int8)v37
                              + 37
                              * ((unsigned __int8)((unsigned __int16)((v34 & v35) >> 32) >> 8)
                               + 37
                               * ((unsigned __int8)((v34 & v35) >> 32)
                                + 37
                                * ((((unsigned int)v34 & (unsigned int)v35) >> 24)
                                 + 37
                                 * ((unsigned __int8)(((unsigned int)v34 & (unsigned int)v35) >> 16)
                                  + 37
                                  * ((unsigned __int8)((unsigned __int16)(v34 & v35) >> 8)
                                   + 37 * ((unsigned __int8)v36 + 11623883)))))))) & ((v43 >> 5) - 1)));
LABEL_20:
            while ( 1 )
            {
              v20 = (_QWORD *)*v20;
              if ( ((unsigned __int8)v20 & 1) != 0 )
                break;
              v9 = v35 & v20[1];
              if ( v36 == v9 )
              {
                LODWORD(v9) = sub_180033C34(v20, v49, v37);
                if ( !(_DWORD)v9 )
                  goto LABEL_18;
                v2 = v44;
                v11 = v45;
                if ( !v20 )
                  goto LABEL_33;
                goto LABEL_24;
              }
            }
          }
          v11 = v45;
          v2 = v44;
LABEL_33:
          v20 = 0LL;
        }
LABEL_24:
        v38 = v20[71];
        if ( v38 )
        {
          LODWORD(v9) = sub_18003C57C(v38);
          if ( (_BYTE)v9 )
            LODWORD(v9) = sub_180012DB4(v11, v38);
        }
      }
    }
  }
LABEL_25:
  if ( (v2 & 1) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 1712);
    if ( v39 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 32LL))(v39, *(_QWORD *)(a1 + 1720));
    *(_DWORD *)(a1 + 1332) |= 1u;
    LODWORD(v9) = sub_180012984(a1);
  }
  return v9;
}
