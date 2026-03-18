/*
 * XREFs of ?SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z @ 0x1A08F8
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     ?xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z @ 0x1A0A7C (-xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z.c)
 *     ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63 (-xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?KillTooltipTimer@@YGXPAUtagTOOLTIPWND@@@Z @ 0x12D78 (-KillTooltipTimer@@YGXPAUtagTOOLTIPWND@@@Z.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 */

void __userpurge SetTooltipTimer(
        char *a1@<edx>,
        unsigned int *a2@<ecx>,
        struct tagTOOLTIPWND *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v7; // ecx

  KillTooltipTimer(a2);
  v7 = *a2;
  a2[6] = (unsigned int)a1;
  _SetSystemTimer(v7, a1, (unsigned int)a3, 0, 1);
}
