/*
 * XREFs of _CheckHandleFlag@16 @ 0x6F9E4
 * Callers:
 *     _OkayToCloseDesktop@4 @ 0x6ED80 (_OkayToCloseDesktop@4.c)
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _OkayToCloseWindowStation@4 @ 0x70622 (_OkayToCloseWindowStation@4.c)
 *     __GetUserObjectInformation@20 @ 0x8084C (__GetUserObjectInformation@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall CheckHandleFlag(struct _KPROCESS *a1, int a2, unsigned int a3, int a4)
{
  int v4; // esi
  unsigned int v5; // ebx
  int ProcessWin32Process; // eax
  int v10; // [esp+18h] [ebp-20h]
  struct _KAPC_STATE ApcState; // [esp+1Ch] [ebp-1Ch] BYREF

  v4 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = a4 + 3 * (a3 >> 2);
  v10 = 0;
  EnterHandleFlagsCrit();
  if ( a1 )
  {
    if ( PsGetProcessSessionId(a1) != a2 )
    {
      KeStackAttachProcess(a1, &ApcState);
      v10 = 1;
    }
    ProcessWin32Process = PsGetProcessWin32Process(a1);
  }
  else
  {
    ProcessWin32Process = PsGetCurrentProcessWin32Process();
  }
  if ( ProcessWin32Process
    && v5 < *(_DWORD *)(ProcessWin32Process + 392)
    && ((*(int *)(*(_DWORD *)(ProcessWin32Process + 396) + 4 * (v5 >> 5)) >> (v5 & 0x1F)) & 1) != 0 )
  {
    v4 = 1;
  }
  if ( v10 )
    KeUnstackDetachProcess(&ApcState);
  LeaveHandleFlagsCrit();
  return v4;
}
