/*
 * XREFs of _xxxIsDragging@16 @ 0x1A68B7
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _NtUserDragDetect@12 @ 0x160CE9 (_NtUserDragDetect@12.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxSleepThread@16 @ 0xEFFA2 (_xxxSleepThread@16.c)
 *     _xxxSetCapture@4 @ 0x18772B (_xxxSetCapture@4.c)
 */

int __thiscall xxxIsDragging(_DWORD *this, int a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  _DWORD *v8; // ebx
  int v9; // edi
  BOOL v10; // eax
  int v11; // eax
  int v12; // [esp+0h] [ebp-58h]
  int v13; // [esp+4h] [ebp-54h]
  int v14; // [esp+10h] [ebp-48h]
  int v15; // [esp+14h] [ebp-44h] BYREF
  _DWORD *v16; // [esp+18h] [ebp-40h]
  _DWORD v17[4]; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD v18[3]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD v19[7]; // [esp+38h] [ebp-20h] BYREF

  v16 = this;
  v18[2] = 0;
  memset(v19, 0, sizeof(v19));
  v15 = _gptiCurrent;
  if ( (_GetKeyState(1) & 0x8000u) == 0 )
    return 0;
  xxxSetCapture(this);
  v14 = 1;
  v5 = *(_DWORD *)(_gpsi + 1772);
  v6 = *(_DWORD *)(_gpsi + 1768);
  v17[3] = v5 + a3;
  v7 = v15;
  v17[0] = a2 - v6;
  v17[1] = a3 - v5;
  v8 = v16;
  v9 = 0;
  v17[2] = a2 + v6;
  v18[0] = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = v18;
  v18[1] = v8;
  if ( v8 )
    HMLockObject(v8);
  do
  {
    while ( 1 )
    {
      while ( xxxInternalGetMessage(v19, (struct tagMSG *)0x200, 0x20Eu, 1u, 0)
           || xxxInternalGetMessage(v19, (struct tagMSG *)0x23, 0x23u, 1u, 0)
           || xxxInternalGetMessage(v19, (struct tagMSG *)0x100, 0x109u, 1u, 0)
           || *(_DWORD **)(*(_DWORD *)(v7 + 236) + 56) != v8 )
      {
        if ( *(_DWORD **)(*(_DWORD *)(v7 + 236) + 56) != v8 || v19[1] == 514 )
        {
          v11 = 0;
          goto LABEL_25;
        }
        if ( v19[1] == 35 )
        {
          xxxCallHook(0, 2, 0, 5u, v12, v13);
LABEL_27:
          v11 = v14;
          goto LABEL_28;
        }
        if ( v19[1] == 256 )
        {
          if ( v19[2] == 27 )
            goto LABEL_12;
          goto LABEL_27;
        }
        if ( v19[1] != 512 )
          goto LABEL_27;
        v10 = PtInRect(v17, v19[5], v19[6]);
        if ( !v10 )
          v9 = 1;
        v11 = v10 ? v14 : 0;
LABEL_25:
        v14 = v11;
LABEL_28:
        if ( !v11 )
          goto LABEL_12;
      }
      if ( *(_DWORD *)(v7 + 796) )
        break;
      if ( !xxxSleepThread(1u, 0) )
        goto LABEL_11;
    }
    v15 = 0;
  }
  while ( xxxSleepThread2(1u, 0, (int)&v15) && !v15 );
LABEL_11:
  v9 = 1;
LABEL_12:
  if ( *(_DWORD **)(*(_DWORD *)(v7 + 236) + 56) == v8 )
    xxxReleaseCapture();
  ThreadUnlock1();
  return v9;
}
