/*
 * XREFs of ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800C734C
 * Callers:
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1800C72B4 (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SE.c)
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800C72FC (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ?GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D9ED0 (-GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D9F90 (-SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall CNineGridBrush::TryGetInsetFieldPointer(CNineGridBrush *this, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a2 )
    return (float *)((char *)this + 112);
  v2 = a2 - 1;
  if ( !v2 )
    return (float *)((char *)this + 116);
  v3 = v2 - 2;
  if ( !v3 )
    return (float *)((char *)this + 88);
  v4 = v3 - 1;
  if ( !v4 )
    return (float *)((char *)this + 92);
  v5 = v4 - 1;
  if ( !v5 )
    return (float *)((char *)this + 104);
  v6 = v5 - 1;
  if ( !v6 )
    return (float *)((char *)this + 108);
  v7 = v6 - 2;
  if ( !v7 )
    return (float *)((char *)this + 96);
  if ( v7 == 1 )
    return (float *)((char *)this + 100);
  return 0LL;
}
