/*
 * XREFs of NtCreateTimer2 @ 0x1406ABC10
 * Callers:
 *     NtCreateIRTimer @ 0x14078EE90 (NtCreateIRTimer.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x14029A570 (ExpExTimerAttributesAreValid.c)
 *     KeInitializeTimer2 @ 0x14029A5B0 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x140380F30 (KeInitializeIRTimer.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x140772AA8 (ExpCheckIRTimerAccess.c)
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int *v10; // r10
  char PreviousMode; // si
  NTSTATUS Object; // ecx
  PADAPTER_OBJECT v13; // rbx
  NTSTATUS result; // eax
  unsigned int v15; // [rsp+50h] [rbp-28h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF

  v17 = 0LL;
  DmaAdapter = 0LL;
  if ( !ExpExTimerAttributesAreValid(Attributes) )
    return -1073741582;
  if ( v9 )
    return -1073741583;
  if ( v10 && (Attributes & 2) == 0 )
    return -1073741584;
  v15 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)TimerHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    if ( v10 )
    {
      if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
        v7 = (__int64)v10;
      v15 = *(_DWORD *)v7;
    }
  }
  else if ( v10 )
  {
    v15 = *v10;
  }
  if ( (Attributes & 2) == 0 || (LOBYTE(v7) = PreviousMode, result = ExpCheckIRTimerAccess(v15, v7), result >= 0) )
  {
    LOBYTE(v8) = PreviousMode;
    Object = ObCreateObjectEx(v8, (_DWORD)ExpIRTimerObjectType, 0, PreviousMode);
    if ( Object >= 0 )
    {
      v13 = DmaAdapter;
      if ( (Attributes & 2) != 0 )
        KeInitializeIRTimer((__int64)DmaAdapter, 0LL, 0LL, (unsigned __int8 *)&v15, Attributes);
      else
        KeInitializeTimer2((__int64)DmaAdapter, 0LL, 0LL, Attributes);
      v13[8].DmaOperations = 0LL;
      *(_DWORD *)&v13[10].Version = Attributes;
      Object = ObInsertObjectEx(v13, 0LL, 0, 0LL, (__int64)&v17);
      v15 = Object;
      if ( Object >= 0 )
        *TimerHandle = (HANDLE)v17;
    }
    return Object;
  }
  return result;
}
