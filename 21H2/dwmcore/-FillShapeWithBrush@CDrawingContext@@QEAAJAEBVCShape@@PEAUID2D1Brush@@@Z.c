/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180094480
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18007E708 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180080A78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x180194AE0 (McTemplateU0ffff_EventWriteTransfer.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  unsigned int v14; // r12d
  int v15; // esi
  __int64 v16; // rcx
  int v18; // ecx
  CBatchOptimizer *v19; // rcx
  int v20; // eax
  struct ID2D1PrivateCompositorRenderer *v21; // rdi
  int v22; // eax
  __int64 v23; // rcx
  CD2DTarget *v24; // r13
  __int64 v25; // rdi
  CD2DTarget *v26; // r12
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // r9d
  unsigned int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-49h]
  unsigned int v34; // [rsp+30h] [rbp-39h]
  __int64 v35; // [rsp+38h] [rbp-31h] BYREF
  struct ID2D1Brush *v36; // [rsp+40h] [rbp-29h]
  __int64 v37; // [rsp+48h] [rbp-21h] BYREF
  int v38; // [rsp+50h] [rbp-19h]
  int v39; // [rsp+54h] [rbp-15h]
  __int128 v40; // [rsp+58h] [rbp-11h] BYREF
  __int64 v41; // [rsp+68h] [rbp-1h]
  __int128 v42; // [rsp+70h] [rbp+7h] BYREF
  __int64 v43; // [rsp+80h] [rbp+17h]

  v3 = *(_QWORD *)a2;
  v35 = 0LL;
  v36 = a3;
  v5 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(v3 + 24))(a2, 0LL, &v35);
  v7 = v5;
  if ( v5 < 0 )
  {
    v33 = 2516;
    goto LABEL_46;
  }
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
  v7 = v5;
  if ( v5 < 0 )
  {
    v33 = 2518;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, v33);
    goto LABEL_16;
  }
  v8 = *((_DWORD *)this + 82);
  v9 = 0;
  v10 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    v18 = v8 - 1;
    if ( v18 )
    {
      if ( v18 == 3 )
        v9 = 2;
    }
    else
    {
      v9 = 1;
    }
  }
  v11 = *(_QWORD *)(v10 + 152);
  v12 = v35;
  v37 = v35;
  v13 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v14 = *((_DWORD *)this + 76) != 0;
  v34 = v14;
  if ( v11 )
  {
    v19 = *(CBatchOptimizer **)(v10 + 160);
    if ( v19 )
    {
      CBatchOptimizer::Flush(v19);
      v11 = *(_QWORD *)(v10 + 152);
    }
    v20 = *(_DWORD *)(v10 + 48);
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_DWORD *)(v11 + 52) = v20;
    v21 = *(struct ID2D1PrivateCompositorRenderer **)(v10 + 152);
    *(_QWORD *)(v10 + 152) = 0LL;
    if ( v21 )
    {
      v22 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v10 + 16), v21);
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x21Eu);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v21 + 8);
    }
  }
  v15 = 0;
  if ( !*(_BYTE *)(v10 + 453) )
  {
    v24 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        16LL,
        0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 216) + 384LL))(*(_QWORD *)(v10 + 216));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, "3", 16LL, 0LL);
    v25 = 0LL;
    if ( *(_DWORD *)(v10 + 368) )
    {
      do
      {
        v26 = *(CD2DTarget **)(*(_QWORD *)(v10 + 344) + 8 * v25);
        if ( v24 )
          *((_BYTE *)v24 + 73) = 0;
        CD2DTarget::ApplyState(v26, (struct CD2DContext *)(v10 + 16));
        v25 = (unsigned int)(v25 + 1);
        v24 = v26;
      }
      while ( (unsigned int)v25 < *(_DWORD *)(v10 + 368) );
      v14 = v34;
    }
    v12 = v37;
    *(_BYTE *)(v10 + 453) = 1;
  }
  *(_BYTE *)(v10 + 454) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v27 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 24LL))(v13);
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      3LL,
      v27);
  }
  (*(void (__fastcall **)(unsigned __int64, __int128 *))(*(_QWORD *)v13 + 8LL))(v13, &v40);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v10 + 216) + 240LL))(*(_QWORD *)(v10 + 216), &v40);
  if ( v9 != *(_DWORD *)(v10 + 412) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 216) + 624LL))(*(_QWORD *)(v10 + 216), v9);
    *(_DWORD *)(v10 + 412) = v9;
  }
  if ( v14 != *(_DWORD *)(v10 + 408) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 216) + 256LL))(*(_QWORD *)(v10 + 216), v14);
    *(_DWORD *)(v10 + 408) = v14;
  }
  v42 = v40;
  v43 = v41;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v28 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v42, &v37);
    v15 = v28;
    v7 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x448u);
LABEL_43:
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x9DCu);
      goto LABEL_16;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v30,
        v31,
        v38,
        v39);
  }
  (*(void (__fastcall **)(_QWORD, __int64, struct ID2D1Brush *, _QWORD))(**(_QWORD **)(v10 + 216) + 184LL))(
    *(_QWORD *)(v10 + 216),
    v12,
    v36,
    0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v32 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 24LL))(v13);
    McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, "3", 3LL, v32);
  }
  v7 = v15;
  if ( v15 < 0 )
    goto LABEL_43;
LABEL_16:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  return v7;
}
