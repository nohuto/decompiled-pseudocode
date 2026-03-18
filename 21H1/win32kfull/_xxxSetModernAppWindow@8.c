/*
 * XREFs of _xxxSetModernAppWindow@8 @ 0xC6BDE
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x185FC (-xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _LockQCursor@8 @ 0x9C34C (_LockQCursor@8.c)
 *     ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E (-xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     _VerifyChildMenu@8 @ 0xF4F5A (_VerifyChildMenu@8.c)
 */

int __stdcall xxxSetModernAppWindow(int a1, int a2)
{
  int v2; // edx
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v14; // eax
  int v15; // eax
  PKTHREAD v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  struct tagWND *v27; // [esp-8h] [ebp-58h]
  const struct tagWND *v28; // [esp-8h] [ebp-58h]
  int v29; // [esp-4h] [ebp-54h]
  int v30; // [esp-4h] [ebp-54h]
  const struct tagWND *v31; // [esp+0h] [ebp-50h]
  int v32; // [esp+4h] [ebp-4Ch]
  struct tagWND *v33; // [esp+8h] [ebp-48h]
  _DWORD *v34; // [esp+Ch] [ebp-44h]
  int v35; // [esp+10h] [ebp-40h]
  struct tagWND *v36; // [esp+14h] [ebp-3Ch]
  int v37; // [esp+1Ch] [ebp-34h] BYREF
  int v38; // [esp+20h] [ebp-30h]
  int v39; // [esp+24h] [ebp-2Ch]
  _DWORD v40[3]; // [esp+2Ch] [ebp-24h] BYREF
  _DWORD v41[3]; // [esp+38h] [ebp-18h] BYREF
  _DWORD v42[3]; // [esp+44h] [ebp-Ch] BYREF

  v2 = a1;
  v3 = *(_DWORD **)(a1 + 8);
  v4 = 0;
  v34 = v3;
  v5 = 0;
  v6 = v3[200];
  v41[2] = 0;
  v42[2] = 0;
  v40[2] = 0;
  v36 = (struct tagWND *)(v3 + 200);
  v35 = v6;
  if ( (v3[172] & 0x40000) == 0 )
    goto LABEL_58;
  v7 = v3[199];
  if ( !v7 || v7 != a1 )
    goto LABEL_58;
  if ( v3 != (_DWORD *)_gptiCurrent )
  {
    v29 = 5;
LABEL_59:
    v9 = v29;
    goto LABEL_60;
  }
  if ( !a2
    || (v8 = ValidateHwnd(a2), (v5 = v8) != 0)
    && (v2 = a1, v8 != a1)
    && *(_DWORD *)(v8 + 56) != a1
    && v8 != *(_DWORD *)v36
    && (v3 = v34, *(_DWORD **)(v8 + 8) != v34) )
  {
    if ( !v6 )
    {
LABEL_16:
      v10 = _gpqForeground;
      v39 = _gpqForeground;
      if ( _gpqForeground )
      {
        if ( v6 )
        {
          v11 = _gpqForeground == v3[59];
          v37 = v3[59];
          if ( v11 )
          {
            v38 = *(_DWORD *)(v6 + 8);
            v6 = v35;
            v3 = v34;
            if ( *(_DWORD *)(v38 + 236) == v37 )
            {
              v6 = v35;
              if ( _gptiForeground == v38 )
                goto LABEL_24;
              v10 = v39;
            }
          }
        }
      }
      if ( v10 != v3[59] )
      {
        v37 = 1;
        if ( CoreWindowProp::CompositeAppHasForeground(v31) )
        {
LABEL_25:
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v40[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v40;
          v40[1] = v5;
          if ( v5 )
            HMLockObject(v5);
          v14 = KeGetCurrentThread();
          v15 = W32GetThreadWin32Thread(v14);
          v41[0] = *(_DWORD *)(v15 + 228);
          *(_DWORD *)(v15 + 228) = v41;
          v41[1] = v6;
          if ( v6 )
            HMLockObject(v6);
          v16 = KeGetCurrentThread();
          v17 = W32GetThreadWin32Thread(v16);
          v42[0] = *(_DWORD *)(v17 + 228);
          *(_DWORD *)(v17 + 228) = v42;
          v42[1] = a1;
          HMLockObject(a1);
          v30 = v5;
          v27 = v36;
          HMAssignmentLock(v19, v18);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v37);
          if ( v6 )
          {
            v20 = *(_DWORD *)(v32 + 236);
            if ( *(_DWORD *)(v20 + 64) == a1 )
            {
              xxxSendNotifyMessage(
                v6,
                0x349u,
                (struct tagWND *)((*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x20) << 16),
                0,
                0);
              v20 = *(_DWORD *)(v32 + 236);
            }
            if ( *(_DWORD *)(v20 + 60) == v6 )
            {
              xxxSendNotifyMessage(v6, 8u, 0, 0, 0);
              HMAssignmentUnlock(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 236) + 60);
            }
          }
          if ( v5 )
          {
            v21 = *(_DWORD *)(v5 + 8);
            if ( *(_DWORD *)(*(_DWORD *)(v21 + 236) + 64) == v5 )
            {
              xxxSendNotifyMessage(
                v5,
                0x349u,
                (struct tagWND *)((*(_BYTE *)(*(_DWORD *)(v5 + 20) + 23) & 0x20) << 16),
                0,
                0);
              HMAssignmentUnlock(*(_DWORD *)(*(_DWORD *)(v5 + 8) + 236) + 64);
              v21 = *(_DWORD *)(v5 + 8);
            }
            if ( *(_DWORD *)(*(_DWORD *)(v21 + 236) + 60) == v5 )
            {
              xxxSendNotifyMessage(v5, 8u, 0, 0, 0);
              HMAssignmentUnlock(*(_DWORD *)(*(_DWORD *)(v5 + 8) + 236) + 60);
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
          if ( v5 )
          {
            SetOrClrWF(0, v5, 0xF80u, 1);
            SetOrClrWF(1, v5, 0xF40u, 1);
            VerifyChildMenu(v5);
            xxxSetWindowStyle(
              (struct tagWND *)v5,
              0xFFFFFFEC,
              (unsigned int)&loc_80000 | *(_DWORD *)(*(_DWORD *)(v5 + 20) + 16));
            v6 = (int)v33;
            xxxSetParentWorker(v33, 0, v36, v5);
            v22 = a1;
            if ( *(_DWORD *)(v5 + 56) != a1
              || (v23 = *(_DWORD *)(v32 + 236), *(_DWORD *)(*(_DWORD *)(v5 + 8) + 236) != v23) )
            {
LABEL_57:
              ThreadUnlock1();
              ThreadUnlock1();
              ThreadUnlock1();
              return v4;
            }
            if ( *v34 != v5 || *(_DWORD *)(v23 + 64) != a1 )
            {
LABEL_46:
              if ( v6 )
              {
                if ( *(_DWORD *)(v6 + 56) == v22 )
                {
                  xxxSetParentWorker(0, 0, v27, v30);
                  SetOrClrWF(0, (int)v33, 0xF40u, 1);
                  SetOrClrWF(1, (int)v33, 0xF80u, 1);
                  VerifyChildMenu(v33);
                  xxxSetWindowStyle(v33, 0xFFFFFFEC, *(_DWORD *)(*((_DWORD *)v33 + 5) + 16) & 0xFFF7FFFF);
                  if ( *(_DWORD *)(*((_DWORD *)v33 + 2) + 236) == *(_DWORD *)(v32 + 236) )
                  {
                    zzzAttachThreadInput(0);
                    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v37);
                    LockQCursor(v25, v24, *(_DWORD *)(*((_DWORD *)v33 + 2) + 236), _gasyscur[1]);
                    if ( v35 && _gptiForeground == *((_DWORD *)v33 + 2) && *(_DWORD *)(v32 + 236) == _gpqForeground )
                      xxxSetForegroundThreadWithWindowHint(v32, 0);
                    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
                    if ( v36 )
                    {
                      if ( CoreWindowProp::CompositeAppHasForeground(v28) )
                        xxxSetForegroundWindow2(a1, 0, 2u);
                    }
                  }
                }
              }
              v4 = 1;
              goto LABEL_57;
            }
            xxxSendNotifyMessage(v5, 0x349u, (struct tagWND *)1, 0, 0);
            xxxDeliverRestoreFocusMessage((_DWORD *)v5);
          }
          v22 = a1;
          goto LABEL_46;
        }
      }
LABEL_24:
      v37 = 0;
      goto LABEL_25;
    }
    if ( *(_DWORD **)(v6 + 8) != v3 )
    {
      v6 = v2 == *(_DWORD *)(v6 + 56) ? v6 : 0;
      v35 = v6;
      goto LABEL_16;
    }
LABEL_58:
    v29 = 87;
    goto LABEL_59;
  }
  v9 = 1400;
LABEL_60:
  UserSetLastError((struct _NT_TIB *)v9);
  return 0;
}
