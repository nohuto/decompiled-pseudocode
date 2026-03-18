/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C00082A4
 * Callers:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00081C0 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C01A0A50 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00083BC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
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
