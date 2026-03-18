/*
 * XREFs of MiCreateImageOrDataSection @ 0x1405FB740
 * Callers:
 *     MiCreateSection @ 0x1405FAF70 (MiCreateSection.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     ObDereferenceObjectEx @ 0x1402287B0 (ObDereferenceObjectEx.c)
 *     IoGetFileMemoryPartitionInformation @ 0x140228AA8 (IoGetFileMemoryPartitionInformation.c)
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     IoSetTopLevelIrp @ 0x140228F20 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140228F40 (IoGetTopLevelIrp.c)
 *     MiDereferenceControlAreaBySection @ 0x14024A858 (MiDereferenceControlAreaBySection.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     IoAllowExecution @ 0x1402774CC (IoAllowExecution.c)
 *     ObFastReplaceObject @ 0x1402C686C (ObFastReplaceObject.c)
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 *     MiReferenceExistingControlArea @ 0x140344320 (MiReferenceExistingControlArea.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403443D8 (CcWaitForUninitializeCacheMap.c)
 *     MiForceSectionClosed @ 0x140344E00 (MiForceSectionClosed.c)
 *     MiZeroSectionObjectPointer @ 0x14036063C (MiZeroSectionObjectPointer.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     MiShareExistingControlArea @ 0x1405FAA68 (MiShareExistingControlArea.c)
 *     MiCallCreateSectionFilters @ 0x1405FBB40 (MiCallCreateSectionFilters.c)
 *     MiCreateNewSection @ 0x14060DEB4 (MiCreateNewSection.c)
 *     MiDereferenceFailedControlArea @ 0x140710F04 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  int v2; // r14d
  char v3; // r13
  int v4; // eax
  __int64 v5; // rbp
  KPROCESSOR_MODE v6; // r9
  __int64 v7; // rax
  NTSTATUS v8; // eax
  ULONG_PTR v9; // rsi
  int v10; // edi
  __int64 *FileMemoryPartitionInformation; // rax
  struct _KTHREAD *CurrentThread; // rbp
  int v13; // eax
  _QWORD *v14; // r15
  int v16; // ecx
  _QWORD **v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // dl
  int v26; // ecx
  _QWORD *v27; // r12
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rcx
  signed __int64 v31; // rax
  _QWORD v32[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v33; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v34; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v34 = 0LL;
  v33 = 0LL;
  memset(v32, 0, sizeof(v32));
  v2 = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000) != 0 )
    return 3221225716LL;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    goto LABEL_7;
  }
  if ( v4 >= 0 )
  {
    v6 = *(_BYTE *)(a1 + 72);
    v7 = *(_DWORD *)(a1 + 32) & 7;
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(
           *(HANDLE *)(a1 + 40),
           *((_DWORD *)MmMakeFileAccess + v7),
           (POBJECT_TYPE)IoFileObjectType,
           v6,
           &Object,
           0LL);
    v9 = (ULONG_PTR)Object;
    v10 = v8;
    if ( v8 < 0 )
      goto LABEL_21;
    v2 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      v10 = -1073741792;
      goto LABEL_23;
    }
LABEL_7:
    FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation(v9);
    if ( FileMemoryPartitionInformation )
    {
      if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
      {
        v10 = -1073740640;
        goto LABEL_22;
      }
      *(_QWORD *)(a1 + 176) = v28;
      if ( (*(_DWORD *)(v29 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x800000u;
    }
    if ( !v5 )
    {
      ObfReferenceObject((PVOID)v9);
      ++v2;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v9;
      LODWORD(v32[7]) = 2;
      if ( v9 )
        v32[8] = v9;
      else
        v32[8] = 0LL;
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution(v9) )
        {
          v10 = -1073741790;
          goto LABEL_22;
        }
        CcWaitForUninitializeCacheMap(v9);
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
        {
          v25 = *(_BYTE *)(a1 + 24);
          if ( (v25 & 0x10) != 0 )
          {
            v26 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v26;
            if ( (v25 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v26 | 0x1000;
            *(_BYTE *)(a1 + 24) = v25 & 0xF;
          }
        }
        v3 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      while ( 1 )
      {
        v10 = MiCallCreateSectionFilters(a1);
        if ( v10 < 0 )
          goto LABEL_41;
        if ( (*(_DWORD *)a1 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v13 = MiReferenceControlArea(a1, (__int64)v32, (__int64 *)&v33);
        v10 = v13;
        if ( v13 >= 0 )
          break;
        if ( v13 == -1073740277 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_22;
        }
        if ( v13 == -1073740682 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_77;
        }
      }
      v14 = v33;
      *(_QWORD *)(a1 + 64) = v33;
      if ( (v14[7] & 2) != 0 )
      {
        v10 = MiCreateNewSection(a1, &v34);
        if ( v10 >= 0 )
        {
          v24 = *v34;
          *(_QWORD *)(a1 + 64) = *v34;
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v24) + 1352));
          v2 -= 2;
LABEL_41:
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_21;
        }
        if ( v34 )
        {
          v14 = (_QWORD *)*v34;
          v33 = v14;
          *(_QWORD *)(a1 + 64) = v14;
        }
        v27 = (_QWORD *)MiZeroSectionObjectPointer(v9, (__int64)v14, *(_DWORD *)(a1 + 16));
        --v2;
        if ( v14 == v32 )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v9);
          v9 = ObFastReplaceObject(v14 + 8, 0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v14) + 1352));
          MiDereferenceControlAreaBySection((__int64)v33, 1u);
        }
        MiReleaseControlAreaWaiters(v27);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      else
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v10 = MiShareExistingControlArea(a1);
        if ( v10 < 0 )
          MiDereferenceFailedControlArea(a1);
        else
          --v2;
      }
      goto LABEL_21;
    }
    v16 = *(_DWORD *)(a1 + 16) & 0x1000000;
    if ( v16 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        v10 = -1073741580;
        goto LABEL_22;
      }
      if ( *(_QWORD *)(a1 + 152) )
      {
        v10 = -1073741582;
        goto LABEL_22;
      }
    }
    v17 = *(_QWORD ***)(v5 + 40);
    if ( !v17 )
    {
      v10 = -1073741792;
      goto LABEL_22;
    }
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 && (*(_DWORD *)(v18 + 24) & 0x200) != 0 )
    {
      *(_BYTE *)(a1 + 72) = 0;
      v17 = *(_QWORD ***)(v5 + 40);
    }
    if ( v16 )
      v17 += 2;
    v10 = -1073741823;
    v33 = *v17;
    if ( !v33 || (v10 = MiReferenceExistingControlArea(a1), v10 < 0) )
    {
      ObReferenceObjectExWithTag(v9, 2);
      v2 += 2;
      if ( v10 == -1073740682 )
      {
LABEL_77:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap(v9);
        if ( (unsigned int)MiForceSectionClosed(*(_QWORD **)(v9 + 40), v3) > 1 && (*(_DWORD *)a1 & 0x1000000) != 0 )
        {
          ++dword_140C4E458;
          v10 = -1073740277;
        }
LABEL_22:
        if ( !v2 )
          return (unsigned int)v10;
LABEL_23:
        ObDereferenceObjectEx(v9, v2);
        return (unsigned int)v10;
      }
      goto LABEL_10;
    }
    v19 = *(_DWORD *)a1 | 4;
    v20 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v19;
    v21 = *(_QWORD *)(v5 + 40);
    if ( v20 )
    {
      v22 = *(_QWORD **)v21;
      v23 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v23;
      v33 = v22;
      if ( (v19 & 1) != 0 || v23 )
        goto LABEL_38;
      v30 = *v22;
    }
    else
    {
      v33 = *(_QWORD **)(v21 + 16);
      v30 = *v33;
    }
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 24), -1LL, -1LL);
    v22 = v33;
    *(_QWORD *)(a1 + 128) = v31;
LABEL_38:
    *(_QWORD *)(a1 + 64) = v22;
LABEL_21:
    if ( v10 != -1073740682 )
      goto LABEL_22;
    goto LABEL_77;
  }
  return 3221225716LL;
}
