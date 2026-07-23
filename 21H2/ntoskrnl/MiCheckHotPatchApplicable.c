/*
 * XREFs of MiCheckHotPatchApplicable @ 0x1408C9900
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClearEx @ 0x140353CE0 (RtlAreBitsClearEx.c)
 *     RtlAreBitsSetEx @ 0x140586F00 (RtlAreBitsSetEx.c)
 */

__int64 __fastcall MiCheckHotPatchApplicable(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi

  *a4 = 0;
  if ( !a1 )
    return 0LL;
  v5 = a1 + 40;
  v6 = (unsigned __int64)a2 >> 12;
  v7 = ((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12;
  if ( RtlAreBitsSetEx(a1 + 40, v6, v7) )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( RtlAreBitsClearEx(v5, v6, v7) )
    return 0LL;
  return 3221225595LL;
}
