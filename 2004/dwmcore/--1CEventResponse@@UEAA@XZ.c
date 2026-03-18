/*
 * XREFs of ??1CEventResponse@@UEAA@XZ @ 0x1801641BC
 * Callers:
 *     ??_ECEventResponse@@UEAAPEAXI@Z @ 0x180164200 (--_ECEventResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEventResponse::~CEventResponse(HANDLE *this)
{
  *this = &CEventResponse::`vftable';
  CloseHandle(this[5]);
  *this = &CResponseItem::`vftable';
}
