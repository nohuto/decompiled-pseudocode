/*
 * XREFs of _RtlpCreateUserThreadEx@44 @ 0x4B2F0524
 * Callers:
 *     _EtwpCreateEtwThread@8 @ 0x4B2F04A0 (_EtwpCreateEtwThread@8.c)
 *     _RtlCreateUserThread@40 @ 0x4B2F04F0 (_RtlCreateUserThread@40.c)
 *     _DbgUiIssueRemoteBreakin@4 @ 0x4B32DB10 (_DbgUiIssueRemoteBreakin@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateThreadEx@44 @ 0x4B2F3590 (_NtCreateThreadEx@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpCreateUserThreadEx(
        HANDLE ProcessHandle,
        void *a2,
        int a3,
        SIZE_T ZeroBits,
        unsigned int a5,
        int a6,
        NTSTATUS (__cdecl *a7)(PVOID),
        void *a8,
        HANDLE *a9,
        _DWORD *a10)
{
  ULONG v10; // eax
  NTSTATUS result; // eax
  SIZE_T v12; // [esp+0h] [ebp-64h]
  _PS_ATTRIBUTE_LIST *v13; // [esp+8h] [ebp-5Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-54h] BYREF
  PUSER_THREAD_START_ROUTINE StartRoutine; // [esp+28h] [ebp-3Ch]
  int v16; // [esp+2Ch] [ebp-38h] BYREF
  int v17; // [esp+30h] [ebp-34h]
  HANDLE ThreadHandle; // [esp+34h] [ebp-30h] BYREF
  _DWORD v19[9]; // [esp+38h] [ebp-2Ch] BYREF

  v16 = 0;
  v17 = 0;
  StartRoutine = a7;
  ThreadHandle = a8;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return -1073741811;
  v10 = a3 & 1;
  if ( (a3 & 2) != 0 )
    v10 |= 2u;
  if ( (a3 & 4) != 0 )
    v10 |= 4u;
  if ( (a3 & 0x10) != 0 )
    v10 |= 0x10u;
  if ( (a3 & 0x20) != 0 )
    v10 |= 0x20u;
  if ( (a3 & 0x40) != 0 )
    v10 |= 0x40u;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v19[4] = 0;
  v19[3] = &v16;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a2;
  v19[1] = 65539;
  v19[2] = 8;
  v19[0] = 20;
  result = NtCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             StartRoutine,
             ThreadHandle,
             v10,
             __PAIR64__(a5, ZeroBits),
             __PAIR64__(v19, HIDWORD(ZeroBits)),
             v12,
             v13);
  if ( result >= 0 )
  {
    if ( a9 )
      *a9 = ThreadHandle;
    else
      NtClose(ThreadHandle);
    if ( a10 )
    {
      *a10 = v16;
      a10[1] = v17;
    }
    return 0;
  }
  return result;
}
