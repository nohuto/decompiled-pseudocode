/*
 * XREFs of ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18003BE9C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180018950 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18003BD14 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18005605E (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CText::SetFont(CText *this, const struct tagLOGFONTW *a2)
{
  char *v2; // rdi

  v2 = (char *)this + 296;
  if ( memcmp_0((char *)this + 296, a2, 0x5CuLL) )
  {
    *((_BYTE *)this + 280) &= ~1u;
    *(_OWORD *)v2 = *(_OWORD *)&a2->lfHeight;
    *((_OWORD *)v2 + 1) = *(_OWORD *)&a2->lfWeight;
    *((_OWORD *)v2 + 2) = *(_OWORD *)&a2->lfFaceName[2];
    *((_OWORD *)v2 + 3) = *(_OWORD *)&a2->lfFaceName[10];
    *((_OWORD *)v2 + 4) = *(_OWORD *)&a2->lfFaceName[18];
    *((_QWORD *)v2 + 10) = *(_QWORD *)&a2->lfFaceName[26];
    *((_DWORD *)v2 + 22) = *(_DWORD *)&a2->lfFaceName[30];
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  }
}
