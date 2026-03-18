/*
 * XREFs of _GetActiveHKL@0 @ 0xA3110
 * Callers:
 *     ?FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z @ 0xA3098 (-FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z.c)
 *     _EditionGetActiveHKL@0 @ 0xA310A (_EditionGetActiveHKL@0.c)
 *     _EditionFinalizeKoreanImeCompStrOnMouseClick@8 @ 0x1478DB (_EditionFinalizeKoreanImeCompStrOnMouseClick@8.c)
 * Callees:
 *     <none>
 */

int __stdcall GetActiveHKL()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v4; // eax
  int v5; // eax

  if ( _gpqForeground
    && ((v0 = *(_DWORD *)(_gpqForeground + 60)) != 0
     && (v1 = *(_DWORD *)(v0 + 8)) != 0
     && (v2 = *(_DWORD *)(v1 + 240)) != 0
     || (v4 = *(_DWORD *)(_gpqForeground + 64)) != 0
     && (v5 = *(_DWORD *)(v4 + 8)) != 0
     && (v2 = *(_DWORD *)(v5 + 240)) != 0) )
  {
    return *(_DWORD *)(v2 + 20);
  }
  else
  {
    return _GetKeyboardLayout(0);
  }
}
