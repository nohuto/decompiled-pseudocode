/*
 * XREFs of _xxxEmptyClipboard@4 @ 0xACB3A
 * Callers:
 *     _ForceEmptyClipboard@4 @ 0xACADE (_ForceEmptyClipboard@4.c)
 *     _NtUserEmptyClipboard@0 @ 0x161354 (_NtUserEmptyClipboard@0.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z @ 0x182BFB (-xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z.c)
 */

int __thiscall xxxEmptyClipboard(struct tagWINDOWSTATION *Object)
{
  PKTHREAD CurrentThread; // eax
  int v3; // edx
  int ThreadWin32Thread; // ebx
  _WORD *v5; // edi
  struct tagWINDOWSTATION *v7; // eax
  int v8; // eax
  struct tagWINDOWSTATION *v9; // [esp+0h] [ebp-20h]
  unsigned int v10; // [esp+4h] [ebp-1Ch]
  _DWORD v11[3]; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( Object )
    goto LABEL_2;
  v7 = CheckClipboardAccess();
  Object = v7;
  if ( !v7 )
    return 0;
  if ( *((_DWORD *)v7 + 10) != ThreadWin32Thread )
  {
    UserSetLastError((struct _NT_TIB *)0x58A);
    return 0;
  }
LABEL_2:
  if ( (*((_BYTE *)Object + 32) & 0x10) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v13 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((int)Object, v11, (int)UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage(v9, v10);
    }
  }
  v5 = (_WORD *)*((_DWORD *)Object + 16);
  if ( v5 )
  {
    v8 = *((_DWORD *)Object + 17);
    if ( v8 )
    {
      do
      {
        v12 = v8 - 1;
        if ( *v5 >= 0xC000u )
          UserDeleteAtom((unsigned __int16)*v5);
        UT_FreeCBFormat(v9);
        v8 = v12;
        v5 += 10;
      }
      while ( v12 );
      v5 = (_WORD *)*((_DWORD *)Object + 16);
    }
    Win32FreePool(v5);
    *((_DWORD *)Object + 16) = 0;
    *((_DWORD *)Object + 17) = 0;
  }
  *((_DWORD *)Object + 8) |= 0x40u;
  HMAssignmentLock((char *)Object + 56, v3);
  ++*((_DWORD *)Object + 18);
  ++*((_DWORD *)Object + 19);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v13 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((int)v11);
  }
  return 1;
}
