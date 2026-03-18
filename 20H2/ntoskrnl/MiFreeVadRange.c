/*
 * XREFs of MiFreeVadRange @ 0x1402308B8
 * Callers:
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406D7768 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1406DEFDC (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x14022E5E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiCanDeleteEnclave @ 0x140547B68 (MiCanDeleteEnclave.c)
 *     MiPrepareVadDelete @ 0x14062649C (MiPrepareVadDelete.c)
 *     MiAllocateVad @ 0x1406EF468 (MiAllocateVad.c)
 *     MiLockNestedVad @ 0x1408DC2B8 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408DC2D4 (MiUnlockNestedVad.c)
 *     PerfInfoLogVirtualFree @ 0x14093A4C4 (PerfInfoLogVirtualFree.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeVadRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  int v10; // ebp
  __int64 result; // rax
  void *v14; // rbx
  struct _KPROCESS *v15; // rbp
  int v16; // edx
  ULONG_PTR v17; // r13
  int v18; // edi
  __int64 LockedVadEvent; // rax
  __int64 v20; // rbx
  __int64 Vad; // rax
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0;
  v6 = *(_DWORD *)(BugCheckParameter3 + 48);
  v7 = a4;
  v8 = (a4 << 12) | 0xFFF;
  v9 = a3 << 12;
  v10 = a3;
  if ( (v6 & 0x100000) == 0 || (v6 & 0x1000000) != 0 || (v6 & 0x2000000) == 0 )
    goto LABEL_34;
  if ( a3 != (*(unsigned int *)(BugCheckParameter3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 32) << 32))
    || a4 != (*(unsigned int *)(BugCheckParameter3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(BugCheckParameter3);
  if ( (int)result >= 0 )
  {
LABEL_34:
    result = MiPrepareVadDelete(BugCheckParameter3, a2, v10, v7, (__int64)&v22);
    if ( (int)result >= 0 )
    {
      v14 = 0LL;
      v15 = (struct _KPROCESS *)a5;
      if ( !v22 )
      {
        if ( a6 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(BugCheckParameter3, 128LL);
          v20 = *(_QWORD *)(LockedVadEvent + 8);
          *(_QWORD *)(LockedVadEvent + 8) = 0LL;
          MiLockNestedVad(v20);
          *(_DWORD *)(v20 + 24) = v9 >> 12;
          *(_BYTE *)(v20 + 32) = v9 >> 44;
          *(_DWORD *)(v20 + 28) = v8 >> 12;
          *(_BYTE *)(v20 + 33) = v8 >> 44;
        }
        MiDeleteVad((PVOID)BugCheckParameter3);
LABEL_9:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v9, v8 - v9 + 1, v15);
        return 0LL;
      }
      if ( (*(_DWORD *)(a5 + 1124) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(BugCheckParameter3, 2LL) )
        return 3221225541LL;
      v17 = (unsigned int)(v16 + 62);
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v15, (unsigned int)(v16 + 62));
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v9, v8, 2LL);
        v14 = (void *)Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v15, v17);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v18 = MiDeletePartialVad((PVOID)BugCheckParameter3, (__int64)v14);
      if ( v18 >= 0 )
        goto LABEL_9;
      if ( v14 )
      {
        MiUnlockNestedVad(v14);
        ExFreePoolWithTag(v14, 0);
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v15, v17);
      }
      return (unsigned int)v18;
    }
  }
  return result;
}
