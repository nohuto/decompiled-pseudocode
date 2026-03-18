/*
 * XREFs of ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1801F82CC
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009C330 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801149AC (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

struct CProjectedShadowReceiver ***__fastcall CVisual::RenderProjectedShadows(
        __int64 a1,
        struct CDrawingContext *a2,
        int a3)
{
  struct CProjectedShadowReceiver ***result; // rax
  struct CProjectedShadowReceiver **v6; // rsi
  struct CProjectedShadowReceiver **i; // rbx
  struct CProjectedShadowReceiver *v8; // rdi
  struct CProjectedShadowReceiver ***v9; // rbp

  result = *(struct CProjectedShadowReceiver ****)(a1 + 232);
  if ( (*(_DWORD *)result & 0x20000) != 0 )
  {
    result = (struct CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers(a1);
    v6 = result[1];
    for ( i = *result; i != v6; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 24) == a3 )
      {
        for ( result = (struct CProjectedShadowReceiver ***)*((_QWORD *)v8 + 10); ; result = v9 - 1 )
        {
          v9 = result;
          if ( result == *((struct CProjectedShadowReceiver ****)v8 + 9) )
            break;
          CProjectedShadowScene::DrawShadows((CProjectedShadowScene *)*(result - 1), a2, v8);
        }
      }
    }
  }
  return result;
}
