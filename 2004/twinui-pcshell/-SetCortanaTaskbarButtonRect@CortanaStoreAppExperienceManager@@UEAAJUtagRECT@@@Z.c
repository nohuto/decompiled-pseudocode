/*
 * XREFs of ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1801F4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801F4680 (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::SetCortanaTaskbarButtonRect(
        CortanaStoreAppExperienceManager *this,
        struct tagRECT *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 192) )
    CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility(
      (CortanaStoreAppExperienceManager *)((char *)this - 120),
      0);
  result = 0LL;
  *((struct tagRECT *)this + 11) = *a2;
  return result;
}
