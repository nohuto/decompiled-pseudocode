/*
 * XREFs of GetProcessorInformation @ 0x1C000A4F4
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000C5DC (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     FreeProcessorInfo @ 0x1C000A0A0 (FreeProcessorInfo.c)
 */

char __fastcall GetProcessorInformation(__int64 a1)
{
  unsigned __int16 v2; // si
  int v3; // eax
  _QWORD *v4; // r14
  _DWORD *v5; // r15
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 *v8; // r13
  unsigned int v9; // ecx
  unsigned __int16 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int16 v14; // cx
  __int64 v15; // rbx
  char v16; // r15
  __int64 v17; // r12
  __int64 v18; // rcx
  int v20; // [rsp+28h] [rbp-39h]
  int v21; // [rsp+28h] [rbp-39h]
  int v22; // [rsp+28h] [rbp-39h]
  __int64 v23; // [rsp+30h] [rbp-31h]
  __int64 v24; // [rsp+30h] [rbp-31h]
  __int64 v25; // [rsp+30h] [rbp-31h]
  __int64 v26; // [rsp+30h] [rbp-31h]
  __int64 v27; // [rsp+30h] [rbp-31h]
  __int64 v28; // [rsp+38h] [rbp-29h]
  __int64 v29; // [rsp+38h] [rbp-29h]
  __int64 v30; // [rsp+38h] [rbp-29h]
  __int64 v31; // [rsp+38h] [rbp-29h]
  __int64 v32; // [rsp+38h] [rbp-29h]
  int v33; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-1Dh] BYREF
  __int64 v35; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+50h] [rbp-11h] BYREF
  __int64 v37; // [rsp+58h] [rbp-9h]
  __int64 v38; // [rsp+60h] [rbp-1h]
  __int64 v39; // [rsp+68h] [rbp+7h]
  __int128 v40; // [rsp+70h] [rbp+Fh]
  __int64 v41; // [rsp+80h] [rbp+1Fh]
  __int64 v42; // [rsp+88h] [rbp+27h]
  __int64 v43; // [rsp+90h] [rbp+2Fh]

  LOBYTE(v28) = 1;
  ((void (*)(void))FreeProcessorInfo)();
  v2 = 0;
  if ( !*(_WORD *)(a1 + 208) )
    goto LABEL_26;
  v3 = *(unsigned __int16 *)(a1 + 210);
  if ( !(_WORD)v3 )
    goto LABEL_26;
  v4 = (_QWORD *)(a1 + 240);
  StorPortExtendedFunction(
    0LL,
    a1,
    (unsigned int)(48 * v3),
    1701672526LL,
    a1 + 240,
    v23,
    v28,
    v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    *((_QWORD *)&v40 + 1),
    v41,
    v42,
    v43);
  if ( !*(_QWORD *)(a1 + 240) )
    goto LABEL_26;
  NVMeZeroMemory(*(void **)(a1 + 240), 48 * *(unsigned __int16 *)(a1 + 210));
  v5 = (_DWORD *)(a1 + 216);
  StorPortExtendedFunction(
    22LL,
    a1,
    a1 + 216,
    v6,
    v20,
    v24,
    v29,
    v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    *((_QWORD *)&v40 + 1),
    v41,
    v42,
    v43);
  StorPortExtendedFunction(
    20LL,
    a1,
    a1 + 212,
    v7,
    v21,
    v25,
    v30,
    v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    *((_QWORD *)&v40 + 1),
    v41,
    v42,
    v43);
  if ( *(_DWORD *)(a1 + 212)
    && (v8 = (__int64 *)(a1 + 232),
        StorPortExtendedFunction(
          0LL,
          a1,
          (unsigned int)(24 * (*v5 + 1)),
          1701672526LL,
          a1 + 232,
          v26,
          v31,
          v33,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          *((_QWORD *)&v40 + 1),
          v41,
          v42,
          v43),
        *(_QWORD *)(a1 + 232)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 232), 24 * (*v5 + 1));
    v9 = 0;
    WORD2(v32) = 0;
    v10 = 0;
    do
    {
      v11 = *v8;
      v35 = 3LL * v10;
      *(_WORD *)(v11 + 8 * v35) = v10;
      StorPortExtendedFunction(
        21LL,
        a1,
        v9,
        *v8 + 8 + 24LL * v10,
        v22,
        v27,
        v32,
        v33,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        *((_QWORD *)&v40 + 1),
        v41,
        v42,
        v43);
      v12 = *(_DWORD *)(*v8 + 24LL * v10 + 8) - ((*(_DWORD *)(*v8 + 24LL * v10 + 8) >> 1) & 0x55555555);
      *(_WORD *)(*v8 + 24LL * v10 + 2) = (unsigned __int16)((16843009
                                                           * (((v12 & 0x33333333)
                                                             + ((v12 >> 2) & 0x33333333)
                                                             + (((v12 & 0x33333333) + ((v12 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v13 = HIDWORD(*(_QWORD *)(*v8 + 24LL * v10 + 8))
          - (((unsigned int)HIDWORD(*(_QWORD *)(*v8 + 24LL * v10 + 8)) >> 1) & 0x55555555);
      *(_WORD *)(*v8 + 24LL * v10 + 2) += (unsigned __int16)((16843009
                                                            * (((v13 & 0x33333333)
                                                              + ((v13 >> 2) & 0x33333333)
                                                              + (((v13 & 0x33333333) + ((v13 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v14 = *(_WORD *)(*v8 + 24LL * v10 + 16);
      WORD1(v32) = v14;
      if ( *(_WORD *)(*v8 + 24LL * v10 + 2) )
      {
        v15 = *(_QWORD *)(*v8 + 24LL * v10 + 8);
        if ( v15 )
        {
          v16 = v32;
          v17 = v35;
          do
          {
            if ( _bittest64(&v15, (unsigned __int8)v2) )
            {
              LOWORD(v33) = v14;
              HIWORD(v33) = (unsigned __int8)v2;
              StorPortExtendedFunction(
                56LL,
                a1,
                &v33,
                &v34,
                v22,
                v27,
                v32,
                v33,
                v35,
                v36,
                v37,
                v38,
                v39,
                v40,
                *((_QWORD *)&v40 + 1),
                v41,
                v42,
                v43);
              *(_DWORD *)(*v4 + 48LL * v34) = v34;
              *(_QWORD *)(*v4 + 48LL * v34 + 24) = *(_QWORD *)(a1 + 224) + 16LL * WORD1(v32);
              *(_QWORD *)(*v4 + 48LL * v34 + 32) = *v8 + 8 * v17;
              if ( (*(_DWORD *)(a1 + 3812) & 0x10) != 0 && v16 )
              {
                if ( (unsigned int)StorPortExtendedFunction(
                                     23LL,
                                     a1,
                                     &v33,
                                     0LL,
                                     (unsigned int)&v36,
                                     &v35,
                                     v32,
                                     v33,
                                     56,
                                     0LL,
                                     0LL,
                                     0LL,
                                     0LL,
                                     0LL,
                                     0LL,
                                     0LL,
                                     v42,
                                     v43) )
                  goto LABEL_19;
                v18 = v40;
                if ( !(_QWORD)v40 )
                  goto LABEL_19;
                if ( WORD4(v40) == (_WORD)v33 )
                {
                  _bittestandreset64(&v18, v2);
                  *(_QWORD *)&v40 = v18;
                }
                if ( v18 )
                  *(_OWORD *)(*v4 + 48LL * v34 + 8) = v40;
                else
LABEL_19:
                  v16 = 0;
              }
              v14 = WORD1(v32);
              _bittestandreset64(&v15, v2);
            }
            ++v2;
          }
          while ( v15 );
          v10 = WORD2(v32);
          LOBYTE(v32) = v16;
          v5 = (_DWORD *)(a1 + 216);
        }
        v2 = 0;
      }
      v9 = ++v10;
      WORD2(v32) = v10;
    }
    while ( (unsigned int)v10 <= *v5 );
    return 1;
  }
  else
  {
LABEL_26:
    FreeProcessorInfo(a1);
    return 0;
  }
}
