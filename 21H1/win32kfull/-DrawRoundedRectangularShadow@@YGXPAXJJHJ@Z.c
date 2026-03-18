/*
 * XREFs of ?DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z @ 0x19CC15
 * Callers:
 *     ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18 (-GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z.c)
 * Callees:
 *     ?DrawBottomLogicallyLeftCorner@@YGXPAXJHJ@Z @ 0x19C971 (-DrawBottomLogicallyLeftCorner@@YGXPAXJHJ@Z.c)
 *     ?DrawBottomLogicallyRightCorner@@YGXPAXJHJ@Z @ 0x19C9F2 (-DrawBottomLogicallyRightCorner@@YGXPAXJHJ@Z.c)
 *     ?DrawBottomSide@@YGXPAXJHJ@Z @ 0x19CA7E (-DrawBottomSide@@YGXPAXJHJ@Z.c)
 *     ?DrawLogicallyRightSide@@YGXPAXJJHJ@Z @ 0x19CB14 (-DrawLogicallyRightSide@@YGXPAXJJHJ@Z.c)
 *     ?DrawTopLogicallyRightCorner@@YGXPAXJJHJ@Z @ 0x19CC6F (-DrawTopLogicallyRightCorner@@YGXPAXJJHJ@Z.c)
 */

void __userpurge DrawRoundedRectangularShadow(int a1@<edx>, int a2@<ecx>, void *a3, void *a4, int a5, int a6, int a7)
{
  int v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+0h] [ebp-10h]
  int v12; // [esp+0h] [ebp-10h]
  int v13; // [esp+4h] [ebp-Ch]
  int v14; // [esp+4h] [ebp-Ch]
  int v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-Ch]
  int v17; // [esp+4h] [ebp-Ch]

  DrawTopLogicallyRightCorner(a3, (int)a4, a5, v8, v13);
  DrawLogicallyRightSide(a1, a2, (char *)a3, (int)a4, a5, v9, v14);
  DrawBottomLogicallyRightCorner(a1, a2, a4, a5, v10, v15);
  DrawBottomSide(a1, a2, a4, a5, v11, v16);
  DrawBottomLogicallyLeftCorner(a1, a2, a4, a5, v12, v17);
}
