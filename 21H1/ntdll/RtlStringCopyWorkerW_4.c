/*
 * XREFs of RtlStringCopyWorkerW_4 @ 0x4B347663
 * Callers:
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 *     _RtlStringCchCatW@12 @ 0x4B352F81 (_RtlStringCchCatW@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlStringCopyWorkerW_4(_WORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  __int16 v7; // di

  if ( !a2 )
    goto LABEL_7;
  v5 = 2147483646;
  v6 = a4 - (_DWORD)a1;
  do
  {
    if ( !v5 )
      break;
    v7 = *(_WORD *)((char *)a1 + v6);
    if ( !v7 )
      break;
    *a1++ = v7;
    --v5;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
LABEL_7:
    --a1;
  *a1 = 0;
  return a2 != 0 ? 0 : -2147483643;
}
