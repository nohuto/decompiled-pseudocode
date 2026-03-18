/*
 * XREFs of _xxxMNButtonUp@16 @ 0x197A96
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA (-xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 */

void __fastcall xxxMNButtonUp(char ***a1, int a2, int a3, int a4)
{
  char *v6; // eax
  _DWORD *v7; // ecx

  if ( (*(_BYTE *)(a2 + 4) & 8) != 0 )
  {
    if ( a3 != -1 && *((_DWORD *)**a1 + 10) == a3 )
    {
      v6 = **a1;
      if ( (*v6 & 1) != 0 )
      {
        if ( (*v6 & 0x20) != 0 )
        {
          if ( ***a1 < 0 )
          {
            *(_DWORD *)**a1 &= ~0x80u;
            xxxMNCancel(0, 0);
            return;
          }
          goto LABEL_10;
        }
LABEL_12:
        if ( *((_DWORD *)**a1 + 10) != -1
          && *((_DWORD *)**a1 + 10) < *(_DWORD *)(*(_DWORD *)(*((_DWORD *)**a1 + 5) + 20) + 24) )
        {
          v7 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)**a1 + 5) + 56) + 80 * *((_DWORD *)**a1 + 10));
          if ( (*(_DWORD *)*v7 & 0x800) == 0 && (*(_BYTE *)(*v7 + 4) & 3) == 0 && !v7[2] )
          {
            xxxMNDismissWithNotify(a2, (int)a1, (int)v7, *((struct tagWND **)**a1 + 10), a4);
            return;
          }
        }
        goto LABEL_10;
      }
      if ( (*(_DWORD *)v6 & 0x2000) == 0 )
        goto LABEL_12;
      *(_DWORD *)**a1 &= ~0x80u;
      xxxMNOpenHierarchy(a1, a2);
    }
LABEL_10:
    *(_DWORD *)(a2 + 4) &= 0xFFFFFFB7;
  }
}
