/*
 * XREFs of ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180420B88
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1804165D0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x1804168EC (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180420C7C (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18013BA10 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

HFONT __fastcall JointDivider_LoadGlyphFont(enum DEVICE_SCALE_FACTOR a1)
{
  LOGFONTW lf; // [rsp+20h] [rbp-78h] BYREF

  if ( dword_1805CE790 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CE790);
    if ( dword_1805CE790 == -1 )
    {
      dword_1805CE794 = IsPPIEdition() ? 22 : 16;
      Init_thread_footer(&dword_1805CE790);
    }
  }
  memset_0(&lf, 0, sizeof(lf));
  StringCchCopyW(lf.lfFaceName, 0x20uLL, (size_t *)L"Segoe MDL2 Assets");
  lf.lfWeight = 350;
  lf.lfHeight = a1 * dword_1805CE794 / -100;
  return CreateFontIndirectW(&lf);
}
