/*
 * XREFs of FreeObjData @ 0x1C0018AA0
 * Callers:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249F0 (ACPIGetWorkerForInteger.c)
 *     Simulator_DuplicateObjData @ 0x1C0064D30 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C0064DF4 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00655C8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0065C08 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0065F88 (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C0017940 (HeapInsertFreeList.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     PerformMutexDriverCallbacks @ 0x1C002AEB8 (PerformMutexDriverCallbacks.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  int v1; // eax
  unsigned __int64 *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // r10
  _QWORD *v7; // rax
  _QWORD *i; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *j; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // r8
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  bool v30; // zf
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // r10
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // r9
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rax
  _QWORD *v42; // rdi
  unsigned __int64 v43; // rax
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  switch ( v1 )
  {
    case 4:
      v4 = *(_QWORD **)(a1 + 32);
      *((_DWORD *)v4 - 4) = 0;
      v5 = v4 - 2;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v6 = *(v4 - 1);
      v7 = *(_QWORD **)(v6 + 40);
      for ( i = (_QWORD *)(v6 + 40); v7 != i; v7 = (_QWORD *)*v7 )
      {
        if ( v4 < v7 )
          break;
      }
      v9 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v9 != v7 )
        goto LABEL_48;
      v4[1] = v9;
      *v4 = v7;
      *v9 = v4;
      v7[1] = v4;
      v10 = (_QWORD *)*v4;
      v11 = *v4 - 16LL;
      if ( (_QWORD *)*v4 != i )
      {
        v38 = *((unsigned int *)v5 + 1);
        if ( (_QWORD *)v11 == (_QWORD *)((char *)v5 + v38) )
        {
          *((_DWORD *)v5 + 1) = v38 + *(_DWORD *)(v11 + 4);
          v39 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 )
            goto LABEL_48;
          v40 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v40 != v10 )
            goto LABEL_48;
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
        }
      }
      v12 = (_QWORD *)v5[3];
      v13 = v12 - 2;
      if ( v12 != i )
      {
        v14 = *((unsigned int *)v13 + 1);
        if ( v5 == (_QWORD *)((char *)v13 + v14) )
        {
          *((_DWORD *)v13 + 1) = *((_DWORD *)v5 + 1) + v14;
          v15 = *v4;
          if ( *(_QWORD **)(*v4 + 8LL) != v4 )
            goto LABEL_48;
          v16 = (_QWORD *)v4[1];
          if ( (_QWORD *)*v16 != v4 )
            goto LABEL_48;
          *v16 = v15;
          v5 = v13;
          *(_QWORD *)(v15 + 8) = v16;
        }
      }
      if ( *(_QWORD *)(v6 + 32) <= (unsigned __int64)v5 + *((unsigned int *)v5 + 1) )
      {
        *(_QWORD *)(v6 + 32) = v5;
        v42 = v5 + 2;
        v28 = *v42;
        if ( *(_QWORD **)(*v42 + 8LL) != v42 )
          goto LABEL_48;
        v29 = (_QWORD *)v42[1];
        v30 = *v29 == (_QWORD)v42;
        goto LABEL_46;
      }
LABEL_18:
      KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
      return;
    case 3:
      v17 = *(_QWORD **)(a1 + 32);
      *((_DWORD *)v17 - 4) = 0;
      v18 = v17 - 2;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v19 = *(v17 - 1);
      v20 = *(_QWORD **)(v19 + 40);
      for ( j = (_QWORD *)(v19 + 40); v20 != j; v20 = (_QWORD *)*v20 )
      {
        if ( v17 < v20 )
          break;
      }
      v22 = (_QWORD *)v20[1];
      if ( (_QWORD *)*v22 != v20 )
        goto LABEL_48;
      v17[1] = v22;
      *v17 = v20;
      *v22 = v17;
      v20[1] = v17;
      v23 = (_QWORD *)*v17;
      v24 = *v17 - 16LL;
      if ( (_QWORD *)*v17 != j )
      {
        v35 = *((unsigned int *)v18 + 1);
        if ( (_QWORD *)v24 == (_QWORD *)((char *)v18 + v35) )
        {
          *((_DWORD *)v18 + 1) = v35 + *(_DWORD *)(v24 + 4);
          v36 = *v23;
          if ( *(_QWORD **)(*v23 + 8LL) != v23 )
            goto LABEL_48;
          v37 = (_QWORD *)v23[1];
          if ( (_QWORD *)*v37 != v23 )
            goto LABEL_48;
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
        }
      }
      v25 = (_QWORD *)v18[3];
      v26 = v25 - 2;
      if ( v25 != j )
      {
        v32 = *((unsigned int *)v26 + 1);
        if ( v18 == (_QWORD *)((char *)v26 + v32) )
        {
          *((_DWORD *)v26 + 1) = *((_DWORD *)v18 + 1) + v32;
          v33 = *v17;
          if ( *(_QWORD **)(*v17 + 8LL) != v17 )
            goto LABEL_48;
          v34 = (_QWORD *)v17[1];
          if ( (_QWORD *)*v34 != v17 )
            goto LABEL_48;
          *v34 = v33;
          v18 = v26;
          *(_QWORD *)(v33 + 8) = v34;
        }
      }
      if ( *(_QWORD *)(v19 + 32) <= (unsigned __int64)v18 + *((unsigned int *)v18 + 1) )
      {
        *(_QWORD *)(v19 + 32) = v18;
        v27 = v18 + 2;
        v28 = *v27;
        if ( *(_QWORD **)(*v27 + 8LL) != v27 )
          goto LABEL_48;
        v29 = (_QWORD *)v27[1];
        v30 = *v29 == (_QWORD)v27;
LABEL_46:
        if ( v30 )
        {
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          goto LABEL_18;
        }
LABEL_48:
        __fastfail(3u);
      }
      goto LABEL_18;
    case 14:
      v31 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v31 - 16) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v31 - 8), (unsigned int *)(v31 - 16));
      goto LABEL_18;
  }
  switch ( *(_WORD *)(a1 + 2) )
  {
    case 2:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
      goto LABEL_5;
    case 5:
    case 0x83:
      v3 = *(unsigned __int64 **)(a1 + 32);
      v41 = *v3;
      goto LABEL_42;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
      goto LABEL_5;
    case 0x82:
      v3 = *(unsigned __int64 **)(a1 + 32);
      v43 = *v3;
      if ( *v3 )
        goto LABEL_51;
      goto LABEL_52;
    case 0x84:
      v3 = *(unsigned __int64 **)(a1 + 32);
      v43 = *v3;
      if ( *v3 )
      {
LABEL_51:
        DereferenceObjectEx(v43);
        v3 = *(unsigned __int64 **)(a1 + 32);
      }
LABEL_52:
      v41 = v3[1];
LABEL_42:
      if ( v41 )
      {
        DereferenceObjectEx(v41);
LABEL_5:
        v3 = *(unsigned __int64 **)(a1 + 32);
      }
      HeapFree(v3);
      break;
    default:
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
      break;
  }
}
