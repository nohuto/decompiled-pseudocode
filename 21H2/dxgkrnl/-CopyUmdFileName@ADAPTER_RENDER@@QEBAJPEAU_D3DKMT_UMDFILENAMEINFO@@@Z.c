/*
 * XREFs of ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C01D1E68
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00185E4 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1C0184474 (-GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C01D1EC4 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyUmdFileName(ADAPTER_RENDER *this, struct _D3DKMT_UMDFILENAMEINFO *a2)
{
  KMTUMDVERSION Version; // edx
  __int64 result; // rax
  __int64 v5; // rdx
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  Version = a2->Version;
  if ( (unsigned int)Version >= NUM_KMTUMDVERSIONS )
    return 3221225485LL;
  v6 = 0LL;
  result = ADAPTER_RENDER::GetUMDFileName(this, Version, &v6);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)IsNullUmdDriver(&v6) )
    return 3221225485LL;
  return RtlStringCbCopyNW((char *)a2->UmdFileName, v5, (char *)v6.Buffer, v6.Length);
}
