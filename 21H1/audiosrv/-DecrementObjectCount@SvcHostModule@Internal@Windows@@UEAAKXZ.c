/*
 * XREFs of ?DecrementObjectCount@SvcHostModule@Internal@Windows@@UEAAKXZ @ 0x180037450
 * Callers:
 *     ?DecrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ @ 0x180074BD0 (-DecrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SvcHostModule::DecrementObjectCount(Windows::Internal::SvcHostModule *this)
{
  __int64 result; // rax

  result = CoReleaseSharedService(*((unsigned int *)this + 14));
  if ( !(_DWORD)result )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    return 0LL;
  }
  return result;
}
