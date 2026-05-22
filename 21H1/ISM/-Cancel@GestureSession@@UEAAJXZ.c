/*
 * XREFs of ?Cancel@GestureSession@@UEAAJXZ @ 0x180183000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::Cancel(GestureSession *this)
{
  __int64 result; // rax

  (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 80LL))(this);
  *((_DWORD *)this + 4) = 0;
  result = 0LL;
  *((_BYTE *)this + 25) = 1;
  return result;
}
