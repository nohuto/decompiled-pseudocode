/*
 * XREFs of NtUserGetGuiResources @ 0x1C0128C10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, unsigned int a2)
{
  PVOID v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  _DWORD *CurrentProcessWin32Process; // rax
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int *v13; // rax
  unsigned int PeakHandleCount; // eax
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v8 = 0;
  if ( a2 > 4 )
    goto LABEL_11;
  if ( Handle == (HANDLE)-2LL )
  {
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( !v11 )
      {
        v13 = (unsigned int *)giheCount;
        goto LABEL_18;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 2 )
          goto LABEL_10;
        v13 = (unsigned int *)giheCountPeak;
LABEL_18:
        v8 = *v13;
        goto LABEL_10;
      }
      PeakHandleCount = GreGetPeakHandleCount();
    }
    else
    {
      PeakHandleCount = GreGetHandleCount();
    }
    v8 = PeakHandleCount;
    goto LABEL_10;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process(v6);
    goto LABEL_5;
  }
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v15 < 0 )
  {
LABEL_11:
    UserSetLastError(87LL, v5, v7);
    goto LABEL_10;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    goto LABEL_25;
  CurrentProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(v4);
LABEL_5:
  if ( CurrentProcessWin32Process )
  {
    if ( a2 )
    {
      v16 = a2 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 2 )
            v8 = CurrentProcessWin32Process[18];
        }
        else
        {
          v8 = CurrentProcessWin32Process[16];
        }
      }
      else
      {
        v8 = CurrentProcessWin32Process[17];
      }
    }
    else
    {
      v8 = CurrentProcessWin32Process[15];
    }
    goto LABEL_8;
  }
LABEL_25:
  UserSetLastError(87LL, v5, v7);
LABEL_8:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
