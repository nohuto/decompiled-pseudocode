/*
 * XREFs of ?SafeCopyUnicodeString@@YGXPAU_UNICODE_STRING@@QAU1@@Z @ 0x7E606
 * Callers:
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 *     _xxxResolveDesktopForWOW@4 @ 0x154BAD (_xxxResolveDesktopForWOW@4.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __fastcall SafeCopyUnicodeString(struct _UNICODE_STRING *a1, int a2)
{
  unsigned __int16 v2; // ax
  struct _UNICODE_STRING *v4; // edi
  unsigned int v5; // esi

  v2 = *(_WORD *)a2;
  v4 = a1 + 1;
  if ( *(_WORD *)a2 > 0x20Au )
    v2 = 522;
  v5 = v2;
  memcpy(&a1[1], *(const void **)(a2 + 4), v2);
  if ( v5 + 2 <= 0x20A )
    *(&v4->Length + (v5 >> 1)) = 0;
  RtlInitUnicodeString(a1, &a1[1].Length);
  a1->MaximumLength = 522;
}
