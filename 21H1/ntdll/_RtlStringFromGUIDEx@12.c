/*
 * XREFs of _RtlStringFromGUIDEx@12 @ 0x4B2ED180
 * Callers:
 *     _RtlStringFromGUID@8 @ 0x4B2ED160 (_RtlStringFromGUID@8.c)
 *     _RtlpCreateIFEOKeyFilterKey@16 @ 0x4B342064 (_RtlpCreateIFEOKeyFilterKey@16.c)
 *     _RtlpConstructCrossVmObjectPath@12 @ 0x4B35AB97 (_RtlpConstructCrossVmObjectPath@12.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 */

int __stdcall RtlStringFromGUIDEx(int a1, int a2, char a3)
{
  int StringRoutine; // eax
  unsigned int v4; // edx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = NtdllpAllocateStringRoutine(78);
    *(_DWORD *)(a2 + 4) = StringRoutine;
    if ( StringRoutine )
    {
      LOWORD(v4) = *(_WORD *)(a2 + 2);
LABEL_4:
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t *const *)(a2 + 4),
        (unsigned __int16)v4 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int16 *)(a1 + 6),
        *(unsigned __int8 *)(a1 + 8),
        *(unsigned __int8 *)(a1 + 9),
        *(unsigned __int8 *)(a1 + 10),
        *(unsigned __int8 *)(a1 + 11),
        *(unsigned __int8 *)(a1 + 12),
        *(unsigned __int8 *)(a1 + 13),
        *(unsigned __int8 *)(a1 + 14),
        *(unsigned __int8 *)(a1 + 15));
      return 0;
    }
    return -1073741801;
  }
  else
  {
    v4 = *(unsigned __int16 *)(a2 + 2);
    if ( v4 >= 0x4E )
      goto LABEL_4;
    return -1073741789;
  }
}
