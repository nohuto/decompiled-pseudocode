/*
 * XREFs of ??B_Atomic_bool@std@@QEBA_NXZ @ 0x18021EBEC
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18034B3F4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18034BED8 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Atomic_bool::operator bool(_BYTE *a1)
{
  return *a1 != 0;
}
