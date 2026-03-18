/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0237860
 * Callers:
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0249E54 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002B5A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C015B3B8 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235818 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C024BE4C (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagMENUWND *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD v35[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v36; // [rsp+48h] [rbp-29h] BYREF
  __int64 v37; // [rsp+58h] [rbp-19h]
  __int128 v38; // [rsp+60h] [rbp-11h] BYREF
  __int64 v39; // [rsp+70h] [rbp-1h]
  __int128 v40; // [rsp+78h] [rbp+7h] BYREF
  __int64 v41; // [rsp+88h] [rbp+17h]
  _QWORD v42[2]; // [rsp+98h] [rbp+27h] BYREF
  _QWORD v43[4]; // [rsp+A8h] [rbp+37h] BYREF

  v39 = 0LL;
  v37 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v40 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v35[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v35[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v35[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v35[0] &= ~0x4000u;
    }
    v3 = *(struct tagWND **)(*(_QWORD *)v35[0] + 24LL);
    if ( v3 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v38 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v38;
      *((_QWORD *)&v38 + 1) = v3;
      HMLockObject(v3);
      xxxSendMessage((unsigned __int64)v3, 0x1E4u, 0LL, 0LL);
      v5 = *(_DWORD *)(a2 + 8);
      if ( (v5 & 0x100) != 0 && (v5 & 4) != 0 && (**(_DWORD **)v35[0] & 1) == 0 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v35[0] + 16LL);
        v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v36 = *(_QWORD *)(v7 + 416);
        *(_QWORD *)(v7 + 416) = &v36;
        *((_QWORD *)&v36 + 1) = v6;
        HMLockObject(v6);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v35[0] + 16LL));
        ThreadUnlock1(v9, v8, v10);
      }
      xxxWindowEvent(7u, v3, -4, 0, 0);
      if ( ThreadUnlock1(v12, v11, v13) )
      {
        if ( !(unsigned int)xxxDestroyWindow((unsigned __int64)v3) )
        {
          v17 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v3, v14, v15, v16);
          if ( v17 )
            xxxMNDestroyHandler(v17);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v35[0] + 24LL);
      **(_DWORD **)v35[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v35[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v35[0] + 56LL);
    }
    else
    {
      v18 = *(_QWORD *)v35[0];
      v42[0] = *(_QWORD *)(*(_QWORD *)v35[0] + 64LL) + 56LL;
      v42[1] = *(_QWORD *)(v18 + 16);
      HMAssignmentLock(v42);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v35[0] + 80LL) != -1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 64LL) + 8LL);
      if ( v19 )
      {
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v36 = *(_QWORD *)(v20 + 416);
        *(_QWORD *)(v20 + 416) = &v36;
        *((_QWORD *)&v36 + 1) = v19;
        HMLockObject(v19);
        v21 = *(_QWORD *)(*(_QWORD *)v35[0] + 16LL);
        v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v38 = *(_QWORD *)(v22 + 416);
        *(_QWORD *)(v22 + 416) = &v38;
        *((_QWORD *)&v38 + 1) = v21;
        HMLockObject(v21);
        v23 = *(_QWORD *)(*(_QWORD *)v35[0] + 40LL);
        v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v40 = *(_QWORD *)(v24 + 416);
        *(_QWORD *)(v24 + 416) = &v40;
        *((_QWORD *)&v40 + 1) = v23;
        if ( v23 )
          HMLockObject(v23);
        SmartObjStackRefBase<tagMENU>::Init(v43, *(_QWORD *)(*(_QWORD *)v35[0] + 40LL));
        v43[2] = 0LL;
        xxxSendMenuSelect(
          v19,
          *(_QWORD *)(*(_QWORD *)v35[0] + 16LL),
          (unsigned int)v43,
          *(_DWORD *)(*(_QWORD *)v35[0] + 80LL),
          a2);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
        ThreadUnlock1(v26, v25, v27);
        ThreadUnlock1(v29, v28, v30);
        ThreadUnlock1(v32, v31, v33);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v35);
}
