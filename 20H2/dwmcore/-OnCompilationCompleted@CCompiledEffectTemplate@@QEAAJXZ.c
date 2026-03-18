/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800240AC
 * Callers:
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180023FA8 (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180023EC0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x180024184 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007125C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  CNotificationResource *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  int v7; // eax
  unsigned int v8; // ecx
  CNotificationResource *v10; // rcx
  __int64 ChannelCallbackId; // rcx
  __int64 v12; // rax
  unsigned int v13; // r10d
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // [rsp+40h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-10h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1080LL) + 48LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      ChannelCallbackId = (unsigned int)CNotificationResource::GetChannelCallbackId(v10);
      v12 = *((unsigned int *)this + 14);
      v16 = ChannelCallbackId;
      v17 = v12;
      v14 = CoreUICallSend(v3, &v16, v13, 5LL, 1, &unk_1802885ED);
      v2 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x8Eu, 0LL);
    }
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 3 )
  {
    if ( CNotificationResource::ShouldNotify(this)
      && (v5 = CNotificationResource::GetChannelCallbackId(v4),
          v17 = *((unsigned int *)this + 14),
          v16 = v5,
          v7 = CoreUICallSend(v3, &v16, v6, 5LL, 0, &unk_1802885DE),
          v2 = v7,
          v7 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x80u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    }
  }
  return v2;
}
