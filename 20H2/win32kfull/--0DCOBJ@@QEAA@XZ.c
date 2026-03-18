/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C027ABC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  return this;
}
