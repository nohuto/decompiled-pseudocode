/*
 * XREFs of ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801F1F20
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18018A1CC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 */

__int64 __fastcall CInteraction::CalculateDetectedInteractions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        InteractionConfigurationGroup *a5,
        _DWORD *a6,
        unsigned __int64 a7,
        _DWORD *a8)
{
  return CInteractionProcessor::CalculateDetectedInteractions(
           (CInteractionProcessor *)(a1 + 288),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
