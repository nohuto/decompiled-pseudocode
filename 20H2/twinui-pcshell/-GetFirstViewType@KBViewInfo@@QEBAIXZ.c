/*
 * XREFs of ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x18034A3A0
 * Callers:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18034A3C0 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18034BED8 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KBViewInfo::GetFirstViewType(KBViewInfo *this)
{
  if ( *((_QWORD *)this + 7) )
    return *(unsigned int *)(**((_QWORD **)this + 6) + 16LL);
  else
    return 0xFFFFFFFFLL;
}
