/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C004BBAC
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C004BB70 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C00713E0 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  char v5; // di
  struct CMouseProcessor::RawMouseEvent *v7; // rax

  v2 = (char *)this + 2776;
  RIMLockExclusive((char *)this + 2776);
  if ( *((_WORD *)this + 1385) )
  {
    v5 = 1;
    v7 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 80), 1);
    if ( v7 )
      *((_QWORD *)v7 + 20) = a2;
  }
  else
  {
    v5 = 0;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
