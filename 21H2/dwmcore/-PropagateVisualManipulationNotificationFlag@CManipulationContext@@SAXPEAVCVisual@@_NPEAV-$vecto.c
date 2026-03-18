/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1801839D8
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18017E7E8 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x180181A78 (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1801853C8 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180185408 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::PropagateVisualManipulationNotificationFlag(
        struct CVisual *a1,
        char a2,
        _QWORD *a3,
        unsigned int a4)
{
  struct CVisual *v6; // rbx
  char v7; // al
  char v8; // si
  _BYTE *v9; // rdx
  struct CVisual *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v10 = a1;
    v6 = a1;
    if ( a2 )
    {
      do
      {
        v7 = *((_BYTE *)v6 + 101);
        if ( v7 < 0 )
          break;
        *((_BYTE *)v6 + 101) = v7 | 0x80;
        v6 = (struct CVisual *)*((_QWORD *)v6 + 11);
      }
      while ( v6 );
    }
    else
    {
      do
      {
        v8 = *((_BYTE *)v6 + 101);
        if ( v8 >= 0
          || CManipulationContext::VisualHasActiveInteraction(v6, a4)
          || CManipulationContext::VisualHasAnyChildFlagged(v6) )
        {
          break;
        }
        *((_BYTE *)v6 + 101) = v8 & 0x7F;
        if ( CVisual::GetInteractionInternal(v6) )
        {
          v9 = (_BYTE *)a3[1];
          if ( v9 == (_BYTE *)a3[2] )
          {
            std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(a3, v9, &v10);
            v6 = v10;
          }
          else
          {
            *(_QWORD *)v9 = v6;
            a3[1] += 8LL;
          }
        }
        v6 = (struct CVisual *)*((_QWORD *)v6 + 11);
        v10 = v6;
      }
      while ( v6 );
    }
  }
}
