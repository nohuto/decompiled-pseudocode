/*
 * XREFs of _lambda_9b9f0c840769002edef58b55115a0dea_::operator() @ 0x18019B918
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Do_call @ 0x18019C660 (std--_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft--_ea_18019C660.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z @ 0x18019CAB8 (-CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z.c)
 */

void __fastcall lambda_9b9f0c840769002edef58b55115a0dea_::operator()(unsigned int *a1, unsigned __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  DWMCursor *v6; // rcx
  int v7; // eax
  __int64 v8; // r10
  __int64 v9; // rdx
  int v10; // edi
  _BYTE v11[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+34h] [rbp-3Ch]
  int v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+44h] [rbp-2Ch]
  unsigned __int64 v15; // [rsp+48h] [rbp-28h]
  unsigned __int64 v16; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  unsigned __int64 v18; // [rsp+80h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+18h] BYREF

  v19 = a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 24 * (a1[4] + 9LL)) )
  {
    memset_0(v11, 0, 0x40uLL);
    v12 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)a1 + 1) + 40LL))(
                       *((_QWORD *)a1 + 1),
                       &v19);
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 48LL))(*((_QWORD *)a1 + 1));
    v4 = *((_QWORD *)a1 + 1);
    v13 = v3;
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    v6 = (DWMCursor *)*((_QWORD *)a1 + 1);
    v14 = v5;
    v7 = DWMCursor::CreateAnimationForProcess(v6, *(_DWORD *)(*(_QWORD *)a1 + 24LL * a1[4] + 208), &v19, &v18);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        388LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v7);
    v8 = *(_QWORD *)a1;
    v9 = a1[4];
    v15 = v19;
    v16 = v18;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *, int))(**(_QWORD **)(v8 + 176) + 168LL))(
            *(_QWORD *)(v8 + 176),
            *(_QWORD *)(v8 + 24 * (v9 + 9)),
            4LL,
            v11,
            64);
    if ( v10 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 176LL) + 160LL))(
        *(_QWORD *)(*(_QWORD *)a1 + 176LL),
        *(_QWORD *)(*(_QWORD *)a1 + 24 * (a1[4] + 9LL)));
      *(_QWORD *)(*(_QWORD *)a1 + 24 * (a1[4] + 9LL)) = 0LL;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        407LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v10);
    }
  }
}
