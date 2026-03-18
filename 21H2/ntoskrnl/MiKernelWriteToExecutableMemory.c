/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x1405A7608
 * Callers:
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 * Callees:
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     NtWaitLowEventPair @ 0x1407F4E10 (NtWaitLowEventPair.c)
 *     MiForceCrashForInvalidAccess @ 0x140967E00 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiKernelWriteToExecutableMemory(__int64 a1, __int64 a2, struct _KPROCESS *a3)
{
  unsigned __int64 v6; // r15
  __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned int v11; // ebx

  v6 = a3[1].ActiveProcessors.StaticBitmap[28];
  v7 = (__int64 *)(a1 + 56);
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)(v6 + 600);
  v10 = MiReleaseFaultState(a1 + 56, 17, 0LL);
  if ( (int)NtWaitLowEventPair() >= 0 )
  {
    MiRelockFaultState(v7, v10);
    if ( v9 == *(_QWORD *)(v6 + 600) && ((*(_BYTE *)(a1 + 69) & 1) == 0 || MmIsAddressValidEx(v8)) )
      return ((a2 ^ MI_READ_PTE_LOCK_FREE(v8)) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    else
      return (unsigned int)-1073740748;
  }
  else
  {
    MiForceCrashForInvalidAccess(a3);
    v11 = -1073739997;
    MiRelockFaultState(v7, v10);
  }
  return v11;
}
