/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1C009BB8C
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C009B980 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C009C474 (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C00B2DB0 (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r14d
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  int v11; // r14d
  unsigned int v12; // ebx
  PVOID PoolWithTag; // rax
  int v14; // r14d
  PVOID v15; // rax
  __int64 v16; // [rsp+28h] [rbp-18h]
  SIZE_T v17; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  int v19; // [rsp+78h] [rbp+38h]
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+40h] BYREF

  v19 = a2;
  *a3 = 0LL;
  P = 0LL;
  v5 = a2;
  LOBYTE(a2) = 1;
  v7 = 0LL;
  v8 = 0LL;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, a2, &P);
  if ( DeviceResourceList >= 0 )
  {
    if ( !P )
      return (unsigned int)-1073741772;
    LODWORD(v17) = 0;
    LODWORD(NumberOfBytes) = 0;
    v11 = PnpiAddSidebandResources(v5, (_DWORD)P, 0, (unsigned int)&NumberOfBytes, 0LL, (__int64)&v17);
    if ( v11 == -1073741789 )
    {
      v12 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52706341u);
      v14 = v17;
      v8 = PoolWithTag;
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x52706341u);
      v7 = v15;
      if ( v8 && v15 )
      {
        memset(v8, 0, v12);
        LODWORD(v17) = v14;
        DeviceResourceList = PnpiAddSidebandResources(
                               v19,
                               (_DWORD)P,
                               (_DWORD)v8,
                               (unsigned int)&NumberOfBytes,
                               (__int64)v7,
                               (__int64)&v17);
        if ( DeviceResourceList >= 0 )
        {
          *a3 = v8;
          v8 = 0LL;
          if ( a4 )
          {
            *a4 = v7;
            v7 = 0LL;
          }
        }
      }
      else
      {
        DeviceResourceList = -1073741670;
      }
    }
    else
    {
      if ( v11 != -1073741772 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v11;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x40u,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
          v16);
      }
      DeviceResourceList = v11;
      if ( v11 >= 0 )
        DeviceResourceList = -1073741823;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)DeviceResourceList;
}
