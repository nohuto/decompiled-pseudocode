/*
 * XREFs of SdbpMatchDeviceString @ 0x1409687B8
 * Callers:
 *     SdbpMatchAcpi @ 0x1407CED28 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407CED7C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407CEDD0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407CEE24 (SdbpMatchCpu.c)
 * Callees:
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x14074F7B0 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
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
