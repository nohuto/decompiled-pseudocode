/*
 * XREFs of _NtUserSetDesktopColorTransform@4 @ 0x16922E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _DwmAsyncSetDesktopColorTransform@12 @ 0x1D2989 (_DwmAsyncSetDesktopColorTransform@12.c)
 */

BOOL __stdcall NtUserSetDesktopColorTransform(unsigned int a1)
{
  const void *v1; // esi
  PKTHREAD CurrentThread; // eax
  void *v3; // eax
  _BYTE v5[100]; // [esp+10h] [ebp-E4h] BYREF
  _BYTE v6[100]; // [esp+74h] [ebp-80h] BYREF
  CPPEH_RECORD ms_exc; // [esp+DCh] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v1 = (const void *)a1;
  if ( a1 + 100 < a1 || a1 + 100 > _MmUserProbeAddress )
    v1 = (const void *)_MmUserProbeAddress;
  qmemcpy(v6, v1, sizeof(v6));
  qmemcpy(v5, v6, sizeof(v5));
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  v3 = (void *)ReferenceDwmApiPort();
  return DwmAsyncSetDesktopColorTransform(v3, (int)ms_exc.registration.Next) >= 0;
}
