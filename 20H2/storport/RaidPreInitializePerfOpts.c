/*
 * XREFs of RaidPreInitializePerfOpts @ 0x1C0032928
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C002FF18 (RaidAdapterStartMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

__int64 __fastcall RaidPreInitializePerfOpts(__int64 a1)
{
  void *Data; // rbx
  unsigned int v2; // edi
  unsigned int ActiveGroupCount; // esi
  PVOID PoolWithTag; // rax
  unsigned __int16 i; // r8
  unsigned int j; // r9d
  __int64 v8; // rdx
  ULONG Type; // [rsp+40h] [rbp-38h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-34h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+48h] [rbp-30h] BYREF

  Data = (void *)(a1 + 4800);
  v2 = 0;
  PropertyKey = DEVPKEY_Device_Numa_Proximity_Domain;
  Type = 0;
  *(_DWORD *)(a1 + 4800) = 0;
  ActiveGroupCount = KeQueryActiveGroupCount();
  RequiredSize = 4;
  IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, 4u, Data, &RequiredSize, &Type);
  if ( *(_BYTE *)(a1 + 4513) == 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int64)ActiveGroupCount << 6, 0x72446152u);
    *(_QWORD *)(a1 + 4824) = PoolWithTag;
    if ( PoolWithTag )
    {
      for ( i = 0; i < (unsigned __int16)ActiveGroupCount; ++i )
      {
        for ( j = 0; j < 0x40; ++j )
        {
          v8 = (i << 6) + j;
          *(_BYTE *)(v8 + *(_QWORD *)(a1 + 4824)) = -1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
