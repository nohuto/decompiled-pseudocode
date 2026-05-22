/*
 * XREFs of ?OwnsRefOfInputSink@LegacyInputSinkData@@QEBA_NXZ @ 0x180044084
 * Callers:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F0EAC (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall LegacyInputSinkData::OwnsRefOfInputSink(LegacyInputSinkData *this)
{
  return *((_BYTE *)this + 8) == 1;
}
