/*
 * XREFs of ?vLookupScript@@YGXKPAGK@Z @ 0x89F72
 * Callers:
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     _vIFIMetricsToEnumLogFontExDvW@8 @ 0xDBF4C (_vIFIMetricsToEnumLogFontExDvW@8.c)
 * Callees:
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _InitializeScripts@0 @ 0x292144 (_InitializeScripts@0.c)
 */

void __userpurge vLookupScript(int a1@<ecx>, unsigned int a2, unsigned __int16 *a3, unsigned int a4)
{
  struct _CHSET_SCRIPT *v5; // esi
  unsigned int i; // eax
  size_t v7; // eax
  unsigned int v8; // [esp+0h] [ebp-8h]
  const unsigned __int16 *v9; // [esp+4h] [ebp-4h]

  if ( InitializeScripts() )
  {
    v5 = (struct _CHSET_SCRIPT *)(a1 + 1000);
    for ( i = 0; i < 0x13; ++i )
    {
      if ( *(&aScripts + 2 * i) == v5 )
        break;
    }
    if ( i >= 0x13 )
      v7 = dword_27384C;
    else
      v7 = cchDest[2 * i];
    StringCchCopyW(v7, v8, v9);
  }
}
