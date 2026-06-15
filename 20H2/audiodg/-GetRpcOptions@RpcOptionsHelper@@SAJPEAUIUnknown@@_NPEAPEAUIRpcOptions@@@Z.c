/*
 * XREFs of ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z @ 0x1400574E8
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1400563B0 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E5C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RpcOptionsHelper::GetRpcOptions(struct IUnknown *a1, __int64 a2, struct IRpcOptions **a3)
{
  int v5; // ebx
  struct IRpcOptions *v6; // rax
  struct IRpcOptions *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a1 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IRpcOptions **))a1->lpVtbl->QueryInterface)(
           a1,
           &GUID_00000144_0000_0000_c000_000000000046,
           &v8);
    if ( v5 >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(struct IRpcOptions *, struct IUnknown *, __int64, __int64 *))v8->lpVtbl->Query)(
             v8,
             a1,
             2LL,
             &v9);
      if ( v5 >= 0 )
      {
        if ( v9 == 1 )
        {
          v5 = 0;
          v6 = v8;
          v8 = 0LL;
          *a3 = v6;
        }
        else
        {
          v5 = -2147467262;
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return (unsigned int)v5;
}
