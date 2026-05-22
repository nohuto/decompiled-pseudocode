/*
 * XREFs of ?SetConfigValue@GestureSession@@UEAAJPEBUGestureRecognizerConfigValue@@@Z @ 0x180183870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::SetConfigValue(GestureSession *this, const struct GestureRecognizerConfigValue *a2)
{
  int v3; // ebx
  _QWORD *v4; // rdi

  if ( !a2 || (unsigned int)(*(_DWORD *)a2 - 1) > 0x19 )
    return 2147942487LL;
  v3 = 0;
  v4 = (_QWORD *)((char *)this + 704);
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const struct GestureRecognizerConfigValue *))(*(_QWORD *)*v4 + 56LL))(
           *v4,
           a2) )
    {
      break;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  return 0LL;
}
