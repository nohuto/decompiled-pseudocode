/*
 * XREFs of ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18002BBA4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023200 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002BAC4 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetReverseAlignment(CText *this, char a2)
{
  __int64 v2; // rax

  if ( ((*((_BYTE *)this + 280) & 4) != 0) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 280) = (4 * a2) | *((_BYTE *)this + 280) & 0xFB;
    (*(void (__fastcall **)(CText *, __int64))(v2 + 24))(this, 4096LL);
  }
}
