/*
 * XREFs of ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C0032D98
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00334E0 (WPP_RECORDER_SF_S.c)
 */

void ndisDoesSystemSupportSriov(void)
{
  const wchar_t *v5; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x81u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids);
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 0x40000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x40000006 )
      {
        _RAX = 1073741830LL;
        __asm { cpuid }
        ndisSystemSupportsSriov = (_RAX & 0x30) == 48;
      }
    }
  }
  if ( ndisSriovSupportTestOverride )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Au,
        0x82u,
        (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids);
    ndisSystemSupportsSriov = 1;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v5 = L"Yes";
    if ( ndisSystemSupportsSriov != 1 )
      v5 = (const wchar_t *)L"No";
    LOBYTE(_RDX) = 4;
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      _RDX,
      26,
      131,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (__int64)v5);
  }
}
