/*
 * XREFs of ?CreateVirtualTouchpadControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E495C
 * Callers:
 *     ?Materialize_BamoVirtualTouchpadControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E8804 (-Materialize_BamoVirtualTouchpadControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0VirtualTouchpadControllerProxy@@QEAA@XZ @ 0x1800F0850 (--0VirtualTouchpadControllerProxy@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::CreateVirtualTouchpadControllerProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  VirtualTouchpadControllerProxy *v5; // rdi
  const char *v6; // r9
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // [rsp+38h] [rbp+10h] BYREF
  VirtualTouchpadControllerProxy *v10; // [rsp+40h] [rbp+18h]

  v9 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v9,
    this);
  v10 = (VirtualTouchpadControllerProxy *)operator new(0x50uLL);
  v5 = VirtualTouchpadControllerProxy::VirtualTouchpadControllerProxy(v10);
  v7 = v9;
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 128));
    *((_DWORD *)v7 + 42) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v5;
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      20386LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      v6);
    __debugbreak();
  }
}
