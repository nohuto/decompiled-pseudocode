/*
 * XREFs of ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C006C430
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006C814 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     ??$FindProperty@UPresentedContentUpdateFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateFlags@@@Z @ 0x1C0069F88 (--$FindProperty@UPresentedContentUpdateFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedConten.c)
 *     ??$FindProperty@UPresentAttributeFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentAttributeFlags@@@Z @ 0x1C006C300 (--$FindProperty@UPresentAttributeFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentAttributeFlags.c)
 *     ??$ReadData@I@CFlipBlobPropertyReader@@QEAA_NPEAI@Z @ 0x1C006C364 (--$ReadData@I@CFlipBlobPropertyReader@@QEAA_NPEAI@Z.c)
 *     ??$ReadData@UtagRECT@@@CFlipBlobPropertyReader@@QEAA_NPEAUtagRECT@@@Z @ 0x1C006C390 (--$ReadData@UtagRECT@@@CFlipBlobPropertyReader@@QEAA_NPEAUtagRECT@@@Z.c)
 *     ??$ReadData@_N@CFlipBlobPropertyReader@@QEAA_NPEA_N@Z @ 0x1C006C3C0 (--$ReadData@_N@CFlipBlobPropertyReader@@QEAA_NPEA_N@Z.c)
 *     ?FindBlobProperty@CFlipPropertySetBase@@QEAA_NPEAVCFlipBlobPropertyReader@@@Z @ 0x1C006C8E0 (-FindBlobProperty@CFlipPropertySetBase@@QEAA_NPEAVCFlipBlobPropertyReader@@@Z.c)
 */

void __fastcall CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(
        CContentResourceState *this,
        struct CFlipPropertySet *a2,
        struct CFlipContentToken *a3)
{
  _BYTE *v3; // rsi
  CFlipPropertySetBase *v7; // r14
  char *v8; // rdi
  __int128 *v9; // r11
  unsigned int v10; // r10d
  int v11; // eax
  bool v12; // zf
  char v13; // al
  __int128 v14; // xmm0
  int v15; // eax
  __int128 v16; // xmm2
  __int64 v17; // xmm0_8
  int v18; // eax
  char v19; // al
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // r10d
  __int128 *v23; // r11
  int v24; // ecx
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int64 v29; // xmm0_8
  int v30; // ecx
  __int64 v31; // xmm0_8
  bool v32; // sf
  char v33; // al
  int v34; // eax
  __int128 v35; // xmm0
  __int128 *v36; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-18h]
  __int128 v38; // [rsp+30h] [rbp-10h] BYREF
  _BYTE *v39; // [rsp+70h] [rbp+30h] BYREF
  int v40; // [rsp+78h] [rbp+38h] BYREF
  int v41; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0LL;
  *(_QWORD *)&v38 = 0LL;
  DWORD2(v38) = 0;
  v39 = 0LL;
  if ( a2 )
  {
    CFlipPropertySetBase::FindProperty<PresentAttributeFlags>((__int64)a2, &v39);
    CFlipPropertySetBase::FindBlobProperty(a2, (struct CFlipBlobPropertyReader *)&v38);
    v3 = v39;
  }
  v7 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
  v8 = 0LL;
  v9 = 0LL;
  v39 = 0LL;
  v10 = 0;
  v36 = 0LL;
  v37 = 0;
  if ( v7 )
  {
    CFlipPropertySetBase::FindProperty<PresentedContentUpdateFlags>((__int64)v7, &v39);
    CFlipPropertySetBase::FindBlobProperty(v7, (struct CFlipBlobPropertyReader *)&v36);
    v10 = v37;
    v9 = v36;
    v8 = v39;
  }
  if ( v3 )
  {
    LODWORD(v39) = 0;
    if ( (*v3 & 1) != 0 && CFlipBlobPropertyReader::ReadData<unsigned int>((__int64)&v38, &v39) )
    {
      v11 = (int)v39;
      *((_BYTE *)a3 + 120) |= 1u;
      *((_DWORD *)a3 + 31) = v11;
    }
    v12 = (*v3 & 2) == 0;
    LOBYTE(v39) = 0;
    if ( !v12 && CFlipBlobPropertyReader::ReadData<bool>((__int64)&v38, (bool *)&v39) )
      *((_BYTE *)a3 + 224) ^= ((unsigned __int8)v39 ^ *((_BYTE *)a3 + 224)) & 1;
  }
  if ( v8 )
  {
    v12 = (*v8 & 0x20) == 0;
    v38 = 0LL;
    if ( !v12 )
    {
      v13 = CFlipBlobPropertyReader::ReadData<tagRECT>(&v36, &v38);
      v10 = v37;
      v9 = v36;
      if ( v13 )
      {
        v14 = v38;
        *((_BYTE *)a3 + 128) |= 0x20u;
        *((_OWORD *)a3 + 11) = v14;
      }
    }
    if ( (*v8 & 8) != 0 && v10 >= 4 )
    {
      v15 = *(_DWORD *)v9;
      v10 -= 4;
      v9 = (__int128 *)((char *)v9 + 4);
      v37 = v10;
      *((_BYTE *)a3 + 128) |= 8u;
      v36 = v9;
      *((_DWORD *)a3 + 42) = v15;
    }
    if ( (*v8 & 4) != 0 && v10 >= 0x18 )
    {
      v16 = *v9;
      v10 -= 24;
      v17 = *((_QWORD *)v9 + 2);
      v9 = (__int128 *)((char *)v9 + 24);
      *((_BYTE *)a3 + 128) |= 4u;
      *((_OWORD *)a3 + 9) = v16;
      v36 = v9;
      *((_QWORD *)a3 + 20) = v17;
      v37 = v10;
    }
    if ( (*v8 & 0x10) != 0 && v10 >= 4 )
    {
      v18 = *(_DWORD *)v9;
      v10 -= 4;
      v9 = (__int128 *)((char *)v9 + 4);
      v37 = v10;
      *((_BYTE *)a3 + 128) |= 0x10u;
      v36 = v9;
      *((_DWORD *)a3 + 43) = v18;
    }
    v12 = (*v8 & 2) == 0;
    LOBYTE(v39) = 0;
    if ( !v12 )
    {
      v19 = CFlipBlobPropertyReader::ReadData<bool>((__int64)&v36, (bool *)&v39);
      v10 = v37;
      v9 = v36;
      if ( v19 )
      {
        *((_BYTE *)a3 + 224) ^= (*((_BYTE *)a3 + 224) ^ (4 * (_BYTE)v39)) & 4;
        *((_BYTE *)a3 + 128) |= 2u;
      }
    }
    if ( (*v8 & 1) != 0 && v10 >= 8 )
    {
      v20 = *(_QWORD *)v9;
      v10 -= 8;
      v9 = (__int128 *)((char *)v9 + 8);
      v37 = v10;
      *((_BYTE *)a3 + 128) |= 1u;
      v36 = v9;
      *((_QWORD *)a3 + 17) = v20;
    }
    if ( (*v8 & 0x40) == 0 || v10 < 4 )
      goto LABEL_42;
    v21 = *(_DWORD *)v9;
    v22 = v10 - 4;
    v23 = (__int128 *)((char *)v9 + 4);
    v37 = v22;
    v36 = v23;
    if ( v21 )
    {
      v24 = v21 - 1;
      if ( v24 )
      {
        if ( v24 != 1 || v22 < 0x48 )
          goto LABEL_42;
        v25 = *v23;
        v26 = v23[1];
        v36 = (__int128 *)((char *)v23 + 72);
        v27 = v23[2];
        v37 = v22 - 72;
        v28 = v23[3];
        v29 = *((_QWORD *)v23 + 8);
        *(_OWORD *)((char *)a3 + 228) = v25;
        *((_DWORD *)a3 + 48) = 2;
        *(_OWORD *)((char *)a3 + 244) = v26;
        *(_OWORD *)((char *)a3 + 260) = v27;
        *(_OWORD *)((char *)a3 + 276) = v28;
        *(_QWORD *)((char *)a3 + 292) = v29;
      }
      else
      {
        if ( v22 < 0x1C )
          goto LABEL_42;
        v30 = *((_DWORD *)v23 + 6);
        v31 = *((_QWORD *)v23 + 2);
        *(_OWORD *)((char *)a3 + 228) = *v23;
        v36 = (__int128 *)((char *)v23 + 28);
        *(_QWORD *)((char *)a3 + 244) = v31;
        *((_DWORD *)a3 + 63) = v30;
        v37 = v22 - 28;
        *((_DWORD *)a3 + 48) = 1;
      }
    }
    else
    {
      *((_DWORD *)a3 + 48) = 0;
    }
    *((_BYTE *)a3 + 128) |= 0x40u;
LABEL_42:
    v32 = *v8 < 0;
    LOBYTE(v39) = 0;
    if ( v32 && CFlipBlobPropertyReader::ReadData<bool>((__int64)&v36, (bool *)&v39) )
    {
      *((_BYTE *)a3 + 224) ^= (*((_BYTE *)a3 + 224) ^ (2 * (_BYTE)v39)) & 2;
      *((_BYTE *)a3 + 128) |= 0x80u;
    }
    LODWORD(v39) = 0;
    v40 = 0;
    v41 = 0;
    v33 = v8[1];
    v38 = 0LL;
    if ( (v33 & 1) != 0
      && (v33 & 2) != 0
      && CFlipBlobPropertyReader::ReadData<unsigned int>((__int64)&v36, &v39)
      && CFlipBlobPropertyReader::ReadData<unsigned int>((__int64)&v36, &v40)
      && CFlipBlobPropertyReader::ReadData<unsigned int>((__int64)&v36, &v41) )
    {
      if ( CFlipBlobPropertyReader::ReadData<tagRECT>(&v36, &v38) )
      {
        v34 = (int)v39;
        v35 = v38;
        *((_BYTE *)a3 + 129) |= 3u;
        *((_DWORD *)a3 + 49) = v34;
        *((_DWORD *)a3 + 50) = v40;
        *((_DWORD *)a3 + 51) = v41;
        *((_OWORD *)a3 + 13) = v35;
      }
    }
  }
}
