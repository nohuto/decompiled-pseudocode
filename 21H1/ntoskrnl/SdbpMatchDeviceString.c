/*
 * XREFs of SdbpMatchDeviceString @ 0x140961648
 * Callers:
 *     SdbpMatchAcpi @ 0x1407BD328 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407BD37C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407BD3D0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407BD424 (SdbpMatchCpu.c)
 * Callees:
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
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
