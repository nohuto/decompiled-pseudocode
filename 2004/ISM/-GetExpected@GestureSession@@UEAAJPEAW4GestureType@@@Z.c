/*
 * XREFs of ?GetExpected@GestureSession@@UEAAJPEAW4GestureType@@@Z @ 0x18001E600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureSession::GetExpected(GestureSession *this, enum GestureType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 3);
  return 0LL;
}
