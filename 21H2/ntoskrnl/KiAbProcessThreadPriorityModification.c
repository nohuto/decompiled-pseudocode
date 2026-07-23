/*
 * XREFs of KiAbProcessThreadPriorityModification @ 0x140205A50
 * Callers:
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 */

void __fastcall KiAbProcessThreadPriorityModification(__int64 a1, char a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  _QWORD *v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    if ( a3 == 1 && a2 > *(char *)(a1 + 195) )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v4 = (_QWORD *)(a1 + 808);
        if ( *(_QWORD *)(a1 + 808) == 1LL )
        {
          v5 = 34680LL;
LABEL_7:
          v6 = (_QWORD *)((char *)&CurrentPrcb->MxCsr + v5);
          if ( (struct _KPRCB *)((char *)CurrentPrcb + v5) )
          {
            *v4 = *v6;
            *v6 = v4;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
  }
  else if ( a2 < *(char *)(a1 + 563) )
  {
    if ( *(_BYTE *)(a1 + 871) )
    {
      v4 = (_QWORD *)(a1 + 816);
      if ( *(_QWORD *)(a1 + 816) == 1LL )
      {
        v5 = 34672LL;
        goto LABEL_7;
      }
    }
  }
}
