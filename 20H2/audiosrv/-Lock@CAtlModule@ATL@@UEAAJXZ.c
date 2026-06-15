/*
 * XREFs of ?Lock@CAtlModule@ATL@@UEAAJXZ @ 0x18004CD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlModule::Lock(ATL::CAtlModule *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 3);
}
