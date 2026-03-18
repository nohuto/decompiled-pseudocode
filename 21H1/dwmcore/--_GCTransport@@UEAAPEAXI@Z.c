/*
 * XREFs of ??_GCTransport@@UEAAPEAXI@Z @ 0x180156B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CTransport *__fastcall CTransport::`scalar deleting destructor'(CTransport *this, char a2)
{
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
