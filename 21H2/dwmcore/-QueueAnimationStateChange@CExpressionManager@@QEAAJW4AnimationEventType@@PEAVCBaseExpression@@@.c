/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800ACD40
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800AC3A0 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800ACC34 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800ACCE4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180036A38 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( a3[2] <= 0 )
    return 0;
  LODWORD(v10) = a2;
  v4 = *(_DWORD *)(a1 + 256);
  *((_QWORD *)&v10 + 1) = a3;
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_9;
  }
  if ( v5 > *(_DWORD *)(a1 + 252) )
  {
    v8 = DynArrayImpl<1>::AddMultipleAndSet(a1 + 232, 0x10u, (__int64)a3, &v10);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
LABEL_9:
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v6, 0x2BEu, 0LL);
      return (unsigned int)v6;
    }
    goto LABEL_5;
  }
  *(_OWORD *)(*(_QWORD *)(a1 + 232) + 16LL * v4) = v10;
  *(_DWORD *)(a1 + 256) = v5;
LABEL_5:
  (*(void (__fastcall **)(int *))(*(_QWORD *)a3 + 8LL))(a3);
  return 0;
}
