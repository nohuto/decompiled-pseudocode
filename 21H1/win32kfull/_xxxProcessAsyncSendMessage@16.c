/*
 * XREFs of _xxxProcessAsyncSendMessage@16 @ 0x1426A
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YGXPAUtagWND@@@Z @ 0x12F80 (-xxxEndGetWidnowTrackInfoAsync@@YGXPAUtagWND@@@Z.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall xxxProcessAsyncSendMessage(int a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v5; // edx
  int v6; // esi
  int result; // eax
  void *v8; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // ecx
  int v12; // ecx
  _DWORD v13[3]; // [esp+10h] [ebp-230h] BYREF
  _BYTE v14[12]; // [esp+1Ch] [ebp-224h] BYREF
  _DWORD *v15; // [esp+28h] [ebp-218h]
  int v16; // [esp+2Ch] [ebp-214h]
  _WORD v17[262]; // [esp+30h] [ebp-210h] BYREF

  v13[2] = 0;
  v5 = a4;
  memset(v14, 0, sizeof(v14));
  v15 = a4;
  v6 = *a4;
  LOBYTE(v5) = 1;
  result = HMValidateHandleNoSecure(a1, v5);
  v8 = (void *)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v13[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v13;
    v13[1] = v8;
    HMLockObject(v8);
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        if ( v6 )
        {
          if ( v6 == -1 )
          {
            v17[0] = 0;
            RtlInitLargeUnicodeString(v14, v17);
            v6 = v12;
          }
          else
          {
            v16 = (unsigned __int16)v6;
            if ( UserGetAtomName((unsigned __int16)v6, v17, 260) )
            {
              RtlInitLargeUnicodeString(v14, v17);
              v6 = v11;
            }
            else
            {
              v6 = 0;
            }
            UserDeleteAtom(v16);
          }
        }
        *v15 = 0;
      }
      else if ( a2 == 834 )
      {
        xxxEndGetWidnowTrackInfoAsync(v8);
        return ThreadUnlock1();
      }
    }
    xxxSendMessage(a3, v6);
    return ThreadUnlock1();
  }
  return result;
}
