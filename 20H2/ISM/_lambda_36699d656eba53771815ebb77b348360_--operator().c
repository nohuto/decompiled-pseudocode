/*
 * XREFs of _lambda_36699d656eba53771815ebb77b348360_::operator() @ 0x1800C8D7C
 * Callers:
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x1800C8FD8 (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088F40 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_36699d656eba53771815ebb77b348360_::operator()(__int64 a1, USAGE a2, USHORT a3)
{
  NTSTATUS Usages; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( **(_BYTE **)a1 || **(_WORD **)(a1 + 8) != a2 || **(_WORD **)(a1 + 16) != a3 )
  {
    **(_DWORD **)(a1 + 24) = *(unsigned __int16 *)(**(_QWORD **)(a1 + 32) + 122LL);
    Usages = HidP_GetUsages(
               HidP_Feature,
               a2,
               a3,
               **(PUSAGE **)(a1 + 40),
               *(PULONG *)(a1 + 24),
               *(PHIDP_PREPARSED_DATA *)(**(_QWORD **)(a1 + 32) + 56LL),
               *(PCHAR *)(*(_QWORD *)(a1 + 48) + 8LL),
               **(_DWORD **)(a1 + 48));
    if ( Usages < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x34B,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
               (const char *)(unsigned int)Usages);
    **(_BYTE **)a1 = 0;
    **(_WORD **)(a1 + 8) = a2;
    **(_WORD **)(a1 + 16) = a3;
  }
  return 0LL;
}
