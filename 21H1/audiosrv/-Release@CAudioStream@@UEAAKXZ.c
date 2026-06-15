/*
 * XREFs of ?Release@CAudioStream@@UEAAKXZ @ 0x180035620
 * Callers:
 *     ?Release@CAudioSession@@W7EAAKXZ @ 0x180074D40 (-Release@CAudioSession@@W7EAAKXZ.c)
 *     ?Release@CAudioStream@@WBA@EAAKXZ @ 0x180074D50 (-Release@CAudioStream@@WBA@EAAKXZ.c)
 *     ?Release@CAudioSession@@WBI@EAAKXZ @ 0x180074D60 (-Release@CAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CAudioStream@@WCA@EAAKXZ @ 0x180074D70 (-Release@CAudioStream@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Release(CAudioStream *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 32;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
