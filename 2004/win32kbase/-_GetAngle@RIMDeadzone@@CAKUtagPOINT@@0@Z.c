/*
 * XREFs of ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01704EC
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C016FFCC (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01701AC (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rcx
  signed int v10; // eax
  signed int *v11; // rdx
  bool v12; // cc
  int v13; // esi
  int v14; // esi
  int v15; // eax

  v4 = a1.x - a2.x;
  v5 = 0;
  v6 = a1.y - a2.y;
  v7 = 4;
  if ( a1.x == a2.x )
  {
    v8 = 90;
  }
  else
  {
    v9 = 0LL;
    v10 = abs32(100 * v6 / v4);
    v11 = (signed int *)&RIMDeadzone::s_adwTangentLookup;
    do
    {
      if ( v10 <= *v11 )
        break;
      v9 = (unsigned int)(v9 + 1);
      ++v11;
    }
    while ( (unsigned int)v9 < 0x12 );
    if ( (_DWORD)v9 == 18 )
    {
      v8 = 90;
    }
    else
    {
      v8 = 5 * v9;
      if ( (unsigned int)(5 * v9) > 0x5A )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v11, a3, a4);
    }
    v12 = v4 <= 0;
    if ( v4 < 0 )
      goto LABEL_13;
  }
  if ( v6 >= 0 )
    goto LABEL_16;
  v12 = v4 <= 0;
LABEL_13:
  if ( v12 )
  {
    LOBYTE(v5) = v6 >= 0;
    v7 = v5 + 2;
  }
  else
  {
    v7 = 1;
  }
LABEL_16:
  v13 = v7 - 2;
  if ( !v13 )
  {
    v15 = 180;
    goto LABEL_22;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v15 = 360;
LABEL_22:
      v8 = v15 - v8;
    }
  }
  else
  {
    v8 += 180;
  }
  return v8 % 0x168;
}
