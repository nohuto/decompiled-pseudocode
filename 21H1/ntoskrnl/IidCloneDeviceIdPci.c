/*
 * XREFs of IidCloneDeviceIdPci @ 0x1405C08B4
 * Callers:
 *     IidCloneDeviceId @ 0x14096FBB0 (IidCloneDeviceId.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall IidCloneDeviceIdPci(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_QWORD *)(a2 + 16) = a2 + 24;
  memmove((void *)(a2 + 24), *(const void **)(a1 + 16), 2LL * *(unsigned __int16 *)(a1 + 14));
  return 0LL;
}
