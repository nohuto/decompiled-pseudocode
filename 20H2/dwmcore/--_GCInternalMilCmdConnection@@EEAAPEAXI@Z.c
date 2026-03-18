/*
 * XREFs of ??_GCInternalMilCmdConnection@@EEAAPEAXI@Z @ 0x18014E960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CInternalMilCmdConnection@@EEAA@XZ @ 0x18014E8D8 (--1CInternalMilCmdConnection@@EEAA@XZ.c)
 */

CInternalMilCmdConnection *__fastcall CInternalMilCmdConnection::`scalar deleting destructor'(
        CInternalMilCmdConnection *this,
        char a2)
{
  CInternalMilCmdConnection::~CInternalMilCmdConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xE0);
    else
      operator delete(this);
  }
  return this;
}
