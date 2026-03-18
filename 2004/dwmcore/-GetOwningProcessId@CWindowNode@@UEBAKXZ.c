/*
 * XREFs of ?GetOwningProcessId@CWindowNode@@UEBAKXZ @ 0x1800DE8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::GetOwningProcessId(CWindowNode *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 79) + 128LL);
}
