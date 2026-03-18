/*
 * XREFs of _PlaySoundPostMessage@12 @ 0x27A3F0
 * Callers:
 *     ?PlaySync@CUserPlaySound@@AAEJK@Z @ 0xA1BB8 (-PlaySync@CUserPlaySound@@AAEJK@Z.c)
 * Callees:
 *     ?PlatformFree@NSInstrumentation@@YGXPAX@Z @ 0x92098 (-PlatformFree@NSInstrumentation@@YGXPAX@Z.c)
 *     _I_PlaySoundkPostMessage@24 @ 0xA1C0C (_I_PlaySoundkPostMessage@24.c)
 *     _PlaySndClient_midl_user_allocate@4 @ 0xA1C38 (_PlaySndClient_midl_user_allocate@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall PlaySoundPostMessage(void *a1, int a2, int a3)
{
  struct _RPC_ASYNC_STATE *v4; // eax
  struct _RPC_ASYNC_STATE *v5; // esi
  RPC_STATUS v6; // edi
  int v7; // ecx
  RPC_BINDING_HANDLE DestinationBinding; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  DestinationBinding = 0;
  v4 = (struct _RPC_ASYNC_STATE *)PlaySndClient_midl_user_allocate(0x38u);
  v5 = v4;
  if ( !v4 )
    return -1073741801;
  v6 = RpcAsyncInitializeHandle(v4, 0x38u);
  if ( v6 || (v6 = RpcBindingCopy(a1, &DestinationBinding)) != 0 )
  {
    NSInstrumentation::PlatformFree(v5);
  }
  else
  {
    v5->UserInfo = DestinationBinding;
    v5->NotificationType = RpcNotificationTypeCallback;
    v5->u.Event = (PKEVENT)I_RpcGetCompleteAndFreeRoutine();
    ms_exc.registration.TryLevel = 0;
    I_PlaySoundkPostMessage((int)v5, (int)DestinationBinding, a2, a3, v7, v7);
    ms_exc.registration.TryLevel = -2;
  }
  return v6;
}
