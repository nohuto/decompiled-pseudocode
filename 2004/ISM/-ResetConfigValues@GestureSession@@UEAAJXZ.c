/*
 * XREFs of ?ResetConfigValues@GestureSession@@UEAAJXZ @ 0x180183400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::ResetConfigValues(GestureSession *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = (_QWORD *)((char *)this + 704);
  v2 = 5LL;
  do
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
    ++v1;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
