/*
 * XREFs of ?OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180171100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B284 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x180170F2C (--$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL.c)
 */

__int64 __fastcall ActivationProcessor::OnHitTest(
        ActivationProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ActivationContext *v8; // rbx
  __int64 (__fastcall *v9)(ActivationContext *, GUID *, __int64 *); // rdi
  ActivationContext *v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = (__int64 *)((char *)a4 + 8);
  *(_DWORD *)a4 = 1;
  if ( !*((_QWORD *)a4 + 1) && (*(_BYTE *)a2 & 0x1B) != 0 && (*((_DWORD *)a2 + 8) & 0x2004) == 0x2004 )
  {
    v11[0] = 0LL;
    v13 = 0;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
           v11,
           (_DWORD *)a3 + 24,
           &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 59LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\ac"
                 "tivationprocessor.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(v11);
      return v6;
    }
    v8 = v11[0];
    v9 = **(__int64 (__fastcall ***)(ActivationContext *, GUID *, __int64 *))v11[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
    v5 = v9(v8, &GUID_00000000_0000_0000_c000_000000000046, v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 60LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(v11);
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
