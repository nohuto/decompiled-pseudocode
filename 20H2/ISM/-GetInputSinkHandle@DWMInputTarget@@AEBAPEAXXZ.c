/*
 * XREFs of ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800B6A30
 * Callers:
 *     ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x1800B6A20 (-GetInputSink@DWMInputTarget@@UEBAPEAXXZ.c)
 *     ?IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z @ 0x1800B6BC0 (-IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F0E1C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 */

void *__fastcall DWMInputTarget::GetInputSinkHandle(DWMInputTarget *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 15);
  result = 0LL;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 392) )
      return LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)(v1 + 32));
  }
  return result;
}
