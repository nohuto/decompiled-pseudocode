/*
 * XREFs of ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1800FE470
 * Callers:
 *     ??_ECDrawListEntryBatch@@G7EAAPEAXI@Z @ 0x180107290 (--_ECDrawListEntryBatch@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1800FE4AC (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::`scalar deleting destructor'(CDrawListEntryBatch *this, char a2)
{
  CDrawListEntryBatch::~CDrawListEntryBatch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
