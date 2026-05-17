/*
 * XREFs of RtlWideCharArrayCopyStringWorker_0 @ 0x4B33CF12
 * Callers:
 *     _RtlUnicodeStringCatString@8 @ 0x4B33CE74 (_RtlUnicodeStringCatString@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlWideCharArrayCopyStringWorker_0(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // esi
  const WCHAR *v6; // eax
  int v7; // ebx
  int v8; // edi
  int result; // eax

  v5 = 0;
  v6 = L"\\";
  v7 = 0;
  v8 = 0x7FFF;
  if ( !a2 )
    goto LABEL_12;
  do
  {
    if ( !v8 )
      break;
    if ( !*v6 )
      break;
    *(const WCHAR *)((char *)v6 + a1 - (_DWORD)L"\\") = *v6;
    ++v6;
    --v8;
    ++v7;
    --a2;
  }
  while ( a2 );
  v5 = 0;
  if ( !a2 )
  {
    if ( v8 )
    {
LABEL_12:
      if ( *v6 )
        v5 = -2147483643;
    }
  }
  result = v5;
  *a3 = v7;
  return result;
}
