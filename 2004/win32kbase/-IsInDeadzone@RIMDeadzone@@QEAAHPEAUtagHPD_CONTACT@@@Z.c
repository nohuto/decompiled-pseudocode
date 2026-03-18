/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C016FFCC
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C015B9F8 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C0010E0C (PtInRect.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01704EC (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C0170744 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C018139C (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagPOINT *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r12d
  _BOOL8 v7; // r13
  int v8; // ecx
  int v9; // ecx
  LONG x; // edi
  unsigned int v11; // r10d
  unsigned int v12; // r15d
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  DeadzonePalmTelemetry *v19; // rcx
  DeadzonePalmTelemetry *v20; // rcx
  struct tagPOINT v22; // [rsp+60h] [rbp+40h]
  unsigned int Angle; // [rsp+60h] [rbp+40h]
  struct tagPOINT v24; // [rsp+68h] [rbp+48h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = 0;
  v7 = (a2[332].y & 4) == 0 && (a2[302].y & 4) != 0;
  v8 = *((_DWORD *)this + 4);
  if ( v8 && *((_DWORD *)this + 10) )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v24 = a2[306];
        v22 = *(struct tagPOINT *)((char *)this + 44);
        v24.x /= 100;
        v24.y /= 100;
        v22.x /= 100;
        x = v22.x;
        v22.y /= 100;
        Angle = RIMDeadzone::_GetAngle(v24, v22);
        v11 = Angle;
        v12 = (v24.x - x) * (v24.x - x) + (v24.y - v22.y) * (v24.y - v22.y);
        v13 = 0LL;
        if ( *((_DWORD *)this + 8) )
        {
          v14 = *((_QWORD *)this + 3);
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v11, *(_QWORD *)(v14 + 24 * v13)) )
            {
              v15 = 0LL;
              if ( *(_DWORD *)(v14 + 24 * v13 + 16) )
                break;
            }
LABEL_23:
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= *((_DWORD *)this + 8) )
              return v6;
          }
          v16 = v14;
          while ( 1 )
          {
            v17 = *(_QWORD *)(v16 + 24 * v13 + 8);
            if ( v12 >= *(_DWORD *)(v17 + 8 * v15) && v12 < *(_DWORD *)(v17 + 8 * v15 + 4) )
              break;
            v18 = v16;
            if ( v7 )
            {
              v19 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v19 )
              {
                if ( v12 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v19, v12, v11, 0);
                  v14 = *((_QWORD *)this + 3);
                  v11 = Angle;
                  v18 = v14;
                }
              }
            }
            v15 = (unsigned int)(v15 + 1);
            v16 = v18;
            if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 24 * v13 + 16) )
              goto LABEL_23;
          }
          v6 = 1;
          if ( v7 )
          {
            v20 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v20 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v20, v12, v11, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *(_QWORD *)&a2[306]);
    }
  }
  return v6;
}
