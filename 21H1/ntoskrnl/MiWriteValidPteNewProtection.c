/*
 * XREFs of MiWriteValidPteNewProtection @ 0x1402BC370
 * Callers:
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x1402BBED4 (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1402BD9E0 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x1402BDA7C (MiDirtySystemCachePte.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 *     MiReplacePageTablePage @ 0x1403047BC (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiMakeCombineCandidateClean @ 0x14036713C (MiMakeCombineCandidateClean.c)
 *     MiDemoteCombinedPte @ 0x140368610 (MiDemoteCombinedPte.c)
 *     MiRevokeExecutePte @ 0x140371B00 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140376CE0 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x14037E97C (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x140540020 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x140542F94 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140545A7C (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x140A40BAC (MiMarkBootKernelStack.c)
 *     MxCreatePfns @ 0x140A4F2BC (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x140A6FE3C (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiWriteValidPteNewProtection(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  struct _KTHREAD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v9; // rax
  __int64 v10; // r8

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
      v9 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v10 = v2 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = *(_QWORD *)a1;
      v2 = v10;
      if ( (v9 & 0x42) != 0 )
        v2 = v10 | 0x42;
    }
  }
  v4 = a2 ^ (a2 ^ v2) & 0x7F00000000000000LL;
  result = (struct _KTHREAD *)MiPteInShadowRange(a1);
  if ( !(_DWORD)result )
    goto LABEL_3;
  if ( !(unsigned int)MiPteHasShadow(v7, v6) )
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
  if ( !HIBYTE(word_140C4DF48) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v4);
}
