/*
 * XREFs of PsPicoWalkUserStack @ 0x14090736C
 * Callers:
 *     EtwpTraceStackWalk @ 0x1405A1574 (EtwpTraceStackWalk.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PsGetBaseTrapFrame @ 0x14057B8A0 (PsGetBaseTrapFrame.c)
 */

__int64 __fastcall PsPicoWalkUserStack(__int64 a1, unsigned int a2)
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v8; // rax
  __int64 v9; // r9
  __int128 v10; // xmm1
  _BYTE v11[400]; // [rsp+20h] [rbp-1A8h] BYREF

  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140C1DFF0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = v11;
    v9 = 3LL;
    do
    {
      *v8 = *BaseTrapFrame;
      v8[1] = BaseTrapFrame[1];
      v8[2] = BaseTrapFrame[2];
      v8[3] = BaseTrapFrame[3];
      v8[4] = BaseTrapFrame[4];
      v8[5] = BaseTrapFrame[5];
      v8[6] = BaseTrapFrame[6];
      v8 += 8;
      v10 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v8 - 1) = v10;
      --v9;
    }
    while ( v9 );
    *v8 = *BaseTrapFrame;
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), 128LL, v5, 0LL);
    return ((__int64 (__fastcall *)(_BYTE *, __int64, _QWORD))xmmword_140C1DFF0)(v11, a1, a2);
  }
  return result;
}
