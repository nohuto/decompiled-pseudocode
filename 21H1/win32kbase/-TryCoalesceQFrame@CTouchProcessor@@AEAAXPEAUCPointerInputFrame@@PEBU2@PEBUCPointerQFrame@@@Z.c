/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01A2630
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C019372C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C019C474 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C012D970 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C012E0F0 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x1C012E870 (EtwTracePointerNoCoalesce.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C018C44C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C018FA48 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C0191904 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01945E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01A2538 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::TryCoalesceQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerQFrame *a4)
{
  __int64 v4; // rbx
  int v5; // r8d
  unsigned int v7; // edx
  int v8; // eax
  char v10; // di
  char v11; // r12
  unsigned int i; // ebp
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // rbx
  int v16; // r15d
  unsigned int j; // r14d
  unsigned __int64 v18; // rcx
  __int64 v19; // rbp
  _QWORD *v20; // rax
  __int16 v21; // dx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28[10]; // [rsp+48h] [rbp-50h] BYREF
  CTouchProcessor *v29; // [rsp+A0h] [rbp+8h]
  int v30; // [rsp+A8h] [rbp+10h] BYREF
  struct CPointerInputFrame *v31; // [rsp+B0h] [rbp+18h]
  int v32; // [rsp+B8h] [rbp+20h]

  v31 = a3;
  v29 = this;
  v4 = *((_QWORD *)a2 + 18);
  v5 = 0;
  v32 = 0;
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  v30 = 0;
  v10 = 0;
  v11 = 1;
  for ( i = 0; i < v7; v4 += 160LL )
  {
    if ( *(_DWORD *)v4 == -1 )
      break;
    if ( !a4 || a4 == (const struct CPointerQFrame *)v4 )
    {
      v13 = *(_DWORD *)(v4 + 140);
      if ( (v13 & 1) == 0 || (v13 & 8) != 0 || (v14 = *(_DWORD *)(v4 + 140), *(_QWORD *)(v4 + 8) == -1LL) )
      {
        v14 = *(_DWORD *)(v4 + 140);
        if ( (v13 & 2) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
          v14 = *(_DWORD *)(v4 + 140);
        }
      }
      if ( (v14 & 2) == 0 )
        goto LABEL_17;
      this = (CTouchProcessor *)*(unsigned int *)(*(_QWORD *)(v4 + 152) + 136LL);
      if ( *(_DWORD *)(v4 + 136) != (_DWORD)this )
      {
        CTouchProcessor::TrackCoalesceOnArrival((int)this, (int *)v4, 17);
        *(_DWORD *)(v4 + 140) &= ~2u;
        v14 = *(_DWORD *)(v4 + 140);
      }
      if ( (v14 & 2) != 0 )
      {
        if ( *(_DWORD *)(v4 + 144) != 1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
          v14 = *(_DWORD *)(v4 + 140);
        }
        v8 = 1;
        *(_DWORD *)(v4 + 140) = v14 | 4;
        v30 = 1;
      }
      else
      {
LABEL_17:
        v8 = v30;
      }
      v5 = 0;
      *(_QWORD *)(v4 + 152) = 0LL;
    }
    v7 = *((_DWORD *)a2 + 12);
    ++i;
  }
  if ( v8 )
  {
    EtwTraceBeginPointerFrameCoalesce(*((_DWORD *)a2 + 10), v7, 0);
    v7 = *((_DWORD *)a2 + 12);
    v5 = 0;
  }
  v15 = (_DWORD *)*((_QWORD *)a2 + 17);
  v16 = 1;
  for ( j = 0; j < v7; v15 += 120 )
  {
    v18 = *((_QWORD *)a2 + 17) + 480LL * v7;
    if ( (unsigned __int64)v15 >= v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
    {
      v19 = *((_QWORD *)a2 + 18) + 160LL * (unsigned int)v15[2];
      if ( (a4 || *(_QWORD *)(v19 + 8) == -1LL) && a4 != (const struct CPointerQFrame *)v19 )
      {
        v16 = (*(_BYTE *)(v19 + 140) & 4) != 0 ? v16 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 140) & 2) != 0 )
        {
          *((_QWORD *)v15 + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                   (struct _KTHREAD **)v29,
                                   a2,
                                   v31,
                                   (struct CPointerInfoNode *)v15,
                                   j,
                                   v5);
        }
        else
        {
          v16 = v5;
          v20 = CTouchProcessor::CreateAndReferenceMsgData(
                  (struct _KTHREAD **)v29,
                  *((_WORD *)v15 + 86),
                  *((_DWORD *)a2 + 10),
                  j,
                  v15[45],
                  -__CFSHR__(*v15, 7));
          v21 = *((_WORD *)v15 + 86);
          v22 = *((unsigned __int16 *)v15 + 80);
          *((_QWORD *)v15 + 2) = v20;
          EtwTracePointerNoCoalesce(v22, v21, *(_DWORD *)(v19 + 144), 0);
        }
        v5 = 0;
        if ( !*((_QWORD *)v15 + 2) )
        {
          CTouchProcessor::FreePointerInfoNodeInt((struct _KTHREAD **)v29, a2, j);
          v5 = 0;
        }
      }
      if ( *(_QWORD *)(v19 + 8) != -1LL )
        v11 = v5;
    }
    if ( !a4 )
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
      {
        v23 = v15[45];
        if ( (v23 & 0x2000) != 0 )
        {
          v32 = 1;
          if ( (v23 & 0x10000) != 0 )
            v10 = 1;
        }
      }
    }
    v7 = *((_DWORD *)a2 + 12);
    ++j;
  }
  if ( v30 != v5 )
    EtwTraceEndPointerFrameCoalesce(*((_DWORD *)a2 + 10), v7, 0);
  if ( v16 && (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 32LL) )
  {
    v30 = *((_DWORD *)a2 + 10);
    v27 = *((_QWORD *)a2 + 9);
    v28[0] = *((_QWORD *)a2 + 14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024C960,
      byte_1C021EB64,
      v24,
      v25,
      (__int64)v28,
      (__int64)&v27,
      (__int64)&v30);
  }
  v26 = *((_DWORD *)a2 + 30) ^ (*((_DWORD *)a2 + 30) ^ (2 * v16)) & 2;
  *((_DWORD *)a2 + 30) = v26;
  if ( !a4 )
    *((_DWORD *)a2 + 30) = v26 & 0xFFFFFFE3 | (4 * (v11 & 1 | (2 * (v32 & 1 | (2 * (v10 & 1))))));
}
