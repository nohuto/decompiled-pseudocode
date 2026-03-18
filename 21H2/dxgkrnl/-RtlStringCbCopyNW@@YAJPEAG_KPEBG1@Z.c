/*
 * XREFs of ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00185E4
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01A267C (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C01D1E68 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02C322C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r9
  signed __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax
  __int64 result; // rax

  v4 = a4 >> 1;
  if ( v4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    *(_WORD *)a1 = 0;
  }
  else
  {
    v5 = a3 - a1;
    v6 = 260LL;
    do
    {
      if ( !(v6 + v4 - 260) )
        break;
      v7 = *(_WORD *)&a1[v5];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --v6;
    }
    while ( v6 );
    v8 = (unsigned __int16 *)(a1 - 2);
    if ( v6 )
      v8 = (unsigned __int16 *)a1;
    *v8 = 0;
    return v6 == 0 ? 0x80000005 : 0;
  }
  return result;
}
