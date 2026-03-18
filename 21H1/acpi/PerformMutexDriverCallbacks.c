/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C00100C8
 * Callers:
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     ParseRelease @ 0x1C00033A0 (ParseRelease.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseAcquire @ 0x1C000A300 (ParseAcquire.c)
 *     Mutex @ 0x1C0010020 (Mutex.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     ConvertNtStatusToAMLIStatus @ 0x1C0010180 (ConvertNtStatusToAMLIStatus.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(int a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int16 a5)
{
  unsigned __int64 v5; // rdi
  int v10; // ebx
  KIRQL i; // al
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+50h] [rbp-10h]

  v5 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !gDeviceLockMutexSupported || !ghMutexObject )
  {
    v10 = 0;
    goto LABEL_6;
  }
  if ( a4 )
  {
    v5 = a4;
    for ( i = ExAcquireSpinLockShared(&ACPINamespaceLock); *(_WORD *)(v5 + 66) == 8; v5 = *(_QWORD *)(v5 + 16) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    ExReleaseSpinLockShared(&ACPINamespaceLock, i);
    if ( *(_WORD *)(v5 + 66) != 6 )
    {
      v10 = -1072431089;
      goto LABEL_6;
    }
  }
  LODWORD(v16) = a1;
  *((_QWORD *)&v16 + 1) = a2 + 80;
  if ( a1 )
  {
    v13 = a1 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
          {
            v10 = -1073741637;
LABEL_26:
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a3, 3222536195LL);
            PrintDebugMessage(145, v10, 0, 0, 0LL);
            goto LABEL_6;
          }
          *(_QWORD *)&v17 = v5 + 120;
          *((_QWORD *)&v17 + 1) = *(_QWORD *)(a2 + 72);
          LODWORD(v18) = *(_DWORD *)(a2 + 64);
        }
        else
        {
          *(_QWORD *)&v17 = a3;
        }
      }
      else
      {
        *((_QWORD *)&v17 + 1) = a3;
        *(_QWORD *)&v17 = v5 + 120;
        *(_QWORD *)&v18 = *(_QWORD *)(a2 + 72);
        DWORD2(v18) = *(_DWORD *)(a2 + 64);
        WORD6(v18) = a5;
      }
    }
  }
  v10 = ((__int64 (__fastcall *)(__int128 *))ghMutexObject)(&v16);
  if ( v10 < 0 && v10 != -1073741643 && v10 != -1073741536 )
    goto LABEL_26;
LABEL_6:
  if ( v5 )
    DereferenceObjectEx(v5);
  return ConvertNtStatusToAMLIStatus((unsigned int)v10);
}
