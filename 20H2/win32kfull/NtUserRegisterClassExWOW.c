/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C00CFF00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     RegisterDefaultClass @ 0x1C00CFCF0 (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C00D077C (_RegisterClassEx.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     RegisterIconTitleClass @ 0x1C011018C (RegisterIconTitleClass.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        ULONG64 a2,
        ULONG64 a3,
        ULONG64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int16 v14; // bx
  unsigned int v15; // ecx
  _WORD *v16; // rax
  int v17; // r14d
  unsigned __int64 v18; // r13
  int v19; // r12d
  ULONG64 v20; // r15
  ULONG64 v21; // rdx
  ULONG64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  ULONG64 v33; // rcx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rax
  ULONG64 v45; // r8
  ULONG64 v46; // rcx
  __int16 Atom; // r8
  __int64 v48; // rcx
  unsigned __int16 *v49; // rdx
  int v50; // eax
  int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v55; // [rsp+30h] [rbp-1D8h]
  int v56; // [rsp+34h] [rbp-1D4h]
  int v57; // [rsp+38h] [rbp-1D0h]
  int v58; // [rsp+40h] [rbp-1C8h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-1C8h]
  int v60; // [rsp+48h] [rbp-1C0h]
  void *Str1_8; // [rsp+60h] [rbp-1A8h]
  void *v62; // [rsp+70h] [rbp-198h]
  void *Src; // [rsp+78h] [rbp-190h]
  ULONG64 v64; // [rsp+80h] [rbp-188h]
  __int128 v65; // [rsp+88h] [rbp-180h] BYREF
  void (__fastcall *v66)(_QWORD); // [rsp+98h] [rbp-170h]
  __int128 v67; // [rsp+A0h] [rbp-168h] BYREF
  void (__fastcall *v68)(_QWORD); // [rsp+B0h] [rbp-158h]
  __int64 v69; // [rsp+C0h] [rbp-148h]
  __int64 v70; // [rsp+C8h] [rbp-140h]
  __int64 v71; // [rsp+D0h] [rbp-138h]
  __int64 v72; // [rsp+D8h] [rbp-130h]
  __int128 v73; // [rsp+E0h] [rbp-128h] BYREF
  ULONG64 v74; // [rsp+F0h] [rbp-118h]
  __int128 v75; // [rsp+F8h] [rbp-110h]
  __int128 v76; // [rsp+110h] [rbp-F8h] BYREF
  __int128 v77; // [rsp+120h] [rbp-E8h]
  __int128 v78; // [rsp+130h] [rbp-D8h]
  __int128 v79; // [rsp+140h] [rbp-C8h]
  __int128 v80; // [rsp+150h] [rbp-B8h]
  unsigned __int64 v81; // [rsp+160h] [rbp-A8h]
  __int64 v82; // [rsp+168h] [rbp-A0h]
  struct _KTHREAD *v83; // [rsp+170h] [rbp-98h]
  struct _KTHREAD *v84; // [rsp+178h] [rbp-90h]
  __int128 v85; // [rsp+188h] [rbp-80h]
  ULONG64 v86; // [rsp+198h] [rbp-70h]
  __int128 v87; // [rsp+1A0h] [rbp-68h]
  __int128 v88; // [rsp+1B0h] [rbp-58h]
  __int128 v89; // [rsp+1C0h] [rbp-48h]
  __int128 v90; // [rsp+1D0h] [rbp-38h]
  __int128 v91; // [rsp+1E0h] [rbp-28h]

  v75 = 0LL;
  v71 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v57 = 0;
  v56 = 0;
  EnterCrit(0LL, 1LL);
  v12 = gptiCurrent;
  v72 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_3:
    v14 = 0;
    goto LABEL_98;
  }
  if ( !a5 )
  {
LABEL_9:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v17 = *(_DWORD *)a2;
    v58 = *(_DWORD *)a2;
    v18 = *(_QWORD *)(a2 + 8);
    Str1_8 = (void *)v18;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v19 = *(_DWORD *)a3;
    v60 = *(_DWORD *)a3;
    v20 = *(_QWORD *)(a3 + 8);
    Src = (void *)v20;
    v62 = (void *)v20;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v85 = *(_OWORD *)a4;
    v86 = *(_QWORD *)(a4 + 16);
    v73 = v85;
    v74 = v86;
    v21 = v86;
    if ( v86 >= MmUserProbeAddress )
      v21 = MmUserProbeAddress;
    v55 = *(_DWORD *)v21;
    LODWORD(v75) = *(_DWORD *)v21;
    v64 = *(_QWORD *)(v21 + 8);
    *((_QWORD *)&v75 + 1) = v64;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v87 = *a1;
    v88 = a1[1];
    v89 = a1[2];
    v90 = a1[3];
    v91 = a1[4];
    v76 = v87;
    v77 = v88;
    v78 = v89;
    v79 = v90;
    v80 = v91;
    if ( (v18 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
LABEL_35:
      if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (unsigned __int16)(v17 + 2) < (unsigned __int16)v17 )
          ExRaiseStatus(-1073741675);
        Str1_8 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v17 + 2), 2020897621LL);
        if ( !Str1_8 )
          ExRaiseStatus(-1073741801);
        v57 = 1;
        CurrentThread = KeGetCurrentThread();
        v83 = CurrentThread;
        v24 = 0LL;
        v69 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v23)
          || (CurrentProcess = PsGetCurrentProcess(v26, v25, v27),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v24 = *ThreadWin32Thread;
            v69 = *ThreadWin32Thread;
          }
        }
        *(_QWORD *)&v67 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)(v24 + 16) = &v67;
        *((_QWORD *)&v67 + 1) = Str1_8;
        v68 = (void (__fastcall *)(_QWORD))Win32FreePool;
        memmove(Str1_8, (const void *)v18, (unsigned __int16)v17);
        *((_WORD *)Str1_8 + ((unsigned __int64)(unsigned __int16)v17 >> 1)) = 0;
      }
      if ( (v20 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
LABEL_55:
        if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        {
          if ( (unsigned __int16)(v19 + 2) < (unsigned __int16)v19 )
            ExRaiseStatus(-1073741675);
          v62 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v19 + 2), 2020897621LL);
          if ( !v62 )
            ExRaiseStatus(-1073741801);
          v56 = 1;
          v35 = KeGetCurrentThread();
          v84 = v35;
          v36 = 0LL;
          v70 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v34)
            || (v40 = PsGetCurrentProcess(v38, v37, v39),
                v41 = PsGetProcessSessionIdEx(v40),
                v43 = PsGetCurrentThreadProcess(v42),
                v41 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
          {
            v44 = (__int64 *)PsGetThreadWin32Thread(v35);
            if ( v44 )
            {
              v36 = *v44;
              v70 = *v44;
            }
          }
          *(_QWORD *)&v65 = *(_QWORD *)(v36 + 16);
          *(_QWORD *)(v36 + 16) = &v65;
          *((_QWORD *)&v65 + 1) = v62;
          v66 = (void (__fastcall *)(_QWORD))Win32FreePool;
          memmove(v62, Src, (unsigned __int16)v19);
          *((_WORD *)v62 + ((unsigned __int64)(unsigned __int16)v19 >> 1)) = 0;
        }
        v45 = v64;
        if ( (v64 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_75:
          if ( a7 )
            v71 = *a7;
          *(_QWORD *)&v80 = Str1_8;
          v81 = (unsigned __int64)v62;
          *((_QWORD *)&v79 + 1) = v45;
          if ( (*(_DWORD *)(*(_QWORD *)(v72 + 424) + 12LL) & 0x2000) != 0
            || (unsigned int)RegisterDefaultClass((wchar_t *)Str1_8) )
          {
            if ( (v81 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = UserFindAtom(v81);
            else
              Atom = v81;
            v82 = 0LL;
            if ( Atom )
            {
              v48 = 0LL;
              v49 = (unsigned __int16 *)&unk_1C02DFC46;
              while ( 1 )
              {
                if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v49 - 3) >> 3) & 0x1F) + 868) )
                {
                  v50 = *v49;
                  if ( (_WORD)v50 )
                    break;
                }
                v48 = (unsigned int)(v48 + 1);
                v49 += 24;
                if ( (unsigned int)v48 >= 8 )
                  goto LABEL_93;
              }
              a6 |= v50;
              if ( (a6 & 0x200) != 0 && SDWORD1(v77) < *((_DWORD *)&gDefaultServerClasses + 12 * v48 + 6) )
              {
                UserSetLastError(5LL);
                v14 = 0;
                UserSetLastError(0LL);
                goto LABEL_94;
              }
              v51 = *((_DWORD *)&gDefaultServerClasses + 12 * v48 + 6);
              if ( SDWORD1(v77) >= v51 )
              {
                LODWORD(v82) = v51;
                DWORD1(v77) -= v51;
              }
            }
LABEL_93:
            v14 = RegisterClassEx(&v76, &v73, a5, a6);
            goto LABEL_94;
          }
LABEL_27:
          v14 = 0;
LABEL_94:
          if ( v56 )
          {
            v52 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(v52 + 16) = v65;
            v66(*((_QWORD *)&v65 + 1));
          }
          if ( v57 )
          {
            v53 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(v53 + 16) = v67;
            v68(*((_QWORD *)&v67 + 1));
          }
          goto LABEL_98;
        }
        if ( (v64 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v46 = (unsigned __int16)v55 + v64 + 2;
        if ( v46 < MmUserProbeAddress && (unsigned __int16)v55 <= HIWORD(v55) )
        {
          if ( (v55 & 1) != 0 )
            goto LABEL_73;
          if ( v46 > v64 )
            goto LABEL_75;
        }
        if ( (v55 & 1) == 0 )
        {
LABEL_74:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_75;
        }
LABEL_73:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v55, v64, v11);
        v45 = v64;
        goto LABEL_74;
      }
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v33 = v20 + (unsigned __int16)v19 + 2LL;
      if ( v33 < MmUserProbeAddress && (unsigned __int16)v19 <= HIWORD(v60) )
      {
        if ( (v19 & 1) != 0 )
          goto LABEL_53;
        if ( v33 > v20 )
          goto LABEL_55;
      }
      if ( (v19 & 1) == 0 )
      {
LABEL_54:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_55;
      }
LABEL_53:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v21, v12, v11);
      goto LABEL_54;
    }
    if ( (v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (unsigned __int16)v17 + v18 + 2;
    if ( v22 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v58) )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_33;
      if ( v22 > v18 )
        goto LABEL_35;
    }
    if ( (v17 & 1) == 0 )
    {
LABEL_34:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_35;
    }
LABEL_33:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v12, v11);
    goto LABEL_34;
  }
  v13 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_27;
  v15 = 0;
  v16 = &unk_1C02DFC44;
  while ( *v16 != a5 )
  {
    ++v15;
    v16 += 24;
    if ( v15 >= 8 )
      goto LABEL_9;
  }
  v14 = 0;
  UserSetLastError(87LL);
LABEL_98:
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
