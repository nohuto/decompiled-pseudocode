/*
 * XREFs of RtlStringCopyWorkerW_0 @ 0xE44F8
 * Callers:
 *     __RegisterDManipHook@0 @ 0xE43A6 (__RegisterDManipHook@0.c)
 *     ?RtlStringCbCatW@@YGJPAGIPBG@Z @ 0xE44C0 (-RtlStringCbCatW@@YGJPAGIPBG@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW_0(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  int v5; // edx
  _WORD *v6; // ecx
  int v7; // esi
  size_t v8; // eax
  __int16 v9; // di

  if ( !v5 )
    goto LABEL_8;
  v7 = 2147483646;
  v8 = cchDest - (_DWORD)v6;
  do
  {
    if ( !v7 )
      break;
    v9 = *(_WORD *)((char *)v6 + v8);
    if ( !v9 )
      break;
    *v6++ = v9;
    --v7;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
LABEL_8:
    --v6;
  *v6 = 0;
  return v5 != 0 ? 0 : -2147483643;
}
