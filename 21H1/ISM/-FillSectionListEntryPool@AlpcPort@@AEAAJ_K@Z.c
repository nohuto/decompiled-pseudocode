/*
 * XREFs of ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C07B0
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF6E0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800BFF90 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0C30 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800BF530 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?PushBack@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z @ 0x1800C1874 (-PushBack@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800C1C48 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C1C70 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall AlpcPort::FillSectionListEntryPool(AlpcPort *this, unsigned __int64 a2)
{
  HANDLE *v4; // rax
  int v5; // edx
  HANDLE *v6; // rsi
  HANDLE CurrentProcess; // rax
  void *v8; // rdi
  void *v9; // rbx
  HANDLE v10; // rax
  wil::details::in1diag0 *v11; // rcx
  unsigned int LastError; // ebx

  if ( *((_QWORD *)this + 10) >= a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = (HANDLE *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v4;
    if ( v4 )
    {
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4[5] = 0LL;
      v4[6] = 0LL;
      *((_DWORD *)v4 + 14) = 0;
      *v4 = &AlpcPort::AlpcSectionListEntry::`vftable';
      v4[8] = 0LL;
      v4[9] = 0LL;
      v4[10] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
      break;
    CurrentProcess = GetCurrentProcess();
    v8 = (void *)*((_QWORD *)this + 7);
    v9 = CurrentProcess;
    v10 = GetCurrentProcess();
    if ( !DuplicateHandle(v10, v8, v9, v6 + 8, 0, 0, 2u) )
    {
      LastError = wil::details::in1diag0::Return_GetLastError(v11);
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v6, 1);
      return LastError;
    }
    v6[10] = this;
    NtList<AlpcPort::AlpcSectionListEntry>::PushBack((char *)this + 64, v6);
    if ( *((_QWORD *)this + 10) >= a2 )
      return 0LL;
  }
  LastError = -2147024882;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v5);
  return LastError;
}
