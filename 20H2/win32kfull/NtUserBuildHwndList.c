/*
 * XREFs of NtUserBuildHwndList @ 0x1C0049870
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0049F90 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     GetThreadDesktopWindow @ 0x1C00FBC68 (GetThreadDesktopWindow.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned int *a8)
{
  struct tagBWL *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // rdx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax
  PVOID v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // r14
  PVOID v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  struct tagWND *v27; // rdx
  _QWORD *v28; // rax
  struct tagBWL *v29; // rdx
  __int16 *v30; // rcx
  struct tagBWL *v31; // rdi
  char *v32; // r15
  __int64 *v33; // r14
  unsigned __int64 v34; // rsi
  __int64 v35; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdi
  __int64 *v41; // r12
  unsigned __int64 v42; // rsi
  bool v43; // zf
  __int16 v44; // dx
  __int64 v45; // rax
  struct tagBWL *v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // ebx
  _DWORD *v49; // rdx
  int v50; // edi
  int v51; // ebx
  struct tagBWL *v52; // rdx
  struct tagBWL *v53; // rcx
  struct tagBWL *v54; // rcx
  int v56; // edx
  signed __int64 v57; // r15
  __int64 ThreadDesktopWindow; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned __int64 v67; // rbx
  __int64 v68; // rax
  int ProcessSessionId; // edi
  __int64 v70; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int v72; // r8d
  struct tagBWL *v73; // [rsp+20h] [rbp-98h]
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  struct tagBWL *v75; // [rsp+38h] [rbp-80h]
  struct tagBWL *v76; // [rsp+48h] [rbp-70h]
  __int128 v77; // [rsp+58h] [rbp-60h] BYREF
  __int128 v78; // [rsp+68h] [rbp-50h]
  int v79; // [rsp+C8h] [rbp+10h]
  int v81; // [rsp+D8h] [rbp+20h]

  Object = 0LL;
  v11 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive() && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v81 = ++gdwAtomicCheckSerial;
    v12 = 0LL;
    v13 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v12 << 6) + gpAtomickCheckStacks) )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v67 = (unsigned __int64)(unsigned int)v12 << 6;
      *(_DWORD *)(gpAtomickCheckStacks + v67) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v67 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v67 + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v67 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v81 = v79;
  }
LABEL_5:
  v14 = 2 * (*gpsi & 4 | 1);
  if ( a4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi, v12, v13);
    v18 = *(unsigned int *)(CurrentProcessWin32Process + 820);
    if ( (v18 & 0x30) == 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v18, v15, v17);
      if ( !(unsigned int)IsProcessDwm(CurrentProcess)
        && *(int *)(CurrentProcessWin32Process + 12) >= 0
        && *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS
        && (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x800) == 0 )
      {
        LOBYTE(v14) = v14 | 0x20;
      }
    }
  }
  if ( a2 )
  {
    v22 = (_QWORD *)ValidateHwnd(a2);
    if ( !v22 )
    {
      v50 = -1073741816;
      v51 = v81;
      goto LABEL_68;
    }
  }
  else
  {
    v22 = 0LL;
  }
  if ( a5 )
  {
    v59 = PtiFromThreadId(a5);
    v23 = v59;
    if ( !v59 )
      goto LABEL_104;
    v60 = *(_QWORD *)(v59 + 456);
    if ( !v60 )
      goto LABEL_104;
    v22 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v60 + 8) + 24LL) + 112LL);
  }
  else
  {
    v23 = 0LL;
  }
  if ( !a1 )
  {
    v24 = Object;
LABEL_20:
    if ( v22 )
    {
      if ( a3 )
      {
        LOBYTE(v14) = v14 | 1;
        v22 = (_QWORD *)v22[14];
      }
LABEL_23:
      v11 = pbwlCache;
      v75 = pbwlCache;
      if ( pbwlCache )
      {
        pbwlCache = 0LL;
      }
      else
      {
        v64 = Win32AllocPool(296LL, 1819767637LL);
        v11 = (struct tagBWL *)v64;
        v75 = (struct tagBWL *)v64;
        if ( !v64 )
        {
LABEL_108:
          v50 = -1073741816;
          UserSetLastError(8LL);
          v11 = 0LL;
          goto LABEL_109;
        }
        *(_QWORD *)(v64 + 16) = v64 + 280;
      }
      *((_QWORD *)v11 + 1) = (char *)v11 + 32;
      *((_QWORD *)v11 + 3) = v23;
      if ( v22 )
      {
        do
        {
          v25 = *((_QWORD *)v11 + 3);
          if ( (v14 & 0x20) == 0 || (v56 = *(_DWORD *)(v22[5] + 236LL), (unsigned int)(v56 - 1) <= 1) || v56 == 16 )
          {
            if ( !v25 || v25 == v22[2] )
            {
              **((_QWORD **)v11 + 1) = *v22;
              *((_QWORD *)v11 + 1) += 8LL;
              v26 = *((_QWORD *)v11 + 1);
              if ( v26 == *((_QWORD *)v11 + 2) )
              {
                v61 = v26 - (_QWORD)v11;
                v62 = UserReAllocPool(v11, (unsigned int)v61 + 8LL, (unsigned int)v61 + 72LL, 1819767637LL);
                if ( !v62 )
                  break;
                v63 = v62 + v61;
                *(_QWORD *)(v62 + 8) = v63;
                *(_QWORD *)(v62 + 16) = v63 + 64;
                v11 = (struct tagBWL *)v62;
              }
            }
          }
          if ( (v14 & 1) != 0 )
          {
            v27 = (struct tagWND *)v22[14];
            if ( v27 )
            {
              v11 = InternalBuildHwndList(v11, v27, 3u);
              if ( *((_QWORD *)v11 + 1) >= *((_QWORD *)v11 + 2) )
                break;
            }
          }
          v22 = (_QWORD *)v22[11];
        }
        while ( v22 );
        v75 = v11;
      }
      v28 = (_QWORD *)*((_QWORD *)v11 + 1);
      if ( (unsigned __int64)v28 < *((_QWORD *)v11 + 2) )
      {
        *v28 = 1LL;
        if ( (v14 & 8) != 0 )
        {
          v29 = (struct tagBWL *)Win32AllocPool(*((_QWORD *)v11 + 2) - (_QWORD)v11 + 8LL, 1819767637LL);
          v76 = v29;
          v31 = v29;
          v73 = v29;
          if ( v29 )
          {
            v32 = (char *)v11 + 32;
            v33 = (__int64 *)((char *)v11 + 32);
            v34 = *((_QWORD *)v11 + 4);
            if ( v34 != 1 )
            {
              do
              {
                v35 = 0LL;
                CurrentThread = KeGetCurrentThread();
                if ( !(unsigned __int8)KeIsAttachedProcess(v30)
                  || (v68 = PsGetCurrentProcess(v38, v37, v39),
                      ProcessSessionId = PsGetProcessSessionIdEx(v68),
                      CurrentThreadProcess = PsGetCurrentThreadProcess(v70),
                      v43 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                      v31 = v73,
                      v43) )
                {
                  PsGetThreadWin32Thread(CurrentThread);
                }
                v30 = (__int16 *)gpsi;
                if ( (unsigned __int64)(unsigned __int16)v34 < *(_QWORD *)(gpsi + 8LL) )
                {
                  v40 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v34 * LODWORD(gSharedInfo[2]);
                  v41 = (__int64 *)HMPkheFromPhe(v40);
                  v42 = v34 >> 16;
                  if ( ((_WORD)v42 == *(_WORD *)(v40 + 26)
                     || (_WORD)v42 == 0xFFFF
                     || !(_WORD)v42 && PsGetCurrentProcessWow64Process(v30))
                    && (*(_BYTE *)(v40 + 25) & 1) == 0 )
                  {
                    v43 = *(_BYTE *)(v40 + 24) == 1;
                    v31 = v73;
                    if ( v43 )
                      v35 = *v41;
                  }
                  else
                  {
                    v31 = v73;
                  }
                }
                if ( v35 )
                {
                  while ( 1 )
                  {
                    v30 = *(__int16 **)(*(_QWORD *)(v35 + 136) + 8LL);
                    if ( (v30[5] & 1) != 0 )
                      break;
                    v44 = *v30;
                    v30 = (__int16 *)gpsi;
                    if ( v44 == *(_WORD *)(gpsi + 898LL) )
                      break;
                    v35 = *(_QWORD *)(v35 + 120);
                    if ( !v35 )
                      goto LABEL_48;
                  }
                }
                else
                {
LABEL_48:
                  v35 = 0LL;
                }
                v45 = *v33;
                if ( v35 )
                {
                  *(_QWORD *)v31 = v45;
                  v31 = (struct tagBWL *)((char *)v31 + 8);
                  v73 = v31;
                }
                else
                {
                  *(_QWORD *)v32 = v45;
                  v32 += 8;
                }
                v34 = *++v33;
              }
              while ( *v33 != 1 );
              v11 = v75;
              v29 = v76;
            }
            *(_QWORD *)v31 = 0LL;
            v46 = v29;
            v47 = *(_QWORD *)v29;
            if ( *(_QWORD *)v29 )
            {
              v57 = v32 - (char *)v29;
              do
              {
                *(_QWORD *)((char *)v46 + v57) = v47;
                v46 = (struct tagBWL *)((char *)v46 + 8);
                v47 = *(_QWORD *)v46;
              }
              while ( *(_QWORD *)v46 );
            }
            Win32FreePool(v29);
          }
        }
        *((_QWORD *)v11 + 3) = gptiCurrent;
        *(_QWORD *)v11 = gpbwlList;
        gpbwlList = v11;
        v76 = v11;
        v48 = ((*((_QWORD *)v11 + 1) - (_QWORD)v11 - 32LL) >> 3) + 1;
        ProbeForWrite(Address, 8LL * a6, 4u);
        v49 = a8;
        if ( (unsigned __int64)a8 >= MmUserProbeAddress )
          v49 = (_DWORD *)MmUserProbeAddress;
        *v49 = *v49;
        if ( v48 > a6 )
        {
          v50 = -1073741789;
        }
        else
        {
          memmove((void *)Address, (char *)v11 + 32, 8LL * v48);
          v50 = 0;
        }
        *a8 = v48;
        v51 = v81;
        goto LABEL_61;
      }
      Win32FreePool(v11);
      goto LABEL_108;
    }
    if ( v24 )
      goto LABEL_23;
    ThreadDesktopWindow = GetThreadDesktopWindow(v23);
    if ( ThreadDesktopWindow )
    {
      v22 = *(_QWORD **)(ThreadDesktopWindow + 112);
      goto LABEL_23;
    }
LABEL_104:
    v50 = -1073741816;
    UserSetLastError(87LL);
    v51 = v81;
    goto LABEL_68;
  }
  if ( (int)ValidateHdesk(a1, 1LL, 1LL, &Object) < 0 )
  {
    v50 = -1073741816;
    v51 = v81;
    goto LABEL_68;
  }
  *(_QWORD *)&v78 = Object;
  LODWORD(v77) = 1;
  *((_QWORD *)&v77 + 1) = PsGetCurrentProcess(v21, v65, v66);
  v50 = MapDesktop((__int64)&v77);
  if ( v50 >= 0 )
  {
    v24 = Object;
    v22 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
    goto LABEL_20;
  }
  UserSetLastError(6LL);
LABEL_109:
  v51 = v81;
LABEL_61:
  if ( v11 )
  {
    v52 = (struct tagBWL *)gpbwlList;
    v53 = (struct tagBWL *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v53 != v11 )
      {
        v52 = v53;
        v53 = *(struct tagBWL **)v53;
        if ( !v53 )
          goto LABEL_66;
      }
      *(_QWORD *)v52 = *(_QWORD *)v11;
      v54 = pbwlCache;
      if ( pbwlCache )
      {
        if ( (__int64)((*((_QWORD *)v11 + 2) - (_QWORD)v11 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
          v54 = v11;
        else
          pbwlCache = v11;
        Win32FreePool(v54);
      }
      else
      {
        pbwlCache = v11;
      }
    }
  }
LABEL_66:
  v21 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_68:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      v21 = (PVOID)gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v72 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v72 << 6) + gpAtomickCheckStacks) != v51 )
          {
            if ( ++v72 >= gdwAtomicCheckLogSize )
              goto LABEL_71;
          }
          *(_DWORD *)(((unsigned __int64)v72 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_71:
  UserSessionSwitchLeaveCrit(v21);
  return (unsigned int)v50;
}
