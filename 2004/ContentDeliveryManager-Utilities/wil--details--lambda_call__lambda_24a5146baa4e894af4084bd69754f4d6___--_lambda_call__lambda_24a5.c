/*
 * XREFs of wil::details::lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___::_lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___ @ 0x18006A5B8
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::dtor$6 @ 0x1800D2C6A (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800D2C6A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x18006BBA8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_cbb39659d92f3de8398.c)
 */

void __fastcall wil::details::lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___::_lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___(
        __int64 a1)
{
  int v1; // eax
  int v2[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(a1 + 16);
    v1 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___(
           **(_QWORD **)a1,
           v2);
    if ( v1 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v1);
      JUMPOUT(0x18006A60BLL);
    }
  }
}
