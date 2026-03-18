/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0198D9C
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C018A360 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C0193144 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C019659C (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // edi
  unsigned int v7; // ebx
  struct CPointerInfoNode *v9; // rax
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax

  v6 = a4;
  v7 = a3;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v9 = CTouchProcessor::LookupNode((CTouchProcessor *)this, a2, v7, a4);
  v14 = (int *)v9;
  if ( a5 )
  {
    switch ( v6 )
    {
      case 585:
        v15 = *(_DWORD *)v9;
        if ( (v15 & 0x1000000) == 0 || (v15 & 0x2000000) != 0 || (v15 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v15 = *v14;
        }
        v16 = v15 | 0x2000000;
        goto LABEL_63;
      case 586:
        *(_DWORD *)v9 |= 0x20000000u;
        goto LABEL_78;
      case 593:
        v17 = *((_DWORD *)v9 + 1);
        if ( (v17 & 1) == 0 || (v17 & 2) != 0 || (v17 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v17 = v14[1];
        }
        v18 = v17 | 2;
        break;
      case 594:
        v19 = *((_DWORD *)v9 + 1);
        if ( (v19 & 0x10) == 0 || (v19 & 0x20) != 0 || (v19 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v19 = v14[1];
        }
        v18 = v19 | 0x20;
        break;
      default:
        v20 = *(_DWORD *)v9;
        if ( (v20 & 0x100000) == 0 || (v20 & 0x200000) != 0 || (v20 & 0x400000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v20 = *v14;
        }
        v16 = v20 | 0x200000;
        goto LABEL_63;
    }
LABEL_76:
    v14[1] = v18;
    goto LABEL_78;
  }
  if ( !a6 )
  {
    switch ( v6 )
    {
      case 585:
        v24 = *(_DWORD *)v9;
        if ( (v24 & 0x1000000) == 0 || (v24 & 0x2000000) != 0 || (v24 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v24 = *v14;
        }
        v16 = v24 | 0x4000000;
        goto LABEL_63;
      case 586:
        v25 = *(_DWORD *)v9;
        if ( (v25 & 0x10000000) == 0 || (v25 & 0x20000000) != 0 || (v25 & 0x40000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v25 = *v14;
        }
        v16 = v25 | 0x40000000;
        goto LABEL_63;
      case 593:
        v26 = *((_DWORD *)v9 + 1);
        if ( (v26 & 1) == 0 || (v26 & 2) != 0 || (v26 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v26 = v14[1];
        }
        v18 = v26 | 4;
        break;
      case 594:
        v27 = *((_DWORD *)v9 + 1);
        if ( (v27 & 0x10) == 0 || (v27 & 0x20) != 0 || (v27 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
          v27 = v14[1];
        }
        v18 = v27 | 0x40;
        break;
      default:
        *(_DWORD *)v9 |= 0x400000u;
        goto LABEL_78;
    }
    goto LABEL_76;
  }
  if ( v6 == 585 )
  {
    v21 = *(_DWORD *)v9;
    v22 = 0x1000000;
    if ( (v21 & 0x800000) != 0 && (v21 & 0x1000000) == 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( v6 == 586 )
  {
    v21 = *(_DWORD *)v9;
    v22 = 0x10000000;
    if ( (v21 & 0x8000000) != 0 && (v21 & 0x10000000) == 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( v6 != 593 )
  {
    if ( v6 == 594 )
    {
      v23 = *((_DWORD *)v9 + 1);
      if ( (v23 & 8) == 0 || (v23 & 0x10) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
        v23 = v14[1];
      }
      v18 = v23 | 0x10;
      goto LABEL_76;
    }
    v21 = *(_DWORD *)v9;
    v22 = 0x100000;
    if ( (v21 & 0x100000) == 0 )
    {
LABEL_50:
      v16 = v22 | v21;
LABEL_63:
      *v14 = v16;
      goto LABEL_78;
    }
LABEL_49:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    v21 = *v14;
    goto LABEL_50;
  }
  if ( *(int *)v9 >= 0 || (*((_DWORD *)v9 + 1) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  v14[1] |= 1u;
LABEL_78:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v11, a2, (unsigned int)v14[2], v13);
}
