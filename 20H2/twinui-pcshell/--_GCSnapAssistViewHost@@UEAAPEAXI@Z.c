/*
 * XREFs of ??_GCSnapAssistViewHost@@UEAAPEAXI@Z @ 0x18038DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x18038D9B8 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 */

CSnapAssistViewHost *__fastcall CSnapAssistViewHost::`scalar deleting destructor'(CSnapAssistViewHost *this, char a2)
{
  CSnapAssistViewHost::~CSnapAssistViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
