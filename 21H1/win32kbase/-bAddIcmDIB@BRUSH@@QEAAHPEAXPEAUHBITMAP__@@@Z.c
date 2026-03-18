/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0146630
 * Callers:
 *     <none>
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C00804F0 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C0146710 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HBITMAP a3)
{
  unsigned int v6; // edi
  int *v8; // rbx
  _QWORD *v9; // rsi

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  v8 = (int *)HmgShareLockCheck((unsigned int)a3, 5);
  if ( v8 )
  {
    v9 = PALLOCMEM2(0x18uLL, 0x6C646247u, 0);
    if ( v9 )
    {
      HmgIncrementShareReferenceCount(v8);
      ++v8[42];
      *v9 = a2;
      v9[1] = a3;
      v9[2] = *((_QWORD *)this + 11);
      KeAcquireGuardedMutex(ghfmMemory);
      *((_QWORD *)this + 11) = v9;
      KeReleaseGuardedMutex(ghfmMemory);
      v6 = 1;
    }
    HmgDecrementShareReferenceCountEx((__int64)v8, 0LL);
  }
  return v6;
}
