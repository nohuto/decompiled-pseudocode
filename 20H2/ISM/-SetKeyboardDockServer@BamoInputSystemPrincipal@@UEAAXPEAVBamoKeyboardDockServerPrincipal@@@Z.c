/*
 * XREFs of ?SetKeyboardDockServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoKeyboardDockServerPrincipal@@@Z @ 0x1800309C0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800305FC (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?UpdateKeyboardDockServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F0310 (-UpdateKeyboardDockServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStu.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoInputSystemPrincipal::SetKeyboardDockServer(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoKeyboardDockServerPrincipal *a2)
{
  struct BamoImpl::BamoInputSystemPrincipalImpl *v3; // rsi
  __int64 v4; // rbx
  __int64 i; // rbx
  int v6; // edi
  int updated; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v10, this[3]);
  v4 = *((_QWORD *)v3 + 13);
  *((_QWORD *)v3 + 13) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoKeyboardDockServerPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  for ( i = *((_QWORD *)v3 + 4); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v6 = 0;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateKeyboardDockServerRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  v3);
      v6 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated,
    v8);
LABEL_8:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9D5A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
    __debugbreak();
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10);
}
