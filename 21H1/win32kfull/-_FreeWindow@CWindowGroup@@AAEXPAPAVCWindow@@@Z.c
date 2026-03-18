/*
 * XREFs of ?_FreeWindow@CWindowGroup@@AAEXPAPAVCWindow@@@Z @ 0x19F6A4
 * Callers:
 *     ?RemoveAll@CWindowGroup@@QAEXXZ @ 0x19F3A8 (-RemoveAll@CWindowGroup@@QAEXXZ.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AAEXPAVCWindow@@@Z @ 0x19F6FF (-_RemoveWindowAction@CWindowGroup@@AAEXPAVCWindow@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

void __thiscall CWindowGroup::_FreeWindow(CWindowGroup *this, struct CWindow **a2)
{
  int v2; // edi
  int v3; // eax

  v2 = (int)*a2;
  v3 = HMValidateHandleNoSecure(*((_DWORD *)*a2 + 2), 1);
  if ( v3 )
    *(_DWORD *)(v3 + 180) = 0;
  Win32FreePool(v2);
  *a2 = 0;
}
