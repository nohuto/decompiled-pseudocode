/*
 * XREFs of ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x180176618
 * Callers:
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180176880 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180018090 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?ConvertInputTypeToCompositionInputType@HitTestHelper@@SA?BW4CompositionInputType@@W4InputType@@@Z @ 0x180148E7C (-ConvertInputTypeToCompositionInputType@HitTestHelper@@SA-BW4CompositionInputType@@W4InputType@@.c)
 *     ??$GetAttachedObject@UIInputForwardAreaInputObjectProxy@@VBamoInputForwardAreaInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180175EF8 (--$GetAttachedObject@UIInputForwardAreaInputObjectProxy@@VBamoInputForwardAreaInputObjectProxy@@.c)
 *     ??$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180175F90 (--$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectPro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputForwardProcessor::GetInputForwardInputSite(__int64 a1, __int64 *a2, char a3, __int64 a4)
{
  char v4; // r10
  __int64 *v6; // rbx
  __int64 *v7; // r13
  bool v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 *v23; // [rsp+28h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+38h] [rbp-28h] BYREF

  v4 = a3;
  v23 = a2;
  v6 = *(__int64 **)(a4 + 8);
  v7 = *(__int64 **)(a4 + 16);
  if ( v6 == v7 )
  {
LABEL_31:
    *a2 = 0LL;
    return a2;
  }
  *(GUID *)pExceptionObject = GUID_NULL;
  v8 = 0;
  v9 = *(_QWORD *)GUID_NULL.Data4;
  v10 = *(_QWORD *)&GUID_NULL.Data1;
  while ( !v8 )
  {
    v11 = v10 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v10 == *(_QWORD *)&GUID_NULL.Data1 )
      v11 = v9 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v11 )
    {
      if ( !*(_BYTE *)(*v6 + 392) )
      {
        *(_OWORD *)&pExceptionObject[8] = 0LL;
        *(_QWORD *)pExceptionObject = &std::bad_optional_access::`vftable';
        throw (std::bad_optional_access *)pExceptionObject;
      }
      v12 = HitTestHelper::ConvertInputTypeToCompositionInputType(v4);
      if ( *(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)(v13 + 32), v12) )
        goto LABEL_31;
      InputSite::GetAttachedObject<IInputForwardAreaInputObjectProxy,BamoInputForwardAreaInputObjectProxy>(*v6, &v24);
      v14 = v24;
      if ( v24 )
      {
        *(_OWORD *)pExceptionObject = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 24LL))(v24 + 8);
        v9 = *(_QWORD *)&pExceptionObject[8];
        v10 = *(_QWORD *)pExceptionObject;
      }
      if ( v14 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v15 = v10 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v10 == *(_QWORD *)&GUID_NULL.Data1 )
      v15 = v9 - *(_QWORD *)GUID_NULL.Data4;
    if ( v15 )
    {
      InputSite::GetAttachedObject<IInputForwardTargetInputObjectProxy,BamoInputForwardTargetInputObjectProxy>(
        *v6,
        &v23);
      v16 = v23;
      if ( v23 )
      {
        v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(v23[1] + 24))(v23 + 1);
        v18 = *v17 - v10;
        if ( *v17 == v10 )
          v18 = v17[1] - v9;
        v8 = v18 == 0;
      }
      if ( v16 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v16 + 8))(v16);
      }
      if ( v8 )
      {
        v4 = a3;
        break;
      }
    }
LABEL_26:
    if ( ++v6 == v7 )
      goto LABEL_31;
    v4 = a3;
  }
  if ( !*(_BYTE *)(*v6 + 392) )
  {
    *(_OWORD *)&pExceptionObject[8] = 0LL;
    *(_QWORD *)pExceptionObject = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)pExceptionObject;
  }
  v19 = HitTestHelper::ConvertInputTypeToCompositionInputType(v4);
  if ( !*(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)(v20 + 32), v19) )
    goto LABEL_26;
  *a2 = *v6;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
  return a2;
}
