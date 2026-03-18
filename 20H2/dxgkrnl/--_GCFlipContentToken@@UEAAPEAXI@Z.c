/*
 * XREFs of ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x1C006ED80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x1C006ED40 (--1CFlipContentToken@@UEAA@XZ.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::`scalar deleting destructor'(CFlipContentToken *P, char a2)
{
  CFlipContentToken::~CFlipContentToken(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
