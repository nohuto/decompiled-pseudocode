/*
 * XREFs of ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x180257A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x180257A4C (--1CHolographicInteropTaskQueue@@EEAA@XZ.c)
 */

CHolographicInteropTaskQueue *__fastcall CHolographicInteropTaskQueue::`scalar deleting destructor'(
        CHolographicInteropTaskQueue *this,
        char a2)
{
  CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
