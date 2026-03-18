/*
 * XREFs of _NtGdiGetTextMetricsW@12 @ 0x61EA0
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtGdiGetTextMetricsW(HDC a1, unsigned int a2, unsigned int a3)
{
  int TextMetricsW; // edx
  _BYTE v5[68]; // [esp+10h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    memset(v5, 0, sizeof(v5));
    TextMetricsW = GreGetTextMetricsW(a1, (struct RFONTOBJ *)v5);
    if ( TextMetricsW )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a2 + 68 > _MmUserProbeAddress || a2 + 68 <= a2 || (a2 & 3) != 0 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      qmemcpy((void *)a2, v5, 0x44u);
      ms_exc.registration.TryLevel = -2;
    }
  }
  return TextMetricsW;
}
