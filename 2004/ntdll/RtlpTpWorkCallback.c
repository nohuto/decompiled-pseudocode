/*
 * XREFs of RtlpTpWorkCallback @ 0x18006FA60
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlSetThreadSubProcessTag @ 0x180020570 (RtlSetThreadSubProcessTag.c)
 *     TppStartThreadData @ 0x1800205F0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180020680 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpWorkUnposted @ 0x18006FCD0 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x18006FE28 (TpDereferenceGlobalPool.c)
 *     TpCallbackMayRunLong @ 0x18006FE70 (TpCallbackMayRunLong.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18006FFDC (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpTpImpersonate @ 0x180070030 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009CFB0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801123C4 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112460 (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x1801134DC (RtlTpETWCallbackDequeue.c)
 */

void __fastcall RtlpTpWorkCallback(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  _ACTIVATION_CONTEXT *v7; // rsi
  void *v8; // r12
  void *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 ThreadInformation; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v13[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v14; // [rsp+60h] [rbp-78h] BYREF
  int v15; // [rsp+68h] [rbp-70h]
  __int128 v16; // [rsp+70h] [rbp-68h]
  __int128 v17; // [rsp+80h] [rbp-58h]
  __int128 v18; // [rsp+90h] [rbp-48h]
  __int64 v19; // [rsp+A0h] [rbp-38h]
  __int64 v20; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v21)(__int64); // [rsp+F0h] [rbp+18h]

  v14 = 72LL;
  v15 = 1;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    RtlTpETWCallbackDequeue(v6, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v11 = *(_QWORD *)(a2 + 32);
    if ( !v11 )
    {
      v11 = TpPoolReferenceExistingGlobalPool();
      v4 = v11;
    }
    *((_QWORD *)Instance + 16) = v11;
    TpCallbackMayRunLong(Instance);
  }
  if ( *(_QWORD *)(a2 + 40) )
    RtlpTpImpersonate();
  v21 = *(void (__fastcall **)(__int64))(a2 + 56);
  v20 = *(_QWORD *)(a2 + 64);
  v7 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  v8 = *(void **)(a2 + 80);
  v13[1] = (__int64)v8;
  v9 = *(void **)(a2 + 96);
  v13[3] = (__int64)v9;
  if ( v9 )
    RtlSetThreadSubProcessTag(v9);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v7 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v8 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v7 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v14, (__int64)v7);
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v10 = 2147353478LL;
  if ( *(_BYTE *)v10 )
    RtlpTpETWCallbackStart(0, a2, (_DWORD)v21, v20, (__int64)v9);
  TppStartThreadData(v13, (__int64)v21, v20, (__int64)NtCurrentTeb()->SubProcessTag);
  v21(v20);
  if ( v7 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
    RtlReleaseActivationContext(v7);
  }
  if ( v8 )
    LdrUnloadDll(v8);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v9 )
    RtlSetThreadSubProcessTag(0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(0, a2, (_DWORD)v21, v20, (__int64)v9);
  TppCompleteThreadData(v13[0]);
}
