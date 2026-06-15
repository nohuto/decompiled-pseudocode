/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14001B830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = *((_OWORD *)this - 3);
  EtwEventActivityIdControl(4LL, &v5);
  if ( *((_DWORD *)this + 14) == 1
    || (v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 37) + 152LL))((char *)this - 296), v3 = v2, v2 >= 0) )
  {
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x295,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v2);
  }
  EtwEventActivityIdControl(4LL, &v5);
  return v3;
}
