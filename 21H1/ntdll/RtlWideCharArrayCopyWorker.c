/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0x4B2DDE13
 * Callers:
 *     _RtlUnicodeStringCopy@8 @ 0x4B2DDBF1 (_RtlUnicodeStringCopy@8.c)
 *     _RtlUnicodeStringCat@8 @ 0x4B2DDD16 (_RtlUnicodeStringCat@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlWideCharArrayCopyWorker(int a1, int a2, _DWORD *a3, _WORD *a4, int a5)
{
  int v5; // edi
  int v8; // ebx
  _WORD *v9; // esi
  int result; // eax

  v5 = 0;
  v8 = 0;
  if ( !a2 )
    goto LABEL_7;
  v9 = a4;
  do
  {
    if ( !a5 )
      break;
    *(_WORD *)((char *)v9 + a1 - (_DWORD)a4) = *v9;
    ++v9;
    --a5;
    ++v8;
    --a2;
  }
  while ( a2 );
  v5 = 0;
  if ( !a2 )
  {
LABEL_7:
    if ( a5 )
      v5 = -2147483643;
  }
  result = v5;
  *a3 = v8;
  return result;
}
