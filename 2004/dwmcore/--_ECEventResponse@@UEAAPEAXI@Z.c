/*
 * XREFs of ??_ECEventResponse@@UEAAPEAXI@Z @ 0x180164200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CEventResponse@@UEAA@XZ @ 0x1801641BC (--1CEventResponse@@UEAA@XZ.c)
 */

HANDLE *__fastcall CEventResponse::`vector deleting destructor'(HANDLE *this, char a2)
{
  CEventResponse::~CEventResponse(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
