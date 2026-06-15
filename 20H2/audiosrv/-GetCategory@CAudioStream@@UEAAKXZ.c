/*
 * XREFs of ?GetCategory@CAudioStream@@UEAAKXZ @ 0x18004CF90
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x180074480 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(CAudioStream *this)
{
  return *((unsigned int *)this + 82);
}
