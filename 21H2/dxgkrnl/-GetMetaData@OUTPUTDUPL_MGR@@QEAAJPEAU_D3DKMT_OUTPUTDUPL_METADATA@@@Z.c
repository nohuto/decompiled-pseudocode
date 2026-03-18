/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C03212F8
 * Callers:
 *     _lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_ @ 0x1C031EE90 (_lambda_2348832400fa9218d4247e5b02438479_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C019F5D0 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C02247CE (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0321960 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0321EF8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C032672C (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  const void ***v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  D3DKMT_OUTPUTDUPL_METADATATYPE Type; // r8d
  int DirtyRects; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rdx
  __int64 v16; // r9
  char *Buffer; // rax
  char *v18; // rdi
  OUTPUTDUPL_MGR *v19; // rcx
  UINT v20; // eax
  _BYTE v22[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = (const void ***)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5, v7, v8);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v4, CurrentProcess, 0LL);
  if ( ContextForProcess )
  {
    Type = a2->Type;
    if ( Type )
    {
      if ( Type != D3DKMT_OUTPUTDUPL_METADATATYPE_MOVE_RECTS )
      {
        WdLogSingleEntry1(2LL, a2->Type);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid output duplication meta data type: ",
          a2->Type,
          0LL,
          0LL,
          0LL,
          0LL);
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
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(v4[7], a2->BufferSizeRequired + 72, 0, v16);
    v18 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v19, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v18);
      v20 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v18 + 12) = 8;
      *((_DWORD *)v18 + 1) = v20;
      *((_DWORD *)v18 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v18 + 14) = a2->Type;
      *((_DWORD *)v18 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v18 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v18 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v18 + 72, a2->pBuffer, a2->BufferSizeRequired);
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v18, 1);
    }
    else
    {
      WdLogSingleEntry1(6LL, 1873LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expand tmp buffer for meta data logging packet.",
        1873LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DirtyRects = -1073741801;
    }
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return (unsigned int)DirtyRects;
}
