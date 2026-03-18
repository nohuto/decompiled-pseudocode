/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DD5DC
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x1800DD5D0 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800DD6EC (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 *     _anonymous_namespace_::State::State @ 0x1800DDC30 (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1800DDD50 (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800DDDEC (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800DDE54 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180193D74 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::State::_State @ 0x1801A97FC (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x1801AE724 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     ??1CEnergyReporter@@AEAA@XZ @ 0x1801AEAA4 (--1CEnergyReporter@@AEAA@XZ.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x1801AEC28 (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1801AEDC8 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  LPVOID v3; // rax
  void *v4; // rax
  void *v5; // rax
  CEnergyReporter *v6; // rax
  CProcessAttributionReporter *v7; // rax
  void *v8; // rax
  union _SLIST_HEADER *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  CProcessResourceAttributionReporter *v14; // rbx
  CProcessAttributionReporter *v15; // rbx
  CEnergyReporter *v16; // rbx
  void *v17; // rbx
  CProcessAttributionManager *v18; // rbx
  int v20; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CProcessAttributionManager *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  qword_1803D33D8 = v2;
  v3 = operator new(0x40uLL);
  if ( v3 )
    v4 = (void *)anonymous_namespace_::State::State(v3);
  else
    v4 = 0LL;
  qword_1803D33C8 = v4;
  v5 = DefaultHeap::Alloc(0x78uLL);
  if ( v5 )
    v6 = CEnergyReporter::CEnergyReporter(v5);
  else
    v6 = 0LL;
  qword_1803D33E0 = v6;
  v7 = (CProcessAttributionReporter *)DefaultHeap::Alloc(0x80uLL);
  if ( !v7 )
  {
    qword_1803D33E8 = 0LL;
LABEL_36:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  qword_1803D33E8 = CProcessAttributionReporter::CProcessAttributionReporter(v7);
  if ( !qword_1803D33E8 )
    goto LABEL_36;
  v8 = DefaultHeap::Alloc(0x40uLL);
  if ( !v8 )
  {
    qword_1803D33F0 = 0LL;
LABEL_34:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v9 = (union _SLIST_HEADER *)CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(v8);
  qword_1803D33F0 = (CProcessResourceAttributionReporter *)v9;
  if ( !v9 )
    goto LABEL_34;
  InitializeSListHead(v9 + 1);
  v10 = CConnection::MainCompositionThreadLoop(this);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x79,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v10,
      v20);
  (*(void (__fastcall **)(CConnection *, __int64))(*(_QWORD *)this + 24LL))(this, 2291663905LL);
  v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v12 )
  {
    (**v12)(v12, 1LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  v13 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v13 )
  {
    (**v13)(v13, 1LL);
    *((_QWORD *)this + 1) = 0LL;
  }
  v14 = qword_1803D33F0;
  if ( qword_1803D33F0 )
  {
    CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(qword_1803D33F0);
    operator delete(v14, 0x40uLL);
  }
  v15 = qword_1803D33E8;
  qword_1803D33F0 = 0LL;
  if ( qword_1803D33E8 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_1803D33E8);
    operator delete(v15, 0x80uLL);
  }
  v16 = qword_1803D33E0;
  qword_1803D33E8 = 0LL;
  if ( qword_1803D33E0 )
  {
    CEnergyReporter::~CEnergyReporter(qword_1803D33E0);
    operator delete(v16, 0x78uLL);
  }
  v17 = qword_1803D33C8;
  qword_1803D33E0 = 0LL;
  if ( qword_1803D33C8 )
  {
    anonymous_namespace_::State::_State(qword_1803D33C8);
    operator delete(v17, 0x40uLL);
  }
  v18 = qword_1803D33D8;
  qword_1803D33C8 = 0LL;
  if ( qword_1803D33D8 )
  {
    CProcessAttributionManager::~CProcessAttributionManager(qword_1803D33D8);
    DefaultHeap::Free(v18);
  }
  qword_1803D33D8 = 0LL;
  if ( qword_1803D7618 )
  {
    (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803D7618 + 16LL))(qword_1803D7618);
    qword_1803D7618 = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&qword_1803D7620,
    0LL);
  return v11;
}
