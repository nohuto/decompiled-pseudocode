/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C02386F0
 * Callers:
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023B54C (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C024B45C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0251A9C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01087D4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0158D64 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02366A8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C025247C (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rdi
  __int64 ThreadWin32Thread; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagMENUWND *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD v32[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 v34; // [rsp+58h] [rbp-19h]
  __int128 v35; // [rsp+60h] [rbp-11h] BYREF
  __int64 v36; // [rsp+70h] [rbp-1h]
  __int128 v37; // [rsp+78h] [rbp+7h] BYREF
  __int64 v38; // [rsp+88h] [rbp+17h]
  _QWORD v39[2]; // [rsp+98h] [rbp+27h] BYREF
  _QWORD v40[4]; // [rsp+A8h] [rbp+37h] BYREF

  v36 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v32, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v32[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v32[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v32[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v32[0] &= ~0x4000u;
    }
    v3 = *(struct tagWND **)(*(_QWORD *)v32[0] + 24LL);
    if ( v3 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v35 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v35;
      *((_QWORD *)&v35 + 1) = v3;
      HMLockObject(v3);
      xxxSendMessage((unsigned __int64)v3, 0x1E4u, 0LL, 0LL);
      v5 = *(_DWORD *)(a2 + 8);
      if ( (v5 & 0x100) != 0 && (v5 & 4) != 0 && (**(_DWORD **)v32[0] & 1) == 0 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v32[0] + 16LL);
        v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v33 = *(_QWORD *)(v7 + 408);
        *(_QWORD *)(v7 + 408) = &v33;
        *((_QWORD *)&v33 + 1) = v6;
        HMLockObject(v6);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v32[0] + 16LL));
        ThreadUnlock1(v9, v8, v10);
      }
      xxxWindowEvent(7u, v3, -4, 0, 0);
      if ( ThreadUnlock1(v12, v11, v13) )
      {
        if ( !(unsigned int)xxxDestroyWindow((__int64 *)v3) )
        {
          v14 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v3);
          if ( v14 )
            xxxMNDestroyHandler(v14);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v32[0] + 24LL);
      **(_DWORD **)v32[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v32[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v32[0] + 56LL);
    }
    else
    {
      v15 = *(_QWORD *)v32[0];
      v39[0] = *(_QWORD *)(*(_QWORD *)v32[0] + 64LL) + 56LL;
      v39[1] = *(_QWORD *)(v15 + 16);
      HMAssignmentLock(v39);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v32[0] + 80LL) != -1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 64LL) + 8LL);
      if ( v16 )
      {
        v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v33 = *(_QWORD *)(v17 + 408);
        *(_QWORD *)(v17 + 408) = &v33;
        *((_QWORD *)&v33 + 1) = v16;
        HMLockObject(v16);
        v18 = *(_QWORD *)(*(_QWORD *)v32[0] + 16LL);
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v35 = *(_QWORD *)(v19 + 408);
        *(_QWORD *)(v19 + 408) = &v35;
        *((_QWORD *)&v35 + 1) = v18;
        HMLockObject(v18);
        v20 = *(_QWORD *)(*(_QWORD *)v32[0] + 40LL);
        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v37 = *(_QWORD *)(v21 + 408);
        *(_QWORD *)(v21 + 408) = &v37;
        *((_QWORD *)&v37 + 1) = v20;
        if ( v20 )
          HMLockObject(v20);
        SmartObjStackRefBase<tagMENU>::Init(v40, *(_QWORD *)(*(_QWORD *)v32[0] + 40LL));
        v40[2] = 0LL;
        xxxSendMenuSelect(
          v16,
          *(_QWORD *)(*(_QWORD *)v32[0] + 16LL),
          (unsigned int)v40,
          *(_DWORD *)(*(_QWORD *)v32[0] + 80LL),
          a2);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v40);
        ThreadUnlock1(v23, v22, v24);
        ThreadUnlock1(v26, v25, v27);
        ThreadUnlock1(v29, v28, v30);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v32);
}
