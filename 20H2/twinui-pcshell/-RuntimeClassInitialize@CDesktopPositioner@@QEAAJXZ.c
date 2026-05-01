/*
 * XREFs of ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x1803ED37C
 * Callers:
 *     ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803D6CBC (--$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x18005F510 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CDesktopPositioner::RuntimeClassInitialize(CDesktopPositioner *this)
{
  LSTATUS ValueW; // eax
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+40h] [rbp-40h] BYREF
  DWORD v8; // [rsp+44h] [rbp-3Ch] BYREF
  DWORD v9; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v10[2]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v8 = 0;
  v9 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationFrame\\Positions",
             L"UseDefaultRestorePosition",
             0x10000012u,
             &v8,
             &v7,
             &v9);
  if ( !ValueW )
  {
    if ( v8 == 4 )
    {
      if ( v7 > 1 )
        goto LABEL_9;
      v3 = v7 == 1;
      goto LABEL_8;
    }
    if ( v9 == 4 && (unsigned __int16)(v7 - 48) <= 1u )
    {
      ValueW = 0;
      v3 = (_WORD)v7 == 49;
LABEL_8:
      LOBYTE(ValueW) = v3;
      *((_DWORD *)this + 100) = ValueW;
    }
  }
LABEL_9:
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DesktopPositioner",
         L"HorizontalDropOffset",
         (unsigned int *)this + 98) < 0 )
    *((_DWORD *)this + 98) = 40;
  v10[0] = GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v10[1] = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (CDesktopPositioner *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v10,
         1LL);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
