/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x1405489B4
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 * Callees:
 *     MiRelockFaultState @ 0x1403052A8 (MiRelockFaultState.c)
 *     MmIsAddressValidEx @ 0x14030C4F0 (MmIsAddressValidEx.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     NtWaitLowEventPair @ 0x140726250 (NtWaitLowEventPair.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42A4 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiKernelWriteToExecutableMemory(__int64 a1, __int64 a2, struct _KPROCESS *a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // r8
  _DWORD *v15; // r9

  v6 = a3[1].ActiveProcessorsPadding[8];
  v7 = a1 + 56;
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)(v6 + 616);
  v10 = MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  if ( (int)NtWaitLowEventPair() >= 0 )
  {
    MiRelockFaultState(v7, v10, v11, v12);
    if ( v9 == *(_QWORD *)(v6 + 616) && ((*(_BYTE *)(a1 + 69) & 1) == 0 || MmIsAddressValidEx(v8)) )
      return ((a2 ^ MI_READ_PTE_LOCK_FREE(v8)) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    else
      return (unsigned int)-1073740748;
  }
  else
  {
    MiForceCrashForInvalidAccess(a3);
    v13 = -1073739997;
    MiRelockFaultState(v7, v10, v14, v15);
  }
  return v13;
}
