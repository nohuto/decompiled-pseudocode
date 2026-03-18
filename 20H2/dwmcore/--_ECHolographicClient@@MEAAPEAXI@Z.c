/*
 * XREFs of ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x180258150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180257F80 (--1CHolographicClient@@MEAA@XZ.c)
 */

CHolographicClient *__fastcall CHolographicClient::`vector deleting destructor'(CHolographicClient *this, char a2)
{
  CHolographicClient::~CHolographicClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
