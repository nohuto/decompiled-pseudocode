/*
 * XREFs of ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180157300
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D7C0C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180156E54 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::`scalar deleting destructor'(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x3E50);
    else
      operator delete(this);
  }
  return this;
}
