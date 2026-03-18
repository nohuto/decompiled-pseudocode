/*
 * XREFs of _NtUserGetGuiResources@8 @ 0xAED8C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserGetGuiResources(HANDLE Handle, char *Object)
{
  int v2; // esi
  char *v3; // ebx
  char *v4; // edi
  _DWORD *CurrentProcessWin32Process; // eax
  int *v7; // eax
  int PeakHandleCount; // eax
  NTSTATUS v9; // eax
  char *v10; // edi
  char *v11; // edi

  v2 = 0;
  v3 = 0;
  EnterSharedCrit(0, 1);
  v4 = Object;
  if ( (unsigned int)Object > 4 )
    goto LABEL_11;
  if ( Handle == (HANDLE)-2 )
  {
    if ( Object )
    {
      if ( Object == (char *)1 )
      {
        v7 = (int *)_giheCount;
        goto LABEL_18;
      }
      if ( Object != (char *)2 )
      {
        if ( Object != (char *)4 )
          goto LABEL_10;
        v7 = (int *)_giheCountPeak;
LABEL_18:
        v2 = *v7;
        goto LABEL_10;
      }
      PeakHandleCount = GreGetPeakHandleCount();
    }
    else
    {
      PeakHandleCount = GreGetHandleCount();
    }
    v2 = PeakHandleCount;
    goto LABEL_10;
  }
  if ( Handle == (HANDLE)-1 )
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
    goto LABEL_5;
  }
  Object = 0;
  v9 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Object, 0);
  v3 = Object;
  if ( v9 < 0 )
  {
LABEL_11:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_10;
  }
  if ( PsGetProcessSessionId(Object) != _gSessionId )
    goto LABEL_25;
  CurrentProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(v3);
LABEL_5:
  if ( CurrentProcessWin32Process )
  {
    if ( v4 )
    {
      v10 = v4 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == (char *)2 )
            v2 = CurrentProcessWin32Process[12];
        }
        else
        {
          v2 = CurrentProcessWin32Process[10];
        }
      }
      else
      {
        v2 = CurrentProcessWin32Process[11];
      }
    }
    else
    {
      v2 = CurrentProcessWin32Process[9];
    }
    goto LABEL_8;
  }
LABEL_25:
  UserSetLastError((struct _NT_TIB *)0x57);
LABEL_8:
  if ( v3 )
    ObfDereferenceObject(v3);
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v2;
}
