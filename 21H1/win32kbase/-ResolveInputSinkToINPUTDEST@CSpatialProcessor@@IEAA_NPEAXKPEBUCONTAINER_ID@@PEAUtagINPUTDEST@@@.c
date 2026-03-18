/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001C48
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0063D5C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001E90 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C001B7B0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B8578 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01FC500 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(
        CSpatialProcessor *this,
        void *a2,
        int a3,
        const struct CONTAINER_ID *a4,
        struct tagINPUTDEST *a5)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // edx
  _QWORD *v15; // rbx
  unsigned int v16; // esi
  _QWORD *v17; // rcx
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  PVOID Object[2]; // [rsp+38h] [rbp-81h] BYREF
  _OWORD v29[7]; // [rsp+48h] [rbp-71h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v31; // [rsp+C8h] [rbp+Fh]
  __int128 v32; // [rsp+D8h] [rbp+1Fh]
  __int64 v33; // [rsp+E8h] [rbp+2Fh]

  memset(v29, 0, sizeof(v29));
  v8 = v29[1];
  *(_OWORD *)a5 = v29[0];
  v9 = v29[2];
  *((_OWORD *)a5 + 1) = v8;
  v10 = v29[3];
  *((_OWORD *)a5 + 2) = v9;
  v11 = v29[4];
  *((_OWORD *)a5 + 3) = v10;
  v12 = v29[5];
  *((_OWORD *)a5 + 4) = v11;
  v13 = v29[6];
  *((_OWORD *)a5 + 5) = v12;
  *((_OWORD *)a5 + 6) = v13;
  Object[0] = 0LL;
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)Object) >= 0 )
  {
    v15 = Object[0];
    if ( a3 == 1 )
    {
LABEL_6:
      v16 = 1;
      goto LABEL_7;
    }
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        v16 = 4;
        goto LABEL_7;
      }
      if ( a3 == 4 )
        goto LABEL_6;
      if ( a3 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v14,
            5,
            12,
            (__int64)&WPP_316427a6418039b01983fa5fffe52075_Traceguids,
            a3);
        }
        goto LABEL_18;
      }
    }
    v16 = 3;
LABEL_7:
    memset(v29, 0, sizeof(v29));
    v33 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(Object[0], v16, &v30);
    if ( (_DWORD)v30 == 2 )
    {
      Object[0] = 0LL;
      CompositionInputObject::GetWindowForInputType(v15, v16, Object);
      v17 = Object[0];
      if ( Object[0] )
      {
        v18 = 4;
        HIDWORD(v29[5]) = 2;
        LODWORD(v29[0]) = 4;
        *(PVOID *)&v29[5] = Object[0];
        goto LABEL_10;
      }
      goto LABEL_30;
    }
    if ( (_DWORD)v30 != 3 )
    {
      if ( (_DWORD)v30 != 4 )
        goto LABEL_30;
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    Object[0] = 0LL;
    CompositionInputObject::GetBaseWindowForInputType(v15, v16, Object);
    v17 = Object[0];
    if ( Object[0] )
    {
      v18 = 6;
      LODWORD(v29[0]) = 6;
      *(_OWORD *)((char *)&v29[2] + 8) = v31;
      HIDWORD(v29[5]) = 1;
      *((_QWORD *)&v29[4] + 1) = v33;
      *(PVOID *)&v29[5] = Object[0];
      *(_OWORD *)((char *)&v29[3] + 8) = v32;
      *((_QWORD *)&v29[1] + 1) = *((_QWORD *)&v30 + 1);
      goto LABEL_10;
    }
LABEL_30:
    v17 = *(_QWORD **)&v29[5];
    v18 = v29[0];
LABEL_10:
    if ( (v18 & 4) != 0 )
    {
      v19 = *(_QWORD *)(v17[2] + 416LL);
      if ( v15[2] )
      {
        *((_QWORD *)&v29[0] + 1) = v15[2];
        LODWORD(v29[0]) = v18 | 1;
      }
      if ( a4 )
      {
        HIDWORD(v29[6]) = *(_DWORD *)a4;
        if ( HIDWORD(v29[6]) && HIDWORD(v29[6]) != *(_DWORD *)(v19 + 1088) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      else
      {
        HIDWORD(v29[6]) = *(_DWORD *)(v19 + 1088);
      }
      if ( (*(_DWORD *)(v19 + 820) & 0x800000) != 0 )
        LODWORD(v29[1]) &= ~1u;
      else
        LODWORD(v29[1]) ^= (LOBYTE(v29[1]) ^ (unsigned __int8)*((_DWORD *)v15 + 48)) & 1;
      v20 = *((unsigned int *)v15 + 46);
      v21 = v29[1];
      *(_OWORD *)a5 = v29[0];
      v22 = v29[2];
      *((_OWORD *)a5 + 1) = v21;
      v23 = v29[3];
      *((_OWORD *)a5 + 2) = v22;
      v24 = v29[4];
      *((_OWORD *)a5 + 3) = v23;
      v25 = v29[5];
      *((_OWORD *)a5 + 4) = v24;
      *(_QWORD *)&v29[6] = v20;
      v26 = v29[6];
      *((_OWORD *)a5 + 5) = v25;
      *((_OWORD *)a5 + 6) = v26;
    }
LABEL_18:
    ObfDereferenceObject(v15);
  }
  return *(_DWORD *)a5 != 0;
}
