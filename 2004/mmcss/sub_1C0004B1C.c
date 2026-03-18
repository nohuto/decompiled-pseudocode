/*
 * XREFs of sub_1C0004B1C @ 0x1C0004B1C
 * Callers:
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 * Callees:
 *     sub_1C0002990 @ 0x1C0002990 (sub_1C0002990.c)
 */

void __fastcall sub_1C0004B1C(char a1, int a2, unsigned __int64 a3, bool *a4)
{
  bool v7; // di

  sub_1C0002990(a3);
  v7 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      _InterlockedOr(&dword_1C0007260, 4u);
    }
    else
    {
      _m_prefetchw(&dword_1C0007260);
      v7 = (_InterlockedOr(&dword_1C0007260, 2u) & 0x8000) != 0;
    }
  }
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
  *a4 = v7;
}
