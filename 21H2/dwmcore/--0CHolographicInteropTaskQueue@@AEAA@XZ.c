/*
 * XREFs of ??0CHolographicInteropTaskQueue@@AEAA@XZ @ 0x18025A6AC
 * Callers:
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x18025A808 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CHolographicInteropTaskQueue *__fastcall CHolographicInteropTaskQueue::CHolographicInteropTaskQueue(
        CHolographicInteropTaskQueue *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CHolographicInteropTaskQueue::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  InitializeSListHead((PSLIST_HEADER)this + 1);
  InitializeSListHead((PSLIST_HEADER)this + 2);
  return this;
}
