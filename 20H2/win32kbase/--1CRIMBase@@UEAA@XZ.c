/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C0008934
 * Callers:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0008850 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C019E6B0 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0008A4C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRIMBase::~CRIMBase(CRIMBase *this)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector destructor iterator'(
    (char *)this + 152,
    0x40uLL,
    0x11uLL,
    (void (*)(void *))CRIMBase::SensorDispatcherObject::~SensorDispatcherObject);
}
