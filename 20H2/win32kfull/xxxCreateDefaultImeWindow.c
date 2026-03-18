/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C00BC098
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0036AD0 (DesktopAlloc.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00BC63C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     RtlInitLargeUnicodeString @ 0x1C00BC9CC (RtlInitLargeUnicodeString.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     CreateInputContext @ 0x1C00FBCF0 (CreateInputContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C015B368 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

__int64 __fastcall xxxCreateDefaultImeWindow(_QWORD *a1, __int16 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  PVOID *v10; // rbx
  _OWORD *v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // r15
  __int64 v22; // rdx
  ULONG64 v23; // rcx
  ULONG64 v24; // r8
  ULONG64 *v25; // rax
  ULONG64 v26; // rdx
  __int64 v28; // [rsp+90h] [rbp-A8h]
  __int128 v29; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v30[3]; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-58h]
  _BYTE v33[32]; // [rsp+F0h] [rbp-48h] BYREF
  ULONG64 v34; // [rsp+158h] [rbp+20h]

  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 792)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[99] )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[17] + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = a1[5];
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(a1[13] + 16LL) + 424LL) != v7[53]
    && (*(_DWORD *)(v9 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (PVOID *)v7[57];
  if ( !v10[16] )
    return 0LL;
  v11 = DesktopAlloc((__int64)v10, 0x18u);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  *v11 = xmmword_1C02E9A08;
  *((_QWORD *)v11 + 2) = 0x45004D0049LL;
  RtlInitLargeUnicodeString(&v29, v11);
  PushW32ThreadLock((__int64)v10, &v31, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v30[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v30;
  v30[1] = a1;
  HMLockObject(a1);
  if ( !PsGetCurrentProcessWin32Process(v15, v14, v16)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v33, 0LL);
  v21 = xxxCreateWindowEx(
          0,
          (wchar_t *)*(unsigned __int16 *)(gpsi + 898LL),
          *(unsigned __int16 *)(gpsi + 898LL),
          &v29,
          0x88000000,
          0,
          0,
          0,
          0,
          (__int64)a1,
          (__int64)v33,
          a3,
          0LL,
          0,
          1024,
          v8,
          0LL);
  v28 = v21;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v33);
  if ( v21 )
  {
    v25 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(v21);
    if ( v25 )
      v26 = *v25;
    else
      v26 = 0LL;
    v34 = v26;
    if ( v26 )
    {
      if ( (v26 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = MmUserProbeAddress;
      if ( v26 >= MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      *(_BYTE *)v26 = *(_BYTE *)v26;
      *(_BYTE *)(v26 + 55) = *(_BYTE *)(v26 + 55);
      v24 = v34;
      v22 = *(_DWORD *)(v34 + 44) | 8u;
      *(_DWORD *)(v34 + 44) = v22;
      LOBYTE(v23) = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
      if ( (_BYTE)v23 == 64 && *(_QWORD **)(a1[13] + 16LL) != v7 )
      {
        v22 = (unsigned int)v22 | 0x10;
        *(_DWORD *)(v34 + 44) = v22;
      }
    }
    else
    {
      xxxDestroyWindow(v21);
      v28 = 0LL;
    }
  }
  ThreadUnlock1(v23, v22, v24);
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock(&v31);
  return v28;
}
