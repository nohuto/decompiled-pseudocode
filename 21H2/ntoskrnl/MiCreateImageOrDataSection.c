/*
 * XREFs of MiCreateImageOrDataSection @ 0x14071E2F0
 * Callers:
 *     MiCreateSection @ 0x14071CAF0 (MiCreateSection.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402369D0 (CcWaitForUninitializeCacheMap.c)
 *     MiForceSectionClosed @ 0x140237400 (MiForceSectionClosed.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiZeroSectionObjectPointer @ 0x140251A4C (MiZeroSectionObjectPointer.c)
 *     MiReferenceExistingControlArea @ 0x140262384 (MiReferenceExistingControlArea.c)
 *     IoAllowExecution @ 0x14027177C (IoAllowExecution.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectEx @ 0x1402F0E60 (ObDereferenceObjectEx.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     MiDereferenceControlAreaBySection @ 0x14031F7BC (MiDereferenceControlAreaBySection.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoGetFileMemoryPartitionInformation @ 0x1403614EC (IoGetFileMemoryPartitionInformation.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     IoSetTopLevelIrp @ 0x140361970 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140361990 (IoGetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDereferenceFailedControlArea @ 0x1406220F4 (MiDereferenceFailedControlArea.c)
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MiCallCreateSectionFilters @ 0x14071E764 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x14071F1CC (MiShareExistingControlArea.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r15
  int v22; // ecx
  _QWORD **v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // dl
  int v32; // ecx
  _QWORD *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  signed __int64 v40; // rax
  _QWORD v41[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v42; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v43; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v43 = 0LL;
  v42 = 0LL;
  memset(v41, 0, sizeof(v41));
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
      *(_QWORD *)(a1 + 176) = v37;
      if ( (*(_DWORD *)(v38 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x800000u;
    }
    if ( !v5 )
    {
      ObfReferenceObject((PVOID)v9);
      ++v2;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v9;
      LODWORD(v41[7]) = 2;
      if ( v9 )
        v41[8] = v9;
      else
        v41[8] = 0LL;
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
          v31 = *(_BYTE *)(a1 + 24);
          if ( (v31 & 0x10) != 0 )
          {
            v32 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v32;
            if ( (v31 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v32 | 0x1000;
            *(_BYTE *)(a1 + 24) = v31 & 0xF;
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
        v16 = MiReferenceControlArea(a1, (__int64)v41, (__int64 *)&v42);
        v10 = v16;
        if ( v16 >= 0 )
          break;
        if ( v16 == -1073740277 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
          goto LABEL_22;
        }
        if ( v16 == -1073740682 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
          goto LABEL_77;
        }
      }
      v20 = v42;
      *(_QWORD *)(a1 + 64) = v42;
      if ( (v20[7] & 2) != 0 )
      {
        v10 = MiCreateNewSection(a1, &v43);
        if ( v10 >= 0 )
        {
          v30 = *v43;
          *(_QWORD *)(a1 + 64) = *v43;
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v30) + 1352));
          v2 -= 2;
LABEL_41:
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
          goto LABEL_21;
        }
        if ( v43 )
        {
          v20 = (_QWORD *)*v43;
          v42 = v20;
          *(_QWORD *)(a1 + 64) = v20;
        }
        v33 = (_QWORD *)MiZeroSectionObjectPointer(v9, (__int64)v20, *(_DWORD *)(a1 + 16));
        --v2;
        if ( v20 == v41 )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v9);
          v9 = ObFastReplaceObject(v20 + 8, 0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v20) + 1352));
          MiDereferenceControlAreaBySection((__int64)v42, 1u);
        }
        MiReleaseControlAreaWaiters(v33);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v34, v35, v36);
      }
      else
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
        v10 = MiShareExistingControlArea(a1);
        if ( v10 < 0 )
          MiDereferenceFailedControlArea((int *)a1);
        else
          --v2;
      }
      goto LABEL_21;
    }
    v22 = *(_DWORD *)(a1 + 16) & 0x1000000;
    if ( v22 )
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
    v23 = *(_QWORD ***)(v5 + 40);
    if ( !v23 )
    {
      v10 = -1073741792;
      goto LABEL_22;
    }
    v24 = *(_QWORD *)(a1 + 8);
    if ( v24 && (*(_DWORD *)(v24 + 24) & 0x200) != 0 )
    {
      *(_BYTE *)(a1 + 72) = 0;
      v23 = *(_QWORD ***)(v5 + 40);
    }
    if ( v22 )
      v23 += 2;
    v10 = -1073741823;
    v42 = *v23;
    if ( !v42 || (v10 = MiReferenceExistingControlArea(a1), v10 < 0) )
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
          ++dword_140C4E698;
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
    v25 = *(_DWORD *)a1 | 4;
    v26 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v25;
    v27 = *(_QWORD *)(v5 + 40);
    if ( v26 )
    {
      v28 = *(_QWORD **)v27;
      v29 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v29;
      v42 = v28;
      if ( (v25 & 1) != 0 || v29 )
        goto LABEL_38;
      v39 = *v28;
    }
    else
    {
      v42 = *(_QWORD **)(v27 + 16);
      v39 = *v42;
    }
    v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 24), -1LL, -1LL);
    v28 = v42;
    *(_QWORD *)(a1 + 128) = v40;
LABEL_38:
    *(_QWORD *)(a1 + 64) = v28;
LABEL_21:
    if ( v10 != -1073740682 )
      goto LABEL_22;
    goto LABEL_77;
  }
  return 3221225716LL;
}
