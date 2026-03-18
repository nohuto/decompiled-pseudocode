/*
 * XREFs of ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD140
 * Callers:
 *     ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DCEC0 (-HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CWICBitmapWrapper@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD060 (-HrFindInterface@CWICBitmapWrapper@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x1800DD1F4 (--8@YA_NAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall CBitmap::HrFindInterface(CBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    if ( (unsigned __int8)operator==(a2, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, a3, this) )
      goto LABEL_8;
    if ( (unsigned __int8)operator==(v4, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v5, v6) )
    {
      v10 = v9 + 24;
LABEL_12:
      *v8 = v10 & -(__int64)(v9 != 0);
      return 0LL;
    }
    if ( (unsigned __int8)operator==(v7, &GUID_11bb5fd3_c76d_405e_a8d7_7fe7375f478a, v8, v9) )
    {
      v10 = v9 + 32;
      goto LABEL_12;
    }
    if ( (unsigned __int8)operator==(v11, &GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b, v8, v9) )
    {
LABEL_8:
      *v5 = v6;
      return 0LL;
    }
    if ( (unsigned __int8)operator==(v12, &IID_IWICBitmap, v5, v6)
      || (unsigned __int8)operator==(v13, &IID_IWICBitmapSource, v8, v9) )
    {
      v10 = v9 + 48;
      goto LABEL_12;
    }
    return 2147500034LL;
  }
  return result;
}
