/*
 * XREFs of ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x180052718
 * Callers:
 *     ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180052600 (-SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 *     _lambda_af777b2df126523fb74d62acd9a62439_::operator() @ 0x18006E7B0 (_lambda_af777b2df126523fb74d62acd9a62439_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioSessionStore::IsValidProperty(CAudioSessionStore *this, const struct tagPROPVARIANT *a2)
{
  if ( a2->vt > 0x1Fu )
    return a2->vt >= 0x40u && (a2->vt <= 0x41u || a2->vt == 70 || a2->vt == 8196);
  return a2->vt >= 0x1Eu
      || !a2->vt
      || a2->vt > 1u && (a2->vt <= 8u || a2->vt > 9u && (a2->vt <= 0xBu || a2->vt > 0xFu && a2->vt <= 0x17u));
}
