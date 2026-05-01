/*
 * XREFs of ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x18037DEB4
 * Callers:
 *     ??_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z @ 0x1800FC860 (--_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18037DAE0 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 */

CMultitaskingViewServiceProvider *__fastcall CMultitaskingViewServiceProvider::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider *this,
        char a2)
{
  CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
