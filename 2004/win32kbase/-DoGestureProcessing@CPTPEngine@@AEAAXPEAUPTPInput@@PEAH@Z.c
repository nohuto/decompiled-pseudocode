/*
 * XREFs of ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C01C0344
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C364C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z @ 0x1C01C254C (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z.c)
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C01C2EC0 (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C01C47BC (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x1C01C4804 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01C4DFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::DoGestureProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3)
{
  int v3; // eax
  BOOL v6; // esi
  int v7; // edi
  unsigned int v8; // r15d
  char v9; // r8
  unsigned int v10; // r10d
  _DWORD *v11; // r9
  __int64 v12; // r11
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r13d
  struct CContactState *v17; // r12
  int v18; // eax
  __int128 v19; // [rsp+20h] [rbp-40h]
  __int128 v20; // [rsp+20h] [rbp-40h]
  __int128 v21; // [rsp+20h] [rbp-40h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  int *v24; // [rsp+A0h] [rbp+40h]

  v24 = a3;
  v3 = *((_DWORD *)this + 887);
  *a3 = 0;
  v6 = v3 == 6;
  if ( v3 == 3 || v3 == 6 )
    goto LABEL_25;
  v7 = 1;
  v8 = 0;
  v9 = 1;
  v10 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_27;
  v11 = (_DWORD *)((char *)a2 + 68);
  do
  {
    v12 = 392LL * (unsigned int)(*(v11 - 2) % *((_DWORD *)this + 4));
    v13 = *(_DWORD *)((char *)this + v12 + 1160);
    if ( (v13 & 1) != 0 )
    {
      if ( (v13 & 0x80u) != 0 || (v14 = 0, (*v11 & 0x40000) != 0) )
        v14 = 1;
      v15 = (v14 << 10) | v13 & 0xFFFFFBFF;
      *(_DWORD *)((char *)this + v12 + 1160) = v15;
      if ( !v14 )
      {
        ++v8;
        if ( (v15 & 4) != 0 )
          v9 = 0;
      }
    }
    v16 = 3;
    v6 = v8 > 2;
    if ( v8 > 2 )
      v16 = 6;
    ++v10;
    v11 += 24;
  }
  while ( v10 < *((_DWORD *)a2 + 12) );
  if ( v8 < 2 )
  {
LABEL_27:
    v21 = 0LL;
    LODWORD(v21) = 1;
    v22 = v21;
    v23 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v22);
    return;
  }
  if ( !v9 )
  {
    v17 = CPTPEngine::FindOrAssignPrimary(this, a2);
    if ( v17 )
    {
      *((_QWORD *)this + 468) = *(_QWORD *)a2;
      *((_DWORD *)this + 887) = v16;
      CBasePTPEngine::SendInertiaOutput(this, 1LL);
      v18 = 0;
      v23 = 0LL;
      v19 = 0LL;
      if ( v8 <= 2 )
      {
        LODWORD(v19) = 9;
      }
      else
      {
        LOBYTE(v18) = v8 != 3;
        LODWORD(v19) = v18 + 11;
      }
      v22 = v19;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v22);
      v7 = CPTPEngine::SendInitialGestureFrame(this, a2, v17, v6);
    }
    else
    {
      v20 = 0LL;
      LODWORD(v20) = 1;
      v22 = v20;
      v23 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v22);
    }
    if ( !v7 )
    {
      a3 = v24;
LABEL_25:
      CPTPEngine::ProcessGestureFrame(this, a2, v6, a3);
    }
  }
}
