/*
 * XREFs of ACPIIoctlEnumChildren @ 0x1C00139B0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C000B4E0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C00122B0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A670 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013BE0 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013CE8 (AMLIFindNameSpaceObject.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall ACPIIoctlEnumChildren(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  __int64 *v3; // rdi
  char *v4; // rsi
  unsigned int v6; // r12d
  __int64 v7; // r13
  _IRP *MasterIrp; // r14
  int v9; // ebx
  int MdlAddress; // ecx
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v14; // ebx
  char *v15; // rax
  _OWORD *v16; // rax
  SIZE_T MdlAddress_low; // rdi
  char *PoolWithTag; // rax
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0;
  v3 = 0LL;
  a2->IoStatus.Information = 0LL;
  v4 = 0LL;
  if ( *(_DWORD *)(a3 + 16) < 0x10u )
  {
    v11 = -1073741820;
    goto LABEL_13;
  }
  v6 = *(_DWORD *)(a3 + 8);
  if ( v6 < 0x14 )
  {
    v11 = -1073741789;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 720);
  if ( !v7 )
  {
    v11 = -1073741810;
    goto LABEL_13;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v11 = -1073741585;
    goto LABEL_13;
  }
  v9 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MasterIrp->AllocationProcessorNumber & 3) != 3 && (v9 & 7) != 0 && ((v9 & 4) == 0 || MdlAddress) )
  {
    v14 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber & 1;
    if ( MdlAddress )
    {
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, MdlAddress_low, 0x52706341u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (char *)&MasterIrp->MdlAddress + 4, MdlAddress_low);
        _strupr(v4);
        goto LABEL_19;
      }
    }
    else
    {
      v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x52706341u);
      v4 = v15;
      if ( v15 )
      {
        *v15 = 0;
        v14 |= 2u;
LABEL_19:
        v3 = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
        if ( v3
          && (*(_OWORD *)v3 = 0LL,
              *((_OWORD *)v3 + 1) = 0LL,
              v3[4] = 0LL,
              v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u),
              (v3[1] = (__int64)v16) != 0) )
        {
          *v16 = 0LL;
          v16[1] = 0LL;
          *((_QWORD *)v16 + 4) = 0LL;
          v11 = AMLIFindNameSpaceObject(v7, v3, v14, v4);
          if ( v11 >= 0 )
          {
            v11 = ACPIIoctlEnumChildrenPopulateOutputBuffer(MasterIrp, v6, &v19, v3);
            a2->IoStatus.Information = v19;
          }
        }
        else
        {
          v11 = -1073741670;
        }
        goto LABEL_7;
      }
    }
    v11 = -1073741670;
    goto LABEL_13;
  }
  v11 = -1072431089;
LABEL_7:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  if ( v3 )
  {
    v12 = v3[1];
    if ( v12 )
    {
      dword_1C0082908 = 0;
      pszDest = 0;
      FreeDataBuffs(v12, 1u);
      ExFreePoolWithTag((PVOID)v3[1], 0x52706341u);
      v3[1] = 0LL;
    }
    dword_1C0082908 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)v3, 1u);
    ExFreePoolWithTag(v3, 0x52706341u);
  }
LABEL_13:
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
