/*
 * XREFs of PortpCancelRoutine @ 0x1C005A2A0
 * Callers:
 *     <none>
 * Callees:
 *     PortpCompleteRequestIrp @ 0x1C005A340 (PortpCompleteRequestIrp.c)
 */

void __fastcall PortpCancelRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  KIRQL v4; // cl
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  KIRQL Irql; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_BYTE *)(a2 + 69);
  Irql = 0;
  v5 = *(_QWORD *)(v2 + 32);
  IoReleaseCancelSpinLock(v4);
  if ( v5 )
  {
    IoCancelIrp(*(PIRP *)(v5 + 8));
    IoAcquireCancelSpinLock(&Irql);
    v6 = *(_QWORD *)(a2 + 184);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    if ( !v7 )
      PortpCompleteRequestIrp(a2, v5);
  }
}
