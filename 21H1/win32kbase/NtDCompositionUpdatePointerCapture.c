/*
 * XREFs of NtDCompositionUpdatePointerCapture @ 0x1C01D5190
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C01FBDF4 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 */

__int64 __fastcall NtDCompositionUpdatePointerCapture(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  unsigned int updated; // ebx

  v2 = a2;
  v3 = a1;
  if ( UserIsCurrentProcessDwm(a1, a2) )
  {
    KeEnterCriticalRegion();
    updated = CInputManager::UpdatePointerCapture(v3, v2);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return updated;
}
