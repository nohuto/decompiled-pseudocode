/*
 * XREFs of _TppWorkInitialize@24 @ 0x4B2B492B
 * Callers:
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 *     _TppInitializeTimer@24 @ 0x4B2B4877 (_TppInitializeTimer@24.c)
 *     _TpSimpleTryPost@12 @ 0x4B2E7210 (_TpSimpleTryPost@12.c)
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppWorkInitialize@24 @ 0x4B2B492B (_TppWorkInitialize@24.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __thiscall TppWorkInitialize(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi

  v6 = TppCleanupGroupMemberInitialize(a2, a3, a4);
  if ( v6 >= 0 )
  {
    if ( this[23] )
    {
      this[30] = a5;
      this[31] = 0;
      TppGetCurrentThreadNumaNode(this + 32);
      this[35] = 1;
      v6 = 0;
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      TppCleanupGroupMemberDestroy((int)this);
  }
  return v6;
}
