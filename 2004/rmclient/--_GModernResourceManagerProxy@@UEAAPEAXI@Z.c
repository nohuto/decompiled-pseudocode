/*
 * XREFs of ??_GModernResourceManagerProxy@@UEAAPEAXI@Z @ 0x180010440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180009D50 (--3@YAXPEAX@Z.c)
 *     ??1ModernResourceManagerProxy@@UEAA@XZ @ 0x1800103DC (--1ModernResourceManagerProxy@@UEAA@XZ.c)
 */

ModernResourceManagerProxy *__fastcall ModernResourceManagerProxy::`scalar deleting destructor'(
        ModernResourceManagerProxy *this,
        char a2)
{
  ModernResourceManagerProxy::~ModernResourceManagerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
