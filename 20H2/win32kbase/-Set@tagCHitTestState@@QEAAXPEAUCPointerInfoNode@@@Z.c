/*
 * XREFs of ?Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019724C
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0194254 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall tagCHitTestState::Set(tagCHitTestState *this, struct CPointerInfoNode *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdx

  v6 = (_DWORD *)((char *)a2 + 24);
  if ( *v6 || *(_DWORD *)this )
  {
    CInputDest::operator=((__int64)this, (__int64)v6, a3, a4);
    *((_DWORD *)this + 30) = *((_DWORD *)a2 + 87);
    *((_DWORD *)this + 31) ^= (*((_DWORD *)this + 31) ^ (*((int *)a2 + 1) >> 8)) & 1;
  }
}
