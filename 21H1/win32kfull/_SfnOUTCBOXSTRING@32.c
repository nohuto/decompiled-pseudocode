/*
 * XREFs of _SfnOUTCBOXSTRING@32 @ 0x1A005D
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _ClientGetListboxString@36 @ 0x189964 (_ClientGetListboxString@36.c)
 */

int __stdcall SfnOUTCBOXSTRING(int *a1, ULONG_PTR a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  unsigned int v8; // ecx
  int result; // eax
  int v10; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char *ListboxString; // esi
  _DWORD v14[3]; // [esp+4h] [ebp-Ch] BYREF

  v8 = 0;
  v14[2] = 0;
  if ( a1 )
    v8 = *a1;
  result = HMValidateHandleNoSecure(v8, 1);
  if ( result )
  {
    v10 = *(_DWORD *)(a1[5] + 20);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v14[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v14;
    v14[1] = a1;
    HMLockObject(a1);
    ListboxString = ClientGetListboxString(a1, a2, a3, a4, a5, a6, a7, (v10 & 0x200) == 0 && (v10 & 0x30) != 0, a8);
    ThreadUnlock1();
    return (int)ListboxString;
  }
  return result;
}
