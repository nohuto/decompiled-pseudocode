/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x1C0141920
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C0141204 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C0141448 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(unsigned __int64 a1, char *a2, unsigned int a3, char *a4)
{
  size_t v4; // r13
  unsigned int v6; // ebx
  PVOID v7; // rsi
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *PoolWithTag; // r14
  int v9; // edi
  COPM *v10; // rcx

  v4 = a3;
  v6 = 0;
  v7 = 0LL;
  PoolWithTag = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4D504F47u);
  if ( PoolWithTag && (!(_DWORD)v4 || (v7 = ExAllocatePoolWithTag(PagedPool, v4, 0x4D504F47u)) != 0LL) )
  {
    v9 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(PoolWithTag, a2);
    if ( v9 >= 0 )
    {
      if ( (_DWORD)v4 )
      {
        if ( (unsigned __int64)&a4[v4] > MmUserProbeAddress || &a4[v4] < a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v7, a4, v4);
      }
      v9 = COPM::ConfigureProtectedOutput(v10, a1, PoolWithTag, v4, (unsigned __int8 *)v7);
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D504F47u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v6;
}
