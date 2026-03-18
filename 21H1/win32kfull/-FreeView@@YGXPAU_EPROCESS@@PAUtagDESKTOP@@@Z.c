/*
 * XREFs of ?FreeView@@YGXPAU_EPROCESS@@PAUtagDESKTOP@@@Z @ 0x8237C
 * Callers:
 *     _FreeDesktop@4 @ 0x821E8 (_FreeDesktop@4.c)
 *     _UnmapDesktop@4 @ 0x82292 (_UnmapDesktop@4.c)
 * Callees:
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall FreeView(struct _KPROCESS *a1, _DWORD *a2)
{
  int ProcessWin32Process; // ebx
  int v4; // edi
  _DWORD *DesktopView; // edi
  int DLT; // eax
  _DWORD **v7; // ebx
  _DWORD *i; // ecx
  int v10; // [esp+10h] [ebp-20h]
  struct _KAPC_STATE ApcState; // [esp+14h] [ebp-1Ch] BYREF

  if ( a1 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(a1);
    if ( ProcessWin32Process )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      v4 = (int)a2;
      if ( PsGetProcessSessionId(a1) == *a2 )
      {
        v10 = 0;
      }
      else
      {
        KeStackAttachProcess(a1, &ApcState);
        v10 = 1;
      }
      DesktopView = GetDesktopView(ProcessWin32Process, v4);
      if ( DesktopView )
      {
        PsGetProcessSessionId(a1);
        MmUnmapViewOfSection(a1, DesktopView[2]);
        DLT = DLT_DESKTOP::getDLT();
        GetDomainLockRef(DLT);
        v7 = (_DWORD **)(ProcessWin32Process + 384);
        for ( i = *v7; i; i = (_DWORD *)*i )
        {
          if ( i == DesktopView )
            break;
          v7 = (_DWORD **)i;
        }
        *v7 = (_DWORD *)*DesktopView;
        Win32FreePool(DesktopView);
      }
      if ( v10 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
