/*
 * XREFs of ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01C5F04
 * Callers:
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C01C85B4 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C01C94C0 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C95CC (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C01CABA0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C01CADDC (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::CancelMouseUpTimer(CPTPEngine *this, int a2)
{
  unsigned int *v2; // rdi

  v2 = (unsigned int *)((char *)this + 3816);
  if ( *((_DWORD *)this + 954) )
  {
    if ( *((_DWORD *)this + 952) )
    {
      CBasePTPEngine::SendTimerOutput(this, 1LL);
      *((_DWORD *)this + 952) = 0;
    }
    if ( a2 )
      CPTPEngine::SendMouseUpIfPending(this, v2);
  }
}
