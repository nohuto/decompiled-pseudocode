/*
 * XREFs of ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C02565BC
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0256DF0 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0257320 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C000ACA4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x1C01EE2D0 (GetUserHandedness.c)
 */

__int64 __fastcall InteractiveControlDevice::CreateDeadzone(
        InteractiveControlDevice *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int UserHandedness; // ebp
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rax
  int v11; // edx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  struct InteractiveControlManager *v15; // rax
  __int64 v16; // rcx
  __int64 i; // rsi

  v4 = *((_QWORD *)this + 30);
  UserHandedness = GetUserHandedness((__int64)this, a2, a3, a4);
  if ( !v4 )
    return (unsigned int)-1073741811;
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 67) )
    return 0;
  v8 = (_DWORD *)Win32AllocPool(24LL, 1819440195LL);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1073741670;
  *v8 = 2;
  v8[4] = 1;
  v10 = Win32AllocPool(24LL, 1819440195LL);
  *((_QWORD *)v9 + 1) = v10;
  if ( UserHandedness == 1 )
  {
    if ( v10 )
    {
      **((_DWORD **)v9 + 1) = *((_DWORD *)InteractiveControlManager::Instance() + 73);
      *(_DWORD *)(*((_QWORD *)v9 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance() + 75);
      *(_DWORD *)(*((_QWORD *)v9 + 1) + 16LL) = 1;
      *(_QWORD *)(*((_QWORD *)v9 + 1) + 8LL) = Win32AllocPool(
                                                 8LL * *(unsigned int *)(*((_QWORD *)v9 + 1) + 16LL),
                                                 1819440195LL);
      if ( *(_QWORD *)(*((_QWORD *)v9 + 1) + 8LL) )
      {
        v11 = *((_DWORD *)InteractiveControlManager::Instance() + 77);
        **(_DWORD **)(*((_QWORD *)v9 + 1) + 8LL) = 0;
        v12 = v11 * v11;
        v13 = *(_QWORD *)(*((_QWORD *)v9 + 1) + 8LL);
        v14 = 1;
LABEL_15:
        *(_DWORD *)(v13 + 4) = v12;
        *((_DWORD *)this + 84) = v14;
        v7 = RIMCreatePointerDeviceDeadzone(v4 + 88, v9, (char *)this + 344);
        goto LABEL_16;
      }
    }
  }
  else if ( v10 )
  {
    **((_DWORD **)v9 + 1) = *((_DWORD *)InteractiveControlManager::Instance() + 69);
    *(_DWORD *)(*((_QWORD *)v9 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance() + 71);
    *(_DWORD *)(*((_QWORD *)v9 + 1) + 16LL) = 1;
    *(_QWORD *)(*((_QWORD *)v9 + 1) + 8LL) = Win32AllocPool(
                                               8LL * *(unsigned int *)(*((_QWORD *)v9 + 1) + 16LL),
                                               1819440195LL);
    if ( *(_QWORD *)(*((_QWORD *)v9 + 1) + 8LL) )
    {
      v15 = InteractiveControlManager::Instance();
      v12 = *((_DWORD *)v15 + 77) * *((_DWORD *)v15 + 77);
      **(_DWORD **)(*((_QWORD *)v9 + 1) + 8LL) = 0;
      v13 = *(_QWORD *)(*((_QWORD *)v9 + 1) + 8LL);
      v14 = 0;
      goto LABEL_15;
    }
  }
  v7 = -1073741670;
LABEL_16:
  v16 = *((_QWORD *)v9 + 1);
  if ( v16 )
  {
    for ( i = 0LL; (unsigned int)i < v9[4]; i = (unsigned int)(i + 1) )
    {
      v16 = *((_QWORD *)v9 + 1);
      if ( *(_QWORD *)(v16 + 24 * i + 8) )
      {
        Win32FreePool(*(_QWORD *)(v16 + 24 * i + 8));
        *(_QWORD *)(*((_QWORD *)v9 + 1) + 24 * i + 8) = 0LL;
        v16 = *((_QWORD *)v9 + 1);
      }
    }
    Win32FreePool(v16);
    *((_QWORD *)v9 + 1) = 0LL;
  }
  Win32FreePool(v9);
  return v7;
}
