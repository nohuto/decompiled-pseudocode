/*
 * XREFs of ?HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006DF50
 * Callers:
 *     ?HrFindInterface@CLegacyStereoSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024DC60 (-HrFindInterface@CLegacyStereoSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024F930 (-HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::HrFindInterface(
        CLegacySwapChain *this,
        const struct _GUID *a2,
        CLegacySwapChain **a3)
{
  CLegacySwapChain *v3; // r9
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  CLegacySwapChain *v10; // rax

  v3 = this;
  result = 2147942487LL;
  if ( !a3 )
    return result;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( !v5 )
  {
    if ( this )
    {
      v9 = *(int *)(*((_QWORD *)this + 3) + 12LL);
LABEL_23:
      v10 = (CLegacySwapChain *)((char *)v3 + v9 + 24);
LABEL_24:
      *a3 = v10;
      return 0LL;
    }
LABEL_27:
    v10 = 0LL;
    goto LABEL_24;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
  if ( !v6 )
    goto LABEL_25;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data4;
  if ( !v7 )
    goto LABEL_25;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data4;
  if ( !v8 )
  {
LABEL_25:
    if ( this )
    {
      v9 = *(int *)(*((_QWORD *)this + 3) + 16LL);
      goto LABEL_23;
    }
    goto LABEL_27;
  }
  result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( result )
  {
    result = 2147500034LL;
    v3 = 0LL;
  }
  *a3 = v3;
  return result;
}
