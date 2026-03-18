/*
 * XREFs of ??4?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B306C
 * Callers:
 *     ??$move@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B2E1C (--$move@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B2EE0 (--$move_backward@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffec.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180032720 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x18003277C (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>::operator=(
        __int64 a1,
        __int64 a2)
{
  if ( a1 != a2 )
  {
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(a1, a2);
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(a1, a2);
  }
  return a1;
}
