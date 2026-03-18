/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0298B8C
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02990A8 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C004980C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0157C78 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0299604 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C029A164 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C029A3BC (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C029A8A0 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C029FDA8 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02A0C50 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  unsigned int v7; // r8d
  struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209 Value; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  bool v10; // cf
  unsigned int v11; // r12d
  int IsOutputDuplAllowedForVidPn; // edi
  struct DXGFASTMUTEX **v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v25; // rdx
  OUTPUTDUPL_CONTEXT **v26; // r15
  OUTPUTDUPL_CONTEXT *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  UINT v41; // eax
  unsigned int v42; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v43; // [rsp+34h] [rbp-45h] BYREF
  _BYTE v44[8]; // [rsp+38h] [rbp-41h] BYREF
  char v45; // [rsp+40h] [rbp-39h]
  _DWORD v46[16]; // [rsp+50h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v46, 0, sizeof(v46));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46);
  v7 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v46[1] = 64;
  v46[13] = VidPnSourceId;
  v43 = D3DKMT_VIDPNSOURCEOWNER_UNOWNED;
  v46[12] = v10 ? 0xB : 0;
  v11 = -1;
  v42 = -1;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  this,
                                  VidPnSourceId,
                                  (v7 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v43);
  if ( IsOutputDuplAllowedForVidPn < 0 )
  {
LABEL_22:
    v46[14] = v11;
    v46[15] = IsOutputDuplAllowedForVidPn;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46, 1);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  v13 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v44, *v13, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15, v14);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, CurrentProcess, &v46[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, 0LL, &v42);
    v11 = v42;
    v26 = ContextForProcess;
    IsOutputDuplAllowedForVidPn = -1073741653;
    if ( ContextForProcess )
    {
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        v41 = 3;
        if ( v43 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
          v41 = 1;
        IsOutputDuplAllowedForVidPn = 0;
        a2->RequiredKeyedMutexCount = v41;
      }
      else
      {
        v27 = (OUTPUTDUPL_CONTEXT *)operator new[](0x150uLL, 0x674D444Fu, PagedPool);
        if ( v27 )
          v27 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v27,
                  this,
                  v11,
                  (*(_DWORD *)a3 >> 1) & 1,
                  (*(_DWORD *)a3 >> 3) & 1,
                  (*(_DWORD *)a3 >> 2) & 1);
        *v26 = v27;
        if ( v27 )
        {
          IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v27, a2);
          if ( IsOutputDuplAllowedForVidPn < 0 )
          {
            v33 = WdLogNewEntry5_WdError(v32, v25);
            v34 = a2->VidPnSourceId;
            v35 = v33;
            *(_QWORD *)(v33 + 24) = v34;
            *(_QWORD *)(v33 + 32) = PsGetCurrentProcess(v34, v36);
            WdLogEvent5_WdError(v35);
            if ( *v26 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v26);
            *v26 = 0LL;
          }
        }
        else
        {
          v37 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
          v38 = a2->VidPnSourceId;
          v39 = v37;
          *(_QWORD *)(v37 + 24) = v38;
          *(_QWORD *)(v37 + 32) = PsGetCurrentProcess(v38, v40);
          WdLogEvent5_WdLowResource(v39);
          IsOutputDuplAllowedForVidPn = -1073741801;
        }
      }
    }
    if ( v45 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44, v25);
    goto LABEL_22;
  }
  v19 = WdLogNewEntry5_WdError(v18, v17);
  *(_QWORD *)(v19 + 24) = PsGetCurrentProcess(v21, v20);
  *(_QWORD *)(v19 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v19);
  v46[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46, 1);
  if ( v45 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44, v22);
  return 3221227288LL;
}
