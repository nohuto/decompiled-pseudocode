/*
 * XREFs of RtlStringLengthWorkerW @ 0x4B2D5B2E
 * Callers:
 *     _RtlStringCchLengthW@12 @ 0x4B2D415E (_RtlStringCchLengthW@12.c)
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlStringCbCatW@12 @ 0x4B2EACE3 (_RtlStringCbCatW@12.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlStringLengthWorkerW(_WORD *a1, int a2, _DWORD *a3)
{
  int i; // esi
  int result; // eax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 != 0 ? 0 : -1073741811;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0;
  }
  return result;
}
