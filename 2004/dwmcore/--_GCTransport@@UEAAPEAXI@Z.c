/*
 * XREFs of ??_GCTransport@@UEAAPEAXI@Z @ 0x180154F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

CTransport *__fastcall CTransport::`scalar deleting destructor'(CTransport *this, char a2)
{
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
