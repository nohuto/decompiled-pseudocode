/*
 * XREFs of PopEtInit @ 0x140A6E9A4
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memset @ 0x140414300 (memset.c)
 *     PoEnergyContextStart @ 0x1405F6C30 (PoEnergyContextStart.c)
 *     PoEnergyContextInitialize @ 0x14061398C (PoEnergyContextInitialize.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 *     PopEtInitializeBuiltinAppId @ 0x1407CBA5C (PopEtInitializeBuiltinAppId.c)
 *     RtlInternTableInitialize @ 0x1407CBAC4 (RtlInternTableInitialize.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 PopEtInit()
{
  unsigned int v0; // ebx
  _OWORD *PoolWithTag; // rax
  _OWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r11
  __int64 v5; // rdi
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  _QWORD *i; // rcx
  ULONG_PTR NextProcess; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v15[16]; // [rsp+30h] [rbp-29h] BYREF

  v0 = 0;
  DestinationString = 0LL;
  if ( PopEnergyEstimationEnabled )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3B8uLL, 0x54456F50u);
    PopEtGlobals = (__int64)PoolWithTag;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3B8uLL);
      v2[1] = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
      *((_QWORD *)v2 + 1) = v2;
      *(_QWORD *)v2 = v2;
      *(_OWORD *)((char *)v2 + 40) = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
      *((_QWORD *)v2 + 11) = PopEtInternerAllocate;
      *((_QWORD *)v2 + 12) = PopEtInternerFree;
      *((_QWORD *)v2 + 13) = PopEtInternerLock;
      *((_QWORD *)v2 + 14) = PopEtInternerUnlock;
      *((_QWORD *)v2 + 15) = PopEtInternerEntryInitialize;
      RtlInternTableInitialize((__int64)v2 + 56, (__int64)v2 + 88);
      PoEnergyContextInitialize((_QWORD *)v2 + 16);
      *((_QWORD *)PsIdleProcess + 285) = v3;
      PopEtInitializeBuiltinAppId((__int64)(v2 + 48), (__int64)L"Default");
      PopEtInitializeBuiltinAppId((__int64)(v2 + 53), (__int64)L"Overflow");
      PopEtInitializeBuiltinAppId((__int64)(v2 + 43), (__int64)L"IsrDpc");
      v5 = (__int64)(v2 + 38);
      *(_QWORD *)(*(_QWORD *)(v4 + 2280) + 448LL) = v6;
      PopEtInitializeBuiltinAppId(v5, (__int64)L"System");
      v7 = PsInitialSystemProcess[2].Affinity.Bitmap[4];
      if ( v7 )
        *(_QWORD *)(v7 + 448) = v5;
      for ( i = 0LL; ; i = v10 )
      {
        NextProcess = PsGetNextProcess(i);
        v10 = (_QWORD *)NextProcess;
        if ( !NextProcess )
          break;
        v11 = *(_QWORD *)(NextProcess + 2280);
        if ( v11 )
        {
          if ( !*(_QWORD *)(v11 + 448) )
          {
            *(_QWORD *)(v11 + 448) = PopEtGlobals + 768;
            PoEnergyContextStart(NextProcess);
          }
        }
      }
      RtlInitUnicodeString(&DestinationString, L"EnergyTracker");
      memset(v15, 0, 0x78uLL);
      BYTE2(v15[0]) |= 4u;
      v15[8] = PopEtEnergyTrackerClose;
      LOWORD(v15[0]) = 120;
      v15[9] = PopEtEnergyTrackerDelete;
      HIDWORD(v15[4]) = 1;
      LODWORD(v15[5]) = 640;
      LODWORD(v15[1]) = 402;
      HIDWORD(v15[3]) = 2031617;
      v12 = ObCreateObjectType(&DestinationString, (__int64)v15, 0LL, PopEtGlobals + 32);
      if ( v12 >= 0 )
        return 0;
      return (unsigned int)v12;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v0;
}
