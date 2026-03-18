/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00DC3F8
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00DC528 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02A35E0 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02A9064 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     UnmapPrintKView @ 0x1C00D9994 (UnmapPrintKView.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  int v4; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v4 = *(_DWORD *)(*(_QWORD *)&a2[2].iUniq + 68LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  if ( v4 == 1 )
    UnmapPrintKView(*(_QWORD *)(*(_QWORD *)&a2[2].iUniq + 80LL));
  (*(void (__fastcall **)(struct _FONTOBJ *))(*(_QWORD *)this + 3032LL))(a2);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
}
