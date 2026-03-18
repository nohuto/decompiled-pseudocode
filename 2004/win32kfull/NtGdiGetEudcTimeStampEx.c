/*
 * XREFs of NtGdiGetEudcTimeStampEx @ 0x1C02997C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00125CC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01577A0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiGetEudcTimeStampEx(char *Src, unsigned int a2, int a3)
{
  size_t v4; // rdi
  wchar_t Str1[40]; // [rsp+30h] [rbp-68h] BYREF

  if ( a3 )
    return (unsigned int)dword_1C03419F0;
  if ( !Src || !a2 )
    return (unsigned int)dword_1C033B084;
  if ( a2 > 0x20 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v4 = 2LL * a2;
    if ( v4 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v4] > MmUserProbeAddress || &Src[v4] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(Str1, Src, v4);
    if ( v4 >= 0x42 )
      _report_rangecheckfailure();
    Str1[v4 / 2] = 0;
  }
  return 0LL;
}
