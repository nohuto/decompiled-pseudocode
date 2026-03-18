/*
 * XREFs of ?GetAdapterLuid@CLegacyRemotingSwapChain@@UEBA?AU_LUID@@XZ @ 0x18024F240
 * Callers:
 *     ?GetAdapterLuid@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F2610 (-GetAdapterLuid@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CLegacyRemotingSwapChain::GetAdapterLuid(CLegacyRemotingSwapChain *this, _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, _BYTE *); // r8
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))*((_QWORD *)this - 20);
  if ( v2 )
    *a2 = *(_QWORD *)(**v2)(*((_QWORD *)this - 20), v5);
  else
    *a2 = *(_QWORD *)(*((_QWORD *)this - 21) + 936LL);
  return (struct _LUID)a2;
}
