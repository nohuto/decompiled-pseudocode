/*
 * XREFs of ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18005F698
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18004C688 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18005F170 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1801A14B0 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180266060 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawListBitmap::IsOpaque(CDrawListBitmap *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 40) )
    return 1;
  v2 = *(_QWORD *)this;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, CDrawListBitmap *))(*(_QWORD *)v2 + 8LL))(v2, this);
  v4 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 1)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL));
  return *(_DWORD *)((**v4)(v4, v5) + 4) == 3;
}
