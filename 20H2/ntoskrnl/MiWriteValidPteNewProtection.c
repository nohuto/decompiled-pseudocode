/*
 * XREFs of MiWriteValidPteNewProtection @ 0x14029F0A0
 * Callers:
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiMarkPteDirty @ 0x14024F530 (MiMarkPteDirty.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MiMakePteClean @ 0x14029EC0C (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402CC62C (MiUnlockNestedPageTableWritePte.c)
 *     MiReplacePageTablePage @ 0x140313100 (MiReplacePageTablePage.c)
 *     MiDirtySystemCachePte @ 0x14031A254 (MiDirtySystemCachePte.c)
 *     MiFlushDirtyBitsToPfn @ 0x140322668 (MiFlushDirtyBitsToPfn.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiMakeCombineCandidateClean @ 0x140369ADC (MiMakeCombineCandidateClean.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     MiRevokeExecutePte @ 0x140374860 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140379A80 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x14038109C (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x1405306B0 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x140544040 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x140546FB4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140549A9C (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 *     MxCreatePfns @ 0x140A5563C (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x140A76E38 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiWriteValidPteNewProtection(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  struct _KTHREAD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v11; // rax
  __int64 v12; // r8

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
      v11 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v12 = v2 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = *(_QWORD *)a1;
      v2 = v12;
      if ( (v11 & 0x42) != 0 )
        v2 = v12 | 0x42;
    }
  }
  v4 = a2 ^ (a2 ^ v2) & 0x7F00000000000000LL;
  result = (struct _KTHREAD *)MiPteInShadowRange(a1);
  if ( !(_DWORD)result )
    goto LABEL_3;
  if ( !(unsigned int)MiPteHasShadow(v7, v6, v8, v9) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_3:
    *(_QWORD *)a1 = v4;
    return result;
  }
  if ( !HIBYTE(word_140C4DE88) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v4);
}
