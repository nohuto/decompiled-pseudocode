/*
 * XREFs of sub_180010990 @ 0x180010990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_180010360 @ 0x180010360 (sub_180010360.c)
 *     sub_180010560 @ 0x180010560 (sub_180010560.c)
 *     sub_180011518 @ 0x180011518 (sub_180011518.c)
 *     sub_180012A60 @ 0x180012A60 (sub_180012A60.c)
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 *     sub_180018A60 @ 0x180018A60 (sub_180018A60.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_1800223BC @ 0x1800223BC (sub_1800223BC.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180033C34 @ 0x180033C34 (sub_180033C34.c)
 *     sub_18003C57C @ 0x18003C57C (sub_18003C57C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180010990(__int64 a1, char a2)
{
  __int64 v2; // rsi
  int v4; // r11d
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r13
  WCHAR *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // r10
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rbx
  DWORD v22; // r14d
  _QWORD *Value; // rdi
  _QWORD *v24; // rax
  unsigned int v27; // eax
  unsigned int v28; // edx
  _BYTE v29[4]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v30; // [rsp+24h] [rbp-DCh]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h]
  _BYTE v34[464]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v35[80]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v36[464]; // [rsp+260h] [rbp+160h] BYREF

  v2 = *(_QWORD *)(a1 + 1320);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16)) <= 1 )
    __fastfail(0xEu);
  if ( *(_DWORD *)(a1 + 1280) )
  {
    v4 = 2;
    if ( (a2 & 2) != 0 && *(_BYTE *)(a1 + 12) && (v27 = sub_1800223BC(v2, 2LL), v27 < v28) )
    {
      v6 = -2147220221;
    }
    else
    {
      v5 = 1;
      if ( *(_BYTE *)(a1 + 12) )
        v5 = v4;
      sub_180010560((__int64 *)a1);
      sub_180012A60(v2, v5);
      sub_180016840(v2, v5);
      QueryUnbiasedInterruptTime((PULONGLONG)(v2 + 1456));
      if ( (unsigned int)sub_180012D40(v2) )
        SetEvent(*(HANDLE *)(*(_QWORD *)(v2 + 56) + 88LL));
      v6 = 0;
      if ( (v5 & 2) != 0 )
      {
        v7 = *(_QWORD *)(v2 + 48);
        *(_QWORD *)(v2 + 1208) = 0LL;
        v8 = *(_QWORD *)(v7 + 2720);
        v9 = *(_DWORD *)(v8 + 160);
        if ( (v9 & 3) == 0 )
        {
          *(_DWORD *)(v8 + 160) = v9 | 1;
          TpPostWork(*(_QWORD *)(v8 + 144));
        }
      }
      if ( v5 == 2 )
      {
        if ( (*(_BYTE *)(v2 + 836) & 1) == 0 )
          sub_180007A80((_QWORD *)v2);
        v10 = *(_QWORD *)(a1 + 24);
        v31 = v10;
        sub_180012DB4(v10, v2);
        if ( *(_DWORD *)(v2 + 624) == 2 )
        {
          v29[0] = 0;
          sub_180011518(v2 + 88, v29);
          if ( !v29[0] )
          {
            v11 = *(_QWORD *)(v2 + 48);
            v32 = v11;
            if ( sub_180010220(v2 + 88, (__int64)v36) >= 0 )
            {
              sub_180010360((__int64)v36, v2 + 552, *(_DWORD *)(v2 + 620), (__int64)v34);
              v12 = (WCHAR *)v34;
              v13 = 314159LL;
              do
              {
                LOWORD(v30) = RtlUpcaseUnicodeChar(*v12++);
                v13 = BYTE1(v30) + 37 * ((unsigned __int8)v30 + 37 * v13);
              }
              while ( v12 < (WCHAR *)v35 );
              v14 = v35[69]
                  + 37
                  * (v35[68]
                   + 37
                   * (v35[67]
                    + 37
                    * (v35[66]
                     + 37
                     * (v35[65]
                      + 37
                      * (v35[64] + 37 * (v35[63] + 37 * (v35[62] + 37 * (v35[61] + 37 * (v35[60] + 37LL * v35[59])))))))));
              v15 = 0x78803D01F0C17231LL * v35[19]
                  + 0x407AFAF12AFB592DLL * v35[40]
                  + 0x4128EAEEFF459821LL * v35[15]
                  + 0xBD90C36322378919uLL * v35[53]
                  + 0x2B26220C747DAB5DLL * v35[36]
                  + 0xECFE0C79B5739BCDuLL * v35[48]
                  + 0xAA604B65C241EDD5uLL * v35[2]
                  + 0xBD1CBAC2ED25B97DuLL * v35[12]
                  + 0x84417E6FF051D6ADuLL * v35[8]
                  + 0x92D64A9170D97459uLL * v35[5]
                  + 0x288D4C21D6A4D26DLL * v35[56]
                  + 0x38F8C7054F6DD0DDLL * v35[4]
                  + 0x2ECBEADD94E1B3F5LL * v35[42]
                  + 0xDB9C20F4D76948E5uLL * v35[54]
                  + 0x1D77462DBBD40701LL * v35[7]
                  + 0xB5A728F1B3DF494DuLL * v35[16]
                  + 0x8443F2CCD7EFCA65uLL * v35[22]
                  + 0x8B7970C2A4EFB2A9uLL * v35[57]
                  + 0x1CF3332BD290D80DLL * v35[0]
                  + 0x4D463845869B9CD9LL * v35[37]
                  + 0x6A88D147CBF58115LL * v35[18]
                  + 0x4FE1DAF580C363FDLL * v35[44]
                  + 0x5D853AC4C14E51E9LL * v35[9]
                  + 0x65EC3D53F206D09DLL * v35[52]
                  + 0x1DD2179B35A84099LL * v35[21]
                  + 0xC8228AB72E6AE889uLL * v35[49]
                  + 0x7C5AC014A0AC9951LL * v35[27]
                  + 0x6AE9F48AE50EFCC5LL * v35[14]
                  + 0x65C63F607A7BA809LL * v35[17]
                  + 0x3433B6F080FF8F35LL * v35[58]
                  + 0x5A90B6DB573C2B45LL * v35[46]
                  + 0xD1A7F3AEDA1FE1A5uLL * v35[38]
                  + 0x7DA9078FE6510661LL * v35[31]
                  + 0x296E17CC49B5EC05LL * v35[30]
                  + 0x16EA6DB39BB240F9LL * v35[45]
                  + 0x5526FE2C4673CF11LL * v35[11]
                  + 0x981EFA65455B8049uLL * v35[33]
                  + 0xC53F5E946719795LL * v35[50]
                  + 0xF91DC2FB38F228B5uLL * v35[26]
                  + 0x14D2E4F3AFFE229LL * (v35[25] + 37LL * v35[24])
                  + 37 * (v35[70] + 37 * v14);
              v16 = 0LL;
              v17 = v35[71]
                  + 0x2F2665556EEF39E1LL * v13
                  + 0x3BF4C3C47ADF2FF1LL * v35[3]
                  + 0x73D058131B2A8879LL * v35[13]
                  + 0x40B7CD9739B584A1LL * v35[47]
                  + 0xDC6C00E405D269C1uLL * v35[55]
                  + 0x4EA2BC662EBCED75LL * v35[10]
                  + 0x4F5D696EC151561DLL * v35[20]
                  + 0xBB24DD21FAFC26B1uLL * v35[51]
                  + 0xBEEC149AF4096455uLL * v35[34]
                  + 0x9FEAE5B513875FC9uLL * v35[1]
                  + 0xF5BCA5B282606D41uLL * v35[23]
                  + 0x423D249C25A50325LL * v35[6]
                  + 0xFCE97086A74B1CB9uLL * v35[29]
                  + 0xC378F206849F0269uLL * v35[41]
                  + 0xFC7A30A306398A8DuLL * v35[32]
                  + 0x51C644DB3653E381LL * v35[39]
                  + 0x8BA4A57B9C3D7391uLL * v35[43]
                  + 0x3C82EBCCD629C471LL * v35[35]
                  + 0x8DBD43762DDB26BDuLL * v35[28]
                  + v15;
LABEL_20:
              v30 = *(_DWORD *)(v11 + 2548);
              v18 = -1LL << (v30 & 0x1F);
              v19 = v17 & v18;
              v20 = (v17 & v18) >> 48;
              v33 = (v17 & v18) >> 16;
              if ( v16 )
              {
                v11 = v32;
                goto LABEL_22;
              }
              if ( v30 >> 5 )
              {
                v11 = v32;
                v16 = *(_QWORD *)(v32 + 2552)
                    + 8
                    * ((((v17 & v18) >> 56)
                      + 37
                      * ((unsigned __int8)v20
                       + 37
                       * ((unsigned __int8)((unsigned __int16)((v17 & v18) >> 32) >> 8)
                        + 37
                        * ((unsigned __int8)((v17 & v18) >> 32)
                         + 37
                         * ((((unsigned int)v17 & (unsigned int)v18) >> 24)
                          + 37
                          * ((unsigned __int8)v33
                           + 37
                           * ((unsigned __int8)((unsigned __int16)(v17 & v18) >> 8)
                            + 37 * ((unsigned __int8)v19 + 11623883)))))))) & ((v30 >> 5) - 1));
LABEL_22:
                while ( 1 )
                {
                  v16 = *(_QWORD *)v16;
                  if ( (v16 & 1) != 0 )
                    break;
                  if ( v19 == (v18 & *(_QWORD *)(v16 + 8)) )
                  {
                    if ( !(unsigned int)sub_180033C34(v16, v34, v20) )
                      goto LABEL_20;
                    v10 = v31;
                    if ( !v16 )
                      goto LABEL_43;
                    goto LABEL_26;
                  }
                }
              }
              v10 = v31;
            }
LABEL_43:
            v16 = 0LL;
LABEL_26:
            v21 = *(_QWORD *)(v16 + 568);
            if ( v21 && (unsigned __int8)sub_18003C57C(v21) )
              sub_180012DB4(v10, v21);
          }
        }
      }
      v22 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        Value = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v22) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockExclusive(v2 + 64);
      *(_DWORD *)(v2 + 72) = GetCurrentThreadId();
      if ( (unsigned int)sub_180018A60(v2) )
        sub_18001CC80(v2 + 64, 1LL);
      if ( dwTlsIndex != -1 )
      {
        v24 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v24 & 2) == 0 )
          __int2c();
        if ( v24[2]-- == 1LL )
          *v24 &= ~2uLL;
      }
      *(_DWORD *)(v2 + 72) = 0;
      RtlReleaseSRWLockExclusive(v2 + 64);
    }
  }
  else
  {
    v6 = 0;
  }
  sub_1800265B0((PVOID)v2);
  return v6;
}
