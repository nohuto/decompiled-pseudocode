/*
 * XREFs of sub_18002D660 @ 0x18002D660
 * Callers:
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 *     sub_18002D52C @ 0x18002D52C (sub_18002D52C.c)
 * Callees:
 *     sub_18002DFB0 @ 0x18002DFB0 (sub_18002DFB0.c)
 */

_QWORD *__fastcall sub_18002D660(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v6; // r10
  unsigned __int8 *v10; // rsi
  WCHAR *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rdi
  _QWORD *result; // rax
  _QWORD *v21; // rsi
  WCHAR v22; // [rsp+48h] [rbp+10h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_6;
  v10 = (unsigned __int8 *)(a3 + 464);
  v11 = (WCHAR *)a3;
  v12 = 314159LL;
  if ( a3 < a3 + 464 )
  {
    do
    {
      v22 = RtlUpcaseUnicodeChar(*v11++);
      v12 = HIBYTE(v22) + 37 * ((unsigned __int8)v22 + 37 * v12);
    }
    while ( v11 < (WCHAR *)v10 );
    v6 = *(_QWORD *)(a1 + 16);
  }
  v13 = v10[85]
      + 37
      * (v10[84]
       + 37
       * (v10[83]
        + 37
        * (v10[82]
         + 37
         * (v10[81] + 37
                    * (v10[80] + 37 * (v10[79] + 37 * (v10[78] + 37 * (v10[77] + 37 * (v10[76] + 37LL * v10[75])))))))));
  v14 = 0xBD90C36322378919uLL * v10[69]
      + 0x2B26220C747DAB5DLL * v10[52]
      + 0x92D64A9170D97459uLL * v10[21]
      + 0x84417E6FF051D6ADuLL * v10[24]
      + 0x44A84175CE2F14D1LL * v10[11]
      + 0x38F8C7054F6DD0DDLL * v10[20]
      + 0x288D4C21D6A4D26DLL * v10[72]
      + 0xBFA02A5D39A9CD6DuLL * v10[8]
      + 0x27C60EFB99C651A9LL * v10[9]
      + 0x2ECBEADD94E1B3F5LL * v10[58]
      + 0xDB9C20F4D76948E5uLL * v10[70]
      + 0xBF828C895D0B8BE5uLL * v10[6]
      + 0x1D77462DBBD40701LL * v10[23]
      + 0xB5A728F1B3DF494DuLL * v10[32]
      + 0x8443F2CCD7EFCA65uLL * v10[38]
      + 0x8B7970C2A4EFB2A9uLL * v10[73]
      + 0x4D463845869B9CD9LL * v10[53]
      + 0x6A88D147CBF58115LL * v10[34]
      + 0x4FE1DAF580C363FDLL * v10[60]
      + 0x5D853AC4C14E51E9LL * v10[25]
      + 0x2453E5DE3D4C8439LL * v10[13]
      + 0x65EC3D53F206D09DLL * v10[68]
      + 0x14D2E4F3AFFE229LL * (v10[41] + 37LL * v10[40])
      + 37 * (v10[86] + 37 * v13);
  v15 = 0x2C5E09D2BFFAAA95LL * v10[2]
      + 0x4EA2BC662EBCED75LL * v10[26]
      + 0x4F5D696EC151561DLL * v10[36]
      + 0x9FEAE5B513875FC9uLL * v10[17]
      + 0xC378F206849F0269uLL * v10[57]
      + 0xFCE97086A74B1CB9uLL * v10[45]
      + 0x73D058131B2A8879LL * v10[29]
      + 0x4020391EDC0F1C3DLL * v10[12]
      + 0xBEEC149AF4096455uLL * v10[50]
      + 0xBB24DD21FAFC26B1uLL * v10[67]
      + 0xF5BCA5B282606D41uLL * v10[39]
      + 0x423D249C25A50325LL * v10[22]
      + 0xFC7A30A306398A8DuLL * v10[48]
      + 0x51C644DB3653E381LL * v10[55]
      + 0x8BA4A57B9C3D7391uLL * v10[59]
      + 0x3C82EBCCD629C471LL * v10[51]
      + 0x8DBD43762DDB26BDuLL * v10[44]
      + 0x78803D01F0C17231LL * v10[35]
      + 0xB2261F79558AB0C1uLL * v10[7]
      + 0x407AFAF12AFB592DLL * v10[56]
      + 0x4128EAEEFF459821LL * v10[31]
      + 0xECFE0C79B5739BCDuLL * v10[64]
      + 0xAA604B65C241EDD5uLL * v10[18]
      + 0xBD1CBAC2ED25B97DuLL * v10[28]
      + 0xEC517606CCCE0235uLL * v10[10]
      + v14;
  v16 = 0x1DD2179B35A84099LL * v10[37]
      + 0xC8228AB72E6AE889uLL * v10[65]
      + 0x7C5AC014A0AC9951LL * v10[43]
      + 0xC9D9072F359EFDB1uLL * v10[3]
      + 0x6AE9F48AE50EFCC5LL * v10[30]
      + 0x65C63F607A7BA809LL * v10[33]
      + 0x3433B6F080FF8F35LL * v10[74]
      + 0x5A90B6DB573C2B45LL * v10[62]
      + 0xD1A7F3AEDA1FE1A5uLL * v10[54]
      + 0x7DA9078FE6510661LL * v10[47]
      + 0x69976B75BF3AA789LL * v10[1]
      + 0x296E17CC49B5EC05LL * v10[46]
      + 0x2F2665556EEF39E1LL * v10[15]
      + 0x16EA6DB39BB240F9LL * v10[61]
      + 0xD08CA55908935D85uLL * v10[14]
      + 0x5526FE2C4673CF11LL * v10[27]
      + 0x21218A9292BF1B9DLL * v10[4]
      + 0x1CF3332BD290D80DLL * v10[16]
      + 0x981EFA65455B8049uLL * v10[49]
      + 0xC53F5E946719795LL * v10[66]
      + 0xADDE4FDA72AB3819uLL * v10[5]
      + 0xF91DC2FB38F228B5uLL * v10[42]
      + 0x3BF4C3C47ADF2FF1LL * v10[19]
      + 0x40B7CD9739B584A1LL * v10[63]
      + 0xDC6C00E405D269C1uLL * v10[71]
      + v15;
  v17 = *(unsigned __int8 *)(a1 + 32);
  v18 = 0xAABDA8ABA0A9EBA1uLL * v12 + v10[87] + 0x42E28804A37A36CDLL * *v10 + v16;
  v19 = *(_QWORD **)(v6 + 16 * (v18 & ((8LL << v17) - 1)));
  if ( !v19 )
    goto LABEL_6;
  v21 = **(_QWORD ***)(v6 + 16 * (v18 & ((8LL << v17) - 1)) + 8);
  if ( v19 != v21 )
  {
    while ( 1 )
    {
      if ( v19[2] >= v18 )
      {
        if ( v19[2] > v18 )
          goto LABEL_6;
        if ( (unsigned __int8)sub_18002DFB0(v17, a3, v19 + 3) )
          break;
      }
      v19 = (_QWORD *)*v19;
      if ( v19 == v21 )
        goto LABEL_6;
    }
    *a4 = v19;
    *a5 = *v19;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_6:
    *a4 = a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
