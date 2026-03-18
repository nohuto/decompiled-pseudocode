/*
 * XREFs of NtUserCreateWindowEx @ 0x1C00B92A0
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00B2E4C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C015AF40 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C015BF68 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __int128 *a4,
        unsigned int a5,
        __int32 a6,
        LONG a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        int a15,
        int a16,
        __int64 a17)
{
  int v18; // r12d
  __int64 v19; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // rax
  int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // r13d
  wchar_t *v34; // r14
  __m128i **v35; // rcx
  __m128i v36; // xmm0
  unsigned __int64 v37; // xmm0_8
  __int64 v38; // rax
  ULONG64 v39; // rdx
  __int64 v40; // rax
  __m128i *v41; // rsi
  __int128 *v42; // rbx
  unsigned __int64 v43; // xmm0_8
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // xmm0_8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r8
  ULONG64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 *Window; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v60; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v63; // rcx
  __int64 CurrentThreadProcess; // rax
  int v65; // [rsp+90h] [rbp-108h]
  size_t Size[2]; // [rsp+98h] [rbp-100h] BYREF
  int v67; // [rsp+A8h] [rbp-F0h]
  __int64 v68[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-D8h]
  __m128i v70; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v71; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v72; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+108h] [rbp-90h]
  __int128 v74; // [rsp+110h] [rbp-88h] BYREF
  __int64 v75; // [rsp+120h] [rbp-78h]
  __int128 v76; // [rsp+128h] [rbp-70h] BYREF
  __int64 v77; // [rsp+138h] [rbp-60h]
  _BYTE v78[80]; // [rsp+148h] [rbp-50h] BYREF

  *(_OWORD *)Size = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v18 = 0;
  v65 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v67 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v68);
  if ( a10 == -3 )
  {
    v19 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v21 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v21 )
        v19 = *(_QWORD *)(v21 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_92;
  }
  else if ( a10 )
  {
    v19 = ValidateHwnd(a10);
    if ( !v19 )
      goto LABEL_86;
  }
  else
  {
    v19 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v22 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v78, a11);
      v69 = *(_QWORD *)(v22 + 16);
      v23 = **(_QWORD **)v22;
      if ( v23 != *(_QWORD *)v68[0] )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v68);
        if ( v23 )
        {
          v68[0] = *(_QWORD *)(v23 + 152);
          ++*(_DWORD *)(v68[0] + 8);
        }
        else
        {
          v68[0] = gSmartObjNullRef;
        }
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v78);
LABEL_11:
      CurrentThread = KeGetCurrentThread();
      v26 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v24)
        || (CurrentProcess = PsGetCurrentProcess(v28, v27, v29),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v63),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v30 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v30 )
          v26 = *v30;
      }
      LOWORD(v31) = 0;
      if ( *(_DWORD *)(v26 + 632) <= 0x400u )
        v31 = *(_DWORD *)(v26 + 648);
      v32 = a1 & 0x800777FF;
      if ( (v31 & 0x800) == 0 )
        v32 = a1;
      v33 = v32 & 0x8A7F77FF;
      if ( (v32 & 0x8A7F77FF) == v32 )
        v33 = v32;
      v34 = (wchar_t *)a2;
      v35 = (__m128i **)MmUserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a2 >= MmUserProbeAddress )
          v34 = (wchar_t *)MmUserProbeAddress;
        v36 = *(__m128i *)v34;
        Size[0] = *(_QWORD *)v34;
        v37 = _mm_srli_si128(v36, 8).m128i_u64[0];
        Size[1] = v37;
        if ( v37 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v38 = LODWORD(Size[0]);
            v48 = v37 + LODWORD(Size[0]) + 1LL;
            if ( v48 < v37 || v48 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v37 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v38 = LODWORD(Size[0]);
            v39 = v37 + LODWORD(Size[0]) + 2LL;
            if ( v39 < v37 || v39 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          v40 = Win32AllocPoolWithQuota(v38 + 2, 2020897621LL);
          Size[1] = v40;
          if ( !v40 )
            ExRaiseStatus(-1073741801);
          v67 = 1;
          PushW32ThreadLock(v40, &v76, Win32FreePool);
          memmove((void *)Size[1], (const void *)v37, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v35 = (__m128i **)MmUserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        v34 = (wchar_t *)Size;
      }
      v41 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v35 )
          v41 = *v35;
        v70 = *v41;
        v45 = _mm_srli_si128(v70, 8).m128i_u64[0];
        if ( v45 )
        {
          if ( v70.m128i_i32[0] > (v70.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v70.m128i_i32[1] < 0 )
          {
            v49 = v45 + v70.m128i_u32[0] + 1LL;
            if ( v49 < v45 || v49 > (unsigned __int64)*v35 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v70.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v46 = v45 + v70.m128i_u32[0] + 2LL;
            if ( v46 < v45 || v46 > (unsigned __int64)*v35 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v70.m128i_i32[0] = 0;
        }
        v41 = &v70;
      }
      v42 = a4;
      if ( a4 )
      {
        if ( a4 >= (__int128 *)*v35 )
          v42 = (__int128 *)*v35;
        v71 = *v42;
        v43 = _mm_srli_si128((__m128i)v71, 8).m128i_u64[0];
        if ( v43 )
        {
          if ( (unsigned int)v71 > (DWORD1(v71) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( SDWORD1(v71) < 0 )
          {
            v47 = v43 + (unsigned int)v71 + 1LL;
            if ( v47 < v43 || v47 > (unsigned __int64)*v35 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (BYTE8(v71) & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v44 = v43 + (unsigned int)v71 + 2LL;
            if ( v44 < v43 || v44 > (unsigned __int64)*v35 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          LODWORD(v71) = 0;
        }
        v42 = &v71;
      }
      *(_QWORD *)&v74 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v74;
      *((_QWORD *)&v74 + 1) = v19;
      if ( v19 )
        HMLockObject(v19);
      Window = (__int64 *)xxxCreateWindowEx(
                            v33,
                            v34,
                            (__int64)v41,
                            v42,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v19,
                            (__int64)v68,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      v54 = 0LL;
      if ( Window )
        v54 = *Window;
      ThreadUnlock1(v52, v51, v53);
      v18 = v65;
      goto LABEL_79;
    }
    ValidateHmenu(a11);
    v69 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v68);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v68) )
    {
      v60 = v69;
      if ( !v69 )
        v60 = *(_QWORD *)v68[0];
      *(_QWORD *)&v72 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v72;
      *((_QWORD *)&v72 + 1) = v60;
      HMLockObject(v60);
      v65 = 1;
      goto LABEL_11;
    }
LABEL_86:
    v54 = 0LL;
    goto LABEL_83;
  }
LABEL_92:
  v54 = 0LL;
  UserSetLastError(87LL);
LABEL_79:
  if ( v67 )
    PopAndFreeAlwaysW32ThreadLock(&v76);
  if ( v18 )
    ThreadUnlock1(v56, v55, v57);
LABEL_83:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v68);
  UserSessionSwitchLeaveCrit(v58);
  return v54;
}
