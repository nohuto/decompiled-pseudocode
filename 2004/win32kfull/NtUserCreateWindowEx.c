/*
 * XREFs of NtUserCreateWindowEx @ 0x1C00A6060
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A7698 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01580E8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C0158FB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // r13d
  __m128i *v36; // r14
  __m128i **v37; // rcx
  __m128i v38; // xmm0
  unsigned __int64 v39; // xmm0_8
  __int64 v40; // rax
  ULONG64 v41; // rdx
  __int64 v42; // rax
  __m128i *v43; // rsi
  __m128i *v44; // rbx
  unsigned __int64 v45; // xmm0_8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // xmm0_8
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r8
  ULONG64 v50; // rdx
  unsigned __int64 v51; // r8
  __int64 *Window; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v64; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v67; // rcx
  __int64 CurrentThreadProcess; // rax
  int v69; // [rsp+90h] [rbp-108h]
  size_t Size[2]; // [rsp+98h] [rbp-100h] BYREF
  int v71; // [rsp+A8h] [rbp-F0h]
  _QWORD v72[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-D8h]
  __m128i v74; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v75; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v76; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+108h] [rbp-90h]
  __int128 v78; // [rsp+110h] [rbp-88h] BYREF
  __int64 v79; // [rsp+120h] [rbp-78h]
  __int128 v80; // [rsp+128h] [rbp-70h] BYREF
  __int64 v81; // [rsp+138h] [rbp-60h]
  _BYTE v82[80]; // [rsp+148h] [rbp-50h] BYREF

  *(_OWORD *)Size = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v18 = 0;
  v69 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v71 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v72);
  if ( a10 == -3 )
  {
    v21 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v23 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v23 )
        v21 = *(_QWORD *)(v23 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_92;
  }
  else if ( a10 )
  {
    v21 = ValidateHwnd(a10);
    if ( !v21 )
      goto LABEL_86;
  }
  else
  {
    v21 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v24 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v82, a11);
      v73 = *(_QWORD *)(v24 + 16);
      v25 = **(_QWORD **)v24;
      if ( v25 != *(_QWORD *)v72[0] )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v72);
        if ( v25 )
        {
          v72[0] = *(_QWORD *)(v25 + 152);
          ++*(_DWORD *)(v72[0] + 8LL);
        }
        else
        {
          v72[0] = gSmartObjNullRef;
        }
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v82);
LABEL_11:
      CurrentThread = KeGetCurrentThread();
      v28 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v26)
        || (CurrentProcess = PsGetCurrentProcess(v30, v29, v31),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v67),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v32 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v32 )
          v28 = *v32;
      }
      LOWORD(v33) = 0;
      if ( *(_DWORD *)(v28 + 624) <= 0x400u )
        v33 = *(_DWORD *)(v28 + 640);
      v34 = a1 & 0x800777FF;
      if ( (v33 & 0x800) == 0 )
        v34 = a1;
      v35 = v34 & 0x8A7F77FF;
      if ( (v34 & 0x8A7F77FF) == v34 )
        v35 = v34;
      v36 = (__m128i *)a2;
      v37 = (__m128i **)MmUserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a2 >= MmUserProbeAddress )
          v36 = (__m128i *)MmUserProbeAddress;
        v38 = *v36;
        Size[0] = v36->m128i_i64[0];
        v39 = _mm_srli_si128(v38, 8).m128i_u64[0];
        Size[1] = v39;
        if ( v39 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v40 = LODWORD(Size[0]);
            v50 = v39 + LODWORD(Size[0]) + 1LL;
            if ( v50 < v39 || v50 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v39 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v40 = LODWORD(Size[0]);
            v41 = v39 + LODWORD(Size[0]) + 2LL;
            if ( v41 < v39 || v41 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          v42 = Win32AllocPoolWithQuota(v40 + 2, 2020897621LL);
          Size[1] = v42;
          if ( !v42 )
            ExRaiseStatus(-1073741801);
          v71 = 1;
          PushW32ThreadLock(v42, &v80, (__int64)Win32FreePool);
          memmove((void *)Size[1], (const void *)v39, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v37 = (__m128i **)MmUserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        v36 = (__m128i *)Size;
      }
      v43 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v37 )
          v43 = *v37;
        v74 = *v43;
        v47 = _mm_srli_si128(v74, 8).m128i_u64[0];
        if ( v47 )
        {
          if ( v74.m128i_i32[0] > (v74.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v74.m128i_i32[1] < 0 )
          {
            v51 = v47 + v74.m128i_u32[0] + 1LL;
            if ( v51 < v47 || v51 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v74.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v48 = v47 + v74.m128i_u32[0] + 2LL;
            if ( v48 < v47 || v48 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v74.m128i_i32[0] = 0;
        }
        v43 = &v74;
      }
      v44 = a4;
      if ( a4 )
      {
        if ( a4 >= *v37 )
          v44 = *v37;
        v75 = *v44;
        v45 = _mm_srli_si128(v75, 8).m128i_u64[0];
        if ( v45 )
        {
          if ( v75.m128i_i32[0] > (v75.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v75.m128i_i32[1] < 0 )
          {
            v49 = v45 + v75.m128i_u32[0] + 1LL;
            if ( v49 < v45 || v49 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v75.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v46 = v45 + v75.m128i_u32[0] + 2LL;
            if ( v46 < v45 || v46 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v75.m128i_i32[0] = 0;
        }
        v44 = &v75;
      }
      *(_QWORD *)&v78 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v78;
      *((_QWORD *)&v78 + 1) = v21;
      if ( v21 )
        HMLockObject(v21);
      Window = (__int64 *)xxxCreateWindowEx(
                            v35,
                            (_DWORD)v36,
                            (_DWORD)v43,
                            (_DWORD)v44,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v21,
                            (__int64)v72,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      v56 = 0LL;
      if ( Window )
        v56 = *Window;
      ThreadUnlock1(v54, v53, v55);
      v18 = v69;
      goto LABEL_79;
    }
    ValidateHmenu(a11);
    v73 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v72);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v72) )
    {
      v64 = v73;
      if ( !v73 )
        v64 = *(_QWORD *)v72[0];
      *(_QWORD *)&v76 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v76;
      *((_QWORD *)&v76 + 1) = v64;
      HMLockObject(v64);
      v69 = 1;
      goto LABEL_11;
    }
LABEL_86:
    v56 = 0LL;
    goto LABEL_83;
  }
LABEL_92:
  v56 = 0LL;
  UserSetLastError(87LL, v19, v20);
LABEL_79:
  if ( v71 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v80);
  if ( v18 )
    ThreadUnlock1(v58, v57, v59);
LABEL_83:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v72);
  UserSessionSwitchLeaveCrit(v61, v60, v62);
  return v56;
}
