/*
 * XREFs of ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18004D780
 * Callers:
 *     ?GetUniqueStreamIdentifier@CAudioStream@@W7EAA_JXZ @ 0x180074F70 (-GetUniqueStreamIdentifier@CAudioStream@@W7EAA_JXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetUniqueStreamIdentifier(CAudioStream *this)
{
  return *((_QWORD *)this + 40);
}
