/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C00313C8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C003196C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     RtlInitLargeUnicodeString @ 0x1C0031CBC (RtlInitLargeUnicodeString.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     DesktopAlloc @ 0x1C00ADCA0 (DesktopAlloc.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     CreateInputContext @ 0x1C00FF9C0 (CreateInputContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0158D14 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

__int64 __fastcall xxxCreateDefaultImeWindow(_QWORD *a1, __int16 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  PVOID *v10; // rbx
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 Window; // r15
  ULONG64 *v18; // rax
  ULONG64 v19; // rdx
  int v20; // edx
  __int64 v22; // [rsp+90h] [rbp-A8h]
  __int128 v23; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v24[3]; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-58h]
  _BYTE v27[32]; // [rsp+F0h] [rbp-48h] BYREF
  ULONG64 v28; // [rsp+158h] [rbp+20h]

  v23 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 784)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[98] )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[17] + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = a1[5];
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(a1[13] + 16LL) + 416LL) != v7[52]
    && (*(_DWORD *)(v9 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (PVOID *)v7[56];
  if ( !v10[16] )
    return 0LL;
  v11 = DesktopAlloc(v10, 24LL, 9LL);
  v12 = (void *)v11;
  if ( !v11 )
    return 0LL;
  *(_OWORD *)v11 = xmmword_1C02EA448;
  *(_QWORD *)(v11 + 16) = 0x45004D0049LL;
  RtlInitLargeUnicodeString(&v23, v11);
  PushW32ThreadLock((__int64)v10, &v25, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v24[0] = *(_QWORD *)(v13 + 408);
  *(_QWORD *)(v13 + 408) = v24;
  v24[1] = a1;
  HMLockObject(a1);
  if ( !PsGetCurrentProcessWin32Process(v14)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27, 0LL);
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 898LL),
             *(unsigned __int16 *)(gpsi + 898LL),
             (unsigned int)&v23,
             -2013265920,
             0,
             0,
             0,
             0,
             (__int64)a1,
             (__int64)v27,
             a3,
             0LL,
             0,
             1024,
             v8,
             0LL);
  v22 = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v27);
  if ( Window )
  {
    v18 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v18 )
      v19 = *v18;
    else
      v19 = 0LL;
    v28 = v19;
    if ( v19 )
    {
      if ( (v19 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v19 >= MmUserProbeAddress )
        v19 = MmUserProbeAddress;
      *(_BYTE *)v19 = *(_BYTE *)v19;
      *(_BYTE *)(v19 + 55) = *(_BYTE *)(v19 + 55);
      v20 = *(_DWORD *)(v28 + 44) | 8;
      *(_DWORD *)(v28 + 44) = v20;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 0xC0) == 0x40 && *(_QWORD **)(a1[13] + 16LL) != v7 )
        *(_DWORD *)(v28 + 44) = v20 | 0x10;
    }
    else
    {
      xxxDestroyWindow(Window);
      v22 = 0LL;
    }
  }
  ThreadUnlock1();
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock(&v25);
  return v22;
}
