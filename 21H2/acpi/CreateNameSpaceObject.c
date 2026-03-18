/*
 * XREFs of CreateNameSpaceObject @ 0x1C0013250
 * Callers:
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     Method @ 0x1C0017300 (Method.c)
 *     CreateXField @ 0x1C0018484 (CreateXField.c)
 *     Field @ 0x1C0019CE0 (Field.c)
 *     Device @ 0x1C001A250 (Device.c)
 *     OpRegion @ 0x1C0025430 (OpRegion.c)
 *     Name @ 0x1C0025D30 (Name.c)
 *     CreateNativeNameSpaceObject @ 0x1C0027F50 (CreateNativeNameSpaceObject.c)
 *     Mutex @ 0x1C002AE10 (Mutex.c)
 *     PowerRes @ 0x1C002B420 (PowerRes.c)
 *     Processor @ 0x1C002B9F0 (Processor.c)
 *     Alias @ 0x1C002C5D0 (Alias.c)
 *     Event @ 0x1C002DF00 (Event.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     ThermalZone @ 0x1C002EBF0 (ThermalZone.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00655C8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0065AA0 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0065C08 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0065D84 (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C0760 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     InsertOwnerObjList @ 0x1C0028350 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C0028388 (NewNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0064F70 (Simulator_NotifyNamespaceCollision.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        __int64 *a5,
        int a6)
{
  __int64 *v6; // r14
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rbx
  size_t v13; // rbx
  char *Pool2; // r15
  unsigned int NameSpaceObjectNoLock; // eax
  int v16; // ecx
  char *v17; // rax
  unsigned __int8 *v18; // r14
  __int64 v19; // rbx
  char *v20; // rax
  char *v21; // rsi
  _DWORD *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v25; // rsi
  KIRQL v26; // bl
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 i; // rax
  KIRQL v31; // [rsp+30h] [rbp-108h]
  __int64 v32; // [rsp+38h] [rbp-100h]
  __int64 v33; // [rsp+38h] [rbp-100h]
  __int64 v34; // [rsp+48h] [rbp-F0h]
  char Str[128]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = a5;
  v10 = a2;
  v11 = 0;
  v12 = 0LL;
  if ( a2 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
    if ( v13 + 1 >= 0x80 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, v13 + 1, 1768973121LL);
      if ( !Pool2 )
        return 3221225626LL;
    }
    else
    {
      Pool2 = Str;
    }
    memmove(Pool2, v10, v13);
    Pool2[v13] = 0;
    v10 = (unsigned __int8 *)Pool2;
    v12 = 0LL;
  }
  else
  {
    Pool2 = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( !v10 )
  {
    v33 = NewNameSpaceObject(a1);
    v25 = (_QWORD *)v33;
    if ( !v33 )
    {
      v11 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_36;
    }
    v26 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    *(_QWORD *)(v33 + 16) = a3;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
      v25 = (_QWORD *)v33;
    }
    InsertOwnerObjList(a4, v25);
    v27 = *(_QWORD **)(a3 + 32);
    if ( *v27 == a3 + 24 )
    {
      v25[1] = v27;
      *v25 = a3 + 24;
      *v27 = v25;
      *(_QWORD *)(a3 + 32) = v25;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v26);
      v12 = v33;
      goto LABEL_34;
    }
    goto LABEL_79;
  }
  v31 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( *v10 )
  {
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v10);
    v11 = NameSpaceObjectNoLock;
    if ( !NameSpaceObjectNoLock )
    {
      if ( (a6 & 0x20000) != 0 )
      {
        v11 = -1073741771;
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
        v12 = 0LL;
      }
      else if ( _bittest16((const signed __int16 *)0x40, 8u) )
      {
        v12 = 0LL;
        if ( MEMORY[0x30] )
        {
          for ( i = *(_QWORD *)(MEMORY[0x30] + 24LL); i; i = *(_QWORD *)(i + 56) )
            ;
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(MEMORY[0x30] + 32LL));
        }
        InsertOwnerObjList(a4, 0LL);
        MEMORY[0x40] = MEMORY[0x40] & 0xFE7F | 0x80;
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
      }
      else
      {
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
        if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v10, a3) < 0) && (a6 & 0x10000) == 0 )
        {
          LogError(3221225525LL);
          AcpiDiagTraceAmlError(0LL, 3221225525LL);
          PrintDebugMessage(35, (_DWORD)v10, 0, 0, 0LL);
        }
        v12 = 0LL;
        v11 = -1073741771;
      }
      goto LABEL_34;
    }
    if ( NameSpaceObjectNoLock != -1073741772 )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
      v12 = 0LL;
      goto LABEL_75;
    }
    v12 = 0LL;
  }
  v11 = 0;
  v16 = *v10 - 92;
  if ( *v10 == 92 )
    v16 = v10[1];
  if ( v16 )
  {
    v34 = 0LL;
    v17 = strrchr((const char *)v10, 46);
    if ( v17 )
    {
      *v17 = 0;
      v18 = (unsigned __int8 *)(v17 + 1);
      v11 = GetNameSpaceObjectNoLock(v10);
      if ( v11 )
        goto LABEL_32;
      a3 = 0LL;
    }
    else if ( *v10 == 92 )
    {
      a3 = gpnsNameSpaceRoot;
      v18 = v10 + 1;
      v34 = gpnsNameSpaceRoot;
    }
    else
    {
      v34 = a3;
      v18 = v10;
      if ( *v10 == 94 )
      {
        v29 = a3;
        do
        {
          if ( !v29 )
            break;
          v29 = *(_QWORD *)(a3 + 16);
          ++v18;
          a3 = v29;
          v34 = v29;
        }
        while ( *v18 == 94 );
      }
    }
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    if ( (unsigned int)v19 > 4 && *v18 )
    {
      v11 = -1073741773;
      LogError(3221225523LL);
      AcpiDiagTraceAmlError(0LL, 3221225523LL);
      PrintDebugMessage(37, (_DWORD)v18, 0, 0, 0LL);
      v12 = 0LL;
      goto LABEL_32;
    }
    v20 = (char *)HeapAlloc(a1, 1330859592LL, 160LL);
    v32 = (__int64)v20;
    v21 = v20;
    if ( !v20 )
    {
      v11 = -1073741670;
      v12 = 0LL;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_32;
    }
    memset(v20, 0, 0xA0uLL);
    *((_QWORD *)v21 + 15) = v21;
    *((_QWORD *)v21 + 4) = v21 + 24;
    *((_QWORD *)v21 + 3) = v21 + 24;
    *((_DWORD *)v21 + 28) = 2;
    *((_DWORD *)v21 + 32) = 1;
    *((_QWORD *)v21 + 18) = 0LL;
    v22 = v21 + 40;
    *((_QWORD *)v21 + 19) = -1LL;
    if ( *v10 )
    {
      *v22 = 1600085855;
      memmove(v22, v18, (unsigned int)v19);
    }
    else
    {
      *v22 = 0;
    }
    *((_QWORD *)v21 + 2) = a3;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
      v12 = (__int64)v21;
      a3 = v34;
    }
    else
    {
      v12 = v32;
    }
    *((_QWORD *)v21 + 6) = a4;
    if ( a4 )
    {
      *((struct _EX_RUNDOWN_REF *)v21 + 7) = a4[3];
      a4[3].Count = (unsigned __int64)v21;
      ExAcquireRundownProtection(a4 + 4);
    }
    v23 = *(_QWORD **)(a3 + 32);
    if ( *v23 == a3 + 24 )
    {
      *(_QWORD *)v21 = a3 + 24;
      *((_QWORD *)v21 + 1) = v23;
      *v23 = v21;
      *(_QWORD *)(a3 + 32) = v21;
LABEL_32:
      v6 = a5;
      goto LABEL_33;
    }
LABEL_79:
    __fastfail(3u);
  }
  v28 = NewNameSpaceObject(a1);
  v12 = v28;
  if ( v28 )
  {
    *(_DWORD *)(v28 + 40) = 1600085852;
    gpnsNameSpaceRoot = v28;
    InsertOwnerObjList(a4, v28);
  }
  else
  {
    v11 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(36, 0, 0, 0, 0LL);
  }
LABEL_33:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
  if ( !v11 )
    goto LABEL_34;
LABEL_75:
  if ( v11 == -1073741771 )
  {
LABEL_34:
    if ( v6 )
      *v6 = v12;
  }
LABEL_36:
  if ( Pool2 )
  {
    if ( Str != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return v11;
}
