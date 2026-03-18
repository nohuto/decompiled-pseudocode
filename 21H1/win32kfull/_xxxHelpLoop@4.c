/*
 * XREFs of _xxxHelpLoop@4 @ 0x1AC7AC
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxWindowHitTest@20 @ 0x7D14C (_xxxWindowHitTest@20.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 *     __GetParent@4 @ 0xB5390 (__GetParent@4.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxInternalEnumWindow@16 @ 0x141598 (_xxxInternalEnumWindow@16.c)
 *     _xxxSendHelpMessage@20 @ 0x1ACB94 (_xxxSendHelpMessage@20.c)
 *     ?IsHelpParent@@YGHPAUtagWND@@@Z @ 0x1B9872 (-IsHelpParent@@YGHPAUtagWND@@@Z.c)
 *     _GetContextHelpId@4 @ 0x1B98AF (_GetContextHelpId@4.c)
 */

void __thiscall xxxHelpLoop(ULONG_PTR this)
{
  int v2; // eax
  int v3; // esi
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // ecx
  int v8; // eax
  int WindowBordersForDpiWithCompatFlags2; // eax
  _DWORD *v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  void *v15; // ecx
  int v16; // eax
  int v17; // edi
  PKTHREAD v18; // eax
  int v19; // eax
  int v20; // esi
  PKTHREAD v21; // eax
  int v22; // eax
  char v23; // cl
  int v24; // ebx
  ULONG_PTR Parent; // edi
  void (*v26)(void); // esi
  PKTHREAD v27; // eax
  int v28; // eax
  int ContextHelpId; // eax
  struct tagWND *v30; // [esp+0h] [ebp-70h]
  _DWORD v31[3]; // [esp+10h] [ebp-60h] BYREF
  int v32; // [esp+1Ch] [ebp-54h] BYREF
  int v33; // [esp+20h] [ebp-50h]
  int v34; // [esp+24h] [ebp-4Ch]
  int v35; // [esp+28h] [ebp-48h] BYREF
  int v36; // [esp+2Ch] [ebp-44h]
  unsigned int v37; // [esp+30h] [ebp-40h]
  unsigned int v38; // [esp+34h] [ebp-3Ch]
  int v39; // [esp+38h] [ebp-38h]
  INT DpiForSystem; // [esp+3Ch] [ebp-34h]
  unsigned int v41[7]; // [esp+40h] [ebp-30h] BYREF
  int v42; // [esp+5Ch] [ebp-14h] BYREF
  int v43; // [esp+60h] [ebp-10h] BYREF
  ULONG_PTR v44; // [esp+64h] [ebp-Ch]
  int v45; // [esp+68h] [ebp-8h]

  memset(v41, 0, sizeof(v41));
  v35 = 0;
  v39 = _gptiCurrent;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  xxxWindowEvent(0xCu, (struct tagEVENTHOOK *)this, 0, 0, 0);
  zzzSetCursor(*(void **)(_gasyscur[0] + 6436));
  xxxCapture(_gptiCurrent, this, 4);
  v2 = *(_DWORD *)(this + 20);
  v3 = *(_DWORD *)(v2 + 16);
  v4 = *(_DWORD *)(v2 + 20);
  DpiForSystem = GetDpiForSystem();
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
    v8 = *(_DWORD *)(ThreadWin32Thread + 352);
  else
    v8 = 0;
  WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(v4, v3, v7, 0, DpiForSystem, v8);
  v10 = *(_DWORD **)(this + 20);
  v11 = WindowBordersForDpiWithCompatFlags2;
  v12 = WindowBordersForDpiWithCompatFlags2 + v10[14];
  v42 = v11 + v10[13];
  v13 = v10[15];
  v43 = v12;
  v14 = v10[16] - v11;
  v44 = v13 - v11;
  v45 = v14;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v39 + 236) + 56) != this )
        goto LABEL_42;
      if ( xxxInternalGetMessage(v41, 0, 0, 2u, 0) )
        break;
      xxxWaitMessageEx((void *)0x3CFF, 0);
    }
    switch ( v41[1] )
    {
      case 0xA1u:
        goto LABEL_42;
      case 0x201u:
        if ( !PtInRect(&v42, v41[5], v41[6]) )
          goto LABEL_42;
        v16 = xxxWindowHitTest(this, 0, v41[5], v41[6]);
        v17 = ValidateHwnd(v16);
        v18 = KeGetCurrentThread();
        v19 = W32GetThreadWin32Thread(v18);
        v32 = *(_DWORD *)(v19 + 228);
        *(_DWORD *)(v19 + 228) = &v32;
        v33 = v17;
        if ( v17 )
          HMLockObject(v17);
        if ( IsHelpParent(v30) )
        {
          v36 = 0;
          v37 = v41[5];
          v38 = v41[6];
          v35 = v17;
          xxxInternalEnumWindow(v17, (int (__stdcall *)(int, int))EnumPwndDlgChildProc, (int)&v35, 1);
          v17 = v36;
        }
        v20 = this != v17 ? v17 : 0;
        if ( !v20 )
        {
          if ( !*(_DWORD *)(*(_DWORD *)(this + 20) + 176) )
            goto LABEL_41;
          v20 = this;
        }
        if ( v20 )
        {
          v45 = 0;
          v31[2] = 0;
          v21 = KeGetCurrentThread();
          v22 = W32GetThreadWin32Thread(v21);
          v31[0] = *(_DWORD *)(v22 + 228);
          *(_DWORD *)(v22 + 228) = v31;
          v31[1] = v20;
          HMLockObject(v20);
          zzzSetCursor((void *)_gasyscur[1]);
          xxxReleaseCapture();
          xxxRedrawTitle((struct tagVWPL **)this, 4096);
          SetOrClrWF(0, this, 0x580u, 1);
          xxxInternalGetMessage(v41, 0, 0, 1u, 1);
          xxxWindowEvent(0x800Au, (struct tagEVENTHOOK *)this, 0xFFFFFFFE, (struct tagWND *)4, 0);
          xxxWindowEvent(0xDu, (struct tagEVENTHOOK *)this, 0, 0, 0);
          v23 = *(_BYTE *)(*(_DWORD *)(v20 + 20) + 23);
          if ( (v23 & 0xC0) != 0x40 || (v24 = *(unsigned __int16 *)(v20 + 92), v24 == 0xFFFF) )
            v24 = -1;
          if ( (v23 & 8) != 0 )
          {
            Parent = _GetParent((_DWORD *)v20);
            if ( !Parent )
            {
              v26 = (void (*)(void))ThreadUnlock1;
LABEL_38:
              v26();
              v26();
              return;
            }
          }
          else
          {
            Parent = v20;
          }
          v27 = KeGetCurrentThread();
          v28 = W32GetThreadWin32Thread(v27);
          v43 = *(_DWORD *)(v28 + 228);
          *(_DWORD *)(v28 + 228) = &v43;
          v44 = Parent;
          HMLockObject(Parent);
          ContextHelpId = GetContextHelpId(v20);
          xxxSendHelpMessage(Parent, v24, *(_DWORD *)v20, ContextHelpId);
          v26 = (void (*)(void))ThreadUnlock1;
          ThreadUnlock1();
          goto LABEL_38;
        }
LABEL_41:
        ThreadUnlock1();
        goto LABEL_42;
      case 0x204u:
      case 0x207u:
      case 0x20Bu:
        goto LABEL_42;
    }
    if ( v41[1] != 512 )
      break;
    if ( PtInRect(&v42, v41[5], v41[6]) )
      v15 = *(void **)(_gasyscur[0] + 6436);
    else
      v15 = (void *)_gasyscur[1];
    zzzSetCursor(v15);
LABEL_19:
    xxxInternalGetMessage(v41, 0, 0, 1u, 1);
    xxxTranslateMessage((int)v41, 0);
    xxxDispatchMessage(v41);
  }
  if ( v41[1] != 256 || v41[2] != 27 )
    goto LABEL_19;
  xxxInternalGetMessage(v41, 0, 0, 1u, 1);
LABEL_42:
  xxxReleaseCapture();
  zzzSetCursor((void *)_gasyscur[1]);
  xxxRedrawTitle((struct tagVWPL **)this, 4096);
  SetOrClrWF(0, this, 0x580u, 1);
  xxxWindowEvent(0x800Au, (struct tagEVENTHOOK *)this, 0xFFFFFFFE, (struct tagWND *)4, 0);
  xxxWindowEvent(0xDu, (struct tagEVENTHOOK *)this, 0, 0, 0);
}
