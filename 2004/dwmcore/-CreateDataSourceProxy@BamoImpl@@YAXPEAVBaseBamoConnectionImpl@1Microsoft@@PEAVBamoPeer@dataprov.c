/*
 * XREFs of ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18017F920
 * Callers:
 *     ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18017FAF0 (-Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D30BC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DataSourceProxy@@QEAA@XZ @ 0x180194E64 (--0DataSourceProxy@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall BamoImpl::CreateDataSourceProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  DataSourceProxy *v5; // rax
  DataSourceProxy *v6; // rbx
  DataSourceProxy *v7; // rdi
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v10,
    this);
  v5 = (DataSourceProxy *)DefaultHeap::AllocClear(0xE0uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v5, 0, 0xE0uLL);
  v7 = DataSourceProxy::DataSourceProxy(v6);
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D0D,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL);
    __debugbreak();
  }
  v8 = v10;
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 128));
    *((_DWORD *)v8 + 42) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v7;
}
