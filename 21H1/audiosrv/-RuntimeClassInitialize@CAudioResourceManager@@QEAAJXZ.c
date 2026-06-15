/*
 * XREFs of ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x1800696C0
 * Callers:
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180055900 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x180057024 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x180066C18 (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::RuntimeClassInitialize(CAudioResourceManager *this)
{
  struct IUnknown *v2; // rbx
  __int64 v3; // rcx
  CConstraintModelResourceManager *v4; // rax
  CConstraintModelResourceManager *v5; // rdi
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IUnknown *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (CConstraintModelResourceManager *)operator new(0x148uLL);
  if ( v4 )
    v5 = CConstraintModelResourceManager::CConstraintModelResourceManager(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = CConstraintModelResourceManager::Initialize(v5, v2);
    if ( v6 < 0 )
      (*(void (__fastcall **)(CConstraintModelResourceManager *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    else
      *((_QWORD *)this + 6) = v5;
    if ( v6 >= 0 )
      return 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3DD,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
