/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C00F8E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v15; // ecx
  ULONG64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v21; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v21 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8);
  }
  else
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    v21 = Object;
    if ( v9 < 0 )
    {
      UserSetLastError(87LL, v10, v11);
      v5 = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v18 = 87LL;
      goto LABEL_17;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v15 = *(_DWORD *)(CurrentProcessWin32Process + 820);
    LODWORD(v19) = (v15 >> 4) & 3;
    HIDWORD(v19) = (v15 & 0x40) != 0;
    if ( (v15 & 0x100) != 0 )
      HIDWORD(v19) = ((v15 & 0x40) != 0) | 2;
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v19;
    goto LABEL_12;
  }
  v18 = 1471LL;
LABEL_17:
  UserSetLastError(v18, v12, v13);
  v5 = 0;
LABEL_12:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_14:
  UserSessionSwitchLeaveCrit(v16);
  return v5;
}
