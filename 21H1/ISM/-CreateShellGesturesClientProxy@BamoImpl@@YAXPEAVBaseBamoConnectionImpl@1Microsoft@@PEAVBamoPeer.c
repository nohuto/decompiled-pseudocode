/*
 * XREFs of ?CreateShellGesturesClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E48B4
 * Callers:
 *     ?Materialize_BamoShellGesturesClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E8380 (-Materialize_BamoShellGesturesClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateShellGesturesClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellGesturesClientProxy@@@Z @ 0x1801015C0 (-CreateShellGesturesClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellGesturesCli.c)
 */

void __fastcall BamoImpl::CreateShellGesturesClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  struct ISMBamos_AutoBamos::BamoPeer *v5; // rcx
  int v6; // eax
  const char *v7; // r9
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  struct BamoShellGesturesClientProxy *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // [rsp+38h] [rbp+10h] BYREF
  struct BamoShellGesturesClientProxy *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v11,
    this);
  v6 = CreateShellGesturesClientProxy(v5, &v12);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      20265LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
  v8 = v11;
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 128));
    *((_DWORD *)v8 + 42) = GetCurrentThreadId();
  }
  v9 = v12;
  *(_QWORD *)a3 = v12;
  if ( !v9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      20270LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      v7);
    __debugbreak();
  }
}
