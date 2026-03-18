/*
 * XREFs of _NtGdiDDCCIGetVCPFeature@20 @ 0x1D010C
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QAEJPAXKPAW4_MC_VCP_CODE_TYPE@@PAK2@Z @ 0x1CF813 (-DdcciGetVCPFeature@CMonitorAPI@@QAEJPAXKPAW4_MC_VCP_CODE_TYPE@@PAK2@Z.c)
 */

int __thiscall NtGdiDDCCIGetVCPFeature(
        CMonitorAPI *this,
        void *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *Address,
        unsigned int *a6)
{
  int VCPFeature; // edi
  unsigned int v8; // [esp+10h] [ebp-24h] BYREF
  int v9; // [esp+14h] [ebp-20h] BYREF
  unsigned int v10; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = 0;
  v10 = 0;
  v8 = 0;
  VCPFeature = CMonitorAPI::DdcciGetVCPFeature(this, a2, a3, (enum _MC_VCP_CODE_TYPE *)&v9, &v10, &v8);
  if ( VCPFeature >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, 4u, 1u);
    *Address = v10;
    if ( a4 )
    {
      ProbeForWrite(a4, 4u, 1u);
      *a4 = v9;
    }
    if ( a6 )
    {
      ProbeForWrite(a6, 4u, 1u);
      *a6 = v8;
    }
    ms_exc.registration.TryLevel = -2;
  }
  return VCPFeature;
}
