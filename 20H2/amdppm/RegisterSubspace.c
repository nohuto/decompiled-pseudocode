/*
 * XREFs of RegisterSubspace @ 0x1C0024144
 * Callers:
 *     RegisterSubspaceForGenAddr @ 0x1C002432C (RegisterSubspaceForGenAddr.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0004C9C (WPP_RECORDER_SF_DD.c)
 *     AddSubspace @ 0x1C0004DC4 (AddSubspace.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 *     FindSubspace @ 0x1C00240B8 (FindSubspace.c)
 */

__int64 __fastcall RegisterSubspace(__int64 a1, int a2, __int64 *a3)
{
  __int64 Subspace; // rbx
  PVOID PoolWithTag; // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  Subspace = FindSubspace(a2);
  if ( Subspace )
  {
LABEL_13:
    v8 = 0;
    *a3 = Subspace;
    Subspace = 0LL;
    goto LABEL_14;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB8uLL, 0x72637250u);
  Subspace = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0xB8uLL);
  *(_DWORD *)(Subspace + 48) = a2;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v9,
         &GUID_PCC_INTERFACE_STANDARD,
         Subspace + 16,
         128,
         1,
         0LL);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(Subspace + 84) - 1) <= 0x26 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = 40;
        LODWORD(v11) = *(_DWORD *)(Subspace + 84);
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0xAu,
          (__int64)&WPP_84c9b56b732437f07d5f4e0548166e5a_Traceguids,
          v11,
          v12);
      }
      v8 = -1073741823;
      goto LABEL_14;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2520))(
           WdfDriverGlobals,
           0LL,
           Subspace + 152);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0xBu,
          (__int64)&WPP_84c9b56b732437f07d5f4e0548166e5a_Traceguids,
          v11);
      }
      goto LABEL_14;
    }
    AddSubspace((_QWORD *)Subspace);
    goto LABEL_13;
  }
LABEL_14:
  if ( Subspace )
    ExFreePoolWithTag((PVOID)Subspace, 0x72637250u);
  return (unsigned int)v8;
}
