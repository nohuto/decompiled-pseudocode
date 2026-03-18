/*
 * XREFs of ?UpdateIntObjUsage@@YGXPAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1B3375
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2FF7 (-HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_I.c)
 * Callees:
 *     __CIsqrt @ 0xF911A (__CIsqrt.c)
 *     ??$_Pow_int@N@@YGNNH@Z @ 0x1B2DA8 (--$_Pow_int@N@@YGNNH@Z.c)
 */

void __fastcall UpdateIntObjUsage(
        int a1,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        unsigned int a10,
        unsigned __int64 a11)
{
  unsigned int v11; // esi
  int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // esi
  int v15; // edx
  int v16; // et2
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // edx
  double v20; // st7
  bool v21; // zf
  unsigned int v22; // edx
  int v23; // eax
  int v24; // ebx
  int v25; // edx
  int v26; // et2
  unsigned int v27; // esi
  double v28; // [esp+14h] [ebp-14h]
  __int16 v29; // [esp+24h] [ebp-4h]

  v11 = a10;
  v12 = a8 & 2;
  v29 = a2;
  if ( a10 == 1 || a10 == 2 )
  {
    if ( (a2 & 0x80u) != 0 )
    {
      v23 = HIDWORD(a11);
      v24 = a11;
      if ( dword_278488 )
      {
        gmsInputEndTime = a11;
        a10 = HIDWORD(gmsInputStartTime);
        if ( a11 > gmsInputStartTime )
        {
          if ( gmsInputStartTime )
          {
            v25 = v12 != 0 ? 0x30 : 0;
            v26 = a11 - gmsInputStartTime + *(_DWORD *)((char *)&qword_2784D0 + v25);
            *(_DWORD *)((char *)&qword_2784D0 + v25 + 4) = (a11
                                                          - __PAIR64__(a10, gmsInputStartTime)
                                                          + __PAIR64__(
                                                              *(_DWORD *)((char *)&qword_2784D0 + v25 + 4),
                                                              *(_DWORD *)((char *)&qword_2784D0 + v25))) >> 32;
            *(_DWORD *)((char *)&qword_2784D0 + v25) = v26;
            v23 = HIDWORD(a11);
          }
        }
      }
      LODWORD(gmsInputStartTime) = v24;
      HIDWORD(gmsInputStartTime) = v23;
      v27 = v11 - 1;
      if ( v27 )
      {
        if ( v27 == 1 )
          *(int *)((char *)&dword_2784BC + (v12 != 0 ? 0x30 : 0)) += abs32(a9);
      }
      else
      {
        *(int *)((char *)&dword_2784B8 + (v12 != 0 ? 0x30 : 0)) += abs32(a9);
      }
    }
  }
  else
  {
    if ( !a1 )
      return;
    v14 = HIDWORD(a11);
    v13 = a11;
    if ( (a2 & 1) != 0 )
    {
      gmsInputStartTime = a11;
      *(struct tagINTOBJTELEMETRYSTATE **)((char *)&gIntObjTelemetryState + (v12 != 0 ? 0x30 : 0)) = (struct tagINTOBJTELEMETRYSTATE *)(*(char **)((char *)&gIntObjTelemetryState + (v12 != 0 ? 0x30 : 0)) + 1);
    }
    if ( (a2 & 2) != 0 )
    {
      LODWORD(gmsInputEndTime) = v13;
      HIDWORD(gmsInputEndTime) = v14;
      a10 = HIDWORD(gmsInputStartTime);
      if ( __PAIR64__(v14, v13) > gmsInputStartTime && gmsInputStartTime )
      {
        v15 = v12 != 0 ? 0x30 : 0;
        v16 = v13 - gmsInputStartTime + *(_DWORD *)((char *)&qword_2784D0 + v15);
        *(_DWORD *)((char *)&qword_2784D0 + v15 + 4) = (__PAIR64__(v14, v13)
                                                      - __PAIR64__(a10, gmsInputStartTime)
                                                      + __PAIR64__(
                                                          *(_DWORD *)((char *)&qword_2784D0 + v15 + 4),
                                                          *(_DWORD *)((char *)&qword_2784D0 + v15))) >> 32;
        *(_DWORD *)((char *)&qword_2784D0 + v15) = v16;
        a2 = v29;
      }
      LODWORD(gmsInputStartTime) = v13;
      HIDWORD(gmsInputStartTime) = v14;
    }
    if ( (a2 & 0x80u) != 0 )
    {
      v17 = abs32(a9);
      v18 = v12 != 0 ? 0x30 : 0;
      a2 = v29;
      if ( (a8 & 4) != 0 )
        *(int *)((char *)&dword_2784C4 + v18) += v17;
      else
        *(int *)((char *)&dword_2784AC + v18) += v17;
    }
    if ( (a2 & 0x2000) != 0 && !gIsButtonHeld )
    {
      gIsButtonHeld = 1;
      ++*(int *)((char *)&dword_2784C0 + (v12 != 0 ? 0x30 : 0));
    }
    if ( (a2 & 0x1000) != 0 && (a8 & 4) != 0 )
    {
      a10 = a7 - dword_278480;
      v28 = _Pow_int<double>((double)(a7 - dword_278480));
      a10 = a6 - v19;
      v20 = _Pow_int<double>((double)(a6 - v19));
      a2 = v29;
      *(double *)((char *)&dbl_2784C8 + (v12 != 0 ? 0x30 : 0)) = sqrt(v20 + v28)
                                                               + *(double *)((char *)&dbl_2784C8 + (v12 != 0 ? 0x30 : 0));
    }
    if ( (a2 & 0x100) != 0 )
    {
      ++*(int *)((char *)&dword_2784B0 + (v12 != 0 ? 0x30 : 0));
      gIsButtonHeld = 0;
    }
    v21 = (a2 & 0x400) == 0;
    v22 = HIDWORD(a11);
    if ( !v21 )
    {
      LODWORD(gmsInputEndTime) = v13;
      HIDWORD(gmsInputEndTime) = HIDWORD(a11);
      if ( __PAIR64__(HIDWORD(a11), v13) > gmsInputStartTime && gmsInputStartTime )
        qword_2784D0 += __PAIR64__(HIDWORD(a11), v13) - gmsInputStartTime;
      LODWORD(gmsInputStartTime) = v13;
      HIDWORD(gmsInputStartTime) = HIDWORD(a11);
      ++*(int *)((char *)&dword_2784B4 + (v12 != 0 ? 0x30 : 0));
    }
    if ( (v29 & 0x800) != 0 )
    {
      LODWORD(gmsInputEndTime) = v13;
      HIDWORD(gmsInputEndTime) = v22;
      if ( __PAIR64__(v22, v13) > gmsInputStartTime )
      {
        if ( gmsInputStartTime )
          qword_278500 += __PAIR64__(v22, v13) - gmsInputStartTime;
      }
      LODWORD(gmsInputStartTime) = v13;
      HIDWORD(gmsInputStartTime) = v22;
    }
  }
  qmemcpy(&gLastInputInfo, &a3, 0x1Cu);
}
