/*
 * XREFs of _lambda_f86610c62469b25ae51ca6a2edc40a12_::operator() @ 0x18000BC74
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f86610c62469b25ae51ca6a2edc40a12__long_IAudioSessionInfo___::_Do_call @ 0x18000DB00 (std--_Func_impl_no_alloc__lambda_f86610c62469b25ae51ca6a2edc40a12__long_IAudioSessi_ea_18000DB00.c)
 * Callees:
 *     WPP_SF_S @ 0x18000A610 (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000C840 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f86610c62469b25ae51ca6a2edc40a12_::operator()(_QWORD **a1, __int64 a2)
{
  const wchar_t *v4; // rax
  unsigned int v5; // ebx
  ATL::CAtlException *v6; // r14
  ATL::CAtlException *v7; // rax
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+40h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, v4);
  }
  v5 = 0;
  v6 = (ATL::CAtlException *)*a1[1];
  try
  {
    v7 = (ATL::CAtlException *)(*(__int64 (**)(void))(*(_QWORD *)a2 + 64LL))();
    v11[1] = (ATL::CAtlException *)&CGenerateDuckingNotification::`vftable';
    v11[2] = v6;
    v11[3] = v7;
    v12 = 257;
    CLockedList<CDuckingNotification,1,0>::ForEachEntry((LPCRITICAL_SECTION)(*a1 + 9));
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = v11[0];
    if ( *(_DWORD *)v11[0] == -1073741571 )
      _o__resetstkoflw();
    return *(unsigned int *)v10;
  }
  return v5;
}
