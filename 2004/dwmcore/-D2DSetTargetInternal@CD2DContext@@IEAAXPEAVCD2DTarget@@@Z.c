/*
 * XREFs of ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800B15B0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800643E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800B1470 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DSetTargetInternal(CD2DContext *this, struct CD2DTarget *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = *((_QWORD *)this + 31);
  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 5);
    v4 = *((_QWORD *)a2 + 4);
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, v4, v3);
}
