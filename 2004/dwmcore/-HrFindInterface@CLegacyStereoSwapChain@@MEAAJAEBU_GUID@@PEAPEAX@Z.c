/*
 * XREFs of ?HrFindInterface@CLegacyStereoSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A240 (-HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::HrFindInterface(
        CLegacyStereoSwapChain *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3bb55e96_3388_4bb0_8bed_debb9cf4a24b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3bb55e96_3388_4bb0_8bed_debb9cf4a24b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3bb55e96_3388_4bb0_8bed_debb9cf4a24b.Data4;
    if ( v4 )
    {
      return CLegacySwapChain::HrFindInterface(this, a2, (CLegacySwapChain **)a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 280) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
