/*
 * XREFs of USBHwGetMicArrayDescriptor @ 0x1C002E8D4
 * Callers:
 *     USBParseGetMicArrayDescriptor @ 0x1C002F314 (USBParseGetMicArrayDescriptor.c)
 * Callees:
 *     Feature_2797446457__private_IsEnabledDeviceUsage @ 0x1C0003C7C (Feature_2797446457__private_IsEnabledDeviceUsage.c)
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 *     USBHwGetSetMemory @ 0x1C002D0D0 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBHwGetMicArrayDescriptor(__int64 a1, __int16 a2, unsigned __int16 **a3)
{
  __int64 v6; // r14
  int SetMemory; // eax
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v10; // rdi
  int v11; // ebx
  unsigned __int64 v12; // rdx
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+60h] [rbp-38h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v15 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( (unsigned int)Feature_2797446457__private_IsEnabledDeviceUsage() )
    *a3 = 0LL;
  SetMemory = USBHwGetSetMemory(a1, 0x85u, 0, a2, *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 2LL), 0, 0x12u, &v13);
  if ( SetMemory < 0 )
  {
    if ( SetMemory == -1073741823 )
      return (unsigned int)-1073741275;
    return (unsigned int)SetMemory;
  }
  else if ( v13 == __PAIR128__(0x14D34A2D16C584B1LL, USBAUDIO_MIC_ARRAY_DESCRIPTOR) )
  {
    if ( (unsigned int)Feature_2797446457__private_IsEnabledDeviceUsage() && (unsigned __int16)v14 < 0x24u )
      return 3221225628LL;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)v14, 0x41627845u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      v11 = USBHwGetSetMemory(
              a1,
              0x85u,
              0,
              a2,
              *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 2LL),
              0,
              (unsigned __int16)v14,
              PoolWithTag);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)Feature_2797446457__private_IsEnabledDeviceUsage() )
        {
          v12 = v10[8];
          if ( (unsigned __int16)v12 > (unsigned __int16)v14
            || (unsigned int)v12 < 0x24
            || v12 < 12 * ((unsigned __int64)v10[17] + 3) )
          {
            ExFreePool(v10);
            return 3221225628LL;
          }
        }
        *a3 = v10;
      }
      else
      {
        ExFreePool(v10);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v11;
}
