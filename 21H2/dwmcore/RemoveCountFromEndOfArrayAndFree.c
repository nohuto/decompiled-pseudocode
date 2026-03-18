/*
 * XREFs of RemoveCountFromEndOfArrayAndFree @ 0x1801870F0
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x180186AAC (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180185F7C (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArrayAndFree(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // r8d
  __int64 v5; // rdx
  void **v6; // rsi

  if ( (_DWORD)a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(_DWORD *)(a2 + 24);
      v5 = (unsigned int)(v4 - 1);
      v6 = *(void ***)(*(_QWORD *)a2 + 8 * v5);
      if ( v4 )
        *(_DWORD *)(a2 + 24) = v5;
      else
        MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, 0x19Cu);
      --v3;
      if ( v6 )
        InteractionConfigurationGroup::`scalar deleting destructor'(v6);
    }
    while ( v3 );
  }
}
