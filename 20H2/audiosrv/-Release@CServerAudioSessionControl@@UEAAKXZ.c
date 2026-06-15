/*
 * XREFs of ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x1800377B0
 * Callers:
 *     ?Release@CServerAudioSessionControl@@W7EAAKXZ @ 0x180074440 (-Release@CServerAudioSessionControl@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::Release(CServerAudioSessionControl *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 8;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 8);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
