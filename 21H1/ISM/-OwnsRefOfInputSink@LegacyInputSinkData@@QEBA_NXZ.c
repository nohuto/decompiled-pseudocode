/*
 * XREFs of ?OwnsRefOfInputSink@LegacyInputSinkData@@QEBA_NXZ @ 0x180044694
 * Callers:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F136C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall LegacyInputSinkData::OwnsRefOfInputSink(LegacyInputSinkData *this)
{
  return *((_BYTE *)this + 8) == 1;
}
