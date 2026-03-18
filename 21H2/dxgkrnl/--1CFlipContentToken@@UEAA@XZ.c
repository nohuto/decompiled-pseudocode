/*
 * XREFs of ??1CFlipContentToken@@UEAA@XZ @ 0x1C0082B60
 * Callers:
 *     ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x1C0082BA0 (--_GCFlipContentToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x1C0020B94 (--1CToken@@UEAA@XZ.c)
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C0082E14 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

void __fastcall CFlipContentToken::~CFlipContentToken(CFlipContentToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  if ( !v1 )
  {
    CFlipContentToken::SetFlipManagerObjectPreReferenced(this, 0LL);
    *((_DWORD *)this + 6) = 6;
  }
  CToken::~CToken(this);
}
