/*
 * XREFs of MiWriteValidPteNewProtection @ 0x14033DBC0
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x1402292C0 (MiUnlockNestedPageTableWritePte.c)
 *     MiMarkPteDirty @ 0x14023A12C (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x140241138 (MiDirtySystemCachePte.c)
 *     MiPerformSafePdeWrite @ 0x14025D6C0 (MiPerformSafePdeWrite.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiMakePteClean @ 0x14028ECFC (MiMakePteClean.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiRevokeExecutePte @ 0x1402E96B0 (MiRevokeExecutePte.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MiMakeCombineCandidateClean @ 0x14033A5B0 (MiMakeCombineCandidateClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiFlushDirtyBitsToPfn @ 0x14036B408 (MiFlushDirtyBitsToPfn.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     MmSetPageProtection @ 0x1403C2120 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x1405A47A0 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x1405A7708 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1405AA07C (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MxCreatePfnsForPtes @ 0x140AF3B50 (MxCreatePfnsForPtes.c)
 *     MiMarkBootKernelStack @ 0x140B05B1C (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x140B31048 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

char __fastcall MiWriteValidPteNewProtection(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v7; // rax
  __int64 v8; // r8

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v8 = v2 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = *(_QWORD *)a1;
      v2 = v8;
      if ( (v7 & 0x42) != 0 )
        v2 = v8 | 0x42;
    }
  }
  v4 = a2 ^ (a2 ^ v2) & 0x7F00000000000000LL;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_3;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_3:
    *(_QWORD *)a1 = v4;
    return (char)CurrentThread;
  }
  if ( !HIBYTE(word_140C51864) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  LOBYTE(CurrentThread) = MiWritePteShadow(a1, v4);
  return (char)CurrentThread;
}
