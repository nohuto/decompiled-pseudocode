/*
 * XREFs of xxxSetWindowData @ 0x1C00B2618
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00B20A8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x1C00F0128 (xxxSetWindowLong.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     IsWindowShellCloaked @ 0x1C0013E60 (IsWindowShellCloaked.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C003CBF8 (GetWindowCloakStateComponentUIAware.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     MapClientNeuterToClientPfn @ 0x1C00BA2F0 (MapClientNeuterToClientPfn.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00C55BC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     GetCPD @ 0x1C00D3314 (GetCPD.c)
 *     MapClientToServerPfn @ 0x1C00D4040 (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxClientWOWGetProcModule @ 0x1C0103390 (xxxClientWOWGetProcModule.c)
 *     IsParentBandValid @ 0x1C0106DB0 (IsParentBandValid.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01129EC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ValidateOwnerDepth @ 0x1C01139D4 (ValidateOwnerDepth.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C011B2E0 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011BED4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     MapServerToClientPfn @ 0x1C0155B1C (MapServerToClientPfn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // r11d
  __int64 v27; // r10
  __int64 CPD; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 DesktopWindow; // rax
  struct tagWND *v36; // rbx
  __int64 v37; // r12
  bool v38; // zf
  struct tagWND *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r14
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  struct tagWND *v51; // rcx
  int v52; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v54; // rcx
  __int64 v55; // r8
  __int128 *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  unsigned __int64 *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int8 v69; // al
  char v70; // al
  signed __int32 v72[8]; // [rsp+8h] [rbp-99h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-79h]
  __int64 v74; // [rsp+30h] [rbp-71h] BYREF
  __int64 v75; // [rsp+38h] [rbp-69h] BYREF
  __int64 v76; // [rsp+40h] [rbp-61h]
  __int128 v77; // [rsp+48h] [rbp-59h] BYREF
  struct tagWND *v78; // [rsp+58h] [rbp-49h]
  __int128 v79; // [rsp+60h] [rbp-41h] BYREF
  __int64 v80; // [rsp+70h] [rbp-31h]
  __int128 v81; // [rsp+78h] [rbp-29h] BYREF
  __int64 v82; // [rsp+88h] [rbp-19h]
  _QWORD v83[2]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v84; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v85; // [rsp+B8h] [rbp+17h]
  char v86[24]; // [rsp+C0h] [rbp+1Fh] BYREF

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v74 = gSmartObjNullRef;
  v75 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v75;
  v76 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  if ( a2 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(v18, v17, v19) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    {
      v68 = *((_QWORD *)a1 + 5);
      v69 = *(_BYTE *)(v68 + 234);
      v23 = ((unsigned __int64)v69 >> 2) & 1;
      if ( a3 )
        v70 = v69 | 4;
      else
        v70 = v69 & 0xFB;
      *(_BYTE *)(v68 + 234) = v70;
      goto LABEL_103;
    }
    goto LABEL_97;
  }
  if ( a2 == -21 )
  {
    v67 = *((_QWORD *)a1 + 5);
    v23 = *(_QWORD *)(v67 + 216);
    *(_QWORD *)(v67 + 216) = a3;
    goto LABEL_103;
  }
  if ( ((a2 + 20) & 0xFFFFFFFB) == 0 )
  {
    v23 = (int)xxxSetWindowStyle(a1, a2, a3);
    goto LABEL_103;
  }
  switch ( a2 )
  {
    case -12:
      v65 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v65 + 31) & 0xC0) == 0x40 )
      {
        v23 = *((_QWORD *)a1 + 21);
        *(_QWORD *)(v65 + 152) = a3;
        *((_QWORD *)a1 + 21) = a3;
      }
      else
      {
        v66 = (unsigned __int64 *)*((_QWORD *)a1 + 21);
        v23 = 0LL;
        if ( v66 )
          v23 = *v66;
        if ( a3 )
        {
          ValidateHmenu(a3);
          v76 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v74);
          if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v74) )
            v23 = 0LL;
          else
            LockWndMenuWorker(a1, 0LL, &v74);
        }
        else
        {
          UnlockWndMenuWorker(a1, 0);
        }
      }
      goto LABEL_103;
    case -8:
      DesktopWindow = GetDesktopWindow((__int64)a1);
      v36 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v37 = DesktopWindow;
      *(_QWORD *)&v77 = DesktopWindow;
      v78 = v36;
      v38 = v36 == (struct tagWND *)DesktopWindow;
      if ( v36 == (struct tagWND *)DesktopWindow )
        v39 = (struct tagWND *)*((_QWORD *)a1 + 15);
      else
        v39 = v36;
      v40 = 120LL;
      if ( !v38 )
        v40 = 104LL;
      CurrentThread = (struct tagWND *)((char *)a1 + v40);
      v44 = ValidateHwnd(a3);
      if ( !v44 && a3 )
        goto LABEL_42;
      if ( v36 == (struct tagWND *)v37 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v42, v41, v43);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v44) )
          v44 = 0LL;
      }
      if ( !(unsigned int)IsParentBandValid(a1, v44) )
      {
LABEL_42:
        v21 = 87LL;
        goto LABEL_98;
      }
      if ( v44 && GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.1 + 2), 1LL) )
        goto LABEL_97;
      v46 = (struct tagWND *)v77;
      if ( v36 == (struct tagWND *)v77 )
      {
        if ( !v44 )
          goto LABEL_55;
        if ( GetProp(v44, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.1 + 2), 1LL) )
          goto LABEL_97;
      }
      if ( v44 )
      {
        v47 = *(_QWORD *)(v44 + 40);
        if ( *(char *)(v47 + 20) < 0 || *(char *)(v47 + 19) < 0 )
          goto LABEL_97;
      }
LABEL_55:
      if ( *(_QWORD *)CurrentThread )
        v23 = **(_QWORD **)CurrentThread;
      else
        v23 = 0LL;
      v48 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v79 = *(_QWORD *)(v48 + 416);
      *(_QWORD *)(v48 + 416) = &v79;
      *((_QWORD *)&v79 + 1) = v44;
      if ( v44 )
        HMLockObject(v44);
      if ( v78 != v46 )
      {
        v63 = -(__int64)(xxxSetParentWorker(a1, (struct tagWND *)v44, 0LL, 0) != 0LL);
        v23 &= v63;
        goto LABEL_84;
      }
      v49 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v81 = *(_QWORD *)(v49 + 416);
      *(_QWORD *)(v49 + 416) = &v81;
      *((_QWORD *)&v81 + 1) = v39;
      if ( v39 )
        HMLockObject(v39);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v44, v39);
      v50 = IsParentBandValid(a1, v44);
      v51 = a1;
      if ( v50 && (v52 = ValidateOwnerDepth(a1, v44), v51 = a1, v52) )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
        {
          if ( !v44 )
          {
            HMAssignmentUnlock(CurrentThread);
            goto LABEL_74;
          }
          if ( (*(_BYTE *)(_HMPheFromObject(v44) + 25) & 1) == 0 )
          {
            v83[1] = v44;
            v85 = 0LL;
            v83[0] = CurrentThread;
            v84 = 0LL;
            HMAssignmentLock(v83);
            WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v44);
            v54 = a1;
            if ( WindowCloakStateComponentUIAware )
            {
              v55 = WindowCloakStateComponentUIAware;
              v56 = 0LL;
            }
            else
            {
              if ( !(unsigned int)IsWindowShellCloaked(a1, 1) )
              {
LABEL_74:
                v77 = *(_OWORD *)LockPointer(v86, (char *)a1 + 120, *((_QWORD *)a1 + 15));
                HMAssignmentLock(&v77);
                xxxInheritWindowMonitor(a1, (struct tagWND *)v44, 0);
LABEL_82:
                ThreadUnlock1(v58, v57, v59);
LABEL_84:
                ThreadUnlock1(v63, v62, v64);
                goto LABEL_103;
              }
              v55 = 2LL;
              v56 = &v84;
              v54 = a1;
            }
            zzzSetWindowCompositionCloak(v54, v56, v55);
            goto LABEL_74;
          }
        }
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59, v60);
        if ( v44 && (*(_BYTE *)(_HMPheFromObject(v44) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59, v61);
      }
      else
      {
        xxxHandleOwnerSwitch(v51, v39, (struct tagWND *)v44);
        UserSetLastError(87LL);
      }
      v23 = 0LL;
      goto LABEL_82;
    case -6:
      v34 = *((_QWORD *)a1 + 5);
      v23 = *(_QWORD *)(v34 + 32);
      *(_QWORD *)(v34 + 32) = a3;
      goto LABEL_103;
    case -4:
      if ( PsGetCurrentProcessWin32Process(v18, v17, v19) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
      {
        v24 = *((_QWORD *)a1 + 5);
        v25 = *(unsigned __int16 *)(v24 + 42);
        if ( (v25 & 0x8000u) == 0 )
        {
          v26 = *(unsigned __int8 *)(v24 + 18);
          if ( (v26 & 4) != 0 )
          {
            v23 = MapServerToClientPfn(*(_QWORD *)(v24 + 120), a4);
            if ( !v23 )
              goto LABEL_104;
            goto LABEL_26;
          }
          if ( (v25 & 0xFFFF2FFF) == 0x2A5 )
          {
            v23 = *(_QWORD *)(v24 + 120);
          }
          else
          {
            v23 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v24 + 120), a4);
            if ( v23 != v27 )
            {
LABEL_26:
              if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
              {
                v29 = HMValidateHandleNoRip(a3, 7);
                if ( v29 )
                {
                  v30 = *(_QWORD *)(v29 + 40);
                  a3 = *(_QWORD *)(v30 + 16);
                  a4 = *(_WORD *)(v30 + 24) & 2;
                }
              }
              v31 = MapClientToServerPfn(a3);
              if ( v31 )
              {
                SetOrClrWF(0LL, a1, 520LL, 1LL);
                SetOrClrWF(1LL, a1, 516LL, 1LL);
                *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v31;
                _InterlockedOr(v72, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, a1, 520LL, 1LL);
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                  SetOrClrWF(0LL, a1, 516LL, 1LL);
                v32 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
                *(_QWORD *)(v33 + 120) = v32;
                _InterlockedOr(v72, 0);
                *(_WORD *)(*((_QWORD *)a1 + 5) + 40LL) = xxxClientWOWGetProcModule(*(_QWORD *)(*((_QWORD *)a1 + 5)
                                                                                             + 120LL));
              }
              goto LABEL_103;
            }
          }
          if ( a4 != ((v26 >> 3) & 1) )
          {
            CPD = GetCPD(a1, 34 - (unsigned int)(a4 != 0), v23);
            if ( CPD )
              v23 = CPD;
          }
          goto LABEL_26;
        }
      }
LABEL_97:
      v21 = 5LL;
      goto LABEL_98;
    case -2:
      v22 = *((_QWORD *)a1 + 5);
      v23 = *(_QWORD *)(v22 + 240);
      *(_QWORD *)(v22 + 240) = a3;
LABEL_103:
      v4 = v23;
      goto LABEL_104;
  }
  v21 = 1413LL;
LABEL_98:
  UserSetLastError(v21);
LABEL_104:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v74);
  return v4;
}
