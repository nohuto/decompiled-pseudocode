/*
 * XREFs of ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x18038F9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CPPIAllUpViewHost@@UEAA@XZ @ 0x18038F80C (--1CPPIAllUpViewHost@@UEAA@XZ.c)
 */

CPPIAllUpViewHost *__fastcall CPPIAllUpViewHost::`vector deleting destructor'(CPPIAllUpViewHost *this, char a2)
{
  CPPIAllUpViewHost::~CPPIAllUpViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
