/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00ACDDC
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C00ACDA0 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C003620C (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di
  struct CMouseProcessor::RawMouseEvent *v10; // rax

  v2 = (char *)this + 2776;
  RIMLockExclusive((__int64)this + 2776);
  if ( *((_WORD *)this + 1385) )
  {
    v8 = 1;
    LOBYTE(v5) = 1;
    v10 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 80), v5, v6, v7);
    if ( v10 )
      *((_QWORD *)v10 + 20) = a2;
  }
  else
  {
    v8 = 0;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
