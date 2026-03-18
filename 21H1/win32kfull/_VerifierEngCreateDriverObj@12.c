/*
 * XREFs of _VerifierEngCreateDriverObj@12 @ 0x1FC96D
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

HDRVOBJ __stdcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
