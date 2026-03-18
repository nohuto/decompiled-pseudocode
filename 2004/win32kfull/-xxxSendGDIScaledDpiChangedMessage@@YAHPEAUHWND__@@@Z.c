/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E4D7C
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E4E3C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

unsigned __int64 __fastcall xxxSendGDIScaledDpiChangedMessage(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  result = HMValidateHandleNoSecure(a1, 1);
  v2 = result;
  if ( result )
  {
    v7[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v7[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v7;
    v7[1] = v2;
    HMLockObject(v2);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 232LL) & 0x20000000) != 0 )
      xxxSendMessage(v2, 0x2E5u, 0LL, 0LL);
    xxxSetWindowPos((struct tagWND *)v2, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v5, v4, v6);
    return 1LL;
  }
  return result;
}
