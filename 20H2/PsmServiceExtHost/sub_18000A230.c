/*
 * XREFs of sub_18000A230 @ 0x18000A230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcmp @ 0x180046816 (memcmp.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000A230(__int64 a1, const wchar_t *a2, void *a3, int a4, int a5, __int64 a6)
{
  __int64 v10; // r14
  ULONG v11; // eax
  DWORD v12; // edi
  _QWORD *Value; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  wchar_t *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  int v21; // edi
  unsigned __int64 v22; // r15
  __int64 v23; // r11
  __int64 v24; // r9
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r13
  int v30; // r10d
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // edi
  _QWORD *v35; // rax
  bool v36; // zf
  _QWORD *v38; // rax
  WCHAR v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v41; // [rsp+30h] [rbp-D0h]
  wchar_t Destination[280]; // [rsp+40h] [rbp-C0h] BYREF

  v10 = 0LL;
  memset(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset(&Destination[232], 0, 0x44uLL);
  v11 = RtlLengthSid(a3);
  memcpy(&Destination[232], a3, v11);
  v12 = dwTlsIndex;
  *(_DWORD *)&Destination[268] = a5;
  *(_QWORD *)&Destination[272] = a6;
  *(_DWORD *)&Destination[266] = a4;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v12) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  v14 = 0LL;
  v15 = *(_QWORD *)(a1 + 120);
  v16 = Destination;
  v40 = v15;
  v17 = 314159LL;
  do
  {
    v39 = RtlUpcaseUnicodeChar(*v16++);
    v17 = HIBYTE(v39) + 37 * ((unsigned __int8)v39 + 37 * v17);
  }
  while ( v16 < &Destination[232] );
  v18 = HIBYTE(Destination[274])
      + 37
      * (LOBYTE(Destination[274])
       + 37
       * (HIBYTE(Destination[273])
        + 37
        * (LOBYTE(Destination[273])
         + 37
         * (HIBYTE(Destination[272])
          + 37
          * (LOBYTE(Destination[272])
           + 37
           * (HIBYTE(Destination[271])
            + 37
            * (LOBYTE(Destination[271])
             + 37 * (HIBYTE(Destination[270]) + 37 * (LOBYTE(Destination[270]) + 37LL * HIBYTE(Destination[269]))))))))));
  v19 = 0xF5BCA5B282606D41uLL * HIBYTE(Destination[251])
      + 0x423D249C25A50325LL * LOBYTE(Destination[243])
      + 0xFC7A30A306398A8DuLL * LOBYTE(Destination[256])
      + 0x407AFAF12AFB592DLL * LOBYTE(Destination[260])
      + 0x51C644DB3653E381LL * HIBYTE(Destination[259])
      + 0x8BA4A57B9C3D7391uLL * HIBYTE(Destination[261])
      + 0x4128EAEEFF459821LL * HIBYTE(Destination[247])
      + 0x3C82EBCCD629C471LL * HIBYTE(Destination[257])
      + 0xECFE0C79B5739BCDuLL * LOBYTE(Destination[264])
      + 0x8DBD43762DDB26BDuLL * LOBYTE(Destination[254])
      + 0xAA604B65C241EDD5uLL * LOBYTE(Destination[241])
      + 0xBD1CBAC2ED25B97DuLL * LOBYTE(Destination[246])
      + 0xEC517606CCCE0235uLL * LOBYTE(Destination[237])
      + 0xBD90C36322378919uLL * HIBYTE(Destination[266])
      + 0x2B26220C747DAB5DLL * LOBYTE(Destination[258])
      + 0x27C60EFB99C651A9LL * HIBYTE(Destination[236])
      + 0x2ECBEADD94E1B3F5LL * LOBYTE(Destination[261])
      + 0xDB9C20F4D76948E5uLL * LOBYTE(Destination[267])
      + 0x84417E6FF051D6ADuLL * LOBYTE(Destination[244])
      + 0x92D64A9170D97459uLL * HIBYTE(Destination[242])
      + 0xBF828C895D0B8BE5uLL * LOBYTE(Destination[235])
      + 0x1D77462DBBD40701LL * HIBYTE(Destination[243])
      + 0xB5A728F1B3DF494DuLL * LOBYTE(Destination[248])
      + 0x44A84175CE2F14D1LL * HIBYTE(Destination[237])
      + 0x288D4C21D6A4D26DLL * LOBYTE(Destination[268])
      + 0x38F8C7054F6DD0DDLL * LOBYTE(Destination[242])
      + 0xBFA02A5D39A9CD6DuLL * LOBYTE(Destination[236])
      + 0x8443F2CCD7EFCA65uLL * LOBYTE(Destination[251])
      + 0x8B7970C2A4EFB2A9uLL * HIBYTE(Destination[268])
      + 0x4D463845869B9CD9LL * HIBYTE(Destination[258])
      + 0x6A88D147CBF58115LL * LOBYTE(Destination[249])
      + 0x4FE1DAF580C363FDLL * LOBYTE(Destination[262])
      + 0x5D853AC4C14E51E9LL * HIBYTE(Destination[244])
      + 0x2453E5DE3D4C8439LL * HIBYTE(Destination[238])
      + 0x65EC3D53F206D09DLL * LOBYTE(Destination[266])
      + 0x1DD2179B35A84099LL * HIBYTE(Destination[250])
      + 0xC8228AB72E6AE889uLL * HIBYTE(Destination[264])
      + 0x7C5AC014A0AC9951LL * HIBYTE(Destination[253])
      + 0xC9D9072F359EFDB1uLL * HIBYTE(Destination[233])
      + 0x14D2E4F3AFFE229LL * (HIBYTE(Destination[252]) + 37LL * LOBYTE(Destination[252]))
      + 37 * (LOBYTE(Destination[275]) + 37 * v18);
  v20 = 0xAABDA8ABA0A9EBA1uLL * v17
      + 0x6AE9F48AE50EFCC5LL * LOBYTE(Destination[247])
      + 0x65C63F607A7BA809LL * HIBYTE(Destination[248])
      + 0x3433B6F080FF8F35LL * LOBYTE(Destination[269])
      + 0x42E28804A37A36CDLL * LOBYTE(Destination[232])
      + 0x5A90B6DB573C2B45LL * LOBYTE(Destination[263])
      + 0x69976B75BF3AA789LL * HIBYTE(Destination[232])
      + 0x296E17CC49B5EC05LL * LOBYTE(Destination[255])
      + 0x2F2665556EEF39E1LL * HIBYTE(Destination[239])
      + 0x16EA6DB39BB240F9LL * HIBYTE(Destination[262])
      + 0xD08CA55908935D85uLL * LOBYTE(Destination[239])
      + 0x5526FE2C4673CF11LL * HIBYTE(Destination[245])
      + 0x21218A9292BF1B9DLL * LOBYTE(Destination[234])
      + 0xD1A7F3AEDA1FE1A5uLL * LOBYTE(Destination[259])
      + 0x7DA9078FE6510661LL * HIBYTE(Destination[255])
      + 0x1CF3332BD290D80DLL * LOBYTE(Destination[240])
      + 0x981EFA65455B8049uLL * HIBYTE(Destination[256])
      + 0x4EA2BC662EBCED75LL * LOBYTE(Destination[245])
      + 0xC53F5E946719795LL * LOBYTE(Destination[265])
      + 0x4F5D696EC151561DLL * LOBYTE(Destination[250])
      + 0xADDE4FDA72AB3819uLL * HIBYTE(Destination[234])
      + 0xF91DC2FB38F228B5uLL * LOBYTE(Destination[253])
      + 0x3BF4C3C47ADF2FF1LL * HIBYTE(Destination[241])
      + 0x9FEAE5B513875FC9uLL * HIBYTE(Destination[240])
      + 0xFCE97086A74B1CB9uLL * HIBYTE(Destination[254])
      + 0xC378F206849F0269uLL * HIBYTE(Destination[260])
      + 0x73D058131B2A8879LL * HIBYTE(Destination[246])
      + 0x4020391EDC0F1C3DLL * LOBYTE(Destination[238])
      + 0x40B7CD9739B584A1LL * HIBYTE(Destination[263])
      + 0xDC6C00E405D269C1uLL * HIBYTE(Destination[267])
      + 0x2C5E09D2BFFAAA95LL * LOBYTE(Destination[233])
      + 0xBB24DD21FAFC26B1uLL * HIBYTE(Destination[265])
      + 0xBEEC149AF4096455uLL * LOBYTE(Destination[257])
      + 0x78803D01F0C17231LL * HIBYTE(Destination[249])
      + 0xB2261F79558AB0C1uLL * HIBYTE(Destination[235])
      + v19;
  v21 = -1073741275;
  v22 = HIBYTE(Destination[275]) + v20;
  v41 = v22;
  RtlAcquireSRWLockShared(v15 + 32);
LABEL_8:
  v23 = -1LL << (*(_BYTE *)(v15 + 2532) & 0x1F);
  v24 = v23 & v22;
  v25 = (v23 & v22) >> 56;
  v26 = (v23 & v22) >> 48;
  v27 = v23 & v22;
  v28 = (v23 & v22) >> 40;
  v29 = v27 >> 24;
  if ( v14 )
  {
    v15 = v40;
LABEL_11:
    while ( 1 )
    {
      v14 = *(_QWORD *)v14;
      if ( (v14 & 1) != 0 )
        break;
      if ( v24 == (v23 & *(_QWORD *)(v14 + 8)) )
      {
        v31 = v14 - 1392;
        v22 = v41;
        if ( wcsicmp(Destination, (const wchar_t *)(v14 - 1392 + 88))
          || memcmp(&Destination[232], (const void *)(v31 + 552), 0x58uLL) )
        {
          goto LABEL_8;
        }
        v21 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v31 + 16)) <= 1 )
          __fastfail(0xEu);
        v10 = v14 - 1392;
        break;
      }
    }
  }
  else
  {
    v30 = *(_DWORD *)(v15 + 2532) >> 5;
    if ( v30 )
    {
      v15 = v40;
      v14 = *(_QWORD *)(v40 + 2536)
          + 8LL
          * (((_DWORD)v25
            + 37
            * ((unsigned __int8)v26
             + 37
             * ((unsigned __int8)v28
              + 37
              * (BYTE4(v24)
               + 37
               * ((unsigned __int8)v29 + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))) & (unsigned int)(v30 - 1));
      goto LABEL_11;
    }
    v15 = v40;
  }
  RtlReleaseSRWLockShared(v15 + 32);
  if ( v21 < 0 )
  {
    v34 = v21 | 0x10000000;
  }
  else
  {
    if ( (*(_BYTE *)(v10 + 836) & 1) != 0 )
    {
      sub_18000B084(v33, v32, 1LL);
      RtlAcquireSRWLockExclusive(v10 + 64);
      *(_DWORD *)(v10 + 72) = GetCurrentThreadId();
      *(_QWORD *)(v10 + 712) |= 0x40000000000000uLL;
      sub_18001CC80(v10 + 64, 0LL);
      if ( dwTlsIndex != -1 )
      {
        v38 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v38 & 2) == 0 )
          __int2c();
        v36 = v38[2]-- == 1LL;
        if ( v36 )
          *v38 &= ~2uLL;
      }
      *(_DWORD *)(v10 + 72) = 0;
      RtlReleaseSRWLockExclusive(v10 + 64);
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(v10 + 48) + 2712LL) & 1) == 0 && (*(_BYTE *)(v10 + 1472) & 1) == 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 16)) <= 1 )
        __fastfail(0xEu);
      *(_DWORD *)(v10 + 1472) |= 1u;
      TpPostWork(*(_QWORD *)(v10 + 1384));
    }
    v34 = 0;
  }
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v35 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v35 & 1) == 0 )
      __int2c();
    v36 = v35[1]-- == 1LL;
    if ( v36 )
      *v35 &= ~1uLL;
  }
  if ( v10 )
    sub_1800265B0((PVOID)v10);
  return v34;
}
