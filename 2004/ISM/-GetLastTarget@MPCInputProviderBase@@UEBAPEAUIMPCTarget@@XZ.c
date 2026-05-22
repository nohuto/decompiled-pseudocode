/*
 * XREFs of ?GetLastTarget@MPCInputProviderBase@@UEBAPEAUIMPCTarget@@XZ @ 0x18001BE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCTarget *__fastcall MPCInputProviderBase::GetLastTarget(MPCInputProviderBase *this)
{
  return (struct IMPCTarget *)*((_QWORD *)this + 572);
}
