/*
 * XREFs of ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x18036E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CPPIAllUpViewHost@@UEAA@XZ @ 0x18036E2FC (--1CPPIAllUpViewHost@@UEAA@XZ.c)
 */

CPPIAllUpViewHost *__fastcall CPPIAllUpViewHost::`vector deleting destructor'(CPPIAllUpViewHost *this, char a2)
{
  CPPIAllUpViewHost::~CPPIAllUpViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
