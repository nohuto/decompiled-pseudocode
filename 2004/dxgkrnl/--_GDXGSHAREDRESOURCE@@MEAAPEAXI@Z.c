/*
 * XREFs of ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C00063B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0110F64 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 */

DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::`scalar deleting destructor'(DXGSHAREDRESOURCE *this, char a2)
{
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
