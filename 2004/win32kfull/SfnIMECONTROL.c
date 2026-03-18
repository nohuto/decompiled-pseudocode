/*
 * XREFs of SfnIMECONTROL @ 0x1C0229FC0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0047F94 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MBToWCSEx @ 0x1C00E9980 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00E99E8 (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C02317B0 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall SfnIMECONTROL(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        WCHAR *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r14d
  char v16; // r15
  unsigned __int8 *v17; // rdi
  unsigned int v19; // r8d
  WCHAR *v20; // rdx
  unsigned __int8 *v21; // rbx
  _DWORD *v22; // rax
  unsigned __int64 v23; // r12
  int v24; // r15d
  int v25; // r15d
  _WORD *v26; // rsi
  signed __int64 v27; // r13
  unsigned __int16 v28; // ax
  __int16 v29; // ax
  __int16 v30; // cx
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  __int128 v34; // xmm6
  __int64 v35; // xmm7_8
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 *v43; // r15
  __int64 v44; // r15
  ULONG64 v45; // rcx
  CHAR *v46; // xmm0_8
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  __int128 v51; // xmm6
  __int64 v52; // xmm7_8
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // esi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 *v60; // rcx
  ULONG v61; // [rsp+28h] [rbp-470h]
  char v62; // [rsp+30h] [rbp-468h] BYREF
  char v63; // [rsp+31h] [rbp-467h] BYREF
  char v64; // [rsp+32h] [rbp-466h] BYREF
  char v65; // [rsp+33h] [rbp-465h] BYREF
  int v66; // [rsp+34h] [rbp-464h] BYREF
  unsigned __int8 *v67; // [rsp+38h] [rbp-460h]
  unsigned __int64 v68; // [rsp+40h] [rbp-458h] BYREF
  char v69; // [rsp+48h] [rbp-450h] BYREF
  _DWORD *v70; // [rsp+50h] [rbp-448h]
  __int64 v71; // [rsp+80h] [rbp-418h]
  unsigned __int8 *v72; // [rsp+88h] [rbp-410h] BYREF
  __int64 v73; // [rsp+90h] [rbp-408h]
  __int128 v74; // [rsp+98h] [rbp-400h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-3F0h]
  int v76; // [rsp+C0h] [rbp-3D8h]
  _OWORD *v77; // [rsp+C8h] [rbp-3D0h] BYREF
  __int64 *v78; // [rsp+D0h] [rbp-3C8h]
  PWCH v79; // [rsp+D8h] [rbp-3C0h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-3B8h]
  ULONG_PTR RegionSize[2]; // [rsp+E8h] [rbp-3B0h] BYREF
  __int128 v82; // [rsp+F8h] [rbp-3A0h]
  __int64 v83; // [rsp+108h] [rbp-390h]
  __int128 v84; // [rsp+110h] [rbp-388h] BYREF
  __int64 v85; // [rsp+120h] [rbp-378h]
  __int128 v86; // [rsp+160h] [rbp-338h]
  volatile void *Address; // [rsp+170h] [rbp-328h]
  __int128 v88; // [rsp+178h] [rbp-320h]
  CHAR *v89; // [rsp+188h] [rbp-310h]
  _DWORD v90[28]; // [rsp+190h] [rbp-308h] BYREF
  __int128 v91; // [rsp+200h] [rbp-298h] BYREF
  __int64 v92; // [rsp+210h] [rbp-288h]
  unsigned int v93; // [rsp+218h] [rbp-280h]
  _OWORD v94[2]; // [rsp+21Ch] [rbp-27Ch] BYREF
  unsigned __int8 v95[512]; // [rsp+240h] [rbp-258h] BYREF

  LODWORD(v70) = a2;
  v10 = a1;
  v78 = a1;
  memset(v90, 0, 0x68uLL);
  v68 = 0LL;
  v66 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v73 = ThreadWin32Thread;
  if ( v10 )
    v12 = v10[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  v71 = v12;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
  {
LABEL_17:
    v13 = 0;
    v15 = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)a3 <= 8 )
  {
    v13 = 1;
    v15 = 32;
  }
  else
  {
    if ( (unsigned int)a3 <= 0xA )
      goto LABEL_15;
    if ( (unsigned int)a3 > 0xC )
    {
      if ( (_DWORD)a3 != 17 )
      {
        if ( (_DWORD)a3 == 24 )
        {
          v13 = 1;
          v14 = (unsigned __int64)*(unsigned int *)a4 << 9;
          if ( v14 > 0xFFFFFFFF )
            return 0LL;
          v15 = v14 + 4;
          if ( (int)v14 + 4 < (unsigned int)v14 )
            return 0LL;
          v76 = v14 + 4;
          goto LABEL_18;
        }
        goto LABEL_17;
      }
LABEL_15:
      v13 = 1;
      v16 = a7;
      v15 = 32 * ((a7 & 1) == 0) + 60;
      goto LABEL_19;
    }
    v13 = 1;
    v15 = 28;
  }
LABEL_18:
  v16 = a7;
LABEL_19:
  if ( v13 )
  {
    v17 = AllocCallbackMessage(104, v13, v15, v95, 1, 0x200uLL);
    v67 = v17;
    if ( !v17 )
      return 0LL;
  }
  else
  {
    v17 = (unsigned __int8 *)v90;
    v67 = (unsigned __int8 *)v90;
    memset(&v90[1], 0, 0x64uLL);
    v90[0] = 104;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v84 = 0LL;
  v85 = 0LL;
  if ( v17 != (unsigned __int8 *)v90 && v17 != v95 )
    PushW32ThreadLock((__int64)v17, &v84, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 5) = v12;
  *((_DWORD *)v17 + 12) = (_DWORD)v70;
  *((_QWORD *)v17 + 7) = a3;
  *((_QWORD *)v17 + 8) = a4;
  *((_QWORD *)v17 + 9) = a5;
  *((_QWORD *)v17 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_86;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_58;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_58;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_58;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_86;
          goto LABEL_35;
        }
LABEL_58:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v17, v15, (void **)v17 + 11) >= 0 )
        {
          *((_DWORD *)v17 + 24) = v15;
          v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v74 = *(_QWORD *)(v31 + 408);
          *(_QWORD *)(v31 + 408) = &v74;
          *((_QWORD *)&v74 + 1) = v10;
          if ( v10 )
            HMLockObject(v10);
          v32 = v73;
          v33 = *(_QWORD *)(v73 + 472);
          v34 = *(_OWORD *)(v33 + 64);
          v82 = v34;
          v35 = *(_QWORD *)(v33 + 80);
          v83 = v35;
          *(_QWORD *)(v33 + 72) = v71;
          if ( v10 )
            v36 = *v10;
          else
            v36 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v32 + 472) + 64LL) = v36;
          if ( v10 )
            v37 = *(_QWORD *)(v10[5] + 224);
          else
            v37 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v32 + 472) + 80LL) = v37;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v63);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v62);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v17 + 2) = 0LL;
          v38 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, &v68, &v66);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v62);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v63);
          ThreadUnlock1(v40, v39, v41);
          v42 = *(_QWORD *)(v32 + 472);
          *(_OWORD *)(v42 + 64) = v34;
          *(_QWORD *)(v42 + 80) = v35;
          if ( v38 >= 0 && v66 == 24 )
          {
            v43 = (__int64 *)v68;
            if ( v68 + 8 < v68 || v68 + 8 > MmUserProbeAddress )
              v43 = (__int64 *)MmUserProbeAddress;
            v44 = *v43;
            v80 = v44;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v45 = v68;
              if ( v68 + 24 < v68 || v68 + 24 > MmUserProbeAddress )
                v45 = MmUserProbeAddress;
              v86 = *(_OWORD *)v45;
              v46 = *(CHAR **)(v45 + 16);
              Address = v46;
              v88 = v86;
              v89 = v46;
              ProbeForRead(v46, v15, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v46, v15);
              }
              else
              {
                v46[v15 - 1] = 0;
                v79 = a4 + 14;
                *(_OWORD *)a4 = *(_OWORD *)v46;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v46 + 2);
                *((_DWORD *)a4 + 6) = *((_DWORD *)v46 + 6);
                memset(a4 + 14, 0, 0x40uLL);
                MBToWCSEx(v47, v46 + 28, -1, &v79, 32);
              }
            }
            goto LABEL_104;
          }
        }
        goto LABEL_103;
      }
    }
  }
LABEL_35:
  switch ( a3 )
  {
    case 8uLL:
      v19 = 32;
      goto LABEL_43;
    case 0xCuLL:
      v19 = 28;
      goto LABEL_43;
    case 0xAuLL:
      if ( (v16 & 1) != 0 )
      {
        v77 = v94;
        v91 = *(_OWORD *)a4;
        v92 = *((_QWORD *)a4 + 2);
        v93 = *((_DWORD *)a4 + 6);
        memset(v94, 0, sizeof(v94));
        WCSToMBEx(0, a4 + 14, -1, (PCHAR *)&v77, 32, v61);
        v19 = 60;
        v20 = (WCHAR *)&v91;
        goto LABEL_44;
      }
      v19 = 92;
LABEL_43:
      v20 = a4;
LABEL_44:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (unsigned __int64)v20, v19, (void **)v17 + 8) < 0 )
        goto LABEL_103;
      goto LABEL_86;
  }
  if ( (v16 & 1) != 0 )
  {
    v21 = (unsigned __int8 *)&v69;
    v72 = (unsigned __int8 *)&v69;
    v22 = (_DWORD *)Win32AllocPool(v15, 1835627349LL);
    v23 = (unsigned __int64)v22;
    v70 = v22;
    if ( !v22 )
      goto LABEL_103;
    v24 = *(_DWORD *)a4;
    *v22 = *(_DWORD *)a4;
    v25 = v24 << 8;
    if ( v25 )
    {
      v26 = v22 + 1;
      v27 = (char *)a4 - (char *)(v22 + 1);
      do
      {
        --v25;
        v21[1] = 0;
        v28 = THREAD_CODEPAGE();
        WCSToMBEx(v28, (_WORD *)((char *)v26 + v27 + 4), 1, (PCHAR *)&v72, 2, v61);
        v21 = v72;
        v29 = v72[1];
        v30 = *v72;
        if ( (_BYTE)v29 )
          v30 = v29 | (v30 << 8);
        *v26++ = v30;
      }
      while ( v25 );
      v10 = v78;
      v23 = (unsigned __int64)v70;
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, v23, v15, (void **)v17 + 8) < 0 )
      goto LABEL_103;
    Win32FreePool(v23);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (unsigned __int64)a4, v15, (void **)v17 + 8) < 0 )
  {
    goto LABEL_103;
  }
LABEL_86:
  v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v74 = *(_QWORD *)(v48 + 408);
  *(_QWORD *)(v48 + 408) = &v74;
  *((_QWORD *)&v74 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  v49 = v73;
  v50 = *(_QWORD *)(v73 + 472);
  v51 = *(_OWORD *)(v50 + 64);
  v82 = v51;
  v52 = *(_QWORD *)(v50 + 80);
  v83 = v52;
  *(_QWORD *)(v50 + 72) = v71;
  if ( v10 )
    v53 = *v10;
  else
    v53 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v49 + 472) + 64LL) = v53;
  if ( v10 )
    v54 = *(_QWORD *)(v10[5] + 224);
  else
    v54 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v49 + 472) + 80LL) = v54;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v65);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v64);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v55 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, &v68, &v66);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v64);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v65);
  ThreadUnlock1(v57, v56, v58);
  v59 = *(_QWORD *)(v49 + 472);
  *(_OWORD *)(v59 + 64) = v51;
  *(_QWORD *)(v59 + 80) = v52;
  if ( v55 >= 0 && v66 == 24 )
  {
    v60 = (__int64 *)v68;
    if ( v68 + 8 < v68 || v68 + 8 > MmUserProbeAddress )
      v60 = (__int64 *)MmUserProbeAddress;
    v44 = *v60;
    v80 = *v60;
    goto LABEL_104;
  }
LABEL_103:
  v44 = 0LL;
LABEL_104:
  if ( v17 != (unsigned __int8 *)v90 && v17 != v95 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v84);
  }
  return v44;
}
