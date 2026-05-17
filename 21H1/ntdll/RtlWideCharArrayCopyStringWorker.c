/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x4B2DDE65
 * Callers:
 *     _RtlUnicodeStringCbCopyStringN@12 @ 0x4B2DDCAF (_RtlUnicodeStringCbCopyStringN@12.c)
 *     _RtlUnicodeStringCbCatStringN@12 @ 0x4B2F249F (_RtlUnicodeStringCbCatStringN@12.c)
 *     _RtlUnicodeStringCopyString@8 @ 0x4B32D540 (_RtlUnicodeStringCopyString@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlWideCharArrayCopyStringWorker(int a1, int a2, _DWORD *a3, _WORD *a4, int a5)
{
  _WORD *v5; // eax
  int v6; // esi
  int v7; // ebx
  int v10; // edi
  int result; // eax

  v5 = a4;
  v6 = 0;
  v7 = 0;
  if ( !a2 )
    goto LABEL_13;
  v10 = a1 - (_DWORD)a4;
  do
  {
    if ( !a5 )
      break;
    if ( !*v5 )
      break;
    *(_WORD *)((char *)v5 + v10) = *v5;
    ++v5;
    --a5;
    ++v7;
    --a2;
  }
  while ( a2 );
  v6 = 0;
  if ( !a2 )
  {
LABEL_13:
    if ( a5 && *v5 )
      v6 = -2147483643;
  }
  result = v6;
  *a3 = v7;
  return result;
}
