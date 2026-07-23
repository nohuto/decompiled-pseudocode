/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x1409AA6C0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1402C1310 (KeGetProcessorNumberFromIndex.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1403111AC (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140312D98 (KeRestoreExtendedAndSupervisorState.c)
 *     HalGetProcessorIdByNtNumber @ 0x140374320 (HalGetProcessorIdByNtNumber.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x140380A48 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x140381138 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1403811BC (KeRestoreProcessorSpecificFeatures.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PnprGetStackLimits @ 0x140509AC8 (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x14050E254 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14050E330 (KeSuspendClockTimerSafe.c)
 *     PnprMirrorMarkedPages @ 0x1409AA35C (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG v4; // r14d
  int v5; // esi
  bool v6; // bl
  __int64 v7; // rax
  __int64 Group; // r15
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // di
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  _OWORD v17[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-48h]
  int v19; // [rsp+90h] [rbp-8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+20h] BYREF

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v21 = 0;
  v5 = (int)SystemArgument1;
  v22 = 0LL;
  memset(v17, 0, sizeof(v17));
  v6 = 1;
  v18 = 0LL;
  v7 = PnprContext;
  *DeferredContext = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _disable();
    v6 = (v19 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)SystemArgument1 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex((ULONG)SystemArgument2, &ProcNumber) < 0 )
    goto LABEL_53;
  Group = ProcNumber.Group;
  v9 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group)) == 0 )
    goto LABEL_26;
  while ( *(int *)(PnprContext + 200) < 1 )
    _mm_pause();
  KeSuspendClockTimerSafe();
  KeSaveIptStateBeforeProcessorGoesOffline();
  v12 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v12 = (int)KeSaveExtendedAndSupervisorState(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 (PVOID *)v17,
                 v10,
                 v11) >= 0;
  if ( HalGetProcessorIdByNtNumber(v4, &v21) < 0 )
LABEL_53:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 20896) & 2) != 0 )
  {
    LOBYTE(v13) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 20936))(*(_QWORD *)(PnprContext + 20880), v21, v13);
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    ((void (__fastcall *)(_QWORD, __int64 *))off_140C006E8[0])(*(_QWORD *)(PnprContext + 20872), &v22);
  ((void (__fastcall *)(_QWORD))off_140C00680[0])(*(_QWORD *)(PnprContext + 20872));
  if ( (*(_DWORD *)(PnprContext + 20896) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 20936))(*(_QWORD *)(PnprContext + 20880), v21, 0LL);
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v6 )
    _enable();
  KeRestoreProcessorSpecificFeatures();
  if ( v12 )
    KeRestoreExtendedAndSupervisorState((__int64)v17);
  KeRestoreIptStateAfterProcessorComesOnline();
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
LABEL_26:
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    while ( *(int *)(PnprContext + 200) < 2 )
      _mm_pause();
    if ( (int)PnprMirrorMarkedPages() < 0 )
    {
      v14 = PnprContext;
      v15 = *(_DWORD *)(PnprContext + 20984);
      if ( !v15 )
        v15 = 2258;
      *(_DWORD *)(PnprContext + 20984) = v15;
      v16 = *(_DWORD *)(v14 + 20988);
      if ( !v16 )
        v16 = 1;
      *(_DWORD *)(v14 + 20988) = v16;
    }
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  }
  while ( *(int *)(PnprContext + 200) < 4 )
    _mm_pause();
  PnprGetStackLimits((char **)(PnprContext + 216 + 8LL * v4), (unsigned __int64 *)(PnprContext + 10456 + 8LL * v4));
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    if ( (v9 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * Group)) != 0 )
    {
      ((void (__fastcall *)(__int64))off_140C006F0[0])(v22);
    }
    else if ( v6 )
    {
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
