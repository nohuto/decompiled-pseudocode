/*
 * XREFs of ??_GCGITCookieObject@@UEAAPEAXI@Z @ 0x180453A00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CGITCookieObject@@UEAA@XZ @ 0x180453918 (--1CGITCookieObject@@UEAA@XZ.c)
 */

CGITCookieObject *__fastcall CGITCookieObject::`scalar deleting destructor'(CGITCookieObject *this, char a2)
{
  CGITCookieObject::~CGITCookieObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
