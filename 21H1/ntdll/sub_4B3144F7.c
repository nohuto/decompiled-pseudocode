/*
 * XREFs of sub_4B3144F7 @ 0x4B3144F7
 * Callers:
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 * Callees:
 *     <none>
 */

void __userpurge sub_4B3144F7(
        int a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  *(_DWORD *)(a1 - 620) = 0;
  JUMPOUT(0x4B31414E);
}
