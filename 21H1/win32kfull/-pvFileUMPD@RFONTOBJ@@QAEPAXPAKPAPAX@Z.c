/*
 * XREFs of ?pvFileUMPD@RFONTOBJ@@QAEPAXPAKPAPAX@Z @ 0x209958
 * Callers:
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YGPAXPAU_FONTOBJ@@PAKPAPAX@Z @ 0x1F3498 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YGPAXPAU_FONTOBJ@@PAKPAPAX@Z.c)
 * Callees:
 *     ?pchTranslateUMPD@RFONTOBJ@@QAEPADPBDPAPAX@Z @ 0x20979C (-pchTranslateUMPD@RFONTOBJ@@QAEPADPBDPAPAX@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QAEPAXKPAK@Z @ 0x2292BD (-GetTrueTypeFile@PFFOBJ@@QAEPAXKPAK@Z.c)
 */

char *__thiscall RFONTOBJ::pvFileUMPD(RFONTOBJ *this, unsigned int *a2, void **a3)
{
  unsigned int v4; // esi
  char *v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  const char *TrueTypeFile; // eax
  int v10; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v11; // [esp+10h] [ebp-4h] BYREF

  v4 = 0;
  v11 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(*(_DWORD *)this + 84);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 56);
    if ( v7 )
    {
      v10 = v6;
      TrueTypeFile = (const char *)PFFOBJ::GetTrueTypeFile((PFFOBJ *)&v10, v7, &v11);
      v5 = (char *)TrueTypeFile;
      if ( TrueTypeFile )
      {
        v5 = RFONTOBJ::pchTranslateUMPD(this, TrueTypeFile, a3);
        if ( v5 )
          v4 = v11;
      }
    }
  }
  if ( a2 )
    *a2 = v4;
  return v5;
}
