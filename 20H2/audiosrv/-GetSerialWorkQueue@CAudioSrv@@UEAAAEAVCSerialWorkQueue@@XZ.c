/*
 * XREFs of ?GetSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ @ 0x18004CD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *__fastcall CAudioSrv::GetSerialWorkQueue(CAudioSrv *this)
{
  return (CAudioSrv *)((char *)this + 208);
}
