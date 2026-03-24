/*
 * XREFs of ?HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024F930
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006DF50 (-HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CConversionSwapChain::HrFindInterface(CConversionSwapChain *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91.Data4;
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
