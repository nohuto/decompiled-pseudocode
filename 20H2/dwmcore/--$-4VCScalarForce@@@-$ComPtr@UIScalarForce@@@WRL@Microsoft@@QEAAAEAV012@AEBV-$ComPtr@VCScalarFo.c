/*
 * XREFs of ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x1801C69F4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CA6D0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CED94 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 (__fastcall ****__fastcall Microsoft::WRL::ComPtr<IScalarForce>::operator=<CScalarForce>(
        __int64 (__fastcall ****a1)(_QWORD),
        __int64 (__fastcall ****a2)(_QWORD)))(_QWORD)
{
  __int64 (__fastcall ***v2)(_QWORD); // rbx
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v5 = *a2;
  v2 = v5;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = v2;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v5);
  return a1;
}
