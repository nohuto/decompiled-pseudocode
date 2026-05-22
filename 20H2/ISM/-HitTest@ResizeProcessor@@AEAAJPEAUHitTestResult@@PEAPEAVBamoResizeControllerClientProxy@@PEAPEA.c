/*
 * XREFs of ?HitTest@ResizeProcessor@@AEAAJPEAUHitTestResult@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1800FDDB4
 * Callers:
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1800FED0C (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D64 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x1800FCDA8 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 */

__int64 __fastcall ResizeProcessor::HitTest(
        ResizeProcessor *this,
        struct HitTestResult *a2,
        struct BamoResizeControllerClientProxy **a3,
        struct InputSite **a4)
{
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  struct BamoResizeControllerClientProxy *v8; // rbx
  struct BamoResizeControllerClientProxy *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = this;
  if ( a3 )
  {
    v6 = (__int64 *)*((_QWORD *)a2 + 1);
    v7 = (__int64 *)*((_QWORD *)a2 + 2);
    while ( v6 != v7 )
    {
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v6, (__int64 *)&v10);
      v8 = v10;
      if ( v10 )
      {
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v10);
        *a3 = v8;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v6);
        *a4 = (struct InputSite *)*v6;
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v10);
        return 0LL;
      }
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v10);
      ++v6;
    }
  }
  return 0LL;
}
