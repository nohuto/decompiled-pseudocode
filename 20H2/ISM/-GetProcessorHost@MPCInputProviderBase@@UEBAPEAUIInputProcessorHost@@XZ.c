/*
 * XREFs of ?GetProcessorHost@MPCInputProviderBase@@UEBAPEAUIInputProcessorHost@@XZ @ 0x18001BE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInputProcessorHost *__fastcall MPCInputProviderBase::GetProcessorHost(MPCInputProviderBase *this)
{
  return (struct IInputProcessorHost *)*((_QWORD *)this + 2);
}
