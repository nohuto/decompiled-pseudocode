/*
 * XREFs of PiSwQueuedCreateInfoCreate @ 0x1408AEC94
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x14074E15C (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x14074E2CC (PiSwPnPInfoInit.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEDA8 (PiSwQueuedCreateInfoFree.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwQueuedCreateInfoCreate(PVOID **a1, __int64 a2)
{
  PVOID *PoolWithTag; // rax
  int PWSTR; // ebx
  __int64 v6; // r8
  PVOID v7; // rcx

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x57706E50u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    PWSTR = -1073741670;
    goto LABEL_10;
  }
  memset(PoolWithTag, 0, 0x58uLL);
  PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 8), 0xC8uLL, 0x57706E50u, *a1);
  if ( PWSTR >= 0 )
  {
    PWSTR = PiSwPnPInfoInit((__int64)(*a1 + 1), a2);
    if ( PWSTR >= 0 )
    {
      if ( *(_QWORD *)(a2 + 96) )
      {
        *((_DWORD *)*a1 + 16) = *(_DWORD *)(a2 + 88);
        (*a1)[7] = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a2 + 88), 0x57706E50u);
        v7 = (*a1)[7];
        if ( !v7 )
        {
          PWSTR = -1073741670;
          goto LABEL_11;
        }
        memmove(v7, *(const void **)(a2 + 96), *(unsigned int *)(a2 + 88));
      }
      PWSTR = PnpCopyDevPropertyArray(
                *(unsigned int *)(a2 + 104),
                *(_QWORD *)(a2 + 112),
                v6,
                (_DWORD *)*a1 + 20,
                *a1 + 9);
LABEL_10:
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
LABEL_11:
  if ( *a1 )
  {
    PiSwQueuedCreateInfoFree(*a1);
    *a1 = 0LL;
  }
  return (unsigned int)PWSTR;
}
