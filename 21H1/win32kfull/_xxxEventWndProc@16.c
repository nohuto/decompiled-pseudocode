/*
 * XREFs of _xxxEventWndProc@16 @ 0x15E80
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 * Callees:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _xxxChangeMonitorFlags@8 @ 0xE3CE8 (_xxxChangeMonitorFlags@8.c)
 *     ??9?$RedirectedFieldfnid@G@tagWND@@QBEEABG@Z @ 0x154804 (--9-$RedirectedFieldfnid@G@tagWND@@QBEEABG@Z.c)
 *     _ClientEventCallback@8 @ 0x189761 (_ClientEventCallback@8.c)
 */

int __stdcall xxxEventWndProc(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // edx
  _DWORD *v7; // ecx
  __int16 v8; // cx

  v4 = a4;
  v5 = 0;
  a4 = 0;
  if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator!=(&a4) )
    return 0;
  v7 = *(_DWORD **)(a1 + 164);
  if ( v7 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 20) + 160) >= 4u )
    {
      LOBYTE(v6) = 9;
      v5 = HMValidateHandleNoRip(*v7, v6);
    }
  }
  if ( v5 )
  {
    if ( a2 == 2 )
    {
      xxxChangeMonitorFlags(v5, 0);
      return 0;
    }
    if ( a2 == 60 )
    {
      v8 = *(_WORD *)(v4 + 4);
      if ( (*(_DWORD *)(v5 + 20) & *(_DWORD *)v4) != 0 )
      {
        if ( !v8 )
          return 0;
      }
      else if ( v8 )
      {
        return 0;
      }
      ClientEventCallback(*(_DWORD *)(v5 + 28), v4);
      return 0;
    }
  }
  return xxxDefWindowProc(a1, a2, a3, v4);
}
