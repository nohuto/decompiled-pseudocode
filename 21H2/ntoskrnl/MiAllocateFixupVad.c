/*
 * XREFs of MiAllocateFixupVad @ 0x140608CE8
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInitializePrivateFixupBitmap @ 0x1406EBBF0 (MiInitializePrivateFixupBitmap.c)
 */

_OWORD *__fastcall MiAllocateFixupVad(__int64 a1)
{
  _QWORD *v2; // rbx
  _OWORD *Pool; // rax
  _OWORD *v4; // rdi
  unsigned __int64 v5; // rax
  int v6; // ecx
  _OWORD *result; // rax

  v2 = **(_QWORD ***)(a1 + 72);
  if ( !*(_QWORD *)(v2[12] + 32LL) )
    return 0LL;
  Pool = MiAllocatePool(
           64,
           8 * (((unsigned __int64)*(unsigned int *)(*v2 + 8LL) >> 6) + ((*(_DWORD *)(*v2 + 8LL) & 0x3F) != 0) + 20LL),
           0x49646156u);
  v4 = Pool;
  if ( !Pool )
    return 0LL;
  *Pool = *(_OWORD *)a1;
  Pool[1] = *(_OWORD *)(a1 + 16);
  Pool[2] = *(_OWORD *)(a1 + 32);
  Pool[3] = *(_OWORD *)(a1 + 48);
  Pool[4] = *(_OWORD *)(a1 + 64);
  Pool[5] = *(_OWORD *)(a1 + 80);
  Pool[6] = *(_OWORD *)(a1 + 96);
  Pool[7] = *(_OWORD *)(a1 + 112);
  *((_QWORD *)Pool + 16) = *(_QWORD *)(a1 + 128);
  *((_QWORD *)Pool + 17) = -4096 * ((__int64)(*(_QWORD *)(a1 + 80) - v2[17]) >> 3)
                         + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12)
                         - *(_QWORD *)(*v2 + 32LL);
  v5 = MiInitializePrivateFixupBitmap(Pool + 9, v2);
  v6 = (v5 ^ *((_DWORD *)v4 + 13)) & 0x7FFFFFFF;
  *((_BYTE *)v4 + 34) = v5 >> 31;
  *((_DWORD *)v4 + 13) ^= v6;
  result = v4;
  *((_DWORD *)v4 + 12) |= 0x200000u;
  return result;
}
