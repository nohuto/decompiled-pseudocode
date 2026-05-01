/*
 * XREFs of ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1803FD8E8
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1803F37D0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x1803F3AC4 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1803FD9DC (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180043F18 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _Init_thread_footer @ 0x18008DC88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008DCF0 (_Init_thread_header.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180117540 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

HFONT __fastcall JointDivider_LoadGlyphFont(enum DEVICE_SCALE_FACTOR a1)
{
  LOGFONTW lf; // [rsp+20h] [rbp-78h] BYREF

  if ( dword_1805A2348 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805A2348);
    if ( dword_1805A2348 == -1 )
    {
      dword_1805A234C = IsPPIEdition() ? 22 : 16;
      Init_thread_footer(&dword_1805A2348);
    }
  }
  memset_0(&lf, 0, sizeof(lf));
  StringCchCopyW(lf.lfFaceName, 0x20uLL, (size_t *)L"Segoe MDL2 Assets");
  lf.lfWeight = 350;
  lf.lfHeight = a1 * dword_1805A234C / -100;
  return CreateFontIndirectW(&lf);
}
