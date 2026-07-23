/*
 * XREFs of PdcPortOpenCommon @ 0x1407CFAA8
 * Callers:
 *     PdcTaskClientRegister @ 0x140798BA8 (PdcTaskClientRegister.c)
 * Callees:
 *     ZwPowerInformation @ 0x1403FB160 (ZwPowerInformation.c)
 *     memset @ 0x140414300 (memset.c)
 *     PdcpPortReleaseResources @ 0x14091BA88 (PdcpPortReleaseResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  void *v11; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _DWORD *v15; // rax
  NTSTATUS v16; // ebx
  _QWORD v18[100]; // [rsp+30h] [rbp-328h] BYREF

  memset(v18, 0, sizeof(v18));
  v11 = 0LL;
  *a9 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6E8uLL, 0x50636450u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_9;
  memset(PoolWithTag, 0, 0x6E8uLL);
  v13[1] = 0LL;
  v14 = *a4;
  *((_DWORD *)v13 + 4) = 68;
  *((_DWORD *)v13 + 5) = 4;
  *(_DWORD *)v13 = 1348691024;
  v13[218] = a3;
  v13[219] = v14;
  v18[1] = 0LL;
  v18[2] = 0LL;
  v18[7] = 0x400000044LL;
  HIDWORD(v18[5]) = 5;
  v18[0] = 52429560LL;
  v15 = ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x50636450u);
  v11 = v15;
  if ( !v15 )
  {
LABEL_9:
    v16 = -1073741801;
LABEL_10:
    if ( v13 )
      PdcpPortReleaseResources(v13);
    goto LABEL_6;
  }
  *v15 = 1;
  *((_QWORD *)v15 + 2) = v13;
  *((_QWORD *)v15 + 1) = v18;
  v16 = ZwPowerInformation(PdcInvocation, v15, 0xB8u, 0LL, 0);
  if ( v16 >= 0 )
  {
    *a9 = v13;
    v16 = 0;
  }
  if ( v16 < 0 )
    goto LABEL_10;
LABEL_6:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v16;
}
