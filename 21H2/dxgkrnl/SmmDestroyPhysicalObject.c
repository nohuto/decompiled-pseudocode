/*
 * XREFs of SmmDestroyPhysicalObject @ 0x1C001B474
 * Callers:
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C001B450 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     SmmCreatePhysicalObject @ 0x1C001B724 (SmmCreatePhysicalObject.c)
 * Callees:
 *     McTemplateK0xxqqtpqp_EtwWriteTransfer @ 0x1C006ECE0 (McTemplateK0xxqqtpqp_EtwWriteTransfer.c)
 */

void __fastcall SmmDestroyPhysicalObject(_DWORD *RegionSize, char a2)
{
  PVOID *v2; // rdi
  unsigned __int64 v5; // rcx
  volatile signed __int64 *v6; // rax
  void *v7; // rcx
  unsigned int v8; // r8d

  v2 = (PVOID *)(RegionSize + 2);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
  {
    v8 = RegionSize[11];
    McTemplateK0xxqqtpqp_EtwWriteTransfer(
      (v8 >> 10) & 3,
      (unsigned int)&DestroyPhysicalObject,
      (v8 >> 1) & 0xF,
      *(_QWORD *)RegionSize,
      (char)*v2,
      (v8 >> 1) & 0xF,
      (v8 >> 10) & 3,
      (v8 & 0x200) != 0,
      *((_QWORD *)RegionSize + 2),
      (v8 >> 5) & 0xF,
      (char)RegionSize);
  }
  if ( a2 )
  {
    v5 = (unsigned int)RegionSize[11];
    if ( (v5 & 0x200) == 0 )
    {
      if ( (((unsigned int)v5 >> 1) & 0xF) == 1 )
      {
        ObfDereferenceObject(*v2);
      }
      else if ( (((unsigned int)v5 >> 1) & 0xF) == 2 )
      {
        MmFreePagesFromMdl((PMDL)*v2);
      }
      else if ( (((unsigned int)v5 >> 1) & 0xF) != 3 )
      {
        if ( (((unsigned int)v5 >> 1) & 0xF) == 4 )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2, (PSIZE_T)RegionSize, 0x8000u);
        }
        else if ( (((unsigned int)v5 >> 1) & 0xF) == 5 )
        {
          MmFreeContiguousMemory(*v2);
        }
        else
        {
          WdLogSingleEntry5(0LL, 484LL, 1LL, RegionSize, (v5 >> 1) & 0xF, 0LL);
        }
      }
    }
  }
  _InterlockedExchangeAdd64(&qword_1C0130B10, -*(_QWORD *)RegionSize);
  v6 = (volatile signed __int64 *)&unk_1C0130B20;
  if ( (RegionSize[11] & 1) == 0 )
    v6 = (volatile signed __int64 *)&unk_1C0130B18;
  _InterlockedExchangeAdd64(v6, -*(_QWORD *)RegionSize);
  v7 = (void *)*((_QWORD *)RegionSize + 3);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(RegionSize, 0);
}
