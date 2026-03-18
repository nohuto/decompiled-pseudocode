/*
 * XREFs of _xxxChangeClipboardChain@8 @ 0x182FF0
 * Callers:
 *     _NtUserChangeClipboardChain@8 @ 0x15FFC8 (_NtUserChangeClipboardChain@8.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 */

int __fastcall xxxChangeClipboardChain(unsigned int *a1, int *a2)
{
  struct tagWINDOWSTATION *v3; // eax
  struct tagWINDOWSTATION *v4; // ebx
  int *v5; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // eax
  int v17; // [esp+10h] [ebp-18h] BYREF
  _DWORD v18[2]; // [esp+14h] [ebp-14h] BYREF
  _DWORD v19[3]; // [esp+1Ch] [ebp-Ch] BYREF

  memset(v19, 0, sizeof(v19));
  v17 = 0;
  v18[0] = 0;
  v18[1] = 0;
  v3 = CheckClipboardAccess();
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( a1[2] != _gptiCurrent )
    return 0;
  v5 = (int *)((char *)v3 + 52);
  if ( !*((_DWORD *)v3 + 13) )
    return 0;
  if ( a2 )
    a2 = v3 == *(struct tagWINDOWSTATION **)(*(_DWORD *)(a2[2] + 232) + 356) ? a2 : 0;
  PushW32ThreadLock((int)v3, v19, (int)UserDereferenceObject);
  ObfReferenceObject(v4);
  v8 = *v5;
  if ( a1 == (unsigned int *)*v5 )
  {
    HMAssignmentLock(v7, v6);
    v9 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v17 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v17;
    v18[0] = v8;
    HMLockObject(v8);
    if ( a2 )
      v12 = *a2;
    else
      v12 = 0;
    v13 = *v5;
    v14 = *a1;
    _InterlockedIncrement(&glSendMessage);
    v9 = xxxSendTransformableMessageTimeout(v13, 0x30Du, v14, v12, 0, 0, 0, 1u, 1);
    ThreadUnlock1();
  }
  PopAndFreeW32ThreadLock((int)v18);
  return v9;
}
