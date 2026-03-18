/*
 * XREFs of ?DT_DrawJustifiedLine@@YGXPAUHDC__@@HPBGHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7C90
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YGHPAUHDC__@@HPAGHKPAUDRAWTEXTDATA@@H@Z @ 0x1B7AAC (-AddEllipsisAndDrawLine@@YGHPAUHDC__@@HPAGHKPAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7CFE (-DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z.c)
 */

void __userpurge DT_DrawJustifiedLine(
        HDC a1@<edx>,
        const WCHAR *a2,
        int a3,
        const unsigned __int16 *a4,
        int a5,
        unsigned int a6,
        struct DRAWTEXTDATA *a7,
        int a8)
{
  int v9; // eax
  struct DRAWTEXTDATA *v10; // [esp+0h] [ebp-Ch]
  int v11; // [esp+4h] [ebp-8h]

  if ( ((unsigned __int8)a4 & 3) != 0 )
    DT_DrawStr(a1, a2, a3, 0, (int)a4, a5, 0xFFFFFFFF, v10, v11);
  v9 = *(_DWORD *)(a5 + 48) + DT_DrawStr(a1, a2, a3, (const unsigned __int16 *)1, (int)a4, a5, 0xFFFFFFFF, v10, v11);
  if ( v9 > *(_DWORD *)(a5 + 36) )
    *(_DWORD *)(a5 + 36) = v9;
}
