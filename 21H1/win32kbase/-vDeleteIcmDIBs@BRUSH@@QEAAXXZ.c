/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C7D08
 * Callers:
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     bDeleteSurface @ 0x1C009AEA0 (bDeleteSurface.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C009C2F4 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  SURFACE *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx

  v1 = *((_QWORD *)this + 11);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = (SURFACE *)HmgShareLockCheck(*(_QWORD *)(v1 + 8), 5);
      v6 = (__int64)v3;
      if ( v3 )
      {
        SURFACE::vDec_cRef(v3);
        HmgDecrementShareReferenceCountEx(v6, 0LL);
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      }
      Win32FreePool(v1, v4, v5);
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
