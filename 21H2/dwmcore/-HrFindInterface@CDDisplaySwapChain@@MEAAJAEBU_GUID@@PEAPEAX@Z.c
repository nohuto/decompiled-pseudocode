/*
 * XREFs of ?HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180286980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::HrFindInterface(CDDisplaySwapChain *this, const struct _GUID *a2, void **a3)
{
  char *v3; // rax
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = 0LL;
  v5 = -2147024809;
  if ( a3 )
  {
    v5 = 0;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v6 )
    {
      if ( this )
      {
        v7 = *(int *)(*((_QWORD *)this + 1) + 8LL);
LABEL_12:
        v3 = (char *)this + v7 + 8;
        goto LABEL_13;
      }
      goto LABEL_13;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( !v8 )
    {
      if ( this )
      {
        v7 = *(int *)(*((_QWORD *)this + 1) + 12LL);
        goto LABEL_12;
      }
LABEL_13:
      *a3 = v3;
      return v5;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
    if ( !v9 )
      goto LABEL_20;
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data4;
    if ( v10 )
      return (unsigned int)-2147467262;
    else
LABEL_20:
      *a3 = this;
  }
  return v5;
}
