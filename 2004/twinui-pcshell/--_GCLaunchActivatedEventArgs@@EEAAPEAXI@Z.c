/*
 * XREFs of ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x18004A0A0
 * Callers:
 *     ??_ECLaunchActivatedEventArgs@@GBAA@EAAPEAXI@Z @ 0x1800FF500 (--_ECLaunchActivatedEventArgs@@GBAA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x18004A0D8 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 */

CLaunchActivatedEventArgs *__fastcall CLaunchActivatedEventArgs::`scalar deleting destructor'(
        CLaunchActivatedEventArgs *this,
        char a2)
{
  CLaunchActivatedEventArgs::~CLaunchActivatedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
