/*
 * XREFs of ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180010340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18004437C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::Release(HAM_ACTIVITY_RM_CONTEXT *this)
{
  int v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( v1 < 0 )
    __int2c();
  if ( !v1 && this )
  {
    *(_QWORD *)this = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
    operator delete(this);
  }
  return (unsigned int)v1;
}
