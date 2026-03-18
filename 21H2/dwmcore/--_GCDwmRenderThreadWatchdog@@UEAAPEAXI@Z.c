/*
 * XREFs of ??_GCDwmRenderThreadWatchdog@@UEAAPEAXI@Z @ 0x1801CAC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CWatchdogTimer@@UEAA@XZ @ 0x1801D70B0 (--1CWatchdogTimer@@UEAA@XZ.c)
 */

CDwmRenderThreadWatchdog *__fastcall CDwmRenderThreadWatchdog::`scalar deleting destructor'(
        CDwmRenderThreadWatchdog *this,
        char a2)
{
  CWatchdogTimer::~CWatchdogTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
