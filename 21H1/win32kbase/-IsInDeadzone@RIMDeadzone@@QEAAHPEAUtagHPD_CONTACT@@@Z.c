/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C01762FC
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0161D48 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C00A649C (PtInRect.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C017681C (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C0176A74 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C018709C (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagPOINT *a2)
{
  unsigned int v4; // r12d
  _BOOL8 v5; // r13
  int v6; // ecx
  int v7; // ecx
  LONG x; // edi
  unsigned int v9; // r10d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  DeadzonePalmTelemetry *v17; // rcx
  DeadzonePalmTelemetry *v18; // rcx
  struct tagPOINT v20; // [rsp+60h] [rbp+40h]
  unsigned int Angle; // [rsp+60h] [rbp+40h]
  struct tagPOINT v22; // [rsp+68h] [rbp+48h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v4 = 0;
  v5 = (a2[332].y & 4) == 0 && (a2[302].y & 4) != 0;
  v6 = *((_DWORD *)this + 4);
  if ( v6 && *((_DWORD *)this + 10) )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v22 = a2[306];
        v20 = *(struct tagPOINT *)((char *)this + 44);
        v22.x /= 100;
        v22.y /= 100;
        v20.x /= 100;
        x = v20.x;
        v20.y /= 100;
        Angle = RIMDeadzone::_GetAngle(v22, v20);
        v9 = Angle;
        v10 = (v22.x - x) * (v22.x - x) + (v22.y - v20.y) * (v22.y - v20.y);
        v11 = 0LL;
        if ( *((_DWORD *)this + 8) )
        {
          v12 = *((_QWORD *)this + 3);
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v9, *(_QWORD *)(v12 + 24 * v11)) )
            {
              v13 = 0LL;
              if ( *(_DWORD *)(v12 + 24 * v11 + 16) )
                break;
            }
LABEL_23:
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= *((_DWORD *)this + 8) )
              return v4;
          }
          v14 = v12;
          while ( 1 )
          {
            v15 = *(_QWORD *)(v14 + 24 * v11 + 8);
            if ( v10 >= *(_DWORD *)(v15 + 8 * v13) && v10 < *(_DWORD *)(v15 + 8 * v13 + 4) )
              break;
            v16 = v14;
            if ( v5 )
            {
              v17 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v17 )
              {
                if ( v10 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v17, v10, v9, 0);
                  v12 = *((_QWORD *)this + 3);
                  v9 = Angle;
                  v16 = v12;
                }
              }
            }
            v13 = (unsigned int)(v13 + 1);
            v14 = v16;
            if ( (unsigned int)v13 >= *(_DWORD *)(v16 + 24 * v11 + 16) )
              goto LABEL_23;
          }
          v4 = 1;
          if ( v5 )
          {
            v18 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v18 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v18, v10, v9, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *(_QWORD *)&a2[306]);
    }
  }
  return v4;
}
