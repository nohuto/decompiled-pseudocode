/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C00FEA90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v13; // ecx
  ULONG64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v19; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v19 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  }
  else
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    v19 = Object;
    if ( v7 < 0 )
    {
      UserSetLastError(87LL, v8, v9);
      v5 = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v16 = 87LL;
      goto LABEL_17;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v13 = *(_DWORD *)(CurrentProcessWin32Process + 820);
    LODWORD(v17) = (v13 >> 4) & 3;
    HIDWORD(v17) = (v13 & 0x40) != 0;
    if ( (v13 & 0x100) != 0 )
      HIDWORD(v17) = ((v13 & 0x40) != 0) | 2;
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v17;
    goto LABEL_12;
  }
  v16 = 1471LL;
LABEL_17:
  UserSetLastError(v16, v10, v11);
  v5 = 0;
LABEL_12:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_14:
  UserSessionSwitchLeaveCrit(v14, v10, v11);
  return v5;
}
