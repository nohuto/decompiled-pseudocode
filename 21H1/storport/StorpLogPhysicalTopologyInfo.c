/*
 * XREFs of StorpLogPhysicalTopologyInfo @ 0x1C00515C4
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000D060 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0002A0C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0012F24 (RaidDriverGetName.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0017C38 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0017CE0 (_tlgCreate1Sz_wchar_t.c)
 *     RtlStringCchPrintfW @ 0x1C0017DFC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

char __fastcall StorpLogPhysicalTopologyInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r15
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r10
  _DWORD *v10; // rax
  unsigned int v11; // r9d
  int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned int v17; // esi
  _DWORD *v18; // rbx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned __int64 v22; // rcx
  unsigned int v23; // edi
  char *v24; // r10
  __int128 v25; // xmm1
  __int64 v26; // r8
  __int64 v27; // r9
  int *v28; // r10
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // r10
  __int128 v38; // xmm1
  __int64 v39; // r9
  int *v40; // r10
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  _BYTE v56[16]; // [rsp+80h] [rbp-80h] BYREF
  int *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  int *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  int *v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int *v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int128 *v65; // [rsp+D0h] [rbp-30h]
  int v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+DCh] [rbp-24h]
  __int128 *v68; // [rsp+E0h] [rbp-20h]
  int v69; // [rsp+E8h] [rbp-18h]
  int v70; // [rsp+ECh] [rbp-14h]
  int *v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  int *v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  int *v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  __int64 *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  __int128 v80; // [rsp+130h] [rbp+30h] BYREF
  int v81[4]; // [rsp+140h] [rbp+40h] BYREF
  char v82; // [rsp+150h] [rbp+50h]
  __int128 v83; // [rsp+158h] [rbp+58h] BYREF
  __int128 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  char v86; // [rsp+180h] [rbp+80h]
  wchar_t pszDest[32]; // [rsp+190h] [rbp+90h] BYREF

  v4 = a3;
  v80 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  v6 = 0;
  v7 = 0;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v80);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"%s", *((_QWORD *)&v80 + 1));
  v9 = *(unsigned int *)(a2 + 8);
  if ( v4 >= 40 * v9 + 16 && (_DWORD)v9 )
  {
    v10 = (_DWORD *)(a2 + 32);
    v8 = (unsigned int)v9;
    do
    {
      v6 += *(v10 - 3);
      v7 += *v10;
      v10 += 10;
      --v8;
    }
    while ( v8 );
  }
  v11 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)dword_1C0068058 > 5 && tlgKeywordOn(v8, 0x400000000000LL) )
  {
    v55 = 16LL;
    v54 = a1 + 5192;
    tlgCreate1Sz_wchar_t((__int64)v56, pszDest);
    v46 = v12;
    v57 = &v46;
    v58 = 4LL;
    v59 = &v47;
    v61 = &v48;
    v47 = v6;
    v60 = 4LL;
    v48 = v7;
    v62 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v13, (unsigned __int8 *)dword_1C005DB28, v14, v15, 7u, &v53);
    v11 = *(_DWORD *)(a2 + 8);
  }
  LOBYTE(v16) = v11;
  if ( v4 >= 40 * (unsigned __int64)v11 + 16 )
  {
    LOBYTE(v16) = 0;
    *(_QWORD *)&v80 = 0LL;
    v17 = 0;
    BYTE8(v80) = 0;
    v85 = 0LL;
    v86 = 0;
    v82 = 0;
    v83 = 0LL;
    v84 = 0LL;
    *(_OWORD *)v81 = 0LL;
    if ( v11 )
    {
      do
      {
        LOBYTE(v16) = v17;
        v18 = (_DWORD *)(a2 + 8 * (v17 + 4LL * v17 + 2));
        v19 = v18[1];
        v20 = v19;
        if ( v19 )
        {
          v21 = v18[3];
          if ( v21 >= 0x28 )
          {
            v16 = (unsigned int)v18[2];
            v22 = (unsigned __int64)v19 << 7;
            if ( v16 >= v22 && v21 + 8 * (v17 + 4 * v17 + 2) + (v19 << 7) <= (unsigned int)v4 )
            {
              v23 = 0;
              do
              {
                v24 = (char *)v18 + (unsigned int)v18[3];
                v16 = *((_QWORD *)v24 + 2);
                *(_QWORD *)&v80 = v16;
                BYTE8(v80) = 0;
                v83 = *(_OWORD *)(v24 + 24);
                v84 = *(_OWORD *)(v24 + 40);
                v85 = *((_QWORD *)v24 + 7);
                v86 = 0;
                v25 = *((_OWORD *)v24 + 4);
                v82 = 0;
                *(_OWORD *)v81 = v25;
                if ( (unsigned int)dword_1C0068058 > 5 )
                {
                  LOBYTE(v16) = tlgKeywordOn(v22, 0x400000000000LL);
                  if ( (_BYTE)v16 )
                  {
                    v55 = 16LL;
                    v54 = a1 + 5192;
                    tlgCreate1Sz_wchar_t((__int64)v56, pszDest);
                    v29 = *v28;
                    v57 = &v48;
                    v47 = v28[1];
                    v59 = &v47;
                    v46 = v28[2];
                    v61 = &v46;
                    v49 = v28[3];
                    v63 = &v49;
                    v30 = -1LL;
                    v48 = v29;
                    v58 = 4LL;
                    v60 = 4LL;
                    v62 = 4LL;
                    v64 = 4LL;
                    do
                      ++v30;
                    while ( *((_BYTE *)&v81[-4] + v30) );
                    v67 = 0;
                    v66 = v30 + 1;
                    v65 = &v80;
                    v31 = -1LL;
                    do
                      ++v31;
                    while ( *((_BYTE *)&v83 + v31) );
                    v70 = 0;
                    v69 = v31 + 1;
                    v68 = &v83;
                    v32 = -1LL;
                    do
                      ++v32;
                    while ( *((_BYTE *)v81 + v32) );
                    v73 = 0;
                    v72 = v32 + 1;
                    v71 = v81;
                    LOBYTE(v16) = tlgWriteTransfer_EtwWriteTransfer(
                                    (__int64)v81,
                                    (unsigned __int8 *)dword_1C005DBA4,
                                    v26,
                                    v27,
                                    0xBu,
                                    &v53);
                  }
                }
                v20 = v18[1];
                ++v23;
              }
              while ( v23 < v20 );
            }
          }
        }
        v33 = (unsigned int)v18[4];
        if ( (_DWORD)v33 )
        {
          v34 = (unsigned int)v18[6];
          if ( (unsigned int)v34 >= 0x28 )
          {
            v16 = (unsigned int)v18[3];
            if ( v34 >= v16 + ((unsigned __int64)v20 << 7) )
            {
              v16 = (unsigned int)v18[5];
              v35 = 136 * v33;
              if ( v16 >= 136 * v33 )
              {
                LODWORD(v16) = 8 * (v17 + 4 * v17 + 2) + v34 + 136 * v33;
                if ( (unsigned int)v16 <= (unsigned int)v4 )
                {
                  v36 = 0;
                  do
                  {
                    v37 = (__int64)&v18[34 * v36] + (unsigned int)v18[6];
                    v16 = *(_QWORD *)(v37 + 24);
                    *(_QWORD *)&v80 = v16;
                    BYTE8(v80) = 0;
                    v83 = *(_OWORD *)(v37 + 32);
                    v84 = *(_OWORD *)(v37 + 48);
                    v85 = *(_QWORD *)(v37 + 64);
                    v86 = 0;
                    v38 = *(_OWORD *)(v37 + 72);
                    v82 = 0;
                    *(_OWORD *)v81 = v38;
                    if ( (unsigned int)dword_1C0068058 > 5 )
                    {
                      LOBYTE(v16) = tlgKeywordOn(v35, 0x400000000000LL);
                      if ( (_BYTE)v16 )
                      {
                        v55 = 16LL;
                        v54 = a1 + 5192;
                        tlgCreate1Sz_wchar_t((__int64)v56, pszDest);
                        v41 = *v40;
                        v57 = &v49;
                        v48 = v40[2];
                        v59 = &v48;
                        v47 = v40[3];
                        v61 = &v47;
                        v46 = v40[4];
                        v63 = &v46;
                        v42 = -1LL;
                        v49 = v41;
                        v58 = 4LL;
                        v60 = 4LL;
                        v62 = 4LL;
                        v64 = 4LL;
                        do
                          ++v42;
                        while ( *((_BYTE *)&v81[-4] + v42) );
                        v67 = 0;
                        v66 = v42 + 1;
                        v65 = &v80;
                        v43 = -1LL;
                        do
                          ++v43;
                        while ( *((_BYTE *)&v83 + v43) );
                        v70 = 0;
                        v69 = v43 + 1;
                        v68 = &v83;
                        v44 = -1LL;
                        do
                          ++v44;
                        while ( *((_BYTE *)v81 + v44) );
                        v73 = 0;
                        v72 = v44 + 1;
                        v50 = v40[1];
                        v74 = &v50;
                        v51 = v40[5];
                        v76 = &v51;
                        v52 = *((_QWORD *)v40 + 11);
                        v78 = &v52;
                        v71 = v81;
                        v75 = 4LL;
                        v77 = 4LL;
                        v79 = 8LL;
                        LOBYTE(v16) = tlgWriteTransfer_EtwWriteTransfer(
                                        (__int64)v81,
                                        (unsigned __int8 *)dword_1C005C9A9,
                                        -1LL,
                                        v39,
                                        0xEu,
                                        &v53);
                      }
                    }
                    ++v36;
                  }
                  while ( v36 < v18[4] );
                }
              }
            }
          }
        }
        ++v17;
      }
      while ( v17 < *(_DWORD *)(a2 + 8) );
    }
  }
  return v16;
}
