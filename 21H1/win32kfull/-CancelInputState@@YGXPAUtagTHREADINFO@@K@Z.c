/*
 * XREFs of ?CancelInputState@@YGXPAUtagTHREADINFO@@K@Z @ 0x14CC2B
 * Callers:
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 * Callees:
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 *     _xxxFocusSetInputContext@12 @ 0x184BE (_xxxFocusSetInputContext@12.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394 (-xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 *     _UnlockCaptureWindow@4 @ 0x9D16E (_UnlockCaptureWindow@4.c)
 */

void __fastcall CancelInputState(int a1, int a2)
{
  int v3; // ecx
  int v4; // edi
  unsigned int *v5; // edi
  unsigned int **v6; // ecx
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // [esp+0h] [ebp-38h]
  int v10; // [esp+0h] [ebp-38h]
  int v11; // [esp+4h] [ebp-34h]
  int v12; // [esp+4h] [ebp-34h]
  _DWORD v13[3]; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int *v15; // [esp+20h] [ebp-18h]
  int v16; // [esp+24h] [ebp-14h]
  _BYTE v17[8]; // [esp+28h] [ebp-10h] BYREF
  int v18; // [esp+30h] [ebp-8h]
  int v19; // [esp+34h] [ebp-4h]

  v19 = _gptiCurrent;
  v18 = a2;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  switch ( v18 )
  {
    case 0:
      v7 = *(_DWORD *)(*(_DWORD *)(a1 + 236) + 64);
      v14 = *(_DWORD *)(v19 + 228);
      *(_DWORD *)(v19 + 228) = &v14;
      v15 = (unsigned int *)v7;
      if ( v7 )
        HMLockObject(v7);
      QueueNotifyTransformableMessage(0x86u, v7, 0, 0, 0, 0, v9, v11);
      QueueNotifyTransformableMessage(
        6u,
        v7,
        (struct tagWND *)((*(_BYTE *)(*(_DWORD *)(v7 + 20) + 23) & 0x20) << 16),
        0,
        0,
        0,
        v10,
        v12);
      v8 = (_DWORD *)(*(_DWORD *)(a1 + 236) + 64);
      if ( v7 == *v8 )
        HMAssignmentUnlock(v8);
      v13[0] = *(_DWORD *)(v7 + 8);
      v13[1] = PsGetThreadId(*(PETHREAD *)v13[0]);
      v13[2] = 2;
      xxxSendActivateAppMessage(v13);
      goto LABEL_21;
    case 1:
      v5 = *(unsigned int **)(*(_DWORD *)(a1 + 236) + 60);
      v14 = *(_DWORD *)(v19 + 228);
      *(_DWORD *)(v19 + 228) = &v14;
      v15 = v5;
      if ( v5 )
        HMLockObject(v5);
      QueueNotifyTransformableMessage(8u, (int)v5, 0, 0, 0, 0, v9, v11);
      if ( (*_gpsi & 4) != 0 )
        xxxFocusSetInputContext(0, v5, (int)v5, 1);
      v6 = (unsigned int **)(*(_DWORD *)(a1 + 236) + 60);
      if ( v5 == *v6 )
      {
        HMAssignmentUnlock(v6);
        if ( v5 )
        {
          if ( *(_DWORD *)(a1 + 236) == _gpqForeground )
            zzzInputFocusLostWindowEvent(0, 5);
        }
      }
      goto LABEL_21;
    case 2:
      v3 = v19;
      *(_DWORD *)(*(_DWORD *)(a1 + 236) + 284) &= ~0x100000u;
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 236) + 56);
      v14 = *(_DWORD *)(v3 + 228);
      *(_DWORD *)(v3 + 228) = &v14;
      v15 = (unsigned int *)v4;
      if ( v4 )
        HMLockObject(v4);
      QueueNotifyTransformableMessage(0x1Fu, v4, 0, 0, 0, 0, v9, v11);
      if ( v4 == *(_DWORD *)(*(_DWORD *)(a1 + 236) + 56) )
        UnlockCaptureWindow(*(int **)(a1 + 236));
LABEL_21:
      ThreadUnlock1();
      break;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
}
