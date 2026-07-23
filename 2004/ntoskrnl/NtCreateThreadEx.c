/*
 * XREFs of NtCreateThreadEx @ 0x1406B1710
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x1406B12C0 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x1406B19D4 (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x1406B1B8C (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x1406B1BF4 (PspBuildCreateProcessContext.c)
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
  NTSTATUS result; // eax
  ULONG64 v15; // rdi
  ULONG v16; // r14d
  unsigned __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // r10
  NTSTATUS Thread; // ebx
  __int64 v21; // rcx
  ULONG ContextLength; // [rsp+70h] [rbp+0h] BYREF
  ACCESS_MASK v23; // [rsp+74h] [rbp+4h]
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+80h] [rbp+10h] BYREF
  PVOID v26; // [rsp+88h] [rbp+18h]
  POBJECT_ATTRIBUTES v27; // [rsp+90h] [rbp+20h]
  _BYTE v28[80]; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v29[66]; // [rsp+F0h] [rbp+80h] BYREF
  char v30; // [rsp+300h] [rbp+290h] BYREF
  int v31; // [rsp+301h] [rbp+291h]
  __int16 v32; // [rsp+305h] [rbp+295h]
  char v33; // [rsp+307h] [rbp+297h]
  SIZE_T v34; // [rsp+308h] [rbp+298h]
  SIZE_T v35; // [rsp+310h] [rbp+2A0h]
  SIZE_T v36; // [rsp+318h] [rbp+2A8h]

  v27 = ObjectAttributes;
  v23 = DesiredAccess;
  v26 = Argument;
  memset(v28, 0, 0x48uLL);
  Object = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  ContextEx = 0LL;
  ContextLength = 0;
  if ( (CreateFlags & 0xFFFFFF80) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v21 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v21 = *(_QWORD *)v21;
  }
  v30 = 0;
  v35 = StackSize;
  v36 = MaximumStackSize;
  v34 = ZeroBits;
  memset(v29, 0, 0x208uLL);
  if ( !AttributeList
    || (LOBYTE(v13) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v13, 1LL, v29),
        result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( result >= 0 )
    {
      v15 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
      v16 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength2(v16, &ContextLength, (unsigned int)v15);
      v17 = ContextLength + 15LL;
      if ( v17 <= ContextLength )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextLength, 0, ContextLength);
      RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v16, &ContextEx, v15);
      PspCreateUserContext((unsigned int)&ContextLength, 1, PspUserThreadStart, (_DWORD)StartRoutine, (__int64)v26);
      Thread = PspCreateThread(
                 (__int64)ThreadHandle,
                 v23,
                 (ULONG_PTR)v27,
                 (ULONG_PTR)ProcessHandle,
                 0LL,
                 (__int64)v29,
                 v29[2],
                 (__int64)&ContextLength,
                 (__int64)v28,
                 CreateFlags,
                 (__int64)StartRoutine,
                 v19,
                 (__int64)&v30);
      PspDeleteCreateProcessContext(v29);
      return Thread;
    }
  }
  return result;
}
