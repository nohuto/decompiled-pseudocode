/*
 * XREFs of ??_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140061DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140061C6C (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::`scalar deleting destructor'(
        CCrossProcessEndpointTraceLogger *this,
        char a2)
{
  CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
