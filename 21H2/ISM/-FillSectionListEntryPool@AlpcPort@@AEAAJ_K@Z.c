/*
 * XREFs of ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C0720
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF650 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800BFF00 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0BA0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800BEFE8 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800BF4A0 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?PushBack@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z @ 0x1800C17E4 (-PushBack@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z.c)
 */

__int64 __fastcall AlpcPort::FillSectionListEntryPool(AlpcPort *this, unsigned __int64 a2)
{
  HANDLE *v4; // rax
  HANDLE *v5; // rsi
  HANDLE CurrentProcess; // rax
  void *v7; // rdi
  void *v8; // rbx
  HANDLE v9; // rax
  __int64 v10; // rdx
  wil::details::in1diag0 *v11; // rcx
  __int64 v12; // r8
  const char *v13; // r9
  unsigned int LastError; // ebx

  if ( *((_QWORD *)this + 10) >= a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = (HANDLE *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
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
      v5 = 0LL;
    }
    if ( !v5 )
      break;
    CurrentProcess = GetCurrentProcess();
    v7 = (void *)*((_QWORD *)this + 7);
    v8 = CurrentProcess;
    v9 = GetCurrentProcess();
    if ( !DuplicateHandle(v9, v7, v8, v5 + 8, 0, 0, 2u) )
    {
      LastError = wil::details::in1diag0::Return_GetLastError(v11, v10, v12, v13);
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v5, 1);
      return LastError;
    }
    v5[10] = this;
    NtList<AlpcPort::AlpcSectionListEntry>::PushBack((char *)this + 64, v5);
    if ( *((_QWORD *)this + 10) >= a2 )
      return 0LL;
  }
  LastError = -2147024882;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
  return LastError;
}
