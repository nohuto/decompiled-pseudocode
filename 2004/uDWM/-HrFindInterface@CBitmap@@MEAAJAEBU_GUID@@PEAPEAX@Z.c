/*
 * XREFs of ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FAC0
 * Callers:
 *     ?HrFindInterface@CCompressedSourceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FA30 (-HrFindInterface@CCompressedSourceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::HrFindInterface(CBitmap *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v12; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data4;
      if ( !v6 )
      {
        v12 = (unsigned __int64)this + 24;
        goto LABEL_23;
      }
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v7 )
      {
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1 )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data4;
        if ( v8 )
        {
          v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmap.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmap.Data1 )
            v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmap.Data4;
          if ( v9 )
          {
            v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapSource.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapSource.Data1 )
              v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapSource.Data4;
            if ( v10 )
              return (unsigned int)-2147467262;
          }
          v12 = (unsigned __int64)this + 40;
        }
        else
        {
          v12 = (unsigned __int64)this + 48;
        }
LABEL_23:
        *a3 = (void *)(v12 & -(__int64)(this != 0LL));
        return 0;
      }
    }
    v12 = (unsigned __int64)this + 16;
    goto LABEL_23;
  }
  return v4;
}
