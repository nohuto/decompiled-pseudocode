/*
 * XREFs of ?HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024400
 * Callers:
 *     ?HrFindInterface@CScratchRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800243B0 (-HrFindInterface@CScratchRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BFF0 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::HrFindInterface(CRenderTargetBitmap *this, const struct _GUID *a2, void **a3)
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
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data4;
        if ( !v7 )
        {
          v10 = (char *)(((unsigned __int64)this + 120) & -(__int64)(this != 0LL));
          goto LABEL_19;
        }
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
        if ( v8 )
          return CMILCOMBase::HrFindInterface(this, a2, a3);
        if ( this )
        {
          v9 = *(int *)(*((_QWORD *)this + 2) + 12LL);
          goto LABEL_18;
        }
LABEL_25:
        v10 = 0LL;
        goto LABEL_19;
      }
      if ( !this )
        goto LABEL_25;
      v9 = *(int *)(*((_QWORD *)this + 2) + 20LL);
    }
    else
    {
      if ( !this )
        goto LABEL_25;
      v9 = *(int *)(*((_QWORD *)this + 2) + 16LL);
    }
LABEL_18:
    v10 = (char *)this + v9 + 16;
LABEL_19:
    *a3 = v10;
    return 0LL;
  }
  return result;
}
