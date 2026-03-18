/*
 * XREFs of ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x180027600
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x18002763C (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::`vector deleting destructor'(CAsyncFlushResponse *this, char a2)
{
  CAsyncFlushResponse::~CAsyncFlushResponse(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
