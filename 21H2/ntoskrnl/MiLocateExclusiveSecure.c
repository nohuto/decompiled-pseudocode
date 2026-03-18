/*
 * XREFs of MiLocateExclusiveSecure @ 0x140246BC8
 * Callers:
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateExclusiveSecure(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !result )
    return 0LL;
  while ( *(_DWORD *)(result + 64) != 2 )
  {
    result = *(_QWORD *)result;
    if ( !result )
      return 0LL;
  }
  if ( (*(_DWORD *)(result + 8) & 0x20) == 0 )
    return 0LL;
  return result;
}
