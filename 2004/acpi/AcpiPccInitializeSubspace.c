/*
 * XREFs of AcpiPccInitializeSubspace @ 0x1C00B0844
 * Callers:
 *     ACPIPccLegacyInitialize @ 0x1C0097FC0 (ACPIPccLegacyInitialize.c)
 *     ACPIPccInitialize @ 0x1C00B0468 (ACPIPccInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccInitializeSubspace(char *DeferredContext)
{
  char v2; // cl
  int v3; // edi
  unsigned int v4; // ebx
  int MemoryCachingRequirements; // eax
  int v6; // ecx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  bool v9; // sf
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = DeferredContext[88];
  v15 = 0;
  if ( v2 == 1 )
  {
    if ( (unsigned __int8)DeferredContext[91] > 0x20u )
      goto LABEL_3;
  }
  else if ( v2 )
  {
    goto LABEL_3;
  }
  if ( (*((_QWORD *)DeferredContext + 9) & *((_QWORD *)DeferredContext + 8)) == 0LL )
  {
    v4 = 516;
    if ( v2 )
      goto LABEL_12;
    MemoryCachingRequirements = HalGetMemoryCachingRequirements(
                                  *(_QWORD *)(DeferredContext + 92),
                                  (unsigned __int64)(unsigned __int8)DeferredContext[91] >> 3,
                                  &v15);
    v6 = v15;
    v7 = 516LL;
    v8 = (unsigned __int8)DeferredContext[91];
    v9 = MemoryCachingRequirements < 0;
    v10 = *(_QWORD *)(DeferredContext + 92);
    if ( v9 )
      v6 = 0;
    *((_QWORD *)DeferredContext + 10) = v10;
    v15 = v6;
    if ( v6 == 1 )
      v7 = 4LL;
    v11 = MmMapIoSpaceEx(v10, v8 >> 3, v7);
    *(_QWORD *)(DeferredContext + 92) = v11;
    if ( v11 )
    {
LABEL_12:
      v3 = HalGetMemoryCachingRequirements(
             *((_QWORD *)DeferredContext + 13),
             *((unsigned int *)DeferredContext + 28),
             &v15);
      if ( v3 >= 0 )
      {
        v12 = v15;
      }
      else
      {
        v12 = 0;
        v3 = 0;
        v15 = 0;
      }
      if ( v12 == 1 )
        v4 = 4;
      v13 = MmMapIoSpaceEx(*((_QWORD *)DeferredContext + 13), *((unsigned int *)DeferredContext + 28), v4);
      if ( v13 )
      {
        *((_QWORD *)DeferredContext + 5) = v13;
        KeInitializeDpc((PRKDPC)(DeferredContext + 568), (PKDEFERRED_ROUTINE)AcpiPccCallbackDpc, DeferredContext);
        KeSetImportanceDpc((PRKDPC)(DeferredContext + 568), MediumHighImportance);
        KeInitializeDpc((PRKDPC)(DeferredContext + 504), (PKDEFERRED_ROUTINE)AcpiPccWatchdog, DeferredContext);
        KeSetImportanceDpc((PRKDPC)(DeferredContext + 504), MediumHighImportance);
        KeInitializeDpc((PRKDPC)(DeferredContext + 368), (PKDEFERRED_ROUTINE)AcpiPccRingDoorbell, DeferredContext);
        KeSetImportanceDpc((PRKDPC)(DeferredContext + 368), MediumHighImportance);
        KeInitializeTimer((PKTIMER)(DeferredContext + 440));
        KeInitializeTimer((PKTIMER)(DeferredContext + 304));
        KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 80);
        *((_QWORD *)DeferredContext + 30) = DeferredContext + 232;
        *((_QWORD *)DeferredContext + 29) = DeferredContext + 232;
        return (unsigned int)v3;
      }
    }
  }
LABEL_3:
  v3 = -1073741823;
  *((_DWORD *)DeferredContext + 1) = *((_DWORD *)DeferredContext + 1) & 0xFFFFFFE1 | 2;
  return (unsigned int)v3;
}
