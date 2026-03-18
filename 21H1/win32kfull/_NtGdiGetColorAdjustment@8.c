/*
 * XREFs of _NtGdiGetColorAdjustment@8 @ 0x212C5A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreGetColorAdjustment@8 @ 0x1FD3EF (_GreGetColorAdjustment@8.c)
 */

int __stdcall NtGdiGetColorAdjustment(HDC a1, ULONG a2)
{
  int ColorAdjustment; // edx
  void *v3; // edi
  _WORD v5[12]; // [esp+10h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  memset(v5, 0, sizeof(v5));
  ColorAdjustment = GreGetColorAdjustment(a1, v5);
  if ( ColorAdjustment )
  {
    ms_exc.registration.TryLevel = 0;
    v3 = (void *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v3 = (void *)_MmUserProbeAddress;
    qmemcpy(v3, v5, 0x18u);
    ms_exc.registration.TryLevel = -2;
  }
  return ColorAdjustment;
}
