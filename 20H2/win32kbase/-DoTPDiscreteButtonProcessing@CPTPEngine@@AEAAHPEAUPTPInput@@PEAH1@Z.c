/*
 * XREFs of ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01BEED0
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C12CC (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C01C243C (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C01C2850 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01C2A7C (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C01C2E54 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPDiscreteButtonProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3, int *a4)
{
  int v4; // r9d
  int v5; // r13d
  int v6; // r12d
  int v9; // r8d
  unsigned int v11; // ecx
  int v12; // esi
  int v13; // edx
  int v14; // r9d
  int v15; // r15d
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // edx
  int v20; // r14d
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int128 v37; // [rsp+28h] [rbp-38h]
  __int128 v38; // [rsp+28h] [rbp-38h]
  __int128 v39; // [rsp+28h] [rbp-38h]
  __int128 v40; // [rsp+28h] [rbp-38h]
  __int128 v41; // [rsp+40h] [rbp-20h] BYREF
  __int64 v42; // [rsp+50h] [rbp-10h]
  int v43; // [rsp+A0h] [rbp+40h]
  int v44; // [rsp+A8h] [rbp+48h]

  v4 = *((_DWORD *)this + 886);
  v5 = 0;
  v6 = 0;
  v9 = 0;
  v11 = *((_DWORD *)this + 958);
  v12 = v4 & 0x20;
  v43 = 0;
  v13 = v12 != 0;
  v14 = v4 & 0x40;
  v44 = v14;
  v15 = v14 != 0;
  if ( (unsigned __int8)(v11 & 2) >> 1 != v13 )
  {
    v16 = *((_DWORD *)this + 887);
    if ( (v16 == 3 || v16 == 6) && v12 )
    {
      v17 = v11 | 0x400;
    }
    else
    {
      v17 = v11;
      if ( !v12 && (v11 & 0x400) != 0 )
      {
        v5 = 1;
        v17 = v11 & 0xFFFFFBFF;
      }
    }
    v6 = 1;
    v11 = (2 * v13) | v17 & 0xFFFFFFFD;
    *((_DWORD *)this + 958) = v11;
    if ( v12 )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
      v11 = *((_DWORD *)this + 958);
      v9 = 0;
      v14 = v44;
      *((_QWORD *)this + 456) = *(_QWORD *)a2;
      *((_DWORD *)this + 910) = *((_DWORD *)a2 + 6);
    }
    *a3 = 1;
  }
  if ( (unsigned __int8)(v11 & 4) >> 2 == v15 )
  {
    v20 = 0;
  }
  else
  {
    v18 = *((_DWORD *)this + 887);
    if ( (v18 == 3 || v18 == 6) && v14 )
    {
      v19 = v11 | 0x800;
    }
    else
    {
      v19 = v11;
      if ( !v14 && (v11 & 0x800) != 0 )
      {
        v9 = 1;
        v43 = 1;
        v19 = v11 & 0xFFFFF7FF;
      }
    }
    v20 = 1;
    *((_DWORD *)this + 958) = v19 & 0xFFFFFFFB | (4 * v15);
    if ( v14 )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
      v9 = v43;
      *((_QWORD *)this + 456) = *(_QWORD *)a2;
      *((_DWORD *)this + 910) = *((_DWORD *)a2 + 6);
    }
    *a4 = 1;
  }
  v21 = *((_DWORD *)this + 887);
  if ( v21 == 3 || v21 == 6 || v5 || v9 )
    return 1LL;
  if ( v6 )
  {
    if ( !v12 )
    {
      v22 = *((_DWORD *)this + 958);
      v23 = v22;
      if ( (v22 & 0x80000) != 0 )
      {
        if ( (v22 & 0x10) != 0 && (v22 & 0x40) != 0 && (v22 & 0x100) == 0 )
        {
          *((_QWORD *)this + 475) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
          v23 = *((_DWORD *)this + 958) & 0xFFFFFFEF;
        }
        v24 = v23 & 0xFFFFFFBF;
      }
      else
      {
        if ( (v22 & 8) != 0 && (v22 & 0x20) != 0 && (v22 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 475) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
          v23 = *((_DWORD *)this + 958) & 0xFFFFFFF7;
        }
        v24 = v23 & 0xFFFFFFDF;
      }
      goto LABEL_49;
    }
    if ( *((_DWORD *)this + 879) && (*((_DWORD *)this + 958) & 0x80000) == 0 )
      *((_DWORD *)this + 879) = 0;
    if ( *((_DWORD *)a2 + 10) || (v25 = 0, *((_DWORD *)a2 + 13)) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      v25 = *((_DWORD *)a2 + 10);
    }
    v26 = *((_DWORD *)this + 958);
    if ( v25 )
    {
      v24 = v26 | 0x400;
LABEL_49:
      *((_DWORD *)this + 958) = v24;
      goto LABEL_55;
    }
    if ( (v26 & 0x80000) != 0 )
    {
      v27 = v26 | 0x40;
      *((_DWORD *)this + 958) = v27;
      if ( (v27 & 0x10) == 0 )
      {
        v37 = 0LL;
        LODWORD(v37) = 6;
        v41 = v37;
        v42 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v41);
        CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 958) |= 0x10u;
      }
    }
    else
    {
      v28 = v26 | 0x20;
      *((_DWORD *)this + 958) = v28;
      if ( (v28 & 8) == 0 )
      {
        v38 = 0LL;
        LODWORD(v38) = 5;
        v41 = v38;
        v42 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v41);
        CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 958) |= 8u;
      }
    }
  }
LABEL_55:
  if ( v20 )
  {
    if ( !v44 )
    {
      v29 = *((_DWORD *)this + 958);
      v30 = v29;
      if ( (v29 & 0x80000) != 0 )
      {
        if ( (v29 & 8) != 0 && (v29 & 0x20) != 0 && (v29 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 475) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
          v30 = *((_DWORD *)this + 958) & 0xFFFFFFF7;
        }
        v31 = v30 & 0xFFFFFFDF;
      }
      else
      {
        if ( (v29 & 0x10) != 0 && (v29 & 0x40) != 0 && (v29 & 0x100) == 0 )
        {
          *((_QWORD *)this + 475) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
          v30 = *((_DWORD *)this + 958) & 0xFFFFFFEF;
        }
        v31 = v30 & 0xFFFFFFBF;
      }
      goto LABEL_76;
    }
    if ( *((_DWORD *)this + 879) && (*((_DWORD *)this + 958) & 0x80000) != 0 )
      *((_DWORD *)this + 879) = 0;
    if ( *((_DWORD *)a2 + 10) || (v32 = 0, *((_DWORD *)a2 + 13)) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      v32 = *((_DWORD *)a2 + 10);
    }
    v33 = *((_DWORD *)this + 958);
    if ( v32 )
    {
      v31 = v33 | 0x800;
LABEL_76:
      *((_DWORD *)this + 958) = v31;
      return 1LL;
    }
    if ( (v33 & 0x80000) != 0 )
    {
      v34 = v33 | 0x20;
      *((_DWORD *)this + 958) = v34;
      if ( (v34 & 8) == 0 )
      {
        v39 = 0LL;
        LODWORD(v39) = 5;
        v41 = v39;
        v42 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v41);
        CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 958) |= 8u;
      }
    }
    else
    {
      v35 = v33 | 0x40;
      *((_DWORD *)this + 958) = v35;
      if ( (v35 & 0x10) == 0 )
      {
        v40 = 0LL;
        LODWORD(v40) = 6;
        v41 = v40;
        v42 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v41);
        CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 958) |= 0x10u;
      }
    }
  }
  return 1LL;
}
