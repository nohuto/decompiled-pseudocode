/*
 * XREFs of ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x1800FFB34
 * Callers:
 *     ?CreateEdgyControllerClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E407C (-CreateEdgyControllerClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPee.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3D4C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x1800FF98C (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 */

__int64 __fastcall CreateEdgyControllerClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoEdgyControllerClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 184) + 8LL) + 72LL))(*(_QWORD *)(v4 + 184) + 8LL);
  v6 = operator new(0x88uLL);
  v9 = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 24));
  *a2 = (struct BamoEdgyControllerClientProxy *)EdgyControllerClientProxy::EdgyControllerClientProxy((__int64)v6, &v9);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v9);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerclientproxy.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
