/*
 * XREFs of xxxBroadcastImeShowStatusChange @ 0x1C01E2D50
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E25F4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxBroadcastImeShowStatusChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8

  v4 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v4 == 681 )
  {
    HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = a2 != 0;
    xxxNotifyImeShowStatus((struct tagWND *)a1, a2, v4, a4);
  }
  return 1LL;
}
