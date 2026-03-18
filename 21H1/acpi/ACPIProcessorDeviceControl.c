/*
 * XREFs of ACPIProcessorDeviceControl @ 0x1C009A670
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C000256C (AMLIGetNSObjectType.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000B704 (ACPIIoctlEvalControlMethod.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEnumChildren @ 0x1C00139B0 (ACPIIoctlEnumChildren.c)
 *     AMLIFreeDataBuffs @ 0x1C001D6E0 (AMLIFreeDataBuffs.c)
 *     ACPIDispatchPowerIrpInvalid @ 0x1C0031000 (ACPIDispatchPowerIrpInvalid.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0057164 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C005D3CC (ACPIProcessorContainerGetLpiStatesIoctl.c)
 */

__int64 __fastcall ACPIProcessorDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v14; // edi
  unsigned int v16; // ecx
  unsigned __int64 *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _OWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-18h]

  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  if ( !*(_BYTE *)(a2 + 64) )
  {
    DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    v5 = *(_QWORD *)(a2 + 184);
    v6 = DeviceExtension;
    v7 = *(_QWORD *)(a2 + 24);
    v8 = *(_DWORD *)(v5 + 24);
    if ( v8 > 0x32C01C )
    {
      v16 = v8 - 3325984;
      if ( !v16 )
        return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      v20 = v16 - 28;
      if ( v20 )
      {
        v21 = v20 - 4;
        if ( !v21 )
          return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        v22 = v21 - 4;
        if ( v22 )
        {
          if ( v22 != 4 )
          {
LABEL_32:
            v14 = -1073741637;
            *(_DWORD *)(a2 + 48) = -1073741637;
            goto LABEL_20;
          }
          return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        }
      }
      return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    }
    if ( v8 == 3325980 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v9 = v8 - 2703744;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( !v10 )
        return (unsigned int)ACPIProcessorContainerGetLpiStatesIoctl((PIRP)a2, *(_QWORD *)(a2 + 184));
      v11 = v10 - 622204;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( v12 && v12 != 20 )
          goto LABEL_32;
        return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    }
    if ( *(_DWORD *)(v5 + 8) < 0xCu )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
      v14 = -1073741820;
    }
    else
    {
      if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(DeviceExtension + 720)) != 12 )
      {
        v19 = *(_DWORD *)(v6 + 196);
        *(_DWORD *)(v7 + 4) = 0;
        v14 = 0;
        *(_DWORD *)v7 = v19;
        *(_BYTE *)(v7 + 8) = 0;
LABEL_17:
        if ( *(_DWORD *)(v5 + 8) == 16 )
        {
          *(_DWORD *)(v7 + 12) = *(_DWORD *)(v6 + 192);
          *(_QWORD *)(a2 + 56) = 16LL;
        }
        else
        {
          *(_QWORD *)(a2 + 56) = 12LL;
        }
        goto LABEL_19;
      }
      v14 = AMLIEvalNameSpaceObject(v17, (__int64)v23, 0, 0LL);
      if ( v14 >= 0 )
      {
        v18 = v24;
        *(_DWORD *)v7 = *(unsigned __int8 *)(v24 + 8);
        *(_DWORD *)(v7 + 4) = *(_DWORD *)v18;
        *(_BYTE *)(v7 + 8) = *(_BYTE *)(v18 + 4);
        AMLIFreeDataBuffs((__int64)v23);
        goto LABEL_17;
      }
    }
LABEL_19:
    *(_DWORD *)(a2 + 48) = v14;
LABEL_20:
    IofCompleteRequest((PIRP)a2, 0);
    return (unsigned int)v14;
  }
  return ACPIDispatchPowerIrpInvalid(a1, (IRP *)a2);
}
