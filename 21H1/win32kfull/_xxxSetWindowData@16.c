/*
 * XREFs of _xxxSetWindowData@16 @ 0x3F3F0
 * Callers:
 *     _xxxSetWindowLong@20 @ 0x3EF3C (_xxxSetWindowLong@20.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PAX@Z @ 0x1C990 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@P.c)
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _IsParentBandValid@8 @ 0x2FF3A (_IsParentBandValid@8.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _MapClientToServerPfn@4 @ 0x47FDC (_MapClientToServerPfn@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _MapClientNeuterToClientPfn@12 @ 0x807E4 (_MapClientNeuterToClientPfn@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x9B2F2 (-LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxClientWOWGetProcModule@4 @ 0xA1B00 (_xxxClientWOWGetProcModule@4.c)
 *     _ValidateOwnerDepth@8 @ 0xA8B06 (_ValidateOwnerDepth@8.c)
 *     ?UnlockWndMenuWorker@@YGPAXPAUtagWND@@_N@Z @ 0xAAF60 (-UnlockWndMenuWorker@@YGPAXPAUtagWND@@_N@Z.c)
 *     _IsWindowShellCloaked@8 @ 0xC3F32 (_IsWindowShellCloaked@8.c)
 *     _GetCPD@12 @ 0xC4588 (_GetCPD@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _MapServerToClientPfn@8 @ 0xEB49C (_MapServerToClientPfn@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84 (-xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall xxxSetWindowData(struct tagWND *a1, int a2, int a3, int a4)
{
  int v5; // edi
  int *ThreadWin32Thread; // eax
  int v7; // edi
  int v8; // ecx
  unsigned __int8 v9; // bl
  int *v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  unsigned __int8 v18; // dl
  PKTHREAD v19; // ecx
  int CPD; // eax
  int v21; // eax
  int v22; // eax
  PKTHREAD v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int DesktopWindow; // ecx
  char *v30; // edi
  struct tagWND *v31; // eax
  struct tagWND *v32; // edx
  int v33; // ebx
  int CurrentProcessWin32Process; // eax
  int v35; // eax
  PKTHREAD v36; // eax
  int v37; // eax
  PKTHREAD v38; // eax
  int v39; // eax
  struct tagWND *v40; // eax
  int v41; // edx
  int v42; // ecx
  int WindowCloakStateComponentUIAware; // eax
  int v44; // edx
  int v45; // ecx
  int v47; // [esp-4h] [ebp-64h]
  struct tagWND *v48; // [esp+0h] [ebp-60h]
  struct tagWND *v49; // [esp+0h] [ebp-60h]
  struct tagWND *v50; // [esp+4h] [ebp-5Ch]
  struct tagWND *v51; // [esp+4h] [ebp-5Ch]
  unsigned __int8 v52; // [esp+13h] [ebp-4Dh]
  struct tagWND *v53; // [esp+14h] [ebp-4Ch]
  signed __int32 v54; // [esp+18h] [ebp-48h] BYREF
  int v55; // [esp+1Ch] [ebp-44h]
  PKTHREAD CurrentThread; // [esp+20h] [ebp-40h] BYREF
  int v57; // [esp+24h] [ebp-3Ch]
  int v58; // [esp+28h] [ebp-38h] BYREF
  int v59; // [esp+2Ch] [ebp-34h] BYREF
  int v60; // [esp+30h] [ebp-30h]
  int v61; // [esp+34h] [ebp-2Ch] BYREF
  int v62; // [esp+38h] [ebp-28h]
  int v63; // [esp+3Ch] [ebp-24h]
  int v64; // [esp+40h] [ebp-20h] BYREF
  struct tagWND *v65; // [esp+44h] [ebp-1Ch]
  _DWORD v66[6]; // [esp+48h] [ebp-18h] BYREF

  v55 = a2;
  CurrentThread = KeGetCurrentThread();
  v57 = 0;
  v5 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v58 = gSmartObjNullRef;
  v59 = *(_DWORD *)(v5 + 840);
  *(_DWORD *)(v5 + 840) = &v59;
  v60 = 0;
  v64 = 0;
  v65 = 0;
  v66[0] = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  if ( v55 <= -12 )
  {
    if ( v55 == -12 )
    {
      if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 23) & 0xC0) == 0x40 )
      {
        v7 = *((_DWORD *)a1 + 23);
        *(_DWORD *)(*((_DWORD *)a1 + 5) + 100) = a3;
        *((_DWORD *)a1 + 23) = a3;
      }
      else
      {
        v10 = (int *)*((_DWORD *)a1 + 23);
        v7 = 0;
        if ( v10 )
          v7 = *v10;
        if ( a3 )
        {
          v11 = ValidateHmenu(a3);
          v60 = 0;
          SmartObjStackRefBase<tagMENU>::operator=(v11);
          if ( SmartObjStackRef<tagMENU>::operator==(&v58, v12) )
            v7 = 0;
          else
            LockWndMenuWorker(v13);
        }
        else
        {
          UnlockWndMenuWorker(v48, (bool)v50);
        }
      }
      goto LABEL_98;
    }
    if ( v55 != -40 )
    {
      if ( v55 == -21 )
      {
        v8 = *((_DWORD *)a1 + 5);
        v7 = *(_DWORD *)(v8 + 136);
        *(_DWORD *)(v8 + 136) = a3;
        goto LABEL_98;
      }
      if ( v55 == -20 || v55 == -16 )
      {
        v7 = xxxSetWindowStyle(a1, a3);
LABEL_98:
        v57 = v7;
        goto LABEL_99;
      }
      goto LABEL_27;
    }
    if ( PsGetCurrentProcessWin32Process() == *(_DWORD *)(*((_DWORD *)a1 + 2) + 232) )
    {
      v9 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 146);
      SetOrClrWF(a3 != 0, (int)a1, 0x8A04u, 0);
      v7 = (v9 >> 2) & 1;
      goto LABEL_98;
    }
    goto LABEL_67;
  }
  switch ( v55 )
  {
    case -8:
      DesktopWindow = _GetDesktopWindow(a1);
      v30 = (char *)a1 + 56;
      v31 = (struct tagWND *)*((_DWORD *)a1 + 14);
      v54 = DesktopWindow;
      CurrentThread = (struct tagWND *)((char *)a1 + 56);
      v55 = (int)v31;
      if ( v31 == (struct tagWND *)DesktopWindow )
      {
        v30 = (char *)a1 + 64;
        v32 = (struct tagWND *)*((_DWORD *)a1 + 16);
        CurrentThread = (struct tagWND *)((char *)a1 + 64);
        v53 = v32;
      }
      else
      {
        v53 = v31;
      }
      v33 = ValidateHwnd(a3);
      if ( !v33 && a3 )
        goto LABEL_58;
      if ( v55 == v54 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        v33 = ShouldSetNoOwner(CurrentProcessWin32Process, v33) == 0 ? v33 : 0;
      }
      if ( !IsParentBandValid((int)a1, v33) )
      {
LABEL_58:
        v47 = 87;
LABEL_68:
        v14 = v47;
        goto LABEL_69;
      }
      if ( v33 && _GetProp(1) )
        goto LABEL_67;
      if ( v55 == v54 )
      {
        if ( !v33 )
          goto LABEL_70;
        if ( _GetProp(1) )
          goto LABEL_67;
      }
      if ( v33 )
      {
        v35 = *(_DWORD *)(v33 + 20);
        if ( *(char *)(v35 + 12) < 0 || *(char *)(v35 + 11) < 0 )
          goto LABEL_67;
      }
LABEL_70:
      v7 = *(_DWORD *)v30;
      if ( v7 )
        v7 = *(_DWORD *)v7;
      v36 = KeGetCurrentThread();
      v37 = W32GetThreadWin32Thread(v36);
      v61 = *(_DWORD *)(v37 + 228);
      *(_DWORD *)(v37 + 228) = &v61;
      v62 = v33;
      if ( v33 )
        HMLockObject(v33);
      if ( v55 != v54 )
      {
        v7 = xxxSetParentWorker(0, 0, v48, (int)v50) != 0 ? v7 : 0;
        goto LABEL_97;
      }
      v38 = KeGetCurrentThread();
      v39 = W32GetThreadWin32Thread(v38);
      v64 = *(_DWORD *)(v39 + 228);
      *(_DWORD *)(v39 + 228) = &v64;
      v40 = v53;
      v65 = v53;
      if ( v53 )
      {
        HMLockObject(v53);
        v40 = v53;
      }
      xxxHandleOwnerSwitch(v40, v48, v50);
      if ( IsParentBandValid((int)a1, v33) && ValidateOwnerDepth(a1, v33) )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 13) & 1) == 0 )
        {
          if ( !v33 )
          {
            HMAssignmentUnlock(CurrentThread);
LABEL_87:
            LockPointer((int)a1 + 64, *((_DWORD *)a1 + 16));
            HMAssignmentLock(v45, v44);
            xxxInheritWindowMonitor(a1, (_DWORD *)v33, 0);
LABEL_95:
            ThreadUnlock1();
LABEL_97:
            ThreadUnlock1();
            goto LABEL_98;
          }
          if ( (*(_BYTE *)(_HMPheFromObject(v33) + 13) & 1) == 0 )
          {
            memset(&v66[2], 0, 16);
            HMAssignmentLock(v42, v41);
            WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((void *)v33, (int)CurrentThread);
            if ( WindowCloakStateComponentUIAware )
            {
              zzzSetWindowCompositionCloak(a1, 0, WindowCloakStateComponentUIAware);
            }
            else if ( IsWindowShellCloaked(a1, 1, v33) )
            {
              v66[0] = 0;
              zzzSetWindowCompositionCloak(a1, v66, 2);
            }
            goto LABEL_87;
          }
        }
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 13) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( v33 && (*(_BYTE *)(_HMPheFromObject(v33) + 13) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      else
      {
        xxxHandleOwnerSwitch((struct tagWND *)v33, v49, v51);
        UserSetLastError(87);
      }
      v7 = 0;
      goto LABEL_95;
    case -6:
      v28 = *((_DWORD *)a1 + 5);
      v7 = *(_DWORD *)(v28 + 24);
      *(_DWORD *)(v28 + 24) = a3;
      goto LABEL_98;
    case -4:
      if ( PsGetCurrentProcessWin32Process() == *(_DWORD *)(*((_DWORD *)a1 + 2) + 232) )
      {
        v16 = *((_DWORD *)a1 + 5);
        v17 = *(unsigned __int16 *)(v16 + 30);
        if ( (v17 & 0x8000u) == 0 )
        {
          v18 = *(_BYTE *)(v16 + 10);
          v19 = *(PKTHREAD *)(v16 + 84);
          v52 = v18;
          CurrentThread = v19;
          if ( (v18 & 4) != 0 )
          {
            v7 = MapServerToClientPfn();
            if ( !v7 )
              goto LABEL_99;
            goto LABEL_41;
          }
          if ( (v17 & 0xFFFF3FFF) == 0x2A5 )
          {
            v7 = (int)v19;
          }
          else
          {
            v7 = MapClientNeuterToClientPfn(a4);
            if ( (PKTHREAD)v7 != CurrentThread )
            {
LABEL_41:
              CurrentThread = (PKTHREAD)a3;
              if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
              {
                v21 = HMValidateHandleNoRip(a3, 7);
                if ( v21 )
                {
                  v22 = *(_DWORD *)(v21 + 20);
                  v23 = *(PKTHREAD *)(v22 + 8);
                  v24 = *(_WORD *)(v22 + 12) & 2;
                  CurrentThread = v23;
                  a4 = v24;
                }
              }
              v25 = MapClientToServerPfn();
              v26 = 0;
              v57 = v25;
              if ( v25 )
              {
                SetOrClrWF(0, (int)a1, 0x208u, 1);
                SetOrClrWF(1, (int)a1, 0x204u, 1);
                v27 = *((_DWORD *)a1 + 5);
                CurrentThread = 0;
                *(_DWORD *)(v27 + 84) = v57;
                _InterlockedOr((volatile signed __int32 *)&CurrentThread, 0);
              }
              else
              {
                LOBYTE(v26) = a4 != 0;
                SetOrClrWF(v26, (int)a1, 0x208u, 1);
                v55 = *((_DWORD *)a1 + 5);
                if ( (*(_BYTE *)(v55 + 10) & 4) != 0 )
                {
                  SetOrClrWF(0, (int)a1, 0x204u, 1);
                  v55 = *((_DWORD *)a1 + 5);
                }
                v54 = 0;
                *(_DWORD *)(v55 + 84) = MapClientNeuterToClientPfn(a4);
                _InterlockedOr(&v54, 0);
                *(_WORD *)(*((_DWORD *)a1 + 5) + 28) = xxxClientWOWGetProcModule(*(_DWORD *)(*((_DWORD *)a1 + 5) + 84));
              }
              goto LABEL_98;
            }
            v18 = v52;
          }
          if ( a4 != ((v18 >> 3) & 1) )
          {
            CPD = GetCPD(v7);
            if ( CPD )
              v7 = CPD;
          }
          goto LABEL_41;
        }
      }
LABEL_67:
      v47 = 5;
      goto LABEL_68;
    case -2:
      v15 = *((_DWORD *)a1 + 5);
      v7 = *(_DWORD *)(v15 + 152);
      *(_DWORD *)(v15 + 152) = a3;
      goto LABEL_98;
  }
LABEL_27:
  v14 = 1413;
LABEL_69:
  UserSetLastError(v14);
LABEL_99:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v58);
  return v57;
}
