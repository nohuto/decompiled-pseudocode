/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C01A1004
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0192580 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C019B35C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C019E7BC (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  struct CPointerInfoNode *v9; // rax
  CTouchProcessor *v10; // rcx
  int *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v9 = CTouchProcessor::LookupNode((CTouchProcessor *)this, a2, a3);
  v11 = (int *)v9;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 585:
        v12 = *(_DWORD *)v9;
        if ( (v12 & 0x1000000) == 0 || (v12 & 0x2000000) != 0 || (v12 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v12 = *v11;
        }
        v13 = v12 | 0x2000000;
        goto LABEL_63;
      case 586:
        *(_DWORD *)v9 |= 0x20000000u;
        goto LABEL_78;
      case 593:
        v14 = *((_DWORD *)v9 + 1);
        if ( (v14 & 1) == 0 || (v14 & 2) != 0 || (v14 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v14 = v11[1];
        }
        v15 = v14 | 2;
        break;
      case 594:
        v16 = *((_DWORD *)v9 + 1);
        if ( (v16 & 0x10) == 0 || (v16 & 0x20) != 0 || (v16 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v16 = v11[1];
        }
        v15 = v16 | 0x20;
        break;
      default:
        v17 = *(_DWORD *)v9;
        if ( (v17 & 0x100000) == 0 || (v17 & 0x200000) != 0 || (v17 & 0x400000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v17 = *v11;
        }
        v13 = v17 | 0x200000;
        goto LABEL_63;
    }
LABEL_76:
    v11[1] = v15;
    goto LABEL_78;
  }
  if ( !a6 )
  {
    switch ( a4 )
    {
      case 585:
        v21 = *(_DWORD *)v9;
        if ( (v21 & 0x1000000) == 0 || (v21 & 0x2000000) != 0 || (v21 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v21 = *v11;
        }
        v13 = v21 | 0x4000000;
        goto LABEL_63;
      case 586:
        v22 = *(_DWORD *)v9;
        if ( (v22 & 0x10000000) == 0 || (v22 & 0x20000000) != 0 || (v22 & 0x40000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v22 = *v11;
        }
        v13 = v22 | 0x40000000;
        goto LABEL_63;
      case 593:
        v23 = *((_DWORD *)v9 + 1);
        if ( (v23 & 1) == 0 || (v23 & 2) != 0 || (v23 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v23 = v11[1];
        }
        v15 = v23 | 4;
        break;
      case 594:
        v24 = *((_DWORD *)v9 + 1);
        if ( (v24 & 0x10) == 0 || (v24 & 0x20) != 0 || (v24 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
          v24 = v11[1];
        }
        v15 = v24 | 0x40;
        break;
      default:
        *(_DWORD *)v9 |= 0x400000u;
        goto LABEL_78;
    }
    goto LABEL_76;
  }
  if ( a4 == 585 )
  {
    v18 = *(_DWORD *)v9;
    v19 = 0x1000000;
    if ( (v18 & 0x800000) != 0 && (v18 & 0x1000000) == 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( a4 == 586 )
  {
    v18 = *(_DWORD *)v9;
    v19 = 0x10000000;
    if ( (v18 & 0x8000000) != 0 && (v18 & 0x10000000) == 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( a4 != 593 )
  {
    if ( a4 == 594 )
    {
      v20 = *((_DWORD *)v9 + 1);
      if ( (v20 & 8) == 0 || (v20 & 0x10) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
        v20 = v11[1];
      }
      v15 = v20 | 0x10;
      goto LABEL_76;
    }
    v18 = *(_DWORD *)v9;
    v19 = 0x100000;
    if ( (v18 & 0x100000) == 0 )
    {
LABEL_50:
      v13 = v19 | v18;
LABEL_63:
      *v11 = v13;
      goto LABEL_78;
    }
LABEL_49:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    v18 = *v11;
    goto LABEL_50;
  }
  if ( *(int *)v9 >= 0 || (*((_DWORD *)v9 + 1) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  v11[1] |= 1u;
LABEL_78:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v10, a2, v11[2]);
}
