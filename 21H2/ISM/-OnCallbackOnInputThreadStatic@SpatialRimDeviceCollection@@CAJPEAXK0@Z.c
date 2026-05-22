/*
 * XREFs of ?OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z @ 0x1800944A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic(char *a1, __int64 a2, void *a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)a1 + 347) + 104LL))(*((_QWORD *)a1 + 347), a1 + 2760);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      646LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
