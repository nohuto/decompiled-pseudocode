/*
 * XREFs of ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18017937C
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x18017CF3C (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017FDCC (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 (__fastcall ****__fastcall Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        __int64 (__fastcall ****a1)(_QWORD),
        __int64 a2))(_QWORD)
{
  __int64 (__fastcall ***v3)(_QWORD); // rbx
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD))((a2 + 64) & -(__int64)(a2 != 0));
  v5 = v3;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = v3;
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v5);
  return a1;
}
