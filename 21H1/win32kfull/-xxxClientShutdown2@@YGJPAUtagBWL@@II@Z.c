/*
 * XREFs of ?xxxClientShutdown2@@YGJPAUtagBWL@@II@Z @ 0xD0CFC
 * Callers:
 *     _xxxClientShutdown@8 @ 0xD0CA6 (_xxxClientShutdown@8.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _DestroyWindowsTimers@4 @ 0x71B30 (_DestroyWindowsTimers@4.c)
 */

int __userpurge xxxClientShutdown2@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagBWL *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v5; // ebx
  unsigned int v6; // esi
  void *v7; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  BOOL v10; // esi
  int v12; // [esp+Ch] [ebp-1Ch] BYREF
  void *v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  unsigned int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]
  struct tagBWL *v19; // [esp+30h] [ebp+8h]

  v18 = a1;
  v12 = 0;
  v5 = (unsigned int *)(a2 + 16);
  v13 = 0;
  v14 = 0;
  v17 = _gptiCurrent;
  v6 = (unsigned int)a3 & 0xC0000001;
  v16 = (unsigned __int16)a3 & 0x108;
  v15 = (unsigned int)a3 & 0xC0000001;
  v19 = (struct tagBWL *)((unsigned __int16)a3 & 0x100);
  while ( 1 )
  {
    if ( *v5 == 1 )
      return 1;
    v7 = (void *)HMValidateHandleNoSecure(*v5, 1);
    if ( v7 )
      break;
LABEL_9:
    ++v5;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v12 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v12;
  v13 = v7;
  HMLockObject(v7);
  if ( v18 == 17 )
  {
    v10 = v17 == _gptiShutdownNotify || xxxSendMessage(v7, 0, v6) != 0;
  }
  else
  {
    xxxSendMessage(v7, v19 != 0, v6);
    v10 = 1;
    if ( v16 == 264 )
      DestroyWindowsTimers();
  }
  ThreadUnlock1();
  if ( v10 )
  {
    v6 = v15;
    goto LABEL_9;
  }
  return 3;
}
