/*
 * XREFs of ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x180001FA4
 * Callers:
 *     ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180001FE0 (-OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOA.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@Z @ 0x180002040 (--$DoInvoke@V_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@-$EventSource@U-$IEventHandler@PEAUIIns.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(
        __int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  v2 = 0LL;
  v4[0] = &v2;
  v4[1] = &v3;
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_6064947f4016cf83efe0bc3b582d8f17_>(
           a1,
           v4);
}
