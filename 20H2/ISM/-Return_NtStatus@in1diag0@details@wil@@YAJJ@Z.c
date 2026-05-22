/*
 * XREFs of ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800C1758
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180031014 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF1F0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800BFAA0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800BFD90 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 *     ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x1800BFEE4 (-DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800C17F0 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180078370 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag0::Return_NtStatus(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_NtStatus(0LL, 0, 0LL, a4, v5, retaddr, 1, (unsigned int)this);
}
