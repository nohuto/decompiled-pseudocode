/*
 * XREFs of HalpIvtCreateReservedDevice @ 0x1404E7F20
 * Callers:
 *     IvtEnumerateRmrrDevices @ 0x1404E8070 (IvtEnumerateRmrrDevices.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x1404D55FC (ExtEnvFreeMemory.c)
 *     DmrConvertDeviceScope @ 0x1404E876C (DmrConvertDeviceScope.c)
 */

_DWORD *__fastcall HalpIvtCreateReservedDevice(void *a1, __int64 a2)
{
  _QWORD **v2; // rdi
  _QWORD *v4; // rax
  int v5; // esi
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r9
  __int64 v11; // rax
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  v2 = (_QWORD **)(a2 + 16);
  v4 = *(_QWORD **)(a2 + 16);
  v5 = 0;
  while ( v4 != v2 )
  {
    v4 = (_QWORD *)*v4;
    ++v5;
  }
  v13 = 0LL;
  ExtEnvAllocateMemory((__int64)a1, 24 * v5 + 32, (__int64 *)&v13);
  v6 = v13;
  if ( v13 )
  {
    memset(v13, 0, (unsigned int)(24 * v5 + 32));
    v6[6] = v5;
    v8 = *v2;
    v9 = 0LL;
    while ( v8 != v2 )
    {
      v10 = v8;
      v8 = (_QWORD *)*v8;
      if ( (unsigned int)v9 >= v6[6] )
        goto LABEL_10;
      v7 = 3 * v9;
      *(_QWORD *)&v6[2 * v7 + 8] = v10[2];
      v9 = (unsigned int)(v9 + 1);
      *(_QWORD *)&v6[2 * v7 + 10] = v10[3];
    }
    v11 = DmrConvertDeviceScope(*(unsigned __int16 *)(a2 + 32), a2 + 34, v9);
    *(_QWORD *)v6 = v11;
    if ( v11 )
      return v6;
LABEL_10:
    if ( *(_QWORD *)v6 )
    {
      ExtEnvFreeMemory(v7, *(_QWORD *)v6);
      *(_QWORD *)v6 = 0LL;
    }
    ExtEnvFreeMemory(v7, (unsigned __int64)v6);
    return 0LL;
  }
  return v6;
}
