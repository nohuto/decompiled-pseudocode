/*
 * XREFs of ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x18009C330
 * Callers:
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x18009C3F0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18002B984 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x18009C2C0 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::UpdateTransition(CRippleEffect *this)
{
  __int64 v1; // rax
  unsigned int v3; // eax
  __int64 v4; // r8
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 33);
  if ( v1 )
  {
    v3 = (int)(float)((float)*(double *)(v1 + 48) * 12.0);
    if ( v3 >= 0xC )
      v3 = 11;
    CImage::SetBitmapSource(*((CImage **)this + 35), *((struct CBitmapSource **)this + (int)v3 + 36));
    if ( *(_BYTE *)(*((_QWORD *)this + 33) + 72LL) )
    {
      CRippleEffect::Stop(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&UdwmRippleAnimation_End,
          v4,
          1LL,
          (__int64)v6);
    }
  }
  return 0LL;
}
