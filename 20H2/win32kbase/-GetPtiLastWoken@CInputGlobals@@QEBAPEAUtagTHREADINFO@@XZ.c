/*
 * XREFs of ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0054A70
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall CInputGlobals::GetPtiLastWoken(CInputGlobals *this)
{
  __int64 v2; // rbx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_QWORD *)this + 11);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return (struct tagTHREADINFO *)v2;
}
