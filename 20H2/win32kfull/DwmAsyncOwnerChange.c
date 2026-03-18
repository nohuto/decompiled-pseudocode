/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C00C5734
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0081358 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00BC4F8 (zzzImeCanDestroyDefIME.c)
 *     zzzImeSetFutureOwner @ 0x1C00BED50 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00C55E4 (zzzImeSetOwnerWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00CC1B0 (xxxDW_DestroyOwnedWindows.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011BED4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncOwnerChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  _QWORD v9[2]; // [rsp+4Ch] [rbp-14h]

  v4 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 3932180;
    v7 = 0LL;
    WORD2(v6[0]) = 0x8000;
    v8 = 1073741877;
    v9[0] = a2;
    v9[1] = a3;
    EtwUpdateEvent(a2, 1073741877LL);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
