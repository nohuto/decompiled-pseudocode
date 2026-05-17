/*
 * XREFs of _RtlpHpSegContextCleanup@4 @ 0x4B37B557
 * Callers:
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 * Callees:
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 */

void __thiscall RtlpHpSegContextCleanup(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edx
  _DWORD *v3; // eax

  v1 = this + 17;
  while ( (_DWORD *)*v1 != v1 )
  {
    v2 = (_DWORD *)v1[1];
    if ( (_DWORD *)*v2 != v1 || (v3 = (_DWORD *)v2[1], (_DWORD *)*v3 != v2) )
      __fastfail(3u);
    v1[1] = v3;
    *v3 = v1;
    RtlpHpSegSegmentFree(0x7FFFFFFF, 1);
  }
}
