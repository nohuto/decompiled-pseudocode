/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140263340
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140262EA4 (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1402649B0 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x140264A4C (MiDirtySystemCachePte.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14032EA88 (MiUnlockNestedPageTableWritePte.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1403519CC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeCombineCandidateClean @ 0x140367AFC (MiMakeCombineCandidateClean.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     MiRevokeExecutePte @ 0x140372910 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140377AF0 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x14037F36C (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x140540670 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x1405435E4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1405460CC (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x140A46408 (MiMarkBootKernelStack.c)
 *     MxCreatePfns @ 0x140A54FBC (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x140A70A94 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
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
  if ( !HIBYTE(word_140C4DE08) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v4);
}
