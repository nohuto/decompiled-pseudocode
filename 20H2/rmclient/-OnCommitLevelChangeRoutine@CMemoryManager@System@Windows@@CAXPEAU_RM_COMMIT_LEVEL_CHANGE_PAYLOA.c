/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180001FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@Z @ 0x180002040 (--$DoInvoke@V_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@-$EventSource@U-$IEventHandler@PEAUIIns.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1)
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) <= *(_DWORD *)a1 )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>((__int64)&Windows::System::CMemoryManager::s_levelDecreasedEvent);
  }
  else
  {
    v3 = 0LL;
    v2 = 0LL;
    v1[0] = &v2;
    v1[1] = &v3;
    Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_6064947f4016cf83efe0bc3b582d8f17_>(
      &Windows::System::CMemoryManager::s_levelIncreasedEvent,
      v1);
  }
}
