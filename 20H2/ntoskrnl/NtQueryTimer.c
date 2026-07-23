/*
 * XREFs of NtQueryTimer @ 0x140951A40
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeQueryTimerDueTime @ 0x1405142C8 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG TimerInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  PULONG v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  int v15; // r15d
  int v16; // r12d
  __int64 v17; // rbx
  __int64 v18; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( TimerInformationClass )
    return -1073741821;
  if ( TimerInformationLength != 16 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)TimerInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerInformation < 0x7FFFFFFF0000LL )
      v10 = (__int64)TimerInformation;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(TimerHandle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v16 = *((_DWORD *)Object + 1);
    v17 = MEMORY[0xFFFFF78000000008];
    v18 = KeQueryTimerDueTime((__int64)Object, v12, v13, v14) - v17;
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( PreviousMode )
    {
      *((_BYTE *)TimerInformation + 8) = v16;
      *(_QWORD *)TimerInformation = v18;
      if ( v11 )
        *v11 = 16;
    }
    else
    {
      *((_BYTE *)TimerInformation + 8) = v16;
      *(_QWORD *)TimerInformation = v18;
      if ( v11 )
        *v11 = 16;
    }
  }
  return v15;
}
