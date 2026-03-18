/*
 * XREFs of ?GetClipILIndexFromName@@YGIPAGI@Z @ 0x181AD3
 * Callers:
 *     _InitClipboardILDef@0 @ 0xEB65C (_InitClipboardILDef@0.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall GetClipILIndexFromName(const wchar_t *a1, unsigned int a2)
{
  int v2; // edi
  const wchar_t *v3; // eax
  size_t v4; // ebx
  unsigned int v5; // esi

  v2 = 0;
  v3 = a1;
  v4 = a2 >> 1;
  v5 = 0;
  while ( __wcsnicmp(*(const wchar_t **)((char *)&gaClipILDef + v5), v3, v4) )
  {
    v3 = a1;
    v5 += 20;
    ++v2;
    if ( v5 >= 0x64 )
      return -1;
  }
  return v2;
}
