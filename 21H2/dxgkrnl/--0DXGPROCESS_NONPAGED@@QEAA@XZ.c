/*
 * XREFs of ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C00188D4
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C010CF18 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS_NONPAGED *__fastcall DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(DXGPROCESS_NONPAGED *this)
{
  _QWORD *v1; // rbx
  DXGPROCESS_NONPAGED *result; // rax

  *((_QWORD *)this + 4) = 0LL;
  v1 = (_QWORD *)((char *)this + 88);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 13);
  v1[1] = v1;
  *v1 = v1;
  result = this;
  *((_QWORD *)this + 14) = 0LL;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  return result;
}
