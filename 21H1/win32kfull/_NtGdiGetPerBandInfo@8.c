/*
 * XREFs of _NtGdiGetPerBandInfo@8 @ 0x1D96D8
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?GreGetPerBandInfo@@YGKPAUHDC__@@PAU_PERBANDINFO@@@Z @ 0x1D7882 (-GreGetPerBandInfo@@YGKPAUHDC__@@PAU_PERBANDINFO@@@Z.c)
 */

int __stdcall NtGdiGetPerBandInfo(HDC a1, ULONG a2)
{
  int result; // eax
  _DWORD v3[6]; // [esp+14h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  memset(v3, 0, 20);
  if ( a2 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (a2 & 3) != 0 )
      goto LABEL_3;
    qmemcpy(v3, (const void *)a2, 0x14u);
    ms_exc.registration.TryLevel = -2;
  }
  result = GreGetPerBandInfo(a1, v3);
  if ( result && result != -1 )
  {
    ms_exc.registration.TryLevel = 1;
    if ( (a2 & 3) != 0 )
LABEL_3:
      ExRaiseDatatypeMisalignment();
    if ( a2 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a2 = *(_BYTE *)a2;
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16);
    qmemcpy((void *)a2, v3, 0x14u);
  }
  return result;
}
