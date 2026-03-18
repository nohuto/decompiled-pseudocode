/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z @ 0x180218D48
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<enum ScrollState,0>::AddMultipleAndSet(unsigned __int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v4 = 0;
    if ( v3 > *(_DWORD *)(a1 + 20) )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 4u, 1, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0xC0u);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v4;
}
