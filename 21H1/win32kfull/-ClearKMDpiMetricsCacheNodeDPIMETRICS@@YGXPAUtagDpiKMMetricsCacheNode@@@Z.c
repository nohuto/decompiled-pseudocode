/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YGXPAUtagDpiKMMetricsCacheNode@@@Z @ 0x154F27
 * Callers:
 *     _InvalidateKMDpiMetricsCacheDPIMETRICS@0 @ 0xDA4B0 (_InvalidateKMDpiMetricsCacheDPIMETRICS@0.c)
 * Callees:
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall ClearKMDpiMetricsCacheNodeDPIMETRICS(int this)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx

  v2 = *(_DWORD *)(this + 8);
  if ( v2 )
  {
    GreMarkDeletableFont(*(struct HLFONT__ **)(this + 8));
    GreDeleteObject(v2);
  }
  v3 = *(_DWORD *)(this + 48);
  if ( v3 )
  {
    GreMarkDeletableFont(*(struct HLFONT__ **)(this + 48));
    GreDeleteObject(v3);
  }
  v4 = *(_DWORD *)(this + 52);
  if ( v4 )
  {
    GreMarkDeletableFont(*(struct HLFONT__ **)(this + 52));
    GreDeleteObject(v4);
  }
  v5 = *(_DWORD *)(this + 56);
  if ( v5 )
  {
    GreMarkDeletableFont(*(struct HLFONT__ **)(this + 56));
    GreDeleteObject(v5);
  }
  v6 = *(_DWORD *)(this + 36);
  if ( v6 )
  {
    GreMarkDeletableFont(*(struct HLFONT__ **)(this + 36));
    GreDeleteObject(v6);
  }
  memset((void *)(this + 8), 0, 0x34u);
  *(_WORD *)(this + 2) = 1;
}
