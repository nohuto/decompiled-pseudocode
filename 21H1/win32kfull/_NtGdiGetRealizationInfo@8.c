/*
 * XREFs of _NtGdiGetRealizationInfo@8 @ 0x61AE0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreGetRealizationInfo@8 @ 0xF6E26 (_GreGetRealizationInfo@8.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtGdiGetRealizationInfo(HDC a1, SIZE_T *Address)
{
  SIZE_T *v2; // ecx
  SIZE_T v3; // eax
  int RealizationInfo; // ebx
  size_t v5; // edi
  SIZE_T Length[203]; // [esp+10h] [ebp-348h] BYREF
  CPPEH_RECORD ms_exc; // [esp+340h] [ebp-18h]

  memset(Length, 0, sizeof(Length));
  ms_exc.registration.TryLevel = 0;
  v2 = Address;
  if ( (unsigned int)Address >= _MmUserProbeAddress )
    v2 = (SIZE_T *)_MmUserProbeAddress;
  v3 = *v2;
  Length[0] = v3;
  ms_exc.registration.TryLevel = -2;
  if ( v3 != 16 && v3 != 812 && v3 != 24 )
    return 0;
  RealizationInfo = GreGetRealizationInfo(a1, (struct tagFONT_REALIZATION_INFO2 *)Length);
  ms_exc.registration.TryLevel = 1;
  if ( RealizationInfo )
  {
    v5 = Length[0];
    ProbeForWrite(Address, Length[0], 4u);
    memcpy(Address, Length, v5);
  }
  ms_exc.registration.TryLevel = -2;
  return RealizationInfo;
}
