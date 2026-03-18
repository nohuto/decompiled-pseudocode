/*
 * XREFs of EngAssociateSurface @ 0x1C003EE20
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C003EDC0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001BDC0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  __int64 v6; // rax

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  if ( hdev )
  {
    v6 = HmgShareLockCheckIgnoreStockBit((unsigned int)hsurf, 5);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 136) = 0LL;
      *(_QWORD *)(v6 + 48) = hdev;
      v3 = 1;
      *(_QWORD *)(v6 + 40) = *((_QWORD *)hdev + 225);
      *(_DWORD *)(v6 + 112) |= v4;
      HmgDecrementShareReferenceCountEx(v6, 0LL);
    }
  }
  return v3;
}
