/*
 * XREFs of ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x18000B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x18000BF4C (--1CPortClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18000CC8C (--3@YAXPEAX_K@Z.c)
 */

CPortClientRefCounted *__fastcall CPortClientRefCounted::`vector deleting destructor'(
        CPortClientRefCounted *this,
        char a2)
{
  *(_QWORD *)this = &CPortClientRefCounted::`vftable';
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
