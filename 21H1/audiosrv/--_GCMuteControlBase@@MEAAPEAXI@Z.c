/*
 * XREFs of ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x1800BE660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteControlBase@@MEAA@XZ @ 0x1800BE564 (--1CMuteControlBase@@MEAA@XZ.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::`scalar deleting destructor'(CMuteControlBase *this, char a2)
{
  CMuteControlBase::~CMuteControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
