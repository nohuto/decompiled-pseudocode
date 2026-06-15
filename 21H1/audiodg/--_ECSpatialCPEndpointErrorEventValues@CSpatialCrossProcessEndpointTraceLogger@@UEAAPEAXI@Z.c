/*
 * XREFs of ??_ECSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14005ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *__fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues::`vector deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
