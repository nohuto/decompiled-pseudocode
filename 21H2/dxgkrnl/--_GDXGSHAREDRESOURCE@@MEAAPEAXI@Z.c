/*
 * XREFs of ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C000C150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0186170 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 */

DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::`scalar deleting destructor'(DXGSHAREDRESOURCE *this, char a2)
{
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
