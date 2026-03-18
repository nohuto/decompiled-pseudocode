/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18022ED64
 * Callers:
 *     ?GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801C9F20 (-GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801C9F40 (-GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18022EC38 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18022EF9C (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18022F028 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18022F0A4 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C86BC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18022C758 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(CInteractionProcessor *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 (__fastcall ***v9)(_QWORD); // rax

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          v3 = *((_QWORD *)a1 + 60) == 0LL ? 0x8007139F : 0;
          if ( *((_QWORD *)a1 + 60) )
          {
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 60);
            v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 60);
LABEL_15:
            v3 = 0;
            *a3 = v9;
          }
        }
      }
      else if ( CInteractionProcessor::AllowPenGestureDetection(a1) )
      {
        v3 = *((_QWORD *)a1 + 40) == 0LL ? 0x8007139F : 0;
        if ( *((_QWORD *)a1 + 40) )
        {
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 40);
          v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 40);
          goto LABEL_15;
        }
      }
      else
      {
        return (unsigned int)-2147467259;
      }
    }
    else
    {
      v3 = *((_QWORD *)a1 + 20) == 0LL ? 0x8007139F : 0;
      if ( *((_QWORD *)a1 + 20) )
      {
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 20);
        v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 20);
        goto LABEL_15;
      }
    }
  }
  else
  {
    v3 = *(_QWORD *)a1 == 0LL ? 0x8007139F : 0;
    if ( *(_QWORD *)a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1);
      v9 = *(__int64 (__fastcall ****)(_QWORD))a1;
      goto LABEL_15;
    }
  }
  return v3;
}
