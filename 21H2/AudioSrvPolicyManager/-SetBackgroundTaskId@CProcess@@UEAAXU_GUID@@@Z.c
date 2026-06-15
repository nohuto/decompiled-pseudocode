/*
 * XREFs of ?SetBackgroundTaskId@CProcess@@UEAAXU_GUID@@@Z @ 0x18001A290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetBackgroundTaskId(CProcess *this, struct _GUID *a2)
{
  *(struct _GUID *)((char *)this + 536) = *a2;
}
