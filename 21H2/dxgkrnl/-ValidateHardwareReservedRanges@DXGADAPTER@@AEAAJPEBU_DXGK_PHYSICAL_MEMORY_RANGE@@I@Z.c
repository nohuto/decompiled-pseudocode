/*
 * XREFs of ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0210044
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::ValidateHardwareReservedRanges(
        DXGADAPTER *this,
        const struct _DXGK_PHYSICAL_MEMORY_RANGE *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v7; // rcx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rcx
  LARGE_INTEGER BaseAddress; // rdi
  LARGE_INTEGER NumberOfBytes; // r15
  LARGE_INTEGER v16; // rbp
  LARGE_INTEGER v17; // rax
  int v18; // r8d
  LARGE_INTEGER v19; // r15
  LARGE_INTEGER v20; // r13
  _QWORD *v21; // rax

  v5 = 0;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  if ( PhysicalMemoryRanges )
  {
    v13 = 0LL;
    if ( a3 )
    {
      while ( 1 )
      {
        BaseAddress = a2->BaseAddress;
        NumberOfBytes = a2->NumberOfBytes;
        v16.QuadPart = NumberOfBytes.QuadPart + a2->BaseAddress.QuadPart;
        if ( v16.QuadPart < (unsigned __int64)a2->BaseAddress.QuadPart )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v13, p_BaseAddress);
          v21[4] = NumberOfBytes.QuadPart;
          goto LABEL_14;
        }
        v17 = PhysicalMemoryRanges->NumberOfBytes;
        v18 = 0;
        if ( v17.QuadPart )
          break;
LABEL_10:
        v13 = (unsigned int)(v13 + 1);
        ++a2;
        if ( (unsigned int)v13 >= a3 )
          goto LABEL_15;
      }
      p_BaseAddress = &PhysicalMemoryRanges->BaseAddress;
      while ( 1 )
      {
        v19 = *p_BaseAddress;
        v20.QuadPart = v17.QuadPart + p_BaseAddress->QuadPart;
        if ( BaseAddress.QuadPart < (unsigned __int64)v20.QuadPart && v16.QuadPart > (unsigned __int64)v19.QuadPart )
          break;
        p_BaseAddress = &PhysicalMemoryRanges[++v18].BaseAddress;
        v17 = p_BaseAddress[1];
        if ( !v17.QuadPart )
          goto LABEL_10;
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v13, p_BaseAddress);
      v21[4] = v16.QuadPart;
      v21[5] = v19.QuadPart;
      v21[6] = v20.QuadPart;
LABEL_14:
      v21[3] = BaseAddress.QuadPart;
      WdLogEvent5_WdError(v21);
      v5 = -1073741811;
    }
LABEL_15:
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
    return v5;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v7, p_BaseAddress, v9, v10);
    *(_QWORD *)(v11 + 24) = 10335LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
}
