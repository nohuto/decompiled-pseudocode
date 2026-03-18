/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z @ 0x15B280
 * Callers:
 *     _xxxDiscardPointerFrameMessagesInternal@4 @ 0x15A623 (_xxxDiscardPointerFrameMessagesInternal@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?DiscardPointerMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAUtagWND@@PAUtagMSG@@@Z @ 0x15ACBC (-DiscardPointerMessage@@YG-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAU.c)
 */

int __fastcall xxxDiscardPointerWindowFrameMessages(int a1, unsigned int a2)
{
  unsigned int v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  BOOL v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  char *v11; // eax
  unsigned int v12; // ecx
  unsigned int *v13; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v16; // [esp+14h] [ebp-50h]
  ULONG *v17; // [esp+1Ch] [ebp-48h]
  int v18; // [esp+20h] [ebp-44h]
  unsigned int v19; // [esp+28h] [ebp-3Ch]
  unsigned int v21; // [esp+30h] [ebp-34h] BYREF
  _DWORD *v22; // [esp+34h] [ebp-30h]
  unsigned int v23; // [esp+38h] [ebp-2Ch]
  BOOL v24; // [esp+3Ch] [ebp-28h]
  int v25; // [esp+40h] [ebp-24h]
  int v26; // [esp+44h] [ebp-20h] BYREF
  HWND HwndReference; // [esp+48h] [ebp-1Ch]
  unsigned int v28; // [esp+4Ch] [ebp-18h]
  int v29; // [esp+50h] [ebp-14h]
  _DWORD *v30; // [esp+54h] [ebp-10h]
  _DWORD v31[3]; // [esp+58h] [ebp-Ch] BYREF

  v28 = a2;
  v3 = 0;
  v21 = 0;
  v26 = 0;
  HwndReference = CTouchProcessor::GetHwndReference(_gpTouchProcessor, a2, (unsigned __int16 *)&v26, &v21);
  result = ValidateHwnd(HwndReference);
  v29 = result;
  if ( result )
  {
    v5 = *(_DWORD *)(a1 + 252);
    v23 = 0;
    v6 = (*(_DWORD *)(a1 + 372) | *(_DWORD *)(*(_DWORD *)v5 + 8)) & 0x10;
    v24 = v6 != 0;
    v7 = 0;
    v25 = 0;
    if ( v6 && ULongLongToULong(28LL * v21, v17) >= 0 && v23 < 0x2710000 && v23 )
    {
      v7 = Win32AllocPool(v23, 1735422805);
      v25 = v7;
    }
    v23 = 0;
    v19 = 0;
    v8 = v7 != 0 && v24;
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v31, *(_DWORD *)(a1 + 236));
    v9 = *(_DWORD **)(*(_DWORD *)(a1 + 236) + 12);
    v24 = (BOOL)v9;
    if ( v9 )
    {
      v22 = (_DWORD *)v7;
      do
      {
        v16 = v9[5];
        v30 = (_DWORD *)*v9;
        if ( CTouchProcessor::IsPointerWindowFrameMessage(_gpTouchProcessor, v28, HwndReference, v9[3], v16, 1) )
        {
          v10 = 0;
          if ( v8 && v19 < v21 )
            v10 = v22;
          v11 = DiscardPointerMessage(a1, (_DWORD *)v24, v29, v10);
          if ( v8 && v11 == (char *)1 )
          {
            ++v19;
            v22 += 7;
          }
          v12 = ++v23;
        }
        else
        {
          v12 = v23;
        }
        v9 = v30;
        v24 = (BOOL)v30;
      }
      while ( v30 );
      v7 = v25;
      if ( v12 )
        CTouchProcessor::UpdateThreadPointerList(_gpTouchProcessor, (struct tagTHREADINPUTPOINTERLIST *)(a1 + 612), v26);
    }
    if ( v8 )
    {
      memset(v31, 0, sizeof(v31));
      PushW32ThreadLock(v7, v31, (int)Win32FreePool);
      if ( v19 )
      {
        v13 = (unsigned int *)v7;
        do
        {
          if ( v3 >= v21 )
            break;
          xxxCallHook((struct tagHOOK *)1, 0, v13, 3u, (int)v17, v18);
          ++v3;
          v13 += 7;
        }
        while ( v3 < v19 );
      }
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      *(_DWORD *)(ThreadWin32Thread + 8) = v31[0];
    }
    if ( v7 )
      Win32FreePool(v7);
    return 1;
  }
  return result;
}
