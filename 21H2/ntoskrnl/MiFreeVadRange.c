/*
 * XREFs of MiFreeVadRange @ 0x140323314
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1406156AC (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x14061E080 (MmStoreFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140321710 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCanDeleteEnclave @ 0x1405498A8 (MiCanDeleteEnclave.c)
 *     MiAllocateVad @ 0x1406C04D8 (MiAllocateVad.c)
 *     MiPrepareVadDelete @ 0x140705C58 (MiPrepareVadDelete.c)
 *     MiLockNestedVad @ 0x1408D9BD8 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D9BF4 (MiUnlockNestedVad.c)
 *     PerfInfoLogVirtualFree @ 0x140937E64 (PerfInfoLogVirtualFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeVadRange(ULONG_PTR BugCheckParameter4, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  int v10; // ebp
  __int64 result; // rax
  int v14; // r15d
  __int64 v15; // rbx
  struct _KPROCESS *v16; // rbp
  int v17; // edx
  __int64 v18; // r13
  int v19; // edi
  __int64 **LockedVadEvent; // rax
  __int64 Vad; // rax
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0;
  v6 = *(_DWORD *)(BugCheckParameter4 + 48);
  v7 = a4;
  v8 = (a4 << 12) | 0xFFF;
  v9 = a3 << 12;
  v10 = a3;
  if ( (v6 & 0x100000) == 0 || (v6 & 0x1000000) != 0 || (v6 & 0x2000000) == 0 )
    goto LABEL_34;
  if ( a3 != (*(unsigned int *)(BugCheckParameter4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4
                                                                                                 + 32) << 32))
    || a4 != (*(unsigned int *)(BugCheckParameter4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4
                                                                                                 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(BugCheckParameter4);
  if ( (int)result >= 0 )
  {
LABEL_34:
    result = MiPrepareVadDelete(BugCheckParameter4, a2, v10, v7, (__int64)&v22);
    if ( (int)result >= 0 )
    {
      v14 = v22;
      v15 = 0LL;
      v16 = (struct _KPROCESS *)a5;
      if ( !v22 )
      {
        if ( a6 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(BugCheckParameter4, 128);
          v15 = (__int64)LockedVadEvent[1];
          LockedVadEvent[1] = 0LL;
          MiLockNestedVad(v15);
          *(_DWORD *)(v15 + 24) = v9 >> 12;
          *(_BYTE *)(v15 + 32) = v9 >> 44;
          *(_DWORD *)(v15 + 28) = v8 >> 12;
          *(_BYTE *)(v15 + 33) = v8 >> 44;
        }
        MiDeleteVad((_DWORD *)BugCheckParameter4, v15, 0);
LABEL_9:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v9, v8 - v9 + 1, v16);
        return 0LL;
      }
      if ( (*(_DWORD *)(a5 + 1124) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(BugCheckParameter4, 2) )
        return 3221225541LL;
      v18 = (unsigned int)(v17 + 62);
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v16, (unsigned int)(v17 + 62));
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v9, v8, 2LL);
        v15 = Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota(v16, v18);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v19 = MiDeletePartialVad((_QWORD *)BugCheckParameter4, v9, v8, v14, v15);
      if ( v19 >= 0 )
        goto LABEL_9;
      if ( v15 )
      {
        MiUnlockNestedVad(v15);
        ExFreePoolWithTag((PVOID)v15, 0);
        PsReturnProcessNonPagedPoolQuota(v16, v18);
      }
      return (unsigned int)v19;
    }
  }
  return result;
}
