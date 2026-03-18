/*
 * XREFs of _NtUserGetResizeDCompositionSynchronizationObject@8 @ 0xA69B6
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YGHPAUHWND__@@PAPAUCompositionObject@@@Z @ 0xA6A46 (-GetResizeDCompositionSynchronizationObject@@YGHPAUHWND__@@PAPAUCompositionObject@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserGetResizeDCompositionSynchronizationObject(int a1, ULONG a2)
{
  _DWORD *v2; // edi
  HWND v4; // [esp+0h] [ebp-34h]
  struct CompositionObject **v5; // [esp+4h] [ebp-30h]
  HANDLE Handle; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  Handle = 0;
  KeEnterCriticalRegion();
  v2 = (_DWORD *)a2;
  GetResizeDCompositionSynchronizationObject(v4, v5);
  ms_exc.registration.TryLevel = 0;
  if ( a2 >= _MmUserProbeAddress )
    v2 = (_DWORD *)_MmUserProbeAddress;
  *v2 = Handle;
  ms_exc.registration.TryLevel = -2;
  KeLeaveCriticalRegion();
  return (a2 != 0 ? 0 : 87) >= 0;
}
