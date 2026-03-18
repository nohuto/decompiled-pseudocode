/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01701AC
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C015BA7C (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C015BB58 (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C00711AC (RIMGetOneCoreEdition.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C0170470 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01704EC (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01705E8 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0170694 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C0170744 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  RIMDeadzone *v5; // r13
  unsigned int v6; // r15d
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // r9d
  unsigned int v14; // ebp
  __int64 v15; // r10
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // r11d
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct tagPOINT v25; // [rsp+20h] [rbp-58h]
  struct tagPOINT v26; // [rsp+80h] [rbp+8h]
  unsigned int Angle; // [rsp+80h] [rbp+8h]
  int v29; // [rsp+94h] [rbp+1Ch]
  int v30; // [rsp+9Ch] [rbp+24h]

  v30 = HIDWORD(a4);
  v29 = HIDWORD(a3);
  v5 = RIMDeadzone::s_pRimDeadzoneInstance;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 4) || a5 != *(_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance )
  {
    if ( *((_QWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 3) )
      RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone::s_pRimDeadzoneInstance);
    v9 = a5 ? RIMDeadzone::_InitializeRightHandedDeadzone(v5) : RIMDeadzone::_InitializeLeftHandedDeadzone(v5);
    if ( v9 < 0 )
      return 0LL;
  }
  v25.x = v8 / 100;
  v25.y = v29 / 100;
  v26.x = v7 / 100;
  v26.y = v30 / 100;
  Angle = RIMDeadzone::_GetAngle(v25, v26);
  v11 = Angle;
  v12 = *((_DWORD *)v5 + 8);
  v13 = 0;
  v14 = (v8 / 100 - v7 / 100) * (v8 / 100 - v7 / 100) + (v29 / 100 - v30 / 100) * (v29 / 100 - v30 / 100);
  if ( v12 )
  {
    v15 = *((_QWORD *)v5 + 3);
    while ( 1 )
    {
      if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v11, *(_QWORD *)(v15 + 24LL * v13)) )
      {
        v18 = *(_DWORD *)(v15 + 8 * v16 + 16);
        v19 = 0;
        if ( v18 )
          break;
      }
LABEL_19:
      v13 = v17 + 1;
      if ( v13 >= v12 )
        goto LABEL_20;
    }
    v20 = *(_QWORD *)(v15 + 8 * v16 + 8);
    while ( v14 < *(_DWORD *)(v20 + 8LL * v19) || v14 >= *(_DWORD *)(v20 + 8LL * v19 + 4) )
    {
      if ( ++v19 >= v18 )
      {
        v11 = Angle;
        goto LABEL_19;
      }
    }
    return 1;
  }
LABEL_20:
  if ( (unsigned int)RIMGetOneCoreEdition() == 6 )
    return v6;
  if ( a5 != 1 )
  {
    if ( a5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
    if ( v29 > a2[3] - 1000 && v8 <= v7 )
      return 1;
    if ( v8 >= *a2 + 530 )
      return v6;
    goto LABEL_31;
  }
  if ( v29 > a2[3] - 1000 && v8 >= v7 )
    return 1;
  if ( v8 > a2[2] - 530 )
  {
LABEL_31:
    if ( v29 >= v30 )
      return 1;
  }
  return v6;
}
