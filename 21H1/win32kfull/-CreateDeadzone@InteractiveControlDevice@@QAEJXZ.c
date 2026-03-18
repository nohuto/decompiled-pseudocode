/*
 * XREFs of ?CreateDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B18A2
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     _GetUserHandedness@0 @ 0x159192 (_GetUserHandedness@0.c)
 */

int __thiscall InteractiveControlDevice::CreateDeadzone(InteractiveControlDevice *this)
{
  int v1; // ebx
  int v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  struct InteractiveControlManager *v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ebx
  int v14; // edi
  int UserHandedness; // [esp+10h] [ebp-8h]
  unsigned int v17; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v1 = *((_DWORD *)this + 47);
  UserHandedness = GetUserHandedness();
  if ( !v1 )
    return -1073741811;
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 58) )
    return 0;
  v3 = (_DWORD *)Win32AllocPool(20, 1819440195);
  v4 = v3;
  if ( !v3 )
    return -1073741670;
  *v3 = 2;
  v5 = 1;
  v3[2] = 1;
  v6 = Win32AllocPool(16, 1819440195);
  v4[1] = v6;
  if ( UserHandedness == 1 )
  {
    if ( v6 )
    {
      *(_DWORD *)v4[1] = *((_DWORD *)InteractiveControlManager::Instance() + 64);
      *(_DWORD *)(v4[1] + 4) = *((_DWORD *)InteractiveControlManager::Instance() + 66);
      *(_DWORD *)(v4[1] + 12) = 1;
      *(_DWORD *)(v4[1] + 8) = Win32AllocPool(8 * *(_DWORD *)(v4[1] + 12), 1819440195);
      if ( *(_DWORD *)(v4[1] + 8) )
      {
        v7 = *((_DWORD *)InteractiveControlManager::Instance() + 68);
        **(_DWORD **)(v4[1] + 8) = 0;
        v8 = v7 * v7;
LABEL_15:
        *(_DWORD *)(*(_DWORD *)(v4[1] + 8) + 4) = v8;
        *((_DWORD *)this + 68) = v5;
        v2 = RIMCreatePointerDeviceDeadzone(v1 + 56, v4, (char *)this + 276);
        v19 = v2;
        goto LABEL_16;
      }
    }
  }
  else if ( v6 )
  {
    *(_DWORD *)v4[1] = *((_DWORD *)InteractiveControlManager::Instance() + 60);
    *(_DWORD *)(v4[1] + 4) = *((_DWORD *)InteractiveControlManager::Instance() + 62);
    *(_DWORD *)(v4[1] + 12) = 1;
    *(_DWORD *)(v4[1] + 8) = Win32AllocPool(8 * *(_DWORD *)(v4[1] + 12), 1819440195);
    if ( *(_DWORD *)(v4[1] + 8) )
    {
      v9 = InteractiveControlManager::Instance();
      v8 = *((_DWORD *)v9 + 68) * *((_DWORD *)v9 + 68);
      **(_DWORD **)(v4[1] + 8) = 0;
      v5 = 0;
      goto LABEL_15;
    }
  }
  v2 = -1073741670;
  v19 = -1073741670;
LABEL_16:
  v10 = v4[1];
  if ( v10 )
  {
    v11 = 0;
    v17 = 0;
    if ( v4[2] )
    {
      v12 = v4[1];
      v13 = 0;
      do
      {
        v14 = *(_DWORD *)(v13 + v10 + 8);
        if ( v14 )
        {
          Win32FreePool(v14);
          v11 = v17;
          *(_DWORD *)(v13 + v4[1] + 8) = 0;
          v10 = v4[1];
          v12 = v10;
        }
        ++v11;
        v13 += 16;
        v17 = v11;
      }
      while ( v11 < v4[2] );
      v2 = v19;
      v10 = v12;
    }
    Win32FreePool(v10);
    v4[1] = 0;
  }
  Win32FreePool(v4);
  return v2;
}
