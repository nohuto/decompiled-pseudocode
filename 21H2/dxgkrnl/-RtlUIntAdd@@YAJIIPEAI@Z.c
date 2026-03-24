/*
 * XREFs of ?RtlUIntAdd@@YAJIIPEAI@Z @ 0x1C0007328
 * Callers:
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C02AC724 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUIntAdd(unsigned int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = -1;
  if ( v3 >= a1 )
    v4 = v3;
  result = v3 < a1 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
