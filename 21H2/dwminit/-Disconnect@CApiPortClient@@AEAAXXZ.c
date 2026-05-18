/*
 * XREFs of ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000B3BC
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x18000B354 (--1CApiPortClient@@QEAA@XZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x18000BA4C (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApiPortClient::Disconnect(CApiPortClient *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rcx

  v1 = (void (__fastcall ***)(_QWORD, __int64))*(&hObject + 1);
  if ( *(&hObject + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)*(&hObject + 1) + 14, 0xFFFFFFFF) == 1 )
      (**v1)(v1, 1LL);
    *(&hObject + 1) = 0LL;
  }
}
