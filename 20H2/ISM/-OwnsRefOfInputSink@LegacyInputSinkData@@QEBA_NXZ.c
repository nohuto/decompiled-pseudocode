/*
 * XREFs of ?OwnsRefOfInputSink@LegacyInputSinkData@@QEBA_NXZ @ 0x180044034
 * Callers:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F0E1C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall LegacyInputSinkData::OwnsRefOfInputSink(LegacyInputSinkData *this)
{
  return *((_BYTE *)this + 8) == 1;
}
