/*
 * XREFs of NtUserSetProp @ 0x1C00F7800
 * Callers:
 *     <none>
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C000332C (SetSharedPropForFilteredProcesses.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00F79E8 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetProp(HWND a1, int a2, __int64 a3)
{
  int v5; // edi
  struct tagWND *v7; // rbx
  char *v8; // r15
  __int16 AtomFromAtomTable; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int DLT; // eax
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v16; // rax
  int v17; // ebx
  _BYTE v18[16]; // [rsp+30h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0;
  EnterCrit(0LL, 1LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v18, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v18) )
  {
    v7 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v18);
    v8 = (char *)v7 + 144;
    AtomFromAtomTable = word_1C033AF24;
    if ( !word_1C033AF24 )
    {
      DLT = DLT_JOB::getDLT();
      GetDomainLockRef(DLT);
      GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(v7);
      if ( GlobalAtomTableOfWindow )
      {
        AtomFromAtomTable = UserFindAtomFromAtomTable(
                              GlobalAtomTableOfWindow,
                              L"Microsoft.Windows.WindowFactory.ViewId");
        word_1C033AF24 = AtomFromAtomTable;
      }
      else
      {
        AtomFromAtomTable = word_1C033AF24;
      }
    }
    if ( (_WORD)a2 == AtomFromAtomTable )
    {
      *(_QWORD *)(*((_QWORD *)v7 + 5) + 312LL) = a3;
    }
    else if ( (*((_DWORD *)v7 + 82) & 0x40) != 0 )
    {
      v16 = *((_QWORD *)v7 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v16 + 416), &ApcState);
      v17 = SetSharedPropForFilteredProcesses((__int64)v7, a2, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v17 == 1 )
      {
        v5 = 1;
        goto LABEL_6;
      }
    }
    v5 = RealInternalSetProp(v8, (unsigned __int16)a2, a3, HIWORD(a2) != 0 ? 2 : 0);
  }
LABEL_6:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v18);
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v5;
}
