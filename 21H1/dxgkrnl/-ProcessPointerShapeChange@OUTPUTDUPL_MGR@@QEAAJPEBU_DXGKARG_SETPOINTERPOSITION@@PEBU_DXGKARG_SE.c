/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C0147F60
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C0299A78 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C014A378 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0295E20 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C02963B0 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C029641C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C029D374 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        OUTPUTDUPL_MGR *this,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        UINT a4,
        UINT a5)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v5; // eax
  __int64 v9; // rsi
  __m128i v10; // xmm1
  __int64 v11; // xmm0_8
  __int64 *v12; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // ebx
  OUTPUTDUPL_CONTEXT **v20; // r15
  int v21; // r12d
  OUTPUTDUPL_CONTEXT *v22; // r9
  __int64 v23; // rbx
  int v24; // eax
  int v25; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rax
  OUTPUTDUPL_MGR *v36; // rcx
  int v37; // eax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-A1h] BYREF
  char v42; // [rsp+28h] [rbp-99h]
  UINT v43; // [rsp+30h] [rbp-91h]
  struct _DXGKARG_SETPOINTERPOSITION *v44; // [rsp+38h] [rbp-89h]
  _DXGKARG_SETPOINTERSHAPE v45; // [rsp+40h] [rbp-81h] BYREF
  _DWORD v46[20]; // [rsp+70h] [rbp-51h] BYREF

  v5 = *((_DWORD *)this + 13);
  v44 = a2;
  if ( a3->VidPnSourceId >= v5 )
  {
    v27 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v27 + 24) = a3->VidPnSourceId;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdWarning(v27);
    return 3221225473LL;
  }
  else
  {
    LODWORD(v9) = 0;
    v10 = *(__m128i *)&a3->VidPnSourceId;
    v43 = a5;
    *(_OWORD *)&v45.Flags.0 = *(_OWORD *)&a3->Flags.0;
    v45.Width = a4;
    v11 = *(_QWORD *)&a3->XHot;
    v12 = (__int64 *)(*((_QWORD *)this + 2) + 32LL * (unsigned int)_mm_cvtsi128_si32(v10));
    *(__m128i *)&v45.VidPnSourceId = v10;
    v45.Height = a5;
    *(_QWORD *)&v45.XHot = v11;
    v41 = *v12;
    v42 = 0;
    if ( !v41 )
    {
      v28 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v28 + 24) = 760LL;
      WdLogEvent5_WdAssertion(v28);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(v41 + 16) == CurrentThread )
    {
      v29 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
      *(_QWORD *)(v29 + 24) = 767LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v42 )
    {
      v30 = WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
      *(_QWORD *)(v30 + 40) = &v41;
      *(_QWORD *)(v30 + 24) = 275LL;
      *(_QWORD *)(v30 + 32) = 4LL;
      *(_OWORD *)(v30 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    v14 = v41;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v14 + 16) == KeGetCurrentThread() )
    {
      v31 = *(_DWORD *)(v14 + 24);
      if ( v31 <= 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v32 + 24) = 659LL;
        WdLogEvent5_WdAssertion(v32);
        v31 = *(_DWORD *)(v14 + 24);
      }
      v18 = v31 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v33 = *(_DWORD *)(v14 + 28);
          if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v33);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 8));
        ExAcquirePushLockExclusiveEx(v14, 0LL);
      }
      if ( *(_QWORD *)(v14 + 16) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v34 + 24) = 683LL;
        WdLogEvent5_WdAssertion(v34);
      }
      if ( *(_DWORD *)(v14 + 24) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v35 + 24) = 684LL;
        WdLogEvent5_WdAssertion(v35);
      }
      *(_QWORD *)(v14 + 16) = KeGetCurrentThread();
      v18 = 1;
    }
    *(_DWORD *)(v14 + 24) = v18;
    v19 = 0;
    v42 = 1;
    v20 = (OUTPUTDUPL_CONTEXT **)v12[1];
    v21 = 1;
    if ( !*((_DWORD *)this + 2) )
      goto LABEL_19;
    while ( 1 )
    {
      v22 = *v20;
      if ( *v20 && *((_DWORD *)v22 + 79) )
      {
        if ( v21 )
        {
          if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
          {
            memset(v46, 0, sizeof(v46));
            OUTPUTDUPL_MGR::InitializePacketHeader(v36, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46);
            v46[13] = a3->VidPnSourceId;
            v46[14] = a3->Flags.Value;
            v46[16] = v43;
            v46[17] = a3->Pitch;
            v46[18] = a3->XHot;
            v46[19] = a3->YHot;
            v46[1] = 80;
            v46[12] = 3;
            v46[15] = a4;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46, 1);
            OUTPUTDUPL_MGR::LogPointerPositionChangeParams(this, v44);
            v22 = *v20;
          }
          v21 = 0;
        }
        v37 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(v22, v44, &v45);
        v9 = v37;
        if ( v37 < 0 )
          break;
      }
      ++v19;
      ++v20;
      if ( v19 >= *((_DWORD *)this + 2) )
        goto LABEL_18;
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v38[3] = v45.VidPnSourceId;
    v38[4] = v19;
    v38[5] = v9;
    WdLogEvent5_WdError(v38);
LABEL_18:
    if ( v42 )
    {
LABEL_19:
      v23 = v41;
      v42 = 0;
      if ( *(struct _KTHREAD **)(v41 + 16) != KeGetCurrentThread() )
      {
        v39 = WdLogNewEntry5_WdCriticalError(v16, v15);
        *(_QWORD *)(v39 + 24) = 275LL;
        *(_QWORD *)(v39 + 32) = 4LL;
        *(_QWORD *)(v39 + 40) = v23;
        *(_OWORD *)(v39 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v39);
      }
      v24 = *(_DWORD *)(v23 + 24);
      if ( v24 <= 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v40 + 24) = 703LL;
        WdLogEvent5_WdAssertion(v40);
        v24 = *(_DWORD *)(v23 + 24);
      }
      v25 = v24 - 1;
      *(_DWORD *)(v23 + 24) = v25;
      if ( !v25 )
      {
        *(_QWORD *)(v23 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v23, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v9;
  }
}
