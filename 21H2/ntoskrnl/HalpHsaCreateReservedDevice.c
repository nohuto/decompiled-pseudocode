/*
 * XREFs of HalpHsaCreateReservedDevice @ 0x1404E17E8
 * Callers:
 *     HsaEnumerateIvmdDevices @ 0x1404E2E20 (HsaEnumerateIvmdDevices.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

__int64 *__fastcall HalpHsaCreateReservedDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int16 v4; // si
  unsigned int v5; // ebx
  size_t v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  _QWORD *i; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *result; // rax
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  v4 = a1;
  v14 = 0LL;
  v5 = 24 * v2 + 32;
  if ( (int)ExtEnvAllocateMemory(a1, v5, (__int64 *)&v14) < 0 )
    return 0LL;
  v6 = v5;
  v7 = (__int64 *)v14;
  memset(v14, 0, v6);
  *((_DWORD *)v7 + 6) = *(_DWORD *)(a2 + 20);
  v9 = 0;
  for ( i = *(_QWORD **)(a2 + 24); i != (_QWORD *)(a2 + 24); i = (_QWORD *)*i )
  {
    v11 = v9++;
    v8 = 3 * v11;
    v7[v8 + 4] = i[2];
    v7[v8 + 5] = i[3];
  }
  if ( (int)ExtEnvAllocateMemory(v8, 0x18u, v7) < 0 )
    return 0LL;
  v12 = *v7;
  *(_OWORD *)v12 = 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  result = v7;
  *(_DWORD *)*v7 = 1;
  *(_WORD *)(*v7 + 8) = v4;
  *(_WORD *)(*v7 + 14) = 0;
  *(_WORD *)(*v7 + 12) = *(_WORD *)(a2 + 16);
  return result;
}
