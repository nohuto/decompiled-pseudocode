/*
 * XREFs of KiSignalThreadForApc @ 0x1402FB178
 * Callers:
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KiSuspendThread @ 0x1402FADDC (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402FB09C (KiInsertDeferredPreemptionApc.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     KeRequestTerminationThread @ 0x1402FBC30 (KeRequestTerminationThread.c)
 *     KeTryToInsertQueueApc @ 0x1405153A0 (KeTryToInsertQueueApc.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiSignalThread @ 0x140282EB0 (KiSignalThread.c)
 *     KiSendSoftwareInterrupt @ 0x14033F4A0 (KiSendSoftwareInterrupt.c)
 */

char __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // r10
  char v6; // al
  bool v7; // cf
  __int64 v8; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  LODWORD(v4) = *(char *)(a2 + 80);
  v5 = *(_BYTE *)(a2 + 81);
  if ( (_DWORD)v4 == *(unsigned __int8 *)(v3 + 586) )
  {
    if ( v3 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v5 )
      {
        v4 = *(_QWORD *)(a2 + 48);
        if ( !*(_DWORD *)(v3 + 484) || !v4 && !*(_WORD *)(v3 + 486) )
        {
          *(_BYTE *)(v3 + 193) = 1;
          if ( !a3 )
          {
            *(_DWORD *)(v3 + 116) |= 0x40u;
            return v4;
          }
LABEL_24:
          LOBYTE(v4) = HalRequestSoftwareInterrupt(1);
        }
      }
    }
    else if ( v5 )
    {
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 5 && *(_BYTE *)(v3 + 391) == 1 )
      {
        v6 = *(_BYTE *)(v3 + 112) & 7;
        v7 = v6 == 3;
        LOBYTE(v4) = v6 - 3;
        if ( !v7 && (_BYTE)v4 != 1 )
        {
          LODWORD(v4) = *(_DWORD *)(v3 + 116);
          if ( (v4 & 0x10) != 0 || (*(_BYTE *)(v3 + 194) & 2) != 0 )
          {
            *(_BYTE *)(v3 + 112) |= 0x40u;
            LOBYTE(v4) = KiSignalThread(a1, v3, 192LL, 0LL);
            if ( (_BYTE)v4 )
              *(_BYTE *)(v3 + 194) |= 2u;
          }
        }
      }
    }
    else
    {
      *(_BYTE *)(v3 + 193) = 1;
      _InterlockedOr(v10, 0);
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 2 )
      {
        v8 = *(unsigned int *)(v3 + 536);
        LODWORD(v8) = v8 & 0x7FFFFFFF;
        if ( KeGetPcr()->Prcb.Number != (_DWORD)v8 )
        {
          LOBYTE(a2) = 1;
          LOBYTE(v4) = KiSendSoftwareInterrupt(v8, a2);
          return v4;
        }
        goto LABEL_24;
      }
      if ( (_BYTE)v4 == 5
        && !*(_BYTE *)(v3 + 390)
        && !*(_WORD *)(v3 + 486)
        && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v3 + 484) && !*(_BYTE *)(v3 + 192)) )
      {
        LOBYTE(v4) = KiSignalThread(a1, v3, 256LL, 0LL);
        *(_BYTE *)(v3 + 112) |= 0x20u;
      }
    }
  }
  return v4;
}
