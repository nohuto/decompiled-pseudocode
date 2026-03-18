/*
 * XREFs of MiInsertHotPatchRecord @ 0x140973D6C
 * Callers:
 *     MiLoadHotPatch @ 0x140974020 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1409743A4 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiCompareHotPatchNodes @ 0x140972C58 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertHotPatchRecord(unsigned __int64 *a1, _QWORD *a2, int a3)
{
  unsigned __int64 *v3; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rax
  bool v12; // zf

  v3 = 0LL;
  if ( a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C533C0, 0LL);
  }
  v8 = 0;
LABEL_5:
  v9 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v10 = MiCompareHotPatchNodes((__int64)a2, (__int64)v9);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v3 = v9;
          RtlAvlRemoveNode(a1, v9);
          goto LABEL_5;
        }
        v11 = *v9;
        if ( !*v9 )
          break;
      }
      else
      {
        v11 = v9[1];
        if ( !v11 )
        {
          v8 = 1;
          break;
        }
      }
      v9 = (unsigned __int64 *)v11;
    }
  }
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v9, v8, a2);
  if ( !a3 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C533C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C533C0);
    KeAbPostRelease((ULONG_PTR)&qword_140C533C0);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
