/*
 * XREFs of NtUserGetGuiResources @ 0x1C012AD30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, unsigned int a2)
{
  PVOID v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  _DWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int *v15; // rax
  unsigned int PeakHandleCount; // eax
  NTSTATUS v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ebx
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
      v13 = a2 - 1;
      if ( !v13 )
      {
        v15 = (unsigned int *)giheCount;
        goto LABEL_18;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 2 )
          goto LABEL_10;
        v15 = (unsigned int *)giheCountPeak;
LABEL_18:
        v8 = *v15;
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
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process(v6, v5, v7);
    goto LABEL_5;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v17 < 0 )
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
      v18 = a2 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 2 )
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
  UserSetLastError(87LL, v10, v11);
LABEL_8:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_10:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
