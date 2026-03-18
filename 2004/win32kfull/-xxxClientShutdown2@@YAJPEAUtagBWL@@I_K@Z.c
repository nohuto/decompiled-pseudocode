/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00C0864
 * Callers:
 *     xxxClientShutdown @ 0x1C00C07DC (xxxClientShutdown.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     DestroyWindowsTimers @ 0x1C00C09C8 (DestroyWindowsTimers.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, int a2, int a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v4; // r15
  struct _LARGE_STRING *v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  BOOL v13; // edi
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)((char *)a1 + 32);
  v15 = 0LL;
  v16 = 0LL;
  v4 = a3 & 0x108;
  v6 = (struct _LARGE_STRING *)(a3 & 0xC0000001);
  v7 = a3 & 0x100;
  while ( 1 )
  {
    if ( *v3 == 1 )
      return 1LL;
    v8 = HMValidateHandleNoSecure(*v3, 1);
    if ( v8 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v15 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
      *((_QWORD *)&v15 + 1) = v8;
      HMLockObject(v8);
      if ( a2 == 17 )
      {
        v13 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v8, 0x11u, 0LL, v6) != 0;
      }
      else
      {
        xxxSendMessage(v8, 0x16u, v7 != 0, v6);
        v13 = 1;
        if ( v4 == 264 )
          DestroyWindowsTimers(v8);
      }
      ThreadUnlock1(v11, v10, v12);
      if ( !v13 )
        break;
    }
    ++v3;
  }
  return 3LL;
}
