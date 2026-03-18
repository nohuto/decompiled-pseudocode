/*
 * XREFs of _xxxTouchTargetWindow@28 @ 0x17C92C
 * Callers:
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     ?TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z @ 0x179F56 (-TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     ?ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1796EB (-ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1797A4 (-BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagREC.c)
 *     ?ClipContact@@YGXPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@HPBUtagRECT@@@Z @ 0x179AD7 (-ClipContact@@YGXPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@HPBUtagRECT@@@Z.c)
 */

int __fastcall xxxTouchTargetWindow(
        _DWORD *a1,
        struct _D3DMATRIX *a2,
        int *a3,
        int *a4,
        unsigned __int16 *a5,
        _DWORD *a6,
        int a7)
{
  _BYTE *v9; // eax
  int v10; // edi
  int Prop; // eax
  struct tagTOUCHTARGETINGCONTACT *v13; // [esp+0h] [ebp-Ch]
  struct tagTOUCHTARGETINGCONTACT *v14; // [esp+0h] [ebp-Ch]
  const struct tagRECT *v15; // [esp+4h] [ebp-8h]
  int v16; // [esp+4h] [ebp-8h]
  int v17; // [esp+14h] [ebp+8h]

  v9 = (_BYTE *)a1[5];
  if ( (v9[23] & 0x10) == 0 || (v9[18] & 8) != 0 && (v9[16] & 0x20) != 0 )
    return 0;
  v10 = 1;
  if ( a7 )
  {
    if ( !GetWindowCloakState(a1) )
    {
      if ( a1[30] )
        ApplyWindowTransform((int)a3, (struct tagRECT *)1, a2, (struct _D3DMATRIX *)1, v13, (int)v15);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  Prop = _GetProp((int)a1, (unsigned __int16)gatomPtrTargetFlags, 1);
  *a4 = Prop;
  v17 = BasicTargetingHitTest((int)a1, (struct tagPOINT *)a2, a5, a6, a7, 0, 4, 1, Prop, 0, *a3, a3[1]);
  if ( !v17 || *a5 )
    v10 = 0;
  ClipContact((int)a1, (struct tagWND *)v10, 0, (int)v13, v15);
  if ( a7 )
  {
    if ( a1[30] )
      ApplyWindowTransform(0, (struct tagRECT *)v10, a2, 0, v14, v16);
  }
  return v17;
}
