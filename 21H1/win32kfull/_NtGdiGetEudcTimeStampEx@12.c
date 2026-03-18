/*
 * XREFs of _NtGdiGetEudcTimeStampEx@12 @ 0x1F9563
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z @ 0xDD294 (-FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z.c)
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetEudcTimeStampEx(char *Src, unsigned int a2, int a3)
{
  size_t v4; // esi
  _WORD v5[36]; // [esp+14h] [ebp-60h] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  if ( a3 )
    return dword_2785AC;
  if ( !Src || !a2 )
    return dword_274368;
  if ( a2 > 0x20 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v4 = 2 * a2;
    if ( 2 * a2 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)&Src[v4] > _MmUserProbeAddress || &Src[v4] < Src )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    memcpy(v5, Src, v4);
    if ( v4 >= 0x42 )
      __report_rangecheckfailure();
    v5[a2] = 0;
    ms_exc.registration.TryLevel = -2;
  }
  return 0;
}
