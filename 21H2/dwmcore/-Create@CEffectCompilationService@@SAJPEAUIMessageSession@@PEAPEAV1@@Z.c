/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800305E4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x1800306C0 (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  CEffectCompilationService *v5; // rax
  unsigned int v6; // ecx
  CEffectCompilationService *v7; // rdi
  HANDLE EventW; // rax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  signed int LastError; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CEffectCompilationService *)DefaultHeap::AllocClear(0xE0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CEffectCompilationService::CEffectCompilationService(v4, a1);
  v7 = v5;
  if ( !v5 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x47u, 0LL);
    return v11;
  }
  CMILRefCountImpl::AddReference((CEffectCompilationService *)((char *)v5 + 8));
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v7 + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    if ( (v11 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0x2Eu, 0LL);
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0x4Au, 0LL);
      goto LABEL_6;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), CEffectCompilationService *))(**((_QWORD **)v7 + 2) + 272LL))(
         *((_QWORD *)v7 + 2),
         *((_QWORD *)v7 + 3),
         lambda_85e973520dc2ca0a0fec8750a81f8fb9_::_lambda_invoker_cdecl_,
         v7);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x37u, 0LL);
    goto LABEL_15;
  }
  v11 = 0;
  *a2 = v7;
  CMILRefCountImpl::AddReference((CEffectCompilationService *)((char *)v7 + 8));
LABEL_6:
  CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  return v11;
}
