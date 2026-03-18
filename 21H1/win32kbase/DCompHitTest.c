/*
 * XREFs of DCompHitTest @ 0x1C0064080
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0064348 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall DCompHitTest(_OWORD *a1, unsigned int *a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned int v5; // eax
  CTouchProcessor *MouseProcessor; // rax
  __int128 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *result; // rax
  __int128 v15; // [rsp+30h] [rbp-D0h]
  __int128 v16; // [rsp+30h] [rbp-D0h]
  __int128 v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+40h] [rbp-C0h]
  __int128 v19; // [rsp+50h] [rbp-B0h]
  __int128 v20; // [rsp+50h] [rbp-B0h]
  __int128 v21; // [rsp+60h] [rbp-A0h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+80h] [rbp-80h]
  __int128 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  _OWORD v29[7]; // [rsp+A0h] [rbp-60h] BYREF
  char v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+111h] [rbp+11h]
  __int16 v32; // [rsp+115h] [rbp+15h]
  char v33; // [rsp+117h] [rbp+17h]

  v5 = *a2;
  if ( !*a2 )
    goto LABEL_4;
  if ( v5 > 3 )
  {
    if ( v5 == 4 )
    {
LABEL_4:
      MouseProcessor = (CTouchProcessor *)anonymous_namespace_::GetMouseProcessor();
      goto LABEL_5;
    }
    if ( v5 != 5 )
    {
      if ( v5 != 6 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
        goto LABEL_11;
      }
      goto LABEL_4;
    }
  }
  MouseProcessor = gpTouchProcessor;
LABEL_5:
  if ( !MouseProcessor )
  {
LABEL_11:
    v31 = 0;
    v32 = 0;
    v33 = 0;
    memset(v29, 0, sizeof(v29));
    v28 = v29[0];
    v30 = 0;
    v26 = v29[1];
    v24 = v29[2];
    v22 = v29[3];
    v20 = v29[4];
    v18 = v29[5];
    v16 = v29[6];
    CInputDest::SetEmpty((CInputDest *)v29);
    *a1 = v28;
    a1[1] = v26;
    a1[2] = v24;
    a1[3] = v22;
    v12 = v18;
    a1[4] = v20;
    v13 = v16;
    goto LABEL_7;
  }
  v11 = (__int128 *)CSpatialProcessor::HitTest(MouseProcessor, v29, a2, a3, a4, a5);
  v15 = *v11;
  v17 = v11[1];
  v19 = v11[2];
  v21 = v11[3];
  v23 = v11[4];
  v25 = v11[5];
  v27 = v11[6];
  CInputDest::SetEmpty((CInputDest *)v29);
  *a1 = v15;
  a1[1] = v17;
  a1[2] = v19;
  a1[3] = v21;
  v12 = v25;
  a1[4] = v23;
  v13 = v27;
LABEL_7:
  a1[5] = v12;
  result = a1;
  a1[6] = v13;
  return result;
}
