/*
 * XREFs of ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1800044F4
 * Callers:
 *     ?CreateInputAttemptedDeliveryClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18000441C (-CreateInputAttemptedDeliveryClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D2C (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputAttemptedDeliveryClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputAttemptedDeliveryClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD); // rdi
  _DWORD *v6; // rbx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void (__fastcall ***v10)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 184) + 8LL)
                                                                         + 104LL))(*(_QWORD *)(v4 + 184) + 8LL);
  v6 = operator new(0x40uLL);
  v10 = v5;
  if ( v5 )
    (**v5)(v5);
  v6[6] = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  v6[10] = 0;
  v6[11] = 0;
  v6[12] = 0;
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::`vftable';
  *(_QWORD *)v6 = &InputAttemptedDeliveryClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v6 + 1) = &InputAttemptedDeliveryClientProxy::`vftable'{for `IInputAttemptedDeliveryClientProxy'};
  *((_QWORD *)v6 + 7) = v5;
  if ( v5 )
    (**v5)(v5);
  *a2 = (struct BamoInputAttemptedDeliveryClientProxy *)v6;
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v10);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattempteddeliveryclientproxy.cpp",
    (const char *)0x8007000ELL,
    v8);
  return 2147942414LL;
}
