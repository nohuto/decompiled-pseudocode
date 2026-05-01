/*
 * XREFs of ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x18003C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateChangeHandler@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18003C0D8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateC.c)
 *     ??3@YAXPEAX@Z @ 0x18004437C (--3@YAXPEAX@Z.c)
 */

CBackgroundAccessStateChangedListener *__fastcall CBackgroundAccessStateChangedListener::`scalar deleting destructor'(
        CBackgroundAccessStateChangedListener *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
