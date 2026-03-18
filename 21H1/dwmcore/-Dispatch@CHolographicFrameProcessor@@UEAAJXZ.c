/*
 * XREFs of ?Dispatch@CHolographicFrameProcessor@@UEAAJXZ @ 0x18025D6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicFrameProcessor::Dispatch(CHolographicFrameProcessor *this)
{
  if ( !WaitForSingleObject(*((HANDLE *)this + 5), 0) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
      *((_QWORD *)this + 11),
      ((unsigned __int64)this - 16) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64));
  return 0LL;
}
