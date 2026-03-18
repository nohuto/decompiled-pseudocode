/*
 * XREFs of MmGetSectionStrongImageReference @ 0x1408D4928
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspGetSystemDllSecureHandle @ 0x140A90B74 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     MiGetSectionStrongImageReference @ 0x1408D48D0 (MiGetSectionStrongImageReference.c)
 */

NTSTATUS __fastcall MmGetSectionStrongImageReference(void *a1, KPROCESSOR_MODE a2, struct _DMA_ADAPTER *a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int SectionStrongImageReference; // ebx
  struct _DMA_ADAPTER *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1
    || (v11 = 0LL,
        result = ObReferenceObjectByHandle(a1, 0, MmSectionObjectType, a2, (PVOID *)&v11, 0LL),
        a3 = v11,
        result >= 0) )
  {
    v8 = MiSectionControlArea((__int64)a3);
    if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(v8 + 92) & 0xC0000) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 96);
      if ( *(_QWORD *)(v9 + 56)
        || (SectionStrongImageReference = MiGetSectionStrongImageReference(*(_QWORD *)(v8 + 96)),
            SectionStrongImageReference >= 0) )
      {
        SectionStrongImageReference = 0;
        *a4 = *(_QWORD *)(v9 + 56);
      }
    }
    else
    {
      SectionStrongImageReference = -1073741811;
    }
    if ( a1 )
      HalPutDmaAdapter(a3);
    return SectionStrongImageReference;
  }
  return result;
}
