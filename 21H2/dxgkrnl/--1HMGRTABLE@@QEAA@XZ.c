/*
 * XREFs of ??1HMGRTABLE@@QEAA@XZ @ 0x1C030D8C8
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

void __fastcall HMGRTABLE::~HMGRTABLE(void **this)
{
  operator delete[](*this);
}
