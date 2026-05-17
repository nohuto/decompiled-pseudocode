/*
 * XREFs of RtlStringCopyWorkerW_0 @ 0x4B2D5C38
 * Callers:
 *     _RtlStringCbCopyW@12 @ 0x4B2D5C0F (_RtlStringCbCopyW@12.c)
 *     _RtlStringCbCatW@12 @ 0x4B2EACE3 (_RtlStringCbCatW@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlStringCopyWorkerW_0(_WORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  __int16 v7; // di

  if ( !a2 )
    goto LABEL_8;
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
LABEL_8:
    --a1;
  *a1 = 0;
  return a2 != 0 ? 0 : -2147483643;
}
