/*
 * XREFs of ??_ECWatchdogTimer@@UEAAPEAXI@Z @ 0x180163FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CWatchdogTimer@@UEAA@XZ @ 0x180163F50 (--1CWatchdogTimer@@UEAA@XZ.c)
 */

CWatchdogTimer *__fastcall CWatchdogTimer::`vector deleting destructor'(CWatchdogTimer *this, char a2)
{
  CWatchdogTimer::~CWatchdogTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
