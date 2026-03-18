/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4
 * Callers:
 *     NtUserDeleteMenu @ 0x1C00348E0 (NtUserDeleteMenu.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     NtUserRemoveMenu @ 0x1C0117BA0 (NtUserRemoveMenu.c)
 * Callees:
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C0033FAC (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00363BC (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNFreeItem @ 0x1C0036994 (MNFreeItem.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C0036C9C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     MNLookUpItem @ 0x1C005C3E0 (MNLookUpItem.c)
 *     DwmGetClassStyle @ 0x1C0081AD0 (DwmGetClassStyle.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0249138 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02492B4 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, unsigned int a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // r10
  __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v27; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  void *v34; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v37; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v39; // [rsp+20h] [rbp-60h] BYREF
  __int64 v40; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v41[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v42[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v43[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v44; // [rsp+60h] [rbp-20h]
  _QWORD v45[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v46; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v43, a1);
  SmartObjStackRefBase<tagMENU>::Init(v45, 0LL);
  v40 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v41, 0LL);
  v7 = 0;
  v46 = v44;
  SmartObjStackRefBase<tagMENU>::operator=(v45);
  v8 = v44;
  if ( v44 )
  {
    v9 = v44;
  }
  else
  {
    v8 = 0LL;
    v9 = *v43[0];
  }
  v39 = v9;
  if ( !v8 )
    v8 = *v43[0];
  v10 = a3 & 0x400;
  v11 = MNLookUpItem(v8, a2, v10, &v39);
  v44 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v43);
  if ( v11 )
    goto LABEL_6;
  if ( a2 < 0xFFFFF000 || v10 )
    goto LABEL_36;
  v44 = v46;
  SmartObjStackRefBase<tagMENU>::operator=(v43);
  v30 = v44;
  if ( v44 )
  {
    v31 = v44;
  }
  else
  {
    v30 = 0LL;
    v31 = *v43[0];
  }
  v39 = v31;
  if ( !v30 )
    v30 = *v43[0];
  v11 = MNLookUpItem(v30, (unsigned __int16)a2, 0LL, &v39);
  v44 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v43);
  if ( v11 )
  {
LABEL_6:
    v13 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 40LL) & 0x100) == 0
      || (v14 = 1, *(_DWORD *)(*(_QWORD *)v11 + 8LL) != 61536) )
    {
      v14 = 0;
    }
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 0x1000) != 0 )
      *(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 40LL) &= ~0x400u;
    v15 = v44;
    if ( !v44 )
      v15 = *v43[0];
    v16 = MNGetPopupFromMenu(v15, &v40);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v41, v16);
    if ( *(_QWORD *)v41[0] )
    {
      v32 = v44;
      if ( !v44 )
        v32 = *v43[0];
      v7 = MNGetpItemIndex(v32, v11);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v42, *(_QWORD *)v41[0]);
      MNDeleteAdjustIndexes(v40, v42, v7);
    }
    v17 = v44;
    if ( !v44 )
      v17 = *v43[0];
    MNFreeItem(v17, v11, a4);
    *(_DWORD *)(*v43[0] + 64) = 0;
    *(_DWORD *)(*v43[0] + 68) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 44LL) == 1 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*v43[0] + 24) + 128LL), 0, *(PVOID *)(*v43[0] + 96));
      Win32FreePool(*(_QWORD *)(*v43[0] + 88));
      *(_DWORD *)(*v43[0] + 60) = 0;
      v29 = *v43[0];
      *(_QWORD *)(*(_QWORD *)(*v43[0] + 40) + 32LL) = 0LL;
      *(_QWORD *)(v29 + 88) = 0LL;
    }
    else
    {
      v18 = 96 * *(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 44LL) + *(_DWORD *)(*v43[0] + 88) - v11 - 96;
      if ( 96 * *(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 44LL) + *(_DWORD *)(*v43[0] + 88) - (_DWORD)v11 != 96 )
      {
        memmove(
          *(void **)v11,
          *(const void **)(v11 + 96),
          (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 44LL)
                       + **(_DWORD **)(*v43[0] + 88)
                       - *(_DWORD *)(v11 + 96)));
        memmove((void *)v11, (const void *)(v11 + 96), v18);
        v19 = (v11 - *(_QWORD *)(*v43[0] + 88)) / 96;
        while ( (unsigned int)v19 < *(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 44LL) - 1 )
        {
          v20 = 96LL * (int)v19;
          *(_QWORD *)(v20 + *(_QWORD *)(*v43[0] + 88)) = *(_QWORD *)(*v43[0] + 96) + 112LL * (unsigned int)v19;
          LODWORD(v19) = v19 + 1;
          *(_QWORD *)(*(_QWORD *)(*v43[0] + 88) + v20 + 8) = *(_QWORD *)(v20 + *(_QWORD *)(*v43[0] + 88))
                                                           - *(_QWORD *)(*(_QWORD *)(*v43[0] + 24) + 16LL);
        }
      }
      if ( (unsigned int)(*(_DWORD *)(*v43[0] + 60) - *(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 44LL)) >= 9 )
        MNAllocMenuItems(v43, 1u);
    }
    v12 = *v43[0];
    --*(_DWORD *)(*(_QWORD *)(*v43[0] + 40) + 44LL);
    if ( v14 )
    {
      v12 = *v43[0];
      if ( *(_QWORD *)(*v43[0] + 80) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*v43[0] + 80)) )
        {
          DirtyVisRgnTrackers(*(_QWORD *)(*v43[0] + 80));
          DwmGetClassStyle(*(_QWORD *)(*v43[0] + 80));
          v34 = (void *)ReferenceDwmApiPort(v33);
          DwmAsyncChildStyleChange(v34);
        }
      }
    }
    if ( *(_QWORD *)v41[0] )
      xxxMNUpdateShownMenu(v41, *(_QWORD *)(*v43[0] + 88) + 96LL * v7, 2LL);
  }
  else
  {
LABEL_36:
    v13 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (CurrentProcess = PsGetCurrentProcess(v24, v23, v25),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v37),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v22 = *ThreadWin32Thread;
  }
  if ( v41[0] != gSmartObjNullRef && !--*(_DWORD *)(v41[0] + 8LL) )
  {
    if ( *(_BYTE *)(v41[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v41[0]);
  }
  v27 = *(_QWORD **)(v22 + 1472);
  if ( v27 )
    *(_QWORD *)(v22 + 1472) = *v27;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v45);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
  return v13;
}
