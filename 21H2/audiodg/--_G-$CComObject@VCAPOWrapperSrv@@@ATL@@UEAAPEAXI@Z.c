/*
 * XREFs of ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400180F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *Block,
        char a2)
{
  char *LockSemaphore; // rcx
  HANDLE OwningThread; // rcx
  __int64 v6; // rcx

  Block->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *(_QWORD *)&Block->LockCount = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  Block->OwningThread = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  Block->LockSemaphore = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
  LODWORD(Block->SpinCount) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  LockSemaphore = (char *)Block[2].LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(LockSemaphore);
    Block[2].LockSemaphore = 0LL;
  }
  OwningThread = Block[2].OwningThread;
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  v6 = *(_QWORD *)&Block[2].LockCount;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( LOBYTE(Block[2].DebugInfo) )
  {
    LOBYTE(Block[2].DebugInfo) = 0;
    DeleteCriticalSection(Block + 1);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
