/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800187D0
 * Callers:
 *     ?UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180262360 (-UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180263330 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18003DED0 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x18003E984 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092D04 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C7D2C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  int v3; // r15d
  unsigned int v5; // edi
  int v6; // r14d
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // bl
  int v15; // eax
  __int64 v16; // rdx
  char *v17; // rcx
  _DWORD *v18; // rax
  int *v19; // rax
  int v20; // ecx
  char v21; // al
  bool v22; // zf
  int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64, _QWORD); // rbx
  char *v28; // rcx
  unsigned int *v29; // rax
  __int128 v30; // [rsp+20h] [rbp-38h] BYREF
  int v31; // [rsp+60h] [rbp+8h] BYREF
  char v32; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_DWORD *)this - 47);
  v5 = 3;
  v6 = 3;
  if ( *((_DWORD *)this - 58) )
    v6 = *((_DWORD *)this - 58);
  v7 = (char *)this + *(int *)(*((_QWORD *)this - 39) + 16LL) - 312;
  (*(void (__fastcall **)(char *, int *))(*(_QWORD *)v7 + 16LL))(v7, &v31);
  v11 = *((_DWORD *)this - 20);
  v30 = *(_OWORD *)((char *)this - 184);
  LOBYTE(v10) = v11 != DisplayId::None && v11 != DisplayId::All;
  if ( (*((_DWORD *)a2 + 29) & 1) != (*((_DWORD *)this - 29) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this - 28) )
  {
    LOBYTE(v8) = *((_BYTE *)a2 + 116) & 1;
    v19 = (int *)CBitmapRealization::CalcDisplayRestriction(
                   &v32,
                   v8,
                   *((_QWORD *)a2 + 1),
                   v10,
                   v30,
                   *((_QWORD *)&v30 + 1));
    v20 = *v19;
    *((_DWORD *)this - 20) = *v19;
    v21 = v20 != DisplayId::None && v20 != DisplayId::All;
    if ( (_BYTE)v10 != v21 )
    {
      v22 = v21 == 0;
      v23 = *((_DWORD *)g_pComposition + 70);
      v24 = v23 + 1;
      if ( v22 )
        v24 = v23 - 1;
      *((_DWORD *)g_pComposition + 70) = v24;
    }
  }
  v12 = *((_QWORD *)this + 2);
  *(_OWORD *)((char *)this - 232) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this - 216) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this - 200) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this - 184) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this - 168) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this - 152) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this - 136) = *((_OWORD *)a2 + 6);
  *((_QWORD *)this - 15) = *((_QWORD *)a2 + 14);
  if ( v12 )
  {
    v13 = *((unsigned int *)this - 58);
    v14 = 0;
    v15 = 3;
    if ( (_DWORD)v13 )
      v15 = *((_DWORD *)this - 58);
    if ( v6 != v15 )
    {
      v25 = v12 + 80;
      if ( (_DWORD)v13 )
        v5 = *((_DWORD *)this - 58);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v25 + 8LL))(v25, v5, v13, v10);
      v14 = 1;
    }
    v16 = *((unsigned int *)this - 47);
    if ( v3 != (_DWORD)v16 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 16LL))(
        *((_QWORD *)this + 2) + 80LL,
        v16,
        v13,
        v10);
      v14 = 1;
    }
    v17 = (char *)this + *(int *)(*((_QWORD *)this - 39) + 16LL) - 312;
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *, __int64, __int64))(*(_QWORD *)v17 + 16LL))(
                      v17,
                      &v32,
                      v13,
                      v10);
    if ( v31 != *v18 )
    {
      v26 = *((_QWORD *)this + 2);
      v27 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v26 + 80) + 24LL);
      v28 = (char *)this + *(int *)(*((_QWORD *)this - 39) + 16LL) - 312;
      v29 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v28 + 16LL))(v28, &v32);
      v27(v26 + 80, *v29);
      v14 = 1;
    }
    if ( v14 )
    {
      CD2DBitmapCache::InitializeCache(
        (CDxHandleBitmapRealization *)((char *)this - 328),
        (struct ID2DBitmapCacheSource *)((*((_QWORD *)this + 2) + 96LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 2) >> 64)));
      CBitmapRealization::InvalidateDecodeBitmap((CDxHandleBitmapRealization *)((char *)this - 328), 0);
    }
  }
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                           &v30,
                           (char *)this - 184,
                           v9,
                           v10) )
    *((_BYTE *)this - 48) = 0;
}
