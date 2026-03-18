/*
 * XREFs of GreMakeBitmapNonStock @ 0x1C0015680
 * Callers:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00C0E8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     HmgLockAndModifyHandleType @ 0x1C0015840 (HmgLockAndModifyHandleType.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00159DC (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 *     HmgLockEx @ 0x1C008ABB0 (HmgLockEx.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  SURFACE *v4; // rax
  SURFACE *v5; // rbx
  __int64 v6; // r8

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = (SURFACE *)HmgLockEx(a1, a2, 0LL);
  v5 = v4;
  if ( v4 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v4) || !*((_WORD *)v5 + 50) && *((_DWORD *)v5 + 54))
      && (void *)a1 != gahStockObjects[21]
      && (a1 & 0x800000) != 0 )
    {
      v2 = a1 & 0xFFFFFFFFFF7FFFFFuLL;
      if ( *((_DWORD *)v5 + 42) )
      {
        if ( (*(_DWORD *)v5 & 0x800000) != 0 )
          *((_WORD *)v5 + 51) |= 0x400u;
      }
      else if ( (unsigned int)HmgLockAndModifyHandleType(v5) )
      {
        _InterlockedIncrement(&gStockBitmapFree);
        *((_QWORD *)v5 + 4) = v2;
        *((_WORD *)v5 + 51) &= ~0x200u;
        LOBYTE(v6) = 5;
        HmgSetOwner(a1 & 0xFFFFFFFFFF7FFFFFuLL, 2147483650LL, v6);
      }
      else
      {
        v2 = 0LL;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
  }
  return v2;
}
