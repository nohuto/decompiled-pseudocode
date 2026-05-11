/*
 * XREFs of USBHwGetAudioConfigurationDescriptor @ 0x1C002CA54
 * Callers:
 *     USBDeviceStart @ 0x1C002B930 (USBDeviceStart.c)
 * Callees:
 *     memset @ 0x1C00142C0 (memset.c)
 *     USBHwGetDescriptor @ 0x1C002C978 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwGetAudioConfigurationDescriptor(__int64 a1, __int64 a2, unsigned __int16 **a3)
{
  int Descriptor; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned __int16 *v10; // rax
  unsigned int v11; // eax
  ULONG v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 9;
  Descriptor = -1073741670;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag((POOL_TYPE)512, 9uLL, 0x41627845u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_BYTE *)PoolWithTag + 8) = 0;
    Descriptor = USBHwGetDescriptor(a1, 2u, 0, 0, &v13, PoolWithTag);
    if ( Descriptor < 0 )
      goto LABEL_13;
    v8 = v7[1];
    if ( (unsigned __int16)v8 < 9u )
      Descriptor = -1073741668;
    if ( Descriptor < 0 )
      goto LABEL_13;
    Descriptor = -1073741670;
    v13 = v7[1];
    v9 = v8;
    ExFreePool(v7);
    v10 = (unsigned __int16 *)ExAllocatePoolWithTag((POOL_TYPE)512, v9 + 2, 0x41627845u);
    v7 = v10;
    if ( v10 )
    {
      memset(v10, 0, v9 + 2);
      Descriptor = USBHwGetDescriptor(a1, 2u, 0, 0, &v13, v7);
      if ( Descriptor >= 0 )
      {
        v11 = v7[1];
        if ( v11 > v9 || (unsigned __int16)v11 < 9u )
          Descriptor = -1073741668;
        if ( Descriptor >= 0 )
        {
          *a3 = v7;
          return (unsigned int)Descriptor;
        }
      }
LABEL_13:
      ExFreePool(v7);
    }
  }
  return (unsigned int)Descriptor;
}
