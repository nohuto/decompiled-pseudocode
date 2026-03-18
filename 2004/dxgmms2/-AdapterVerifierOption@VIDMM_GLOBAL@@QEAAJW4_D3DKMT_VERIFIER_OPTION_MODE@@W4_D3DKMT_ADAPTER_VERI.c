/*
 * XREFs of ?AdapterVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1C00B8FB4
 * Callers:
 *     ?VidMmAdapterVerifierOption@@YAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1C0022310 (-VidMmAdapterVerifierOption@@YAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::AdapterVerifierOption(
        union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *this,
        enum _D3DKMT_VERIFIER_OPTION_MODE a2,
        enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE a3,
        union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *a4)
{
  unsigned int v4; // r10d
  int v5; // r8d

  v4 = 0;
  if ( a2 )
  {
    v5 = a3 - 1000;
    if ( !v5 )
    {
      LODWORD(this[293].VidMmTrimInterval.IdleTrimInterval) = a4->VidMmFlags.Value;
      return v4;
    }
  }
  else
  {
    v5 = a3 - 1000;
    if ( !v5 )
    {
      LODWORD(this[293].VidMmTrimInterval.IdleTrimInterval) = a4->VidMmFlags.Value;
      return v4;
    }
  }
  if ( v5 == 1 )
    this[294] = *a4;
  else
    return (unsigned int)-1073741811;
  return v4;
}
