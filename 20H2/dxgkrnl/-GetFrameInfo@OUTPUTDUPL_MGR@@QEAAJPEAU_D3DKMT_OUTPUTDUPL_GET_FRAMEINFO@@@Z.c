/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C0298C28
 * Callers:
 *     _lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_ @ 0x1C0296F90 (_lambda_a555c8f1bf148962729f2402570fc0b4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0156AC8 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0298624 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0299330 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C02998C0 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1C029F8E8 (-GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetFrameInfo(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *a2)
{
  struct DXGFASTMUTEX **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  int v9; // ebx
  __int64 v10; // rdx
  OUTPUTDUPL_MGR *v11; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _BYTE v16[16]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v17[14]; // [rsp+30h] [rbp-39h] BYREF

  v4 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v4,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    OUTPUTDUPL_CONTEXT::GetFrameInfo(*ContextForProcess, &a2->FrameInfo);
    v9 = 0;
  }
  else
  {
    v9 = -1073741275;
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) && v9 >= 0 )
  {
    memset(v17, 0, 0x68uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v17);
    VidPnSourceId = a2->VidPnSourceId;
    v13 = *(_OWORD *)&a2->FrameInfo.AccumulatedFrames;
    *(_OWORD *)&v17[7] = *(_OWORD *)&a2->FrameInfo.LastPresentTime.LowPart;
    HIDWORD(v17[0]) = 104;
    v14 = *(_OWORD *)&a2->FrameInfo.PointerPosition.Position.y;
    LODWORD(v17[6]) = 7;
    HIDWORD(v17[6]) = VidPnSourceId;
    *(_OWORD *)&v17[11] = v14;
    *(_OWORD *)&v17[9] = v13;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v17, 1);
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v10);
  return (unsigned int)v9;
}
