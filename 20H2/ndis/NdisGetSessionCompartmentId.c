/*
 * XREFs of NdisGetSessionCompartmentId @ 0x1C0013CB0
 * Callers:
 *     ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0013660 (-ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013810 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C001DE00 (NdisGetProcessObjectCompartmentId.c)
 *     ndisCmGetThreadState @ 0x1C0035BFC (ndisCmGetThreadState.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C00B0B70 (NdisGetJobObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B0E90 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013CE8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int ThreadSessionId; // ebx
  unsigned int v3; // edi
  KIRQL v4; // r8

  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId >= dword_1C00E6190 )
    return 1LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
  if ( ThreadSessionId < dword_1C00E6190 )
    v3 = *((_DWORD *)P + 6 * ThreadSessionId);
  KeReleaseSpinLock(&qword_1C00E4B20, v4);
  if ( !v3 )
    return 1;
  return v3;
}
