/*
 * XREFs of ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x180037E50
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180037C80 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C9F0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801886C4 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     ??0InputConfigContextProvider@@IEAA@XZ @ 0x1800259D0 (--0InputConfigContextProvider@@IEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z@std@@@Z @ 0x18002D314 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputConfigContextProvider::Create(struct ISystemContextProvider **a1)
{
  struct SystemContextProvider *v2; // rbx
  InputConfigContextProvider *v3; // rax
  int v4; // eax
  __int64 v5; // r8
  int v6; // edi
  __int64 v8; // rdx
  int v9[2]; // [rsp+20h] [rbp-58h] BYREF
  struct SystemContextProvider *v10; // [rsp+28h] [rbp-50h]
  int *v11; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = 0LL;
  if ( a1 )
  {
    v2 = SystemContextProvider::s_pContextProvider;
    if ( SystemContextProvider::s_pContextProvider )
    {
LABEL_10:
      (*(void (__fastcall **)(struct SystemContextProvider *))(*(_QWORD *)v2 + 8LL))(v2);
      *a1 = SystemContextProvider::s_pContextProvider;
      v6 = 0;
      v2 = 0LL;
      goto LABEL_11;
    }
    v3 = (InputConfigContextProvider *)RefCountedObject::operator new(0x118uLL);
    if ( v3 )
      v2 = InputConfigContextProvider::InputConfigContextProvider(v3);
    else
      v2 = 0LL;
    if ( v2 )
    {
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)v2 + 11);
      v4 = CoreUICreate((char *)v2 + 88);
      v6 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
          (const char *)(unsigned int)v4);
      }
      else
      {
        *(_QWORD *)v9 = &off_1801AF910;
        v10 = v2;
        v11 = v9;
        KernelInputConnection<_MIT_INPUT_CONFIG_MESSAGE>::Initialize(
          (_QWORD *)v2 + 12,
          (_QWORD *)v2 + 11,
          v5,
          (__int64)v9);
        v6 = 0;
      }
      if ( v6 >= 0 )
      {
        SystemContextProvider::s_pContextProvider = v2;
        goto LABEL_10;
      }
      v8 = 50LL;
    }
    else
    {
      v6 = -2147024882;
      v8 = 47LL;
    }
  }
  else
  {
    v6 = -2147024809;
    v8 = 40LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  if ( v2 )
    (*(void (__fastcall **)(struct SystemContextProvider *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v6;
}
