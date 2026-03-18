/*
 * XREFs of LogQMsg @ 0x1C01D2A30
 * Callers:
 *     IPostQuitMessage @ 0x1C000B7A4 (IPostQuitMessage.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0053840 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01D2534 (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01D28E0 (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= DWORD1(gMsgQLog) && (unsigned int)result <= DWORD2(gMsgQLog) )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = unk_1C0335698 + 688LL * HIDWORD(gMsgQLog);
      ++HIDWORD(gMsgQLog);
      InitLogQMsgEntry((_OWORD *)a1, v3);
      result = (unsigned int)xmmword_1C0335688;
      if ( HIDWORD(gMsgQLog) >= (unsigned int)xmmword_1C0335688 )
        HIDWORD(gMsgQLog) = 0;
      if ( HIDWORD(xmmword_1C0335688) )
        __debugbreak();
    }
  }
  return result;
}
