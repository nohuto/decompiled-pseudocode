/*
 * XREFs of ?HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F6D20
 * Callers:
 *     ?HrFindInterface@CLegacyStereoSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180290A10 (-HrFindInterface@CLegacyStereoSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180292BB0 (-HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::HrFindInterface(CLegacySwapChain *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data4;
        if ( v7 )
        {
          v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data1 )
            v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data4;
          if ( v8 )
            return 2147500034LL;
        }
      }
      if ( this )
      {
        v9 = *(int *)(*((_QWORD *)this + 3) + 16LL);
        goto LABEL_18;
      }
    }
    else if ( this )
    {
      v9 = *(int *)(*((_QWORD *)this + 3) + 12LL);
LABEL_18:
      v10 = (char *)this + v9 + 24;
LABEL_19:
      *a3 = v10;
      return 0LL;
    }
    v10 = 0LL;
    goto LABEL_19;
  }
  return result;
}
