/*
 * XREFs of NtUserBuildHwndList @ 0x1C006BFF0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006C710 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
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
  int v12; // esi
  __int64 v13; // rdx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 CurrentProcess; // rax
  ULONG64 v19; // rdx
  PVOID v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // r8
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
  int v49; // edi
  int v50; // ebx
  struct tagBWL *v51; // rcx
  struct tagBWL *v52; // rcx
  int v54; // edx
  signed __int64 v55; // r15
  __int64 ThreadDesktopWindow; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned __int64 v64; // rbx
  __int64 v65; // rax
  int ProcessSessionId; // edi
  __int64 v67; // rcx
  __int64 CurrentThreadProcess; // rax
  struct tagBWL *v69; // [rsp+20h] [rbp-98h]
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  struct tagBWL *v71; // [rsp+38h] [rbp-80h]
  struct tagBWL *v72; // [rsp+48h] [rbp-70h]
  __int128 v73; // [rsp+58h] [rbp-60h] BYREF
  __int128 v74; // [rsp+68h] [rbp-50h]
  int v75; // [rsp+C8h] [rbp+10h]
  int v77; // [rsp+D8h] [rbp+20h]

  Object = 0LL;
  v11 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive() && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v77 = ++gdwAtomicCheckSerial;
    v63 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v63 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v63 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v64 = (unsigned __int64)v63 << 6;
      *(_DWORD *)(gpAtomickCheckStacks + v64) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v64 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v64 + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v64 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v77 = v75;
  }
LABEL_5:
  v12 = 2 * (*gpsi & 4 | 1);
  if ( a4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi);
    v16 = *(unsigned int *)(CurrentProcessWin32Process + 820);
    if ( (v16 & 0x30) == 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v16, v13, v15);
      if ( !(unsigned int)IsProcessDwm(CurrentProcess)
        && *(int *)(CurrentProcessWin32Process + 12) >= 0
        && *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS
        && (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x800) == 0 )
      {
        LOBYTE(v12) = v12 | 0x20;
      }
    }
  }
  if ( a2 )
  {
    v21 = (_QWORD *)ValidateHwnd(a2);
    if ( !v21 )
    {
      v49 = -1073741816;
      v50 = v77;
      goto LABEL_68;
    }
  }
  else
  {
    v21 = 0LL;
  }
  if ( a5 )
  {
    v57 = PtiFromThreadId(a5);
    v23 = v57;
    if ( !v57 )
      goto LABEL_104;
    v58 = *(_QWORD *)(v57 + 448);
    if ( !v58 )
      goto LABEL_104;
    v21 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v58 + 8) + 24LL) + 112LL);
  }
  else
  {
    v23 = 0LL;
  }
  if ( !a1 )
  {
    v24 = Object;
LABEL_20:
    if ( v21 )
    {
      if ( a3 )
      {
        LOBYTE(v12) = v12 | 1;
        v21 = (_QWORD *)v21[14];
      }
LABEL_23:
      v11 = pbwlCache;
      v71 = pbwlCache;
      if ( pbwlCache )
      {
        pbwlCache = 0LL;
      }
      else
      {
        v62 = Win32AllocPool(296LL, 1819767637LL);
        v11 = (struct tagBWL *)v62;
        v71 = (struct tagBWL *)v62;
        if ( !v62 )
        {
LABEL_108:
          v49 = -1073741816;
          UserSetLastError(8LL);
          v11 = 0LL;
          goto LABEL_109;
        }
        *(_QWORD *)(v62 + 16) = v62 + 280;
      }
      *((_QWORD *)v11 + 1) = (char *)v11 + 32;
      *((_QWORD *)v11 + 3) = v23;
      if ( v21 )
      {
        do
        {
          v25 = *((_QWORD *)v11 + 3);
          if ( (v12 & 0x20) == 0 || (v54 = *(_DWORD *)(v21[5] + 236LL), (unsigned int)(v54 - 1) <= 1) || v54 == 16 )
          {
            if ( !v25 || v25 == v21[2] )
            {
              **((_QWORD **)v11 + 1) = *v21;
              *((_QWORD *)v11 + 1) += 8LL;
              v26 = *((_QWORD *)v11 + 1);
              if ( v26 == *((_QWORD *)v11 + 2) )
              {
                v59 = v26 - (_QWORD)v11;
                v60 = UserReAllocPool(v11, (unsigned int)v59 + 8LL, (unsigned int)v59 + 72LL, 1819767637LL);
                if ( !v60 )
                  break;
                v61 = v60 + v59;
                *(_QWORD *)(v60 + 8) = v61;
                *(_QWORD *)(v60 + 16) = v61 + 64;
                v11 = (struct tagBWL *)v60;
              }
            }
          }
          if ( (v12 & 1) != 0 )
          {
            v27 = (struct tagWND *)v21[14];
            if ( v27 )
            {
              v11 = InternalBuildHwndList(v11, v27, 3u);
              if ( *((_QWORD *)v11 + 1) >= *((_QWORD *)v11 + 2) )
                break;
            }
          }
          v21 = (_QWORD *)v21[11];
        }
        while ( v21 );
        v71 = v11;
      }
      v28 = (_QWORD *)*((_QWORD *)v11 + 1);
      if ( (unsigned __int64)v28 < *((_QWORD *)v11 + 2) )
      {
        *v28 = 1LL;
        if ( (v12 & 8) != 0 )
        {
          v29 = (struct tagBWL *)Win32AllocPool(*((_QWORD *)v11 + 2) - (_QWORD)v11 + 8LL, 1819767637LL);
          v72 = v29;
          v31 = v29;
          v69 = v29;
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
                  || (v65 = PsGetCurrentProcess(v38, v37, v39),
                      ProcessSessionId = PsGetProcessSessionIdEx(v65),
                      CurrentThreadProcess = PsGetCurrentThreadProcess(v67),
                      v43 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                      v31 = v69,
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
                    v31 = v69;
                    if ( v43 )
                      v35 = *v41;
                  }
                  else
                  {
                    v31 = v69;
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
                  v69 = v31;
                }
                else
                {
                  *(_QWORD *)v32 = v45;
                  v32 += 8;
                }
                v34 = *++v33;
              }
              while ( *v33 != 1 );
              v11 = v71;
              v29 = v72;
            }
            *(_QWORD *)v31 = 0LL;
            v46 = v29;
            v47 = *(_QWORD *)v29;
            if ( *(_QWORD *)v29 )
            {
              v55 = v32 - (char *)v29;
              do
              {
                *(_QWORD *)((char *)v46 + v55) = v47;
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
        v72 = v11;
        v48 = ((*((_QWORD *)v11 + 1) - (_QWORD)v11 - 32LL) >> 3) + 1;
        ProbeForWrite(Address, 8LL * a6, 4u);
        v19 = (ULONG64)a8;
        if ( (unsigned __int64)a8 >= MmUserProbeAddress )
          v19 = MmUserProbeAddress;
        *(_DWORD *)v19 = *(_DWORD *)v19;
        if ( v48 > a6 )
        {
          v49 = -1073741789;
        }
        else
        {
          memmove((void *)Address, (char *)v11 + 32, 8LL * v48);
          v49 = 0;
        }
        *a8 = v48;
        v50 = v77;
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
      v21 = *(_QWORD **)(ThreadDesktopWindow + 112);
      goto LABEL_23;
    }
LABEL_104:
    v49 = -1073741816;
    UserSetLastError(87LL);
    v50 = v77;
    goto LABEL_68;
  }
  if ( (int)ValidateHdesk(a1, 1LL, 1LL, &Object) < 0 )
  {
    v49 = -1073741816;
    v50 = v77;
    goto LABEL_68;
  }
  *(_QWORD *)&v74 = Object;
  LODWORD(v73) = 1;
  *((_QWORD *)&v73 + 1) = PsGetCurrentProcess(v20, v19, v22);
  v49 = MapDesktop((__int64)&v73);
  if ( v49 >= 0 )
  {
    v24 = Object;
    v21 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
    goto LABEL_20;
  }
  UserSetLastError(6LL);
LABEL_109:
  v50 = v77;
LABEL_61:
  if ( v11 )
  {
    v19 = gpbwlList;
    v51 = (struct tagBWL *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v51 != v11 )
      {
        v19 = (ULONG64)v51;
        v51 = *(struct tagBWL **)v51;
        if ( !v51 )
          goto LABEL_66;
      }
      *(_QWORD *)v19 = *(_QWORD *)v11;
      v52 = pbwlCache;
      if ( pbwlCache )
      {
        if ( (__int64)((*((_QWORD *)v11 + 2) - (_QWORD)v11 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
          v52 = v11;
        else
          pbwlCache = v11;
        Win32FreePool(v52);
      }
      else
      {
        pbwlCache = v11;
      }
    }
  }
LABEL_66:
  v20 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_68:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      v20 = (PVOID)gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v22 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v19 = (unsigned int)v22;
            if ( *(_DWORD *)(((unsigned __int64)(unsigned int)v22 << 6) + gpAtomickCheckStacks) == v50 )
              break;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= gdwAtomicCheckLogSize )
              goto LABEL_71;
          }
          v19 = (unsigned __int64)(unsigned int)v22 << 6;
          *(_DWORD *)(v19 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_71:
  UserSessionSwitchLeaveCrit(v20, v19, v22);
  return (unsigned int)v49;
}
