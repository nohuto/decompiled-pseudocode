/*
 * XREFs of _GreSetPaletteEntries@16 @ 0x21E422
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0MDCOBJA@@QAE@PAUHDC__@@H@Z @ 0x7C2B6 (--0MDCOBJA@@QAE@PAUHDC__@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z @ 0x22337C (-ulSetEntries@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __stdcall GreSetPaletteEntries(int a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  int v6; // ecx
  HDC v7; // edi
  int *v8; // eax
  int *v10[3]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-4h] BYREF

  v4 = 0;
  v5 = HmgShareLockCheck(a1, 8);
  a1 = v5;
  if ( v5 )
  {
    v11 = _ghsemPalette;
    GreAcquireSemaphore(_ghsemPalette);
    v4 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&a1, a2, a3, a4);
    GreAcquireHmgrSemaphore();
    v7 = *(HDC *)(v5 + 32);
    while ( v7 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v10, v7, v6);
      v8 = v10[0];
      if ( !v10[0] )
        break;
      v10[0][59] |= 0xFu;
      v7 = (HDC)v8[256];
      XDCOBJ::vAltUnlockFast(v10);
    }
    GreReleaseHmgrSemaphore();
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    DEC_SHARE_REF_CNT(v5);
  }
  return v4;
}
