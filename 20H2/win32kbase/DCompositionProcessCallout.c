/*
 * XREFs of DCompositionProcessCallout @ 0x1C00611D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0061144 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C0061750 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DCompositionProcessCallout(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  DirectComposition::CProcessData *v4; // rcx

  v2 = 0;
  if ( a2 )
  {
    return (unsigned int)DirectComposition::CProcessData::OnProcessCreation((struct _W32PROCESS *)a1);
  }
  else
  {
    v4 = *(DirectComposition::CProcessData **)(a1 + 256);
    if ( v4 )
    {
      DirectComposition::CProcessData::`scalar deleting destructor'(v4, a2);
      *(_QWORD *)(a1 + 256) = 0LL;
    }
  }
  return v2;
}
