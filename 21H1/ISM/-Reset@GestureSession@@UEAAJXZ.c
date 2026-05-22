/*
 * XREFs of ?Reset@GestureSession@@UEAAJXZ @ 0x180183830
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x180182C04 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::Reset(GestureSession *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  v2 = (_QWORD *)((char *)this + 704);
  v3 = 5LL;
  do
  {
    (*(void (__fastcall **)(_QWORD, GestureSession *))(*(_QWORD *)*v2 + 32LL))(*v2, this);
    ++v2;
    --v3;
  }
  while ( v3 );
  memset_0((char *)this + 752, 0, 0x190uLL);
  *(_QWORD *)((char *)this + 1156) = 0LL;
  *((_WORD *)this + 577) = -1;
  result = 0LL;
  *((_DWORD *)this + 187) = 0;
  *((_BYTE *)this + 744) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 25) = 0;
  return result;
}
