/*
 * XREFs of ?GetProcessHandle@CProcess@@UEAAPEAXXZ @ 0x1800198A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CProcess::GetProcessHandle(CProcess *this)
{
  return (void *)*((_QWORD *)this + 21);
}
