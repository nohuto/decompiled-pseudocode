/*
 * XREFs of ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009DA0
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00ECF40 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00EF540 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01176F0 (DxgkGetAdapterDeviceDesc.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C021157C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // r11d
  signed __int64 v7; // r8
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = a4 >> 1;
  if ( v4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
  }
  else
  {
    v5 = 260LL;
    v6 = 0;
    v7 = a3 - a1;
    while ( v5 + v4 - 260 )
    {
      v8 = *(_WORD *)&a1[v7];
      if ( !v8 )
        break;
      *(_WORD *)a1 = v8;
      a1 += 2;
      if ( !--v5 )
      {
        a1 -= 2;
        v6 = -2147483643;
        break;
      }
    }
    result = v6;
  }
  *(_WORD *)a1 = 0;
  return result;
}
