/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x1C0011E38
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     KelvinToCelsius @ 0x1C00127F0 (KelvinToCelsius.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // esi
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edx
  void *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 1608);
  v4 = 0;
  v14 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v8 = *(_BYTE *)(v7 + 2) == 40;
  v9 = SrbExtension;
  v15 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v7 + 64);
    v11 = 60LL;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 24);
    v11 = 16LL;
  }
  v12 = *(_DWORD *)(v7 + v11);
  if ( v12 >= 0x44 )
  {
    NVMeZeroMemory((void *)(v10 + 28), v12 - 28);
    *(_DWORD *)(v10 + 32) = 40;
    *(_DWORD *)(v10 + 28) = 40;
    *(_WORD *)(v10 + 36) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 268));
    *(_WORD *)(v10 + 38) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 266));
    NVMeAllocateDmaBuffer(a1, 512LL, &v14, &v15);
    if ( v14 )
    {
      memset(v14, 0, 0x200uLL);
      *(_BYTE *)(v9 + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommand(a1, v9, 2u, 0x200u, v15, -1, 0LL, 0);
      *(_BYTE *)(v9 + 4253) |= 4u;
      *(_QWORD *)(v9 + 4224) = QueryTemperatureInfoHealthLogCompletion;
      *(_QWORD *)(v9 + 4200) = v14;
      *(_QWORD *)(v9 + 4208) = v15;
      *(_DWORD *)(v9 + 4240) = 512;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  return v4;
}
