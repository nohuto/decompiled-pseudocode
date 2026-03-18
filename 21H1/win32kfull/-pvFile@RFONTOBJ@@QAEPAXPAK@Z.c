/*
 * XREFs of ?pvFile@RFONTOBJ@@QAEPAXPAK@Z @ 0x2098FD
 * Callers:
 *     _FONTOBJ_pvTrueTypeFontFile@8 @ 0x1F3643 (_FONTOBJ_pvTrueTypeFontFile@8.c)
 * Callees:
 *     ?pchTranslate@RFONTOBJ@@QAEPADPBD@Z @ 0x20967F (-pchTranslate@RFONTOBJ@@QAEPADPBD@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QAEPAXKPAK@Z @ 0x2292BD (-GetTrueTypeFile@PFFOBJ@@QAEPAXKPAK@Z.c)
 */

char *__thiscall RFONTOBJ::pvFile(RFONTOBJ *this, unsigned int *a2)
{
  unsigned int v3; // esi
  char *v4; // edx
  int v5; // eax
  unsigned int v6; // ecx
  const char *TrueTypeFile; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v10; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  v10 = 0;
  v4 = 0;
  v5 = *(_DWORD *)(*(_DWORD *)this + 84);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 56);
    if ( v6 )
    {
      v9 = v5;
      TrueTypeFile = (const char *)PFFOBJ::GetTrueTypeFile((PFFOBJ *)&v9, v6, &v10);
      v4 = (char *)TrueTypeFile;
      if ( TrueTypeFile )
      {
        v4 = RFONTOBJ::pchTranslate(this, TrueTypeFile);
        if ( v4 )
          v3 = v10;
      }
    }
  }
  if ( a2 )
    *a2 = v3;
  return v4;
}
