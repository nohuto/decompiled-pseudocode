/*
 * XREFs of ?Release@GestureSession@@UEAAKXZ @ 0x1801832B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GGestureSession@@AEAAPEAXI@Z @ 0x180182874 (--_GGestureSession@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall GestureSession::Release(GestureSession *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    GestureSession::`scalar deleting destructor'(this);
  return v1;
}
