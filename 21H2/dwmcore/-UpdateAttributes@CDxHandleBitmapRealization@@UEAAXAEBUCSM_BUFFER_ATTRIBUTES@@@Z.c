/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18000E0B0
 * Callers:
 *     ?UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802A3DA0 (-UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802A4C50 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x180067D08 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800681EC (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006E1AC (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800D95E8 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char *v2; // r14
  int v3; // r12d
  unsigned int v5; // edi
  int v6; // r15d
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
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
  __int128 v30; // [rsp+20h] [rbp-48h] BYREF
  int v31; // [rsp+70h] [rbp+8h] BYREF
  char v32; // [rsp+78h] [rbp+10h] BYREF

  v2 = (char *)this - 264;
  v3 = *((_DWORD *)this - 54);
  v5 = 3;
  v6 = 3;
  if ( *((_DWORD *)this - 66) )
    v6 = *(_DWORD *)v2;
  v8 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
  (*(void (__fastcall **)(char *, int *))(*(_QWORD *)v8 + 16LL))(v8, &v31);
  v12 = *((_DWORD *)this - 20);
  v30 = *(_OWORD *)((char *)this - 212);
  LOBYTE(v11) = v12 != DisplayId::None && v12 != DisplayId::All;
  if ( (*((_DWORD *)a2 + 34) & 1) != (*((_DWORD *)this - 32) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this - 32) )
  {
    LOBYTE(v9) = *((_BYTE *)a2 + 136) & 1;
    v19 = (int *)CBitmapRealization::CalcDisplayRestriction(
                   &v32,
                   v9,
                   *((_QWORD *)a2 + 1),
                   v11,
                   v30,
                   *((_QWORD *)&v30 + 1));
    v20 = *v19;
    *((_DWORD *)this - 20) = *v19;
    v21 = v20 != DisplayId::None && v20 != DisplayId::All;
    if ( (_BYTE)v11 != v21 )
    {
      v22 = v21 == 0;
      v23 = *((_DWORD *)g_pComposition + 108);
      v24 = v23 + 1;
      if ( v22 )
        v24 = v23 - 1;
      *((_DWORD *)g_pComposition + 108) = v24;
    }
  }
  *(_OWORD *)v2 = *(_OWORD *)a2;
  *((_OWORD *)v2 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v2 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v2 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v2 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v2 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v2 + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)v2 + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)v2 + 8) = *((_OWORD *)a2 + 8);
  v13 = *((_QWORD *)this + 2);
  if ( v13 )
  {
    v14 = 0;
    v15 = 3;
    if ( *(_DWORD *)v2 )
      v15 = *(_DWORD *)v2;
    if ( v6 != v15 )
    {
      v25 = v13 + 80;
      if ( *(_DWORD *)v2 )
        v5 = *(_DWORD *)v2;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v25 + 8LL))(v25, v5, v10, v11);
      v14 = 1;
    }
    v16 = *((unsigned int *)this - 54);
    if ( v3 != (_DWORD)v16 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 16LL))(
        *((_QWORD *)this + 2) + 80LL,
        v16,
        v10,
        v11);
      v14 = 1;
    }
    v17 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *, __int64, __int64))(*(_QWORD *)v17 + 16LL))(
                      v17,
                      &v32,
                      v10,
                      v11);
    if ( v31 == *v18 )
    {
      if ( !v14 )
        goto LABEL_15;
    }
    else
    {
      v26 = *((_QWORD *)this + 2);
      v27 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v26 + 80) + 24LL);
      v28 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
      v29 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v28 + 16LL))(v28, &v32);
      v27(v26 + 80, *v29);
    }
    CD2DBitmapCache::InitializeCache(
      (CDxHandleBitmapRealization *)((char *)this - 360),
      (struct ID2DBitmapCacheSource *)((*((_QWORD *)this + 2) + 96LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 2) >> 64)));
    CBitmapRealization::InvalidateDecodeBitmap((CDxHandleBitmapRealization *)((char *)this - 360), 0);
  }
LABEL_15:
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                           &v30,
                           (char *)this - 212,
                           v10,
                           v11) )
    *((_BYTE *)this - 48) = 0;
}
