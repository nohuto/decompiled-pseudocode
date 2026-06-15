/*
 * XREFs of ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180044D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::ReleaseClientReference(CAudioStream *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 32LL))((char *)this + 32);
  (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 16LL))(this);
  return v2;
}
