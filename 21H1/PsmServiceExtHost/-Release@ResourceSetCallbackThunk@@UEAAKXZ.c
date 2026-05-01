/*
 * XREFs of ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x180037190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800448CC (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetCallbackThunk::Release(ResourceSetCallbackThunk *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
