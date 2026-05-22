/*
 * XREFs of ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800C1E90
 * Callers:
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x1800C1F3C (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C3134 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C3508 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C38D4 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::Clip(ManipulationInjector *this, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  __int64 v4; // rax
  char v6; // bl
  LONG v7; // r9d
  int v10; // ecx
  LONG y; // edx
  LONG v12; // ecx

  v4 = (__int64)*a2;
  v6 = 0;
  v7 = a4 + a3->left;
  if ( a2->x >= v7 )
  {
    v7 = (LONG)*a2;
    v10 = a3->right - a4;
    if ( (int)v4 < v10 )
      goto LABEL_5;
    v7 = v10 - 1;
  }
  a2->x = v7;
  v6 = 1;
LABEL_5:
  y = a4 + a3->top;
  if ( a2->y < y )
  {
    v6 = 1;
    a2->y = y;
LABEL_10:
    if ( *((_BYTE *)this + 13) )
      DbgPrint("Clipped: original (%d, %d) clipped (%d, %d)\n", v4, HIDWORD(v4), v7, y);
    return v6;
  }
  y = a2->y;
  v12 = a3->bottom - a4;
  if ( y >= v12 )
  {
    y = v12 - 1;
    v6 = 1;
    a2->y = v12 - 1;
  }
  if ( v6 )
    goto LABEL_10;
  return v6;
}
