/*
 * XREFs of IidCloneDeviceIdPci @ 0x1405C66B4
 * Callers:
 *     IidCloneDeviceId @ 0x140974618 (IidCloneDeviceId.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall IidCloneDeviceIdPci(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_QWORD *)(a2 + 16) = a2 + 24;
  memmove((void *)(a2 + 24), *(const void **)(a1 + 16), 2LL * *(unsigned __int16 *)(a1 + 14));
  return 0LL;
}
