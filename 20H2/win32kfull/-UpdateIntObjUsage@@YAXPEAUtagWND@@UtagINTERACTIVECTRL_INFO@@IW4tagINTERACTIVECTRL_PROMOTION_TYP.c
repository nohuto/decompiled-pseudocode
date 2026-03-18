/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C02585AC
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0258234 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     sqrt_0 @ 0x1C015F550 (sqrt_0.c)
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, unsigned __int64 a5)
{
  int v5; // r11d
  __int64 result; // rax
  unsigned int v8; // r10d
  int v10; // r8d
  _BOOL8 v11; // r14
  unsigned int v12; // eax
  double v13; // xmm1_8
  double v14; // xmm2_8
  unsigned int v15; // eax
  double i; // xmm0_8
  double j; // xmm0_8
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // xmm1_8
  __int64 v23; // [rsp+58h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 20);
  result = (unsigned int)(a4 - 1);
  v8 = 2;
  v10 = v5 & 2;
  if ( (unsigned int)result <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( dword_1C0340918 )
      {
        gmsInputEndTime = a5;
        if ( a5 > gmsInputStartTime )
        {
          if ( gmsInputStartTime )
          {
            v18 = v10 != 0 ? 0x30 : 0;
            *(struct tagINTOBJTELEMETRYSTATE near **)((char *)&gIntObjTelemetryState + v18 + 40) = (struct tagINTOBJTELEMETRYSTATE near *)(*(char **)((char *)&gIntObjTelemetryState + v18 + 40) + a5 - gmsInputStartTime);
          }
        }
      }
      gmsInputStartTime = a5;
      v19 = a4 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v20 = v10 != 0 ? 0x30 : 0;
          *(_DWORD *)((char *)&gIntObjTelemetryState + v20 + 20) += abs32(*(_DWORD *)(a2 + 24));
        }
      }
      else
      {
        v21 = v10 != 0 ? 0x30 : 0;
        *(_DWORD *)((char *)&gIntObjTelemetryState + v21 + 16) += abs32(*(_DWORD *)(a2 + 24));
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    v11 = v10 != 0;
    if ( (a3 & 1) != 0 )
    {
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v11);
    }
    if ( (a3 & 2) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime && gmsInputStartTime )
        *(&gIntObjTelemetryState + 6 * v11 + 5) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState
                                                                                                  + 6 * v11
                                                                                                  + 5)
                                                                                        + a5
                                                                                        - gmsInputStartTime);
      gmsInputStartTime = a5;
    }
    if ( (a3 & 0x80u) != 0 )
    {
      v12 = abs32(*(_DWORD *)(a2 + 24));
      if ( (v5 & 4) != 0 )
        *((_DWORD *)&gIntObjTelemetryState + 12 * v11 + 7) += v12;
      else
        *((_DWORD *)&gIntObjTelemetryState + 12 * v11 + 1) += v12;
    }
    if ( (a3 & 0x2000) != 0 && !gIsButtonHeld )
    {
      gIsButtonHeld = 1;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v11 + 6);
    }
    if ( (v5 & 4) != 0 && (a3 & 0x1000) != 0 )
    {
      v13 = DOUBLE_1_0;
      v23 = *(_QWORD *)(a2 + 12);
      v14 = DOUBLE_1_0;
      v15 = 2;
      for ( i = (double)((int)v23 - (int)qword_1C034090C); ; i = i * i )
      {
        if ( (v15 & 1) != 0 )
          v14 = v14 * i;
        v15 >>= 1;
        if ( !v15 )
          break;
      }
      for ( j = (double)(HIDWORD(v23) - HIDWORD(qword_1C034090C)); ; j = j * j )
      {
        if ( (v8 & 1) != 0 )
          v13 = v13 * j;
        v8 >>= 1;
        if ( !v8 )
          break;
      }
      *((double *)&gIntObjTelemetryState + 6 * v11 + 4) = sqrt_0(v13 + v14)
                                                        + *((double *)&gIntObjTelemetryState + 6 * v11 + 4);
    }
    if ( (a3 & 0x100) != 0 )
    {
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v11 + 2);
      gIsButtonHeld = 0;
    }
    if ( (a3 & 0x400) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime && gmsInputStartTime )
        qword_1C0340968 += a5 - gmsInputStartTime;
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v11 + 3);
    }
    if ( (a3 & 0x800) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime )
      {
        if ( gmsInputStartTime )
          qword_1C0340998 += a5 - gmsInputStartTime;
      }
      gmsInputStartTime = a5;
    }
  }
  v22 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  gLastInputInfo = *(_OWORD *)a2;
  dword_1C0340918 = result;
  *(__int64 *)((char *)&qword_1C034090C + 4) = v22;
  return result;
}
