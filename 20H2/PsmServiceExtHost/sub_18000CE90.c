/*
 * XREFs of sub_18000CE90 @ 0x18000CE90
 * Callers:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_180006AB4 @ 0x180006AB4 (sub_180006AB4.c)
 *     sub_180007F50 @ 0x180007F50 (sub_180007F50.c)
 *     sub_18000D590 @ 0x18000D590 (sub_18000D590.c)
 * Callees:
 *     sub_180033C34 @ 0x180033C34 (sub_180033C34.c)
 */

__int64 __fastcall sub_18000CE90(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rsi
  __int64 v4; // r8
  WCHAR *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned int v12; // r13d
  __int64 v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned int v16; // r13d
  int v17; // eax
  WCHAR v20; // [rsp+68h] [rbp+10h]

  v2 = (unsigned __int8 *)(a2 + 464);
  v4 = a1;
  v5 = (WCHAR *)a2;
  v6 = 314159LL;
  if ( a2 < a2 + 464 )
  {
    do
    {
      v20 = RtlUpcaseUnicodeChar(*v5++);
      v6 = HIBYTE(v20) + 37 * ((unsigned __int8)v20 + 37 * v6);
    }
    while ( v5 < (WCHAR *)v2 );
    v4 = a1;
  }
  v7 = v2[69]
     + 37
     * (v2[68]
      + 37
      * (v2[67]
       + 37
       * (v2[66]
        + 37 * (v2[65] + 37 * (v2[64] + 37 * (v2[63] + 37 * (v2[62] + 37 * (v2[61] + 37 * (v2[60] + 37LL * v2[59])))))))));
  v8 = 0x407AFAF12AFB592DLL * v2[40]
     + 0x4128EAEEFF459821LL * v2[15]
     + 0xECFE0C79B5739BCDuLL * v2[48]
     + 0xAA604B65C241EDD5uLL * v2[2]
     + 0xBD1CBAC2ED25B97DuLL * v2[12]
     + 0xBD90C36322378919uLL * v2[53]
     + 0x2B26220C747DAB5DLL * v2[36]
     + 0x92D64A9170D97459uLL * v2[5]
     + 0x84417E6FF051D6ADuLL * v2[8]
     + 0x38F8C7054F6DD0DDLL * v2[4]
     + 0x288D4C21D6A4D26DLL * v2[56]
     + 0x2ECBEADD94E1B3F5LL * v2[42]
     + 0xDB9C20F4D76948E5uLL * v2[54]
     + 0x1D77462DBBD40701LL * v2[7]
     + 0xB5A728F1B3DF494DuLL * v2[16]
     + 0x8443F2CCD7EFCA65uLL * v2[22]
     + 0x8B7970C2A4EFB2A9uLL * v2[57]
     + 0x4D463845869B9CD9LL * v2[37]
     + 0x6A88D147CBF58115LL * v2[18]
     + 0x4FE1DAF580C363FDLL * v2[44]
     + 0x5D853AC4C14E51E9LL * v2[9]
     + 0x65EC3D53F206D09DLL * v2[52]
     + 0x14D2E4F3AFFE229LL * (v2[25] + 37LL * v2[24])
     + 37 * (v2[70] + 37 * v7);
  v9 = 0x296E17CC49B5EC05LL * v2[30]
     + 0x16EA6DB39BB240F9LL * v2[45]
     + 0x5526FE2C4673CF11LL * v2[11]
     + 0x981EFA65455B8049uLL * v2[33]
     + 0xC53F5E946719795LL * v2[50]
     + 0xF91DC2FB38F228B5uLL * v2[26]
     + 0x3BF4C3C47ADF2FF1LL * v2[3]
     + 0x40B7CD9739B584A1LL * v2[47]
     + 0xDC6C00E405D269C1uLL * v2[55]
     + 0x4EA2BC662EBCED75LL * v2[10]
     + 0x4F5D696EC151561DLL * v2[20]
     + 0x9FEAE5B513875FC9uLL * v2[1]
     + 0xC378F206849F0269uLL * v2[41]
     + 0xFCE97086A74B1CB9uLL * v2[29]
     + 0x73D058131B2A8879LL * v2[13]
     + 0xBEEC149AF4096455uLL * v2[34]
     + 0xBB24DD21FAFC26B1uLL * v2[51]
     + 0xF5BCA5B282606D41uLL * v2[23]
     + 0x423D249C25A50325LL * v2[6]
     + 0xFC7A30A306398A8DuLL * v2[32]
     + 0x51C644DB3653E381LL * v2[39]
     + 0x8BA4A57B9C3D7391uLL * v2[43]
     + 0x3C82EBCCD629C471LL * v2[35]
     + 0x8DBD43762DDB26BDuLL * v2[28]
     + 0x78803D01F0C17231LL * v2[19]
     + v8;
  v10 = 0x2F2665556EEF39E1LL * v6
      + v2[71]
      + 0x1CF3332BD290D80DLL * *v2
      + 0x1DD2179B35A84099LL * v2[21]
      + 0xC8228AB72E6AE889uLL * v2[49]
      + 0x7C5AC014A0AC9951LL * v2[27]
      + 0x6AE9F48AE50EFCC5LL * v2[14]
      + 0x65C63F607A7BA809LL * v2[17]
      + 0x3433B6F080FF8F35LL * v2[58]
      + 0x5A90B6DB573C2B45LL * v2[46]
      + 0xD1A7F3AEDA1FE1A5uLL * v2[38]
      + 0x7DA9078FE6510661LL * v2[31]
      + v9;
  v11 = 0LL;
LABEL_5:
  v12 = *(_DWORD *)(v4 + 2548);
  v13 = -1LL << (*(_BYTE *)(v4 + 2548) & 0x1F);
  v14 = v10 & v13;
  v15 = (v10 & v13) >> 48;
  if ( v11 )
    goto LABEL_9;
  v16 = v12 >> 5;
  if ( v16 )
  {
    v11 = *(_QWORD *)(a1 + 2552)
        + 8
        * ((((v10 & v13) >> 56)
          + 37
          * ((unsigned __int8)v15
           + 37
           * ((unsigned __int8)((unsigned __int16)((v10 & v13) >> 32) >> 8)
            + 37
            * ((unsigned __int8)((v10 & v13) >> 32)
             + 37
             * ((((unsigned int)v10 & (unsigned int)v13) >> 24)
              + 37
              * ((unsigned __int8)(((unsigned int)v10 & (unsigned int)v13) >> 16)
               + 37 * ((unsigned __int8)((unsigned __int16)(v10 & v13) >> 8) + 37 * ((unsigned __int8)v14 + 11623883)))))))) & (v16 - 1));
LABEL_9:
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v11 + 8)) )
      {
        if ( v11 )
        {
          v17 = sub_180033C34(v11, a2, v15);
          v4 = a1;
          if ( !v17 )
            goto LABEL_5;
        }
        return v11;
      }
    }
  }
  return 0LL;
}
