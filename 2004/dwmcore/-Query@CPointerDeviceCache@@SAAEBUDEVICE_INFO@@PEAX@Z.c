/*
 * XREFs of ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180235330
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022BC2C (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x18022FD88 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022FE68 (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x18022FFE8 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x180235500 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802352A4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAX@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tm.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Query(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx
  __int64 *v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // zf
  __int128 v12; // xmm2
  void **v13; // xmm3_8
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  void **v19; // [rsp+38h] [rbp-31h] BYREF
  void **v20; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+48h] [rbp-21h] BYREF
  __int128 v22; // [rsp+50h] [rbp-19h]
  __int128 v23; // [rsp+60h] [rbp-9h]
  __int128 v24; // [rsp+70h] [rbp+7h]
  __int128 v25; // [rsp+80h] [rbp+17h] BYREF
  __int128 v26; // [rsp+90h] [rbp+27h] BYREF
  __int128 v27; // [rsp+A0h] [rbp+37h] BYREF
  void **v28; // [rsp+B0h] [rbp+47h]

  v4 = CPointerDeviceCache::s_deviceCache;
  v18 = a1;
  v5 = (__int64 *)CPointerDeviceCache::s_deviceCache;
  v6 = *(__int64 **)(CPointerDeviceCache::s_deviceCache + 8);
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_8;
  do
  {
    if ( v6[4] >= a1 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v5 == (__int64 *)CPointerDeviceCache::s_deviceCache || a1 < v5[4] )
LABEL_8:
    v5 = (__int64 *)CPointerDeviceCache::s_deviceCache;
  if ( v5 == (__int64 *)CPointerDeviceCache::s_deviceCache )
  {
    LOBYTE(v28) = 1;
    *((_QWORD *)&v27 + 1) = a1;
    if ( a1 )
    {
      if ( (unsigned int)GetPointerDeviceRects(a1, &v26, &v25) && (unsigned int)GetPointerDeviceOrientation(v18, &v27) )
      {
        a1 = v18;
        v4 = CPointerDeviceCache::s_deviceCache;
        goto LABEL_16;
      }
      a1 = v18;
      v4 = CPointerDeviceCache::s_deviceCache;
    }
    LOBYTE(v28) = 0;
LABEL_16:
    v7 = *(_QWORD *)(v4 + 8);
    v8 = v4;
    v9 = v25;
    v10 = v26;
    v11 = *(_BYTE *)(v7 + 25) == 0;
    v12 = v27;
    v13 = v28;
    v22 = v25;
    v23 = v26;
    v24 = v27;
    v19 = v28;
    if ( !v11 )
      goto LABEL_23;
    do
    {
      if ( *(_QWORD *)(v7 + 32) >= a1 )
      {
        v8 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
    if ( v8 == v4 || a1 < *(_QWORD *)(v8 + 32) )
    {
LABEL_23:
      v20 = (void **)&v18;
      v14 = std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
              (__int64)&v20,
              &v21,
              v8,
              a4,
              &v20);
      v9 = v22;
      v10 = v23;
      v8 = *v14;
      v12 = v24;
      v13 = v19;
    }
    *(_OWORD *)(v8 + 40) = v9;
    *(_OWORD *)(v8 + 56) = v10;
    *(_OWORD *)(v8 + 72) = v12;
    *(_QWORD *)(v8 + 88) = v13;
    a1 = v18;
    v4 = CPointerDeviceCache::s_deviceCache;
  }
  v15 = *(_QWORD *)(v4 + 8);
  v16 = v4;
  if ( *(_BYTE *)(v15 + 25) )
    goto LABEL_32;
  do
  {
    if ( *(_QWORD *)(v15 + 32) >= a1 )
    {
      v16 = v15;
      v15 = *(_QWORD *)v15;
    }
    else
    {
      v15 = *(_QWORD *)(v15 + 16);
    }
  }
  while ( !*(_BYTE *)(v15 + 25) );
  if ( v16 == v4 || a1 < *(_QWORD *)(v16 + 32) )
  {
LABEL_32:
    v19 = (void **)&v18;
    v16 = *std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
             (__int64)&v19,
             &v21,
             v16,
             a4,
             &v19);
  }
  return (const struct DEVICE_INFO *)(v16 + 40);
}
