/*
 * XREFs of ?xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z @ 0x196B8D
 * Callers:
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _MNFreePopup@8 @ 0x184632 (_MNFreePopup@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __thiscall xxxMNDestroyHandler(int *this)
{
  int v2; // ecx
  int v3; // eax
  void *v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // eax
  int v8; // esi
  PKTHREAD v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // [esp-8h] [ebp-28h] BYREF
  int v15; // [esp-4h] [ebp-24h]
  int v16; // [esp+Ch] [ebp-14h] BYREF
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  _DWORD v19[2]; // [esp+18h] [ebp-8h] BYREF

  v16 = 0;
  v17 = 0;
  v18 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, this[1]);
  if ( *(_DWORD *)v19[0] )
  {
    if ( *(_DWORD *)(*(_DWORD *)v19[0] + 12) )
    {
      v3 = *(_DWORD *)v19[0];
      if ( *(_DWORD *)(*(_DWORD *)v19[0] + 8) )
        v4 = *(void **)(v3 + 8);
      else
        v4 = *(void **)(v3 + 12);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v15 = (int)v4;
      v16 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v16;
      v17 = (int)v4;
      HMLockObject(v15);
      xxxSendMessage(v4, 0, 0);
      ThreadUnlock1();
    }
    if ( *(_DWORD *)(*(_DWORD *)v19[0] + 20) )
    {
      if ( *(int *)(*(_DWORD *)v19[0] + 40) >= 0 )
      {
        v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v19[0] + 20) + 20);
        if ( *(_DWORD *)(*(_DWORD *)v19[0] + 40) < *(_DWORD *)(v2 + 24) )
        {
          v2 = 80 * *(_DWORD *)(*(_DWORD *)v19[0] + 40);
          v7 = *(_DWORD *)(v2 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v19[0] + 20) + 56));
          *(_DWORD *)(v7 + 4) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v19[0] & 0x2000) != 0 )
      FindTimer(*(_DWORD *)(*(_DWORD *)v19[0] + 8), 65534, 0, 1, 0);
    if ( (**(_DWORD **)v19[0] & 0x4000) != 0 )
      FindTimer(*(_DWORD *)(*(_DWORD *)v19[0] + 8), 0xFFFF, 0, 1, 0);
    if ( (((unsigned int)&loc_1FFFFC + 4) & **(_DWORD **)v19[0]) != 0 && *(_DWORD *)(*(_DWORD *)v19[0] + 4) )
    {
      v8 = *(_DWORD *)(*(_DWORD *)v19[0] + 4);
      v9 = KeGetCurrentThread();
      v10 = W32GetThreadWin32Thread(v9);
      v15 = v8;
      v16 = *(_DWORD *)(v10 + 228);
      *(_DWORD *)(v10 + 228) = &v16;
      v17 = v8;
      HMLockObject(v15);
      if ( *(_DWORD *)(*(_DWORD *)v19[0] + 20) )
        v11 = **(_DWORD **)(*(_DWORD *)v19[0] + 20);
      else
        v11 = 0;
      xxxSendMessage(*(void **)(*(_DWORD *)v19[0] + 4), v11, (**(_DWORD **)v19[0] & 4) != 0 ? 0x20000000 : 0);
      ThreadUnlock1();
    }
    **(_DWORD **)v19[0] |= 0x8000u;
    if ( *(_DWORD *)(*(_DWORD *)v19[0] + 8) )
    {
      v12 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(*(_DWORD *)v19[0] + 8));
      v13 = v12;
      if ( v12 )
      {
        *(_DWORD *)(v12 + 4) = 0;
        if ( *(_DWORD *)(v12 + 8) )
        {
          v2 = v19[0];
          if ( *(_DWORD *)(v12 + 8) != *(_DWORD *)v19[0] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
        *(_DWORD *)(v13 + 8) = *(_DWORD *)v19[0];
      }
    }
    if ( (**(_DWORD **)v19[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_DWORD *)v19[0] + 32) |= (unsigned int)&loc_20000;
    }
    else
    {
      v15 = v2;
      v14 = v2;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v14, *(_DWORD *)v19[0]);
      MNFreePopup(v14, v15);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
}
