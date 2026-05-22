/*
 * XREFs of ?SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x180005660
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180006230 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?UpdateProcessIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180105C3C (-UpdateProcessIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubIm.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoActivatableEntityPrincipal::SetProcessId(BamoActivatableEntityPrincipal *this, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  struct BamoImpl::BamoActivatableEntityPrincipalImpl *v7; // rdi
  __int64 v8; // rbp
  int v9; // esi
  const char *v10; // r9
  int v11; // eax
  int updated; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h]

  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v15 = 0LL;
  v6 = *(_QWORD *)(v4 + 32);
  if ( *(_DWORD *)(v6 + 168) != GetCurrentThreadId() )
  {
    v15 = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 128));
    *(_DWORD *)(v6 + 168) = GetCurrentThreadId();
    v5 = v4;
  }
  v7 = (BamoActivatableEntityPrincipal *)((char *)this + 8);
  *((_DWORD *)this + 18) = a2;
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v8 + 32) )
      {
        updated = BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCacheStatic(
                    (struct Microsoft::BamoImpl::BamoStubImpl *)v8,
                    v7);
        v9 = updated;
        if ( updated < 0 )
          break;
      }
      v8 = *(_QWORD *)(v8 + 48);
      if ( !v8 )
        goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)updated,
      v13);
  }
  else
  {
LABEL_4:
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5052,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v13);
    goto LABEL_16;
  }
  if ( !v5 )
    return;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v5 + 32));
  v11 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
  if ( v11 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
      v10);
    __debugbreak();
  }
  if ( !v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
}
