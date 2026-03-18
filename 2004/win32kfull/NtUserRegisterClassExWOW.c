/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C00A3E30
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterClassEx @ 0x1C008B430 (_RegisterClassEx.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     RegisterDefaultClass @ 0x1C00A2B84 (RegisterDefaultClass.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     RegisterIconTitleClass @ 0x1C010F4AC (RegisterIconTitleClass.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // bx
  unsigned int v16; // ecx
  _WORD *v17; // rax
  int v18; // r14d
  unsigned __int64 v19; // r13
  int v20; // r12d
  ULONG64 v21; // r15
  ULONG64 v22; // rdx
  ULONG64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v31; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  ULONG64 v34; // rcx
  __int64 v35; // rcx
  struct _KTHREAD *v36; // r15
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // rax
  ULONG64 v46; // r8
  ULONG64 v47; // rcx
  __int64 Atom; // r8
  __int64 v49; // rcx
  unsigned __int16 *v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v58; // [rsp+30h] [rbp-1D8h]
  int v59; // [rsp+34h] [rbp-1D4h]
  int v60; // [rsp+38h] [rbp-1D0h]
  int v61; // [rsp+40h] [rbp-1C8h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-1C8h]
  int v63; // [rsp+48h] [rbp-1C0h]
  void *Str1_8; // [rsp+60h] [rbp-1A8h]
  void *v65; // [rsp+70h] [rbp-198h]
  void *Src; // [rsp+78h] [rbp-190h]
  ULONG64 v67; // [rsp+80h] [rbp-188h]
  __int128 v68; // [rsp+88h] [rbp-180h] BYREF
  void (__fastcall *v69)(_QWORD); // [rsp+98h] [rbp-170h]
  __int128 v70; // [rsp+A0h] [rbp-168h] BYREF
  void (__fastcall *v71)(_QWORD); // [rsp+B0h] [rbp-158h]
  __int64 v72; // [rsp+C0h] [rbp-148h]
  __int64 v73; // [rsp+C8h] [rbp-140h]
  __int64 v74; // [rsp+D0h] [rbp-138h]
  __int64 v75; // [rsp+D8h] [rbp-130h]
  __int128 v76; // [rsp+E0h] [rbp-128h] BYREF
  ULONG64 v77; // [rsp+F0h] [rbp-118h]
  __int128 v78; // [rsp+F8h] [rbp-110h]
  __int128 v79; // [rsp+110h] [rbp-F8h] BYREF
  __int128 v80; // [rsp+120h] [rbp-E8h]
  __int128 v81; // [rsp+130h] [rbp-D8h]
  __int128 v82; // [rsp+140h] [rbp-C8h]
  __int128 v83; // [rsp+150h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+160h] [rbp-A8h]
  __int64 v85; // [rsp+168h] [rbp-A0h]
  struct _KTHREAD *v86; // [rsp+170h] [rbp-98h]
  struct _KTHREAD *v87; // [rsp+178h] [rbp-90h]
  __int128 v88; // [rsp+188h] [rbp-80h]
  ULONG64 v89; // [rsp+198h] [rbp-70h]
  __int128 v90; // [rsp+1A0h] [rbp-68h]
  __int128 v91; // [rsp+1B0h] [rbp-58h]
  __int128 v92; // [rsp+1C0h] [rbp-48h]
  __int128 v93; // [rsp+1D0h] [rbp-38h]
  __int128 v94; // [rsp+1E0h] [rbp-28h]

  v78 = 0LL;
  v74 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v60 = 0;
  v59 = 0;
  EnterCrit(0LL, 1LL);
  v12 = gptiCurrent;
  v75 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL, v11, gptiCurrent);
LABEL_3:
    v15 = 0;
    goto LABEL_98;
  }
  v13 = a5;
  if ( !a5 )
  {
LABEL_9:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v18 = *(_DWORD *)a2;
    v61 = *(_DWORD *)a2;
    v19 = *(_QWORD *)(a2 + 8);
    Str1_8 = (void *)v19;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v20 = *(_DWORD *)a3;
    v63 = *(_DWORD *)a3;
    v21 = *(_QWORD *)(a3 + 8);
    Src = (void *)v21;
    v65 = (void *)v21;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v88 = *(_OWORD *)a4;
    v89 = *(_QWORD *)(a4 + 16);
    v76 = v88;
    v77 = v89;
    v22 = v89;
    if ( v89 >= MmUserProbeAddress )
      v22 = MmUserProbeAddress;
    v58 = *(_DWORD *)v22;
    LODWORD(v78) = *(_DWORD *)v22;
    v67 = *(_QWORD *)(v22 + 8);
    *((_QWORD *)&v78 + 1) = v67;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v90 = *a1;
    v91 = a1[1];
    v92 = a1[2];
    v93 = a1[3];
    v94 = a1[4];
    v79 = v90;
    v80 = v91;
    v81 = v92;
    v82 = v93;
    v83 = v94;
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
LABEL_35:
      if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
          ExRaiseStatus(-1073741675);
        Str1_8 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v18 + 2), 2020897621LL);
        if ( !Str1_8 )
          ExRaiseStatus(-1073741801);
        v60 = 1;
        CurrentThread = KeGetCurrentThread();
        v86 = CurrentThread;
        v25 = 0LL;
        v72 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v24)
          || (CurrentProcess = PsGetCurrentProcess(v27, v26, v28),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v31),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v25 = *ThreadWin32Thread;
            v72 = *ThreadWin32Thread;
          }
        }
        *(_QWORD *)&v70 = *(_QWORD *)(v25 + 16);
        *(_QWORD *)(v25 + 16) = &v70;
        *((_QWORD *)&v70 + 1) = Str1_8;
        v71 = (void (__fastcall *)(_QWORD))Win32FreePool;
        memmove(Str1_8, (const void *)v19, (unsigned __int16)v18);
        *((_WORD *)Str1_8 + ((unsigned __int64)(unsigned __int16)v18 >> 1)) = 0;
      }
      if ( (v21 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
LABEL_55:
        if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        {
          if ( (unsigned __int16)(v20 + 2) < (unsigned __int16)v20 )
            ExRaiseStatus(-1073741675);
          v65 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v20 + 2), 2020897621LL);
          if ( !v65 )
            ExRaiseStatus(-1073741801);
          v59 = 1;
          v36 = KeGetCurrentThread();
          v87 = v36;
          v37 = 0LL;
          v73 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v35)
            || (v41 = PsGetCurrentProcess(v39, v38, v40),
                v42 = PsGetProcessSessionIdEx(v41),
                v44 = PsGetCurrentThreadProcess(v43),
                v42 == (unsigned int)PsGetProcessSessionIdEx(v44)) )
          {
            v45 = (__int64 *)PsGetThreadWin32Thread(v36);
            if ( v45 )
            {
              v37 = *v45;
              v73 = *v45;
            }
          }
          *(_QWORD *)&v68 = *(_QWORD *)(v37 + 16);
          *(_QWORD *)(v37 + 16) = &v68;
          *((_QWORD *)&v68 + 1) = v65;
          v69 = (void (__fastcall *)(_QWORD))Win32FreePool;
          memmove(v65, Src, (unsigned __int16)v20);
          *((_WORD *)v65 + ((unsigned __int64)(unsigned __int16)v20 >> 1)) = 0;
        }
        v46 = v67;
        if ( (v67 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_75:
          if ( a7 )
            v74 = *a7;
          *(_QWORD *)&v83 = Str1_8;
          v84 = (unsigned __int64)v65;
          *((_QWORD *)&v82 + 1) = v46;
          if ( (*(_DWORD *)(*(_QWORD *)(v75 + 416) + 12LL) & 0x2000) != 0
            || (unsigned int)RegisterDefaultClass((wchar_t *)Str1_8) )
          {
            if ( (v84 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = (unsigned __int16)UserFindAtom(v84);
            else
              Atom = (unsigned __int16)v84;
            v85 = 0LL;
            if ( (_WORD)Atom )
            {
              v49 = 0LL;
              v50 = (unsigned __int16 *)&unk_1C02E0A76;
              while ( 1 )
              {
                if ( (_WORD)Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v50 - 3) >> 3) & 0x1F) + 868) )
                {
                  v51 = *v50;
                  if ( (_WORD)v51 )
                    break;
                }
                v49 = (unsigned int)(v49 + 1);
                v50 += 24;
                if ( (unsigned int)v49 >= 8 )
                  goto LABEL_93;
              }
              a6 |= v51;
              if ( (a6 & 0x200) != 0 && SDWORD1(v80) < *((_DWORD *)&gDefaultServerClasses + 12 * v49 + 6) )
              {
                UserSetLastError(5LL, (__int64)&gDefaultServerClasses, Atom);
                v15 = 0;
                UserSetLastError(0LL, v52, v53);
                goto LABEL_94;
              }
              v54 = *((_DWORD *)&gDefaultServerClasses + 12 * v49 + 6);
              if ( SDWORD1(v80) >= v54 )
              {
                LODWORD(v85) = v54;
                DWORD1(v80) -= v54;
              }
            }
LABEL_93:
            v15 = RegisterClassEx((__int64)&v79, &v76, a5, a6);
            goto LABEL_94;
          }
LABEL_27:
          v15 = 0;
LABEL_94:
          if ( v59 )
          {
            v55 = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)(v55 + 16) = v68;
            v69(*((_QWORD *)&v68 + 1));
          }
          if ( v60 )
          {
            v56 = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)(v56 + 16) = v70;
            v71(*((_QWORD *)&v70 + 1));
          }
          goto LABEL_98;
        }
        if ( (v67 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v47 = (unsigned __int16)v58 + v67 + 2;
        if ( v47 < MmUserProbeAddress && (unsigned __int16)v58 <= HIWORD(v58) )
        {
          if ( (v58 & 1) != 0 )
            goto LABEL_73;
          if ( v47 > v67 )
            goto LABEL_75;
        }
        if ( (v58 & 1) == 0 )
        {
LABEL_74:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_75;
        }
LABEL_73:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v58);
        v46 = v67;
        goto LABEL_74;
      }
      if ( (v21 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v34 = v21 + (unsigned __int16)v20 + 2LL;
      if ( v34 < MmUserProbeAddress && (unsigned __int16)v20 <= HIWORD(v63) )
      {
        if ( (v20 & 1) != 0 )
          goto LABEL_53;
        if ( v34 > v21 )
          goto LABEL_55;
      }
      if ( (v20 & 1) == 0 )
      {
LABEL_54:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_55;
      }
LABEL_53:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v22);
      goto LABEL_54;
    }
    if ( (v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (unsigned __int16)v18 + v19 + 2;
    if ( v23 < MmUserProbeAddress && (unsigned __int16)v18 <= HIWORD(v61) )
    {
      if ( (v18 & 1) != 0 )
        goto LABEL_33;
      if ( v23 > v19 )
        goto LABEL_35;
    }
    if ( (v18 & 1) == 0 )
    {
LABEL_34:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_35;
    }
LABEL_33:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
    goto LABEL_34;
  }
  v14 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_27;
  v16 = 0;
  v17 = &unk_1C02E0A74;
  while ( *v17 != a5 )
  {
    ++v16;
    v17 += 24;
    if ( v16 >= 8 )
      goto LABEL_9;
  }
  v15 = 0;
  UserSetLastError(87LL, a5, gptiCurrent);
LABEL_98:
  UserSessionSwitchLeaveCrit(v14, v13, v12);
  return v15;
}
