/*
 * XREFs of ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C0295A18
 * Callers:
 *     _lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_ @ 0x1C0293A20 (_lambda_323a6f2bac221de0325809d248e0690f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C014A378 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0295114 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0295E20 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C02963B0 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C029C530 (-GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetPointerShapeData(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *a2)
{
  struct DXGFASTMUTEX **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int PointerShapeData; // ebx
  __int64 v10; // rdx
  OUTPUTDUPL_MGR *v11; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v14[12]; // [rsp+30h] [rbp-29h] BYREF

  v4 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, *v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v4,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
    PointerShapeData = OUTPUTDUPL_CONTEXT::GetPointerShapeData(*ContextForProcess, a2);
  else
    PointerShapeData = -1073741275;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    memset(v14, 0, 0x58uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v14);
    HIDWORD(v14[6]) = a2->VidPnSourceId;
    v14[7] = *(_QWORD *)&a2->ShapeInfo.Type;
    v14[8] = *(_QWORD *)&a2->ShapeInfo.Height;
    v14[9] = a2->ShapeInfo.HotSpot;
    LODWORD(v14[10]) = a2->BufferSizeSupplied;
    HIDWORD(v14[10]) = a2->BufferSizeRequired;
    HIDWORD(v14[0]) = 88;
    LODWORD(v14[6]) = 9;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v14, 1);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v10);
  return PointerShapeData;
}
