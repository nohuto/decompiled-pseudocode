/*
 * XREFs of ?QueryPotentials@GestureSession@@UEAAJPEAW4GestureType@@@Z @ 0x180182F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::QueryPotentials(GestureSession *this, enum GestureType *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbp

  if ( *((_BYTE *)this + 24) )
  {
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 24) = 0;
    if ( !*((_BYTE *)this + 25) )
    {
      v4 = (_QWORD *)((char *)this + 704);
      v5 = 5LL;
      do
      {
        *((_DWORD *)this + 4) |= (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
        ++v4;
        --v5;
      }
      while ( v5 );
    }
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 3) & *((_DWORD *)this + 4);
  return 0LL;
}
