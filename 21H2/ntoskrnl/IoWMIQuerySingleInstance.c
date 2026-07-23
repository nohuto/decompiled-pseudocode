/*
 * XREFs of IoWMIQuerySingleInstance @ 0x140757300
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     WmipQuerySetExecuteSI @ 0x140757430 (WmipQuerySetExecuteSI.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v5; // ebp
  unsigned int v6; // edi
  _DWORD *PoolWithTag; // rbx
  NTSTATUS SetExecuteSI; // edi
  int v12; // eax
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v5 = *InOutBufferSize;
  v6 = (InstanceName->Length + 73) & 0xFFFFFFF8;
  PoolWithTag = OutBuffer;
  if ( !OutBuffer || v5 < v6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x70696D57u);
    v5 = v6;
  }
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0x40uLL);
  PoolWithTag[11] = 2;
  *PoolWithTag = v6;
  PoolWithTag[12] = 64;
  PoolWithTag[14] = v6;
  *((_WORD *)PoolWithTag + 32) = InstanceName->Length;
  memmove((char *)PoolWithTag + 66, InstanceName->Buffer, InstanceName->Length);
  LODWORD(v14) = *PoolWithTag;
  SetExecuteSI = WmipQuerySetExecuteSI(
                   (PADAPTER_OBJECT)DataBlockObject,
                   0LL,
                   0,
                   (__int64)PoolWithTag,
                   v5,
                   (__int64)&v14);
  if ( SetExecuteSI >= 0 )
  {
    v12 = PoolWithTag[11];
    if ( (v12 & 0x100) != 0 )
    {
      SetExecuteSI = -1073741637;
    }
    else
    {
      if ( (v12 & 0x20) != 0 )
      {
        *InOutBufferSize = PoolWithTag[12];
      }
      else
      {
        *InOutBufferSize = v14;
        if ( PoolWithTag == OutBuffer )
          return SetExecuteSI;
      }
      SetExecuteSI = -1073741789;
    }
  }
  if ( PoolWithTag != OutBuffer )
    ExFreePoolWithTag(PoolWithTag, 0);
  return SetExecuteSI;
}
