/*
 * XREFs of DmrConvertDeviceScope @ 0x1404E876C
 * Callers:
 *     HalpIvtCreateReservedDevice @ 0x1404E7F20 (HalpIvtCreateReservedDevice.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

_WORD *__fastcall DmrConvertDeviceScope(__int64 a1, _BYTE *a2)
{
  _WORD *v2; // rbx
  __int16 v4; // r14
  unsigned __int16 v5; // di
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = a1;
  if ( *a2 == 1 )
  {
    v5 = (unsigned __int8)a2[1] - 6;
    if ( (v5 & 1) == 0 )
    {
      v7 = 0LL;
      ExtEnvAllocateMemory(a1, v5 + 24, (__int64 *)&v7);
      v2 = v7;
      if ( v7 )
      {
        memset(v7, 0, (unsigned int)v5 + 24);
        *(_DWORD *)v2 = 1;
        v2[4] = v4;
        *((_BYTE *)v2 + 11) = a2[5];
        v2[7] = v5 >> 1;
        *((_QWORD *)v2 + 2) = v2 + 12;
        memmove(v2 + 12, a2 + 6, v5);
      }
    }
  }
  return v2;
}
