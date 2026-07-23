/*
 * XREFs of PopAssociateThermalRequest @ 0x140791FD0
 * Callers:
 *     PoCreateThermalRequest @ 0x140791ED0 (PoCreateThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x140399E54 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A8D58 (PopThermalUpdateTelemetryClientCount.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopDiagTraceThermalRequest @ 0x140620A64 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140621040 (PopDiagTraceCoolingExtension.c)
 *     PopAcquireCoolingInterface @ 0x1407921A0 (PopAcquireCoolingInterface.c)
 *     PopCleanCoolingExtension @ 0x1408E2C1C (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408E3110 (PopRegisterCoolingExtensionProtection.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rdi
  __int64 Dope; // rsi
  _QWORD *PoolWithTag; // rax
  int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax

  v6 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  if ( *(_QWORD *)(Dope + 64) )
    goto LABEL_9;
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6C6F4350u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x90uLL);
  v6[3] = v6 + 2;
  v6[2] = v6 + 2;
  v6[5] = 0LL;
  v6[4] = 0LL;
  *((_BYTE *)v6 + 66) = 100;
  v6[6] = a2;
  v9 = PopAcquireCoolingInterface(v6);
  if ( v9 >= 0 )
  {
    *((_BYTE *)v6 + 64) = 1;
    if ( !a3 || (v9 = PopRegisterCoolingExtensionProtection(v6), v9 >= 0) )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
      if ( !*(_QWORD *)(Dope + 64) )
      {
        v10 = (_QWORD *)qword_140C23858;
        if ( *(__int64 **)qword_140C23858 != &PopCoolingExtensionList )
          goto LABEL_24;
        *v6 = &PopCoolingExtensionList;
        v6[1] = v10;
        *v10 = v6;
        qword_140C23858 = (__int64)v6;
        *(_QWORD *)(Dope + 64) = v6;
        PopDiagTraceCoolingExtension((__int64)v6, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_ADD);
        v6 = 0LL;
        a3 = 0;
      }
LABEL_9:
      if ( a3 )
      {
        v9 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64));
        if ( v9 < 0 )
        {
          PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
          goto LABEL_16;
        }
      }
      PopAcquireRwLockExclusive(*(_QWORD *)(Dope + 64) + 32LL);
      v11 = *(_QWORD *)(Dope + 64);
      *(_QWORD *)(a1 + 32) = v11;
      v12 = v11 + 16;
      v13 = *(__int64 **)(v12 + 8);
      if ( *v13 == v12 )
      {
        *(_QWORD *)(a1 + 8) = v13;
        *(_QWORD *)a1 = v12;
        *v13 = a1;
        *(_QWORD *)(v12 + 8) = a1;
        *(_BYTE *)(a1 + 18) = 1;
        PopDiagTraceThermalRequest(a1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_THERMAL_REQUEST_ADD);
        v14 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(v14 + 136) )
        {
          PopThermalUpdateTelemetryClientCount(1);
          v14 = *(_QWORD *)(a1 + 32);
        }
        if ( *(_QWORD *)(v14 + 128) )
          *(_BYTE *)(a1 + 41) = 1;
        PopReleaseRwLock(*(_QWORD *)(Dope + 64) + 32LL);
        PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
        v9 = 0;
        goto LABEL_16;
      }
LABEL_24:
      __fastfail(3u);
    }
  }
LABEL_16:
  if ( v6 )
    PopCleanCoolingExtension(v6);
  return (unsigned int)v9;
}
