/*
 * XREFs of _RtlInitializeHeapGC@4 @ 0x4B2E648E
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _TpAllocTimer@16 @ 0x4B2B4570 (_TpAllocTimer@16.c)
 */

void __thiscall RtlInitializeHeapGC(void *this)
{
  int v1; // [esp+4h] [ebp-2Ch] BYREF
  _DWORD v2[10]; // [esp+8h] [ebp-28h] BYREF

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    v1 = 0;
    if ( this )
    {
      v2[0] = 3;
      memset(&v2[2], 0, 24);
      v2[9] = 40;
      v2[1] = this;
      v2[8] = 2;
      if ( TpAllocTimer(&v1, (int)RtlpHpGCCallback, 0, (int)v2) >= 0 )
      {
        RtlpHpGCTimer = v1;
        RtlpHpGCTimerInitialized = 1;
      }
    }
  }
}
