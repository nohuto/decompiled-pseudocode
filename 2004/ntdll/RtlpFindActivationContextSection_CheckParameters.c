/*
 * XREFs of RtlpFindActivationContextSection_CheckParameters @ 0x18001D278
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlFindActivationContextSectionGuid @ 0x18001CD80 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 */

__int64 __fastcall RtlpFindActivationContextSection_CheckParameters(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  const CHAR *v7; // r8
  int v8; // [rsp+20h] [rbp-18h]

  v5 = 0;
  if ( !a4 || (a1 & 0xFFFFFFF8) != 0 || (a1 & 7) != 0 && !a5 || a5 && *a5 < 0x40u )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (a1 & 2) != 0 && a5 + 18 > (_DWORD *)((char *)a5 + (unsigned int)*a5) )
    {
      v7 = "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n";
      goto LABEL_15;
    }
    if ( (a1 & 4) != 0 && a5 + 28 > (_DWORD *)((char *)a5 + (unsigned int)*a5) )
    {
      v7 = "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n";
LABEL_15:
      v5 = -1073741811;
      v8 = -1073741811;
      DbgPrintEx(0x33u, 0, v7, "RtlpFindActivationContextSection_CheckParameters", v8);
    }
  }
  return v5;
}
