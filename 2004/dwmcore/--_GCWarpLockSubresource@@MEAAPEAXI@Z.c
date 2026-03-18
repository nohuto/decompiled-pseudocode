/*
 * XREFs of ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x180091DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x180091DFC (--1CWarpLockSubresource@@MEAA@XZ.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::`scalar deleting destructor'(
        CWarpLockSubresource *this,
        char a2)
{
  CWarpLockSubresource::~CWarpLockSubresource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
