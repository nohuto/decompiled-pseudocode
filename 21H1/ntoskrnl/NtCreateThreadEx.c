/*
 * XREFs of NtCreateThreadEx @ 0x1407075D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x14032EEA0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14032F8A0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x140707180 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x140707894 (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x140707A4C (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x140707AB4 (PspBuildCreateProcessContext.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  __int64 v13; // rdx
  ULONG v14; // r9d
  NTSTATUS result; // eax
  ULONG64 v16; // rdi
  ULONG v17; // r14d
  unsigned __int64 v18; // rax
  void *v19; // rsp
  __int64 v20; // r10
  NTSTATUS Thread; // ebx
  __int64 v22; // rcx
  _QWORD *Tag; // [rsp+20h] [rbp-50h]
  ULONG ContextLength; // [rsp+70h] [rbp+0h] BYREF
  ACCESS_MASK v25; // [rsp+74h] [rbp+4h]
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+80h] [rbp+10h] BYREF
  PVOID v28; // [rsp+88h] [rbp+18h]
  POBJECT_ATTRIBUTES v29; // [rsp+90h] [rbp+20h]
  _QWORD v30[10]; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v31[64]; // [rsp+F0h] [rbp+80h] BYREF
  char v32; // [rsp+2F0h] [rbp+280h] BYREF
  int v33; // [rsp+2F1h] [rbp+281h]
  __int16 v34; // [rsp+2F5h] [rbp+285h]
  char v35; // [rsp+2F7h] [rbp+287h]
  SIZE_T v36; // [rsp+2F8h] [rbp+288h]
  SIZE_T v37; // [rsp+300h] [rbp+290h]
  SIZE_T v38; // [rsp+308h] [rbp+298h]

  v29 = ObjectAttributes;
  v25 = DesiredAccess;
  v28 = Argument;
  memset(v30, 0, 0x48uLL);
  Object = 0LL;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  ContextEx = 0LL;
  ContextLength = 0;
  if ( (CreateFlags & 0xFFFFFF80) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v22 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  v32 = 0;
  v37 = StackSize;
  v38 = MaximumStackSize;
  v36 = ZeroBits;
  memset(v31, 0, sizeof(v31));
  if ( !AttributeList
    || (LOBYTE(v13) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v13, 1LL, v31),
        result >= 0) )
  {
    LOBYTE(v14) = KeGetCurrentThread()->PreviousMode;
    LODWORD(Tag) = 1917023056;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               2LL,
               PsProcessType,
               v14,
               Tag,
               &Object,
               0LL,
               0LL);
    if ( result >= 0 )
    {
      v16 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
      v17 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength2(v17, &ContextLength, (unsigned int)v16);
      v18 = ContextLength + 15LL;
      if ( v18 <= ContextLength )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextLength, 0, ContextLength);
      RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v17, &ContextEx, v16);
      PspCreateUserContext((unsigned int)&ContextLength, 1, PspUserThreadStart, (_DWORD)StartRoutine, (__int64)v28);
      Thread = PspCreateThread(
                 (__int64)ThreadHandle,
                 v25,
                 (ULONG_PTR)v29,
                 (ULONG_PTR)ProcessHandle,
                 0LL,
                 (__int64)v31,
                 v31[2],
                 (__int64)&ContextLength,
                 v30,
                 CreateFlags,
                 (__int64)StartRoutine,
                 v20,
                 (__int64)&v32);
      PspDeleteCreateProcessContext(v31);
      return Thread;
    }
  }
  return result;
}
