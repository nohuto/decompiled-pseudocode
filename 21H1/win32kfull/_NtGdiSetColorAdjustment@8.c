/*
 * XREFs of _NtGdiSetColorAdjustment@8 @ 0x214225
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreSetColorAdjustment@8 @ 0x1FD788 (_GreSetColorAdjustment@8.c)
 */

int __stdcall NtGdiSetColorAdjustment(HDC a1, ULONG a2)
{
  const void *v2; // esi
  _DWORD v4[7]; // [esp+10h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  memset(v4, 0, 0x18u);
  ms_exc.registration.TryLevel = 0;
  v2 = (const void *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v2 = (const void *)_MmUserProbeAddress;
  qmemcpy(v4, v2, 0x18u);
  v4[6] = 1;
  ms_exc.registration.TryLevel = -2;
  if ( LOWORD(v4[0]) == 24
    && LOWORD(v4[1]) <= 8u
    && HIWORD(v4[1]) <= 0xFDE8u
    && HIWORD(v4[1]) >= 0x540u
    && (unsigned __int16)(LOWORD(v4[2]) - 1344) <= 0xF8A8u
    && HIWORD(v4[2]) <= 0xFDE8u
    && HIWORD(v4[2]) >= 0x540u
    && LOWORD(v4[3]) <= 0xFA0u
    && HIWORD(v4[3]) <= 0x2710u
    && HIWORD(v4[3]) >= 0x1770u
    && (unsigned __int16)(LOWORD(v4[4]) + 100) <= 0xC8u
    && SHIWORD(v4[4]) <= 100
    && SHIWORD(v4[4]) >= -100
    && (unsigned __int16)(LOWORD(v4[5]) + 100) <= 0xC8u
    && SHIWORD(v4[5]) <= 100
    && SHIWORD(v4[5]) >= -100 )
  {
    return GreSetColorAdjustment(a1, v4);
  }
  else
  {
    return 0;
  }
}
