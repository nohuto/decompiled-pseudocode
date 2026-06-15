/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800EEA64
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18000B820 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800EF66C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(HSTRING_HEADER *a1)
{
  unsigned __int64 v2; // rax

  v2 = -1LL;
  a1[1].Reserved.Reserved1 = 0LL;
  do
    ++v2;
  while ( aMicrophone[v2] );
  if ( v2 > 0xFFFFFFFF || (int)v2 + 1 < (unsigned int)v2 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x1800EEACBLL);
  }
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(a1, L"microphone", v2 + 1, v2);
  return a1;
}
