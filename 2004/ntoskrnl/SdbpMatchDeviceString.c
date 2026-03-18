/*
 * XREFs of SdbpMatchDeviceString @ 0x1409629E8
 * Callers:
 *     SdbpMatchAcpi @ 0x1407C0498 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407C04EC (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407C0540 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407C0594 (SdbpMatchCpu.c)
 * Callees:
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407447D4 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
