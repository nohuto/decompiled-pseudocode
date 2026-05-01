/*
 * XREFs of ??_GAppResizeAcc@@EEAAPEAXI@Z @ 0x1803F63E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1AppResizeAcc@@EEAA@XZ @ 0x1803F631C (--1AppResizeAcc@@EEAA@XZ.c)
 */

IRawElementProviderSimple *__fastcall AppResizeAcc::`scalar deleting destructor'(
        IRawElementProviderSimple *this,
        char a2)
{
  AppResizeAcc::~AppResizeAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
