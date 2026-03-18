/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C0298D4C
 * Callers:
 *     _lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_ @ 0x1C0296F10 (_lambda_2348832400fa9218d4247e5b02438479_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0156AC8 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01686AC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0298624 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0299330 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C02998C0 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C029F890 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v9; // rcx
  __int64 Type; // rdx
  __int64 v11; // rax
  int DirtyRects; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rdx
  __int64 v16; // rdx
  char *Buffer; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rsi
  __int64 v23; // rax
  OUTPUTDUPL_MGR *v24; // rcx
  UINT v25; // eax
  _BYTE v27[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *(struct DXGFASTMUTEX *const *)v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v4,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    Type = (unsigned int)a2->Type;
    if ( (_DWORD)Type )
    {
      if ( (_DWORD)Type != 1 )
      {
        v11 = WdLogNewEntry5_WdError(v9, Type);
        *(_QWORD *)(v11 + 24) = a2->Type;
        WdLogEvent5_WdError(v11);
        DirtyRects = -1073741811;
        goto LABEL_13;
      }
      v13 = *((_QWORD *)*ContextForProcess + 33);
      if ( *(_DWORD *)(v13 + 16) == 2 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        v15 = **(void ***)(v14 + 48);
        LODWORD(v14) = 24 * *(_DWORD *)(v14 + 44);
        a2->BufferSizeRequired = v14;
        if ( a2->BufferSizeSupplied < (unsigned int)v14 )
        {
          DirtyRects = -1073741789;
          goto LABEL_13;
        }
        a2->pBuffer = v15;
      }
      else
      {
        a2->BufferSizeRequired = 0;
      }
      DirtyRects = 0;
    }
    else
    {
      DirtyRects = OUTPUTDUPL_CONTEXT::GetDirtyRects(*ContextForProcess, a2);
    }
  }
  else
  {
    DirtyRects = -1073741275;
  }
LABEL_13:
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(
                       *(AUTOEXPANDALLOCATION **)(v4 + 16),
                       a2->BufferSizeRequired + 72,
                       0);
    v22 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v24, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v22);
      v25 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v22 + 12) = 8;
      *((_DWORD *)v22 + 1) = v25;
      *((_DWORD *)v22 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v22 + 14) = a2->Type;
      *((_DWORD *)v22 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v22 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v22 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v22 + 72, a2->pBuffer, a2->BufferSizeRequired);
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v22, 1);
    }
    else
    {
      v23 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
      *(_QWORD *)(v23 + 24) = 1924LL;
      WdLogEvent5_WdLowResource(v23);
      DirtyRects = -1073741801;
    }
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v16);
  return (unsigned int)DirtyRects;
}
