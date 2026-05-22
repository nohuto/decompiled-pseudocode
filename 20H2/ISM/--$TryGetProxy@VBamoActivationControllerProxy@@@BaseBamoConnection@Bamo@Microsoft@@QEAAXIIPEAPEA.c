/*
 * XREFs of ??$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEAVBamoActivationControllerProxy@@@Z @ 0x18004607C
 * Callers:
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180046168 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::Bamo::BaseBamoConnection::TryGetProxy<BamoActivationControllerProxy>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+68h] [rbp+20h] BYREF

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  *a4 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v13, *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v7 + 88));
  v12 = 0LL;
  if ( a3 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v7 + 56) + 56LL))(
           *(_QWORD *)(v7 + 56),
           a2,
           a3,
           &v12);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        846LL,
        (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)v8);
      __debugbreak();
    }
    if ( v12 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
      v10 = v9;
      if ( v9 )
      {
        *a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      }
    }
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13);
}
