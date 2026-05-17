/*
 * XREFs of RtlStringLengthWorkerW_0 @ 0x4B3476B3
 * Callers:
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 *     _RtlStringCchCatW@12 @ 0x4B352F81 (_RtlStringCchCatW@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlStringLengthWorkerW_0(_WORD *a1, int a2, _DWORD *a3)
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
