/*
 * XREFs of _UserDetachQueueFromInputWindow@8 @ 0xA9A54
 * Callers:
 *     _UserDetachQueueFromInputWindowApiExt@8 @ 0xA9A40 (_UserDetachQueueFromInputWindowApiExt@8.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     ?DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z @ 0xA9AA0 (-DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z.c)
 */

void __thiscall UserDetachQueueFromInputWindow(void *this)
{
  _DWORD *v2; // eax
  struct tagWND *v3; // [esp+0h] [ebp-Ch]
  struct IInputQueue *v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  v2 = (_DWORD *)HMValidateHandleNoSecure((unsigned int)this, 1);
  if ( v2 && !IsWindowBeingDestroyed(v2) )
    DetachInputQueueFromWindow(v3, v4);
  if ( !v5 )
    UserSessionSwitchLeaveCrit();
}
