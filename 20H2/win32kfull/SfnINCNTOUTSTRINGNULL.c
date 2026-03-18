/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C022A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0077BF8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0077D94 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0078ADC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v11; // r12d
  unsigned __int8 *v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // ecx
  unsigned __int64 v17; // rdx
  unsigned __int8 *result; // rax
  __int64 v19; // rax
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rdi
  __m128i *v32; // rcx
  __int64 v33; // xmm0_8
  __int64 v34; // rdx
  char v35; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-384h]
  int v38; // [rsp+38h] [rbp-380h] BYREF
  unsigned __int8 *v39; // [rsp+40h] [rbp-378h]
  unsigned __int64 v40; // [rsp+58h] [rbp-360h] BYREF
  __int64 v41; // [rsp+60h] [rbp-358h]
  unsigned int v42[4]; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int128 v44; // [rsp+80h] [rbp-338h] BYREF
  __int64 v45; // [rsp+90h] [rbp-328h]
  __int128 v46; // [rsp+98h] [rbp-320h]
  __int64 v47; // [rsp+A8h] [rbp-310h]
  __m128i v48; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-2F8h]
  __int128 v50; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-2E0h]
  __int128 v52; // [rsp+100h] [rbp-2B8h]
  unsigned __int8 v53[96]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v54[512]; // [rsp+170h] [rbp-248h] BYREF

  *(_QWORD *)v42 = a3;
  v11 = a7 & 1;
  memset(v53, 0, sizeof(v53));
  v12 = v53;
  v40 = 0LL;
  v38 = 0;
  v41 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 4);
  v17 = (v16 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v17 < (v16 & 0x7FFFFFFFu) )
    goto LABEL_43;
  v37 = (v16 & 0x7FFFFFFF) + 2;
  if ( v16 >= 0 || (a7 & 1) != 0 )
    goto LABEL_9;
  v17 *= 2LL;
  if ( v17 > 0xFFFFFFFF )
  {
LABEL_43:
    v31 = 0LL;
    goto LABEL_44;
  }
  v37 = v17;
LABEL_9:
  result = AllocCallbackMessage(96, 1u, (unsigned int)v17, v54, 0, 0x200uLL);
  v12 = result;
  v39 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v50 = 0LL;
  v51 = 0LL;
  if ( v12 != v53 && v12 != v54 )
    PushW32ThreadLock((__int64)v12, &v50, (__int64)Win32FreePool);
  v19 = *(_QWORD *)v42;
  if ( *(_QWORD *)v42 < 2uLL )
    goto LABEL_43;
  *((_QWORD *)v12 + 5) = v15;
  *((_DWORD *)v12 + 12) = a2;
  *((_QWORD *)v12 + 7) = v19;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v37, (void **)v12 + 10) < 0 )
    goto LABEL_43;
  *((_DWORD *)v12 + 22) = v20;
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v44 = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = &v44;
  *((_QWORD *)&v44 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v14 + 480);
  v52 = *(_OWORD *)(v22 + 64);
  v46 = v52;
  v47 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v15;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v25 = KeUserModeCallback(8LL, v12, *(unsigned int *)v12, &v40, &v38);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v36);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v29 + 64) = v52;
  *(_QWORD *)(v29 + 80) = v47;
  if ( v25 < 0 || v38 != 24 )
    goto LABEL_43;
  v30 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v41 = v31;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_44;
  v32 = (__m128i *)v40;
  if ( v40 + 24 < v40 || v40 + 24 > MmUserProbeAddress )
    v32 = (__m128i *)MmUserProbeAddress;
  v33 = v32[1].m128i_i64[0];
  v48 = *v32;
  v49 = v33;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v48, 8)) )
    goto LABEL_44;
  v34 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v34 )
  {
    if ( (*(_DWORD *)(v34 + 84) & 1) != 0 && *(_QWORD *)(v34 + 96) == a4 )
      goto LABEL_43;
  }
  v31 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v48, v31, *(_DWORD *)(a4 + 4) >> 31, v11);
  v41 = v31;
  CopyOutputString((volatile void **)&v48, (struct _LARGE_STRING *)a4, v42[0], v11);
LABEL_44:
  if ( v12 != v53 && v12 != v54 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v50);
  }
  return (unsigned __int8 *)v31;
}
