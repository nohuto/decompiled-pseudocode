/*
 * XREFs of ?CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ @ 0x18047A8FC
 * Callers:
 *     s_OnDrawItem @ 0x18047B5B0 (s_OnDrawItem.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801503C4 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall Microsoft::WRL::Wrappers::CompatibleDC::CheckValidity(
        Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  signed int result; // eax

  result = 0;
  if ( !*((_QWORD *)this + 1) )
    return ResultFromKnownLastError();
  return result;
}
