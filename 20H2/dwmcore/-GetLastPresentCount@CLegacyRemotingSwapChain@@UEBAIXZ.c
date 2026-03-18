/*
 * XREFs of ?GetLastPresentCount@CLegacyRemotingSwapChain@@UEBAIXZ @ 0x1800E19A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetLastPresentCount(CLegacyRemotingSwapChain *this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 8) + 32LL))(*((_QWORD *)this + 8), &v4);
  v2 = 0;
  if ( v1 >= 0 )
    return v4;
  return v2;
}
