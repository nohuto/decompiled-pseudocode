/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800D38B4
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800DDAC0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3, int *a4)
{
  __int64 v6; // rax
  float v7; // xmm7_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 < *((_DWORD *)this + 23) )
  {
    v6 = *((_QWORD *)this + 14);
    v7 = *(float *)(v6 + 4LL * a2);
    *(float *)(v6 + 4LL * a2) = a3;
    (*(void (__fastcall **)(CAudioStream *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(this, 0LL, 0LL);
    if ( a4 )
      *a4 = v7 == a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
