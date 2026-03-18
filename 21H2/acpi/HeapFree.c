/*
 * XREFs of HeapFree @ 0x1C0018DD0
 * Callers:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C000CDE0 (GetPciAddressWorker.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseFieldList @ 0x1C0015C40 (ParseFieldList.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     AMLIIterateSiblingsNext @ 0x1C001BA54 (AMLIIterateSiblingsNext.c)
 *     FindNSObjMainNoLock @ 0x1C001F71C (FindNSObjMainNoLock.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     ParseRelease @ 0x1C0024F10 (ParseRelease.c)
 *     WriteCookAccess @ 0x1C0026A60 (WriteCookAccess.c)
 *     ParseLoad @ 0x1C0028400 (ParseLoad.c)
 *     ProcessIncDec @ 0x1C002AD60 (ProcessIncDec.c)
 *     ProcessWait @ 0x1C002D500 (ProcessWait.c)
 *     ProcessSleep @ 0x1C00319A0 (ProcessSleep.c)
 *     Simulator_Free_Arguments @ 0x1C0064DF4 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C00663E4 (FreeObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C00683E8 (LoadFieldUnitDDB.c)
 *     PreserveWriteObj @ 0x1C0069130 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C006A860 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C006BFA0 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C006C0C0 (ParseUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall HeapFree(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *i; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r10
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v1 = a1 - 2;
  *((_DWORD *)a1 - 4) = 0;
  byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v3 = v1[1];
  v4 = *(_QWORD **)(v3 + 40);
  for ( i = (_QWORD *)(v3 + 40); v4 != i; v4 = (_QWORD *)*v4 )
  {
    if ( a1 < v4 )
      break;
  }
  v6 = (_QWORD *)v4[1];
  if ( (_QWORD *)*v6 != v4 )
    goto LABEL_21;
  a1[1] = v6;
  *a1 = v4;
  *v6 = a1;
  v4[1] = a1;
  v7 = (_QWORD *)*a1;
  v8 = *a1 - 16LL;
  if ( (_QWORD *)*a1 != i )
  {
    v17 = *((unsigned int *)v1 + 1);
    if ( (_QWORD *)v8 == (_QWORD *)((char *)v1 + v17) )
    {
      *((_DWORD *)v1 + 1) = v17 + *(_DWORD *)(v8 + 4);
      v18 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_21;
      v19 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v19 != v7 )
        goto LABEL_21;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
    }
  }
  v9 = (_QWORD *)v1[3];
  v10 = v9 - 2;
  if ( v9 != i )
  {
    v14 = *((unsigned int *)v10 + 1);
    if ( v1 == (_QWORD *)((char *)v10 + v14) )
    {
      *((_DWORD *)v10 + 1) = *((_DWORD *)v1 + 1) + v14;
      v15 = *a1;
      if ( *(_QWORD **)(*a1 + 8LL) != a1 )
        goto LABEL_21;
      v16 = (_QWORD *)a1[1];
      if ( (_QWORD *)*v16 != a1 )
        goto LABEL_21;
      *v16 = v15;
      v1 = v10;
      *(_QWORD *)(v15 + 8) = v16;
    }
  }
  if ( *(_QWORD *)(v3 + 32) <= (unsigned __int64)v1 + *((unsigned int *)v1 + 1) )
  {
    *(_QWORD *)(v3 + 32) = v1;
    v11 = v1 + 2;
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) == v11 )
    {
      v13 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v13 == v11 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        goto LABEL_9;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_9:
  KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
}
