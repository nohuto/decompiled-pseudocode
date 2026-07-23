/*
 * XREFs of _RtlGetProcessHeaps@8 @ 0x4B356960
 * Callers:
 *     _RtlValidateProcessHeaps@0 @ 0x4B3574F0 (_RtlValidateProcessHeaps@0.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 */

ULONG __cdecl RtlGetProcessHeaps(ULONG NumberOfHeaps, PVOID *ProcessHeaps)
{
  ULONG v2; // edi

  RtlpEnumProcessHeaps(2);
  v2 = 0;
  if ( dword_4B3A373C )
    return dword_4B3A3760(dword_4B3A3760, NumberOfHeaps, ProcessHeaps);
  return v2;
}
