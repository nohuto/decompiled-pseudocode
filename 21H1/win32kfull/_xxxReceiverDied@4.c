/*
 * XREFs of _xxxReceiverDied@4 @ 0xCC50E
 * Callers:
 *     _SendMsgCleanup@4 @ 0x9A52C (_SendMsgCleanup@4.c)
 *     _SuspendThreadQueue@4 @ 0xA68FC (_SuspendThreadQueue@4.c)
 *     ?InterQueueMsgCleanup@@YGXK@Z @ 0xB085E (-InterQueueMsgCleanup@@YGXK@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UnlinkSendListSms@4 @ 0x439C4 (_UnlinkSendListSms@4.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 */

int __thiscall xxxReceiverDied(int this)
{
  int v2; // edi
  int v3; // eax
  int result; // eax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // ecx
  int v12; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v15[7]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v16[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 20);
  v3 = *(_DWORD *)(this + 44) | 2;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 44) = v3;
  if ( (*(_BYTE *)(v2 + 264) & 1) != 0 )
  {
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)(this + 44) = v3 & 0xFFFFBFFF;
  }
  else
  {
    if ( (v3 & 0x8010) == 0 )
    {
      --*(_DWORD *)(v2 + 288);
      v8 = (_DWORD *)(this + 8);
      v9 = *(_DWORD *)(this + 8);
      if ( *(_DWORD *)(v9 + 4) != this + 8 || (v10 = *(_DWORD **)(this + 12), (_DWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_DWORD *)(v9 + 4) = v10;
      *v8 = 0;
    }
    if ( *(_DWORD *)(v2 + 280) == v2 + 280 )
    {
      *(_WORD *)(*(_DWORD *)(v2 + 244) + 6) &= ~0x40u;
      *(_WORD *)(*(_DWORD *)(v2 + 244) + 4) &= ~0x40u;
    }
  }
  result = *(_DWORD *)(this + 16);
  v5 = *(_DWORD *)(this + 44);
  if ( result )
  {
    if ( (v5 & 1) != 0 )
    {
      v7 = v5 & 0xFFFFFFF7;
    }
    else
    {
      *(_DWORD *)(this + 36) = 0;
      v7 = v5 | 0x8001;
      *(_DWORD *)(this + 20) = 0;
    }
    *(_DWORD *)(this + 44) = v7;
    SetWakeBit(result, 512);
    if ( (*(_BYTE *)(*(_DWORD *)(this + 16) + 264) & 2) != 0 )
      DirectedScheduleTask(0, this);
    return HMAssignmentUnlock(this + 60);
  }
  else
  {
    v6 = *(_DWORD *)(this + 44);
    if ( (v5 & 4) == 0 )
    {
      result = *(_DWORD *)(this + 44) & 0x101;
      if ( result == 256 )
      {
        v11 = v5 | 1;
        v16[2] = 0;
        memset(&v15[4], 0, 12);
        *(_DWORD *)(this + 44) = v11;
        v15[0] = 33;
        if ( (v11 & 0x400) != 0 )
          v15[0] = 289;
        v12 = *(_DWORD *)(this + 60);
        v15[1] = *(_DWORD *)(this + 24);
        v15[2] = *(_DWORD *)(this + 28);
        v15[3] = 0;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v16[0] = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = v16;
        v16[1] = v12;
        if ( v12 )
          HMLockObject(v12);
        xxxInterSendMsgEx(
          *(struct tagPROCESSINFO **)(this + 60),
          *(struct tagPROCESSINFO **)(this + 56),
          0,
          0,
          0,
          *(_DWORD *)(this + 32),
          (int)v15,
          1u,
          *(_DWORD *)(this + 44) & 0x10000);
        result = ThreadUnlock1();
        v6 = *(_DWORD *)(this + 44);
      }
    }
    if ( (v6 & 0x4000) == 0 )
      return UnlinkSendListSms((_DWORD *)this);
  }
  return result;
}
