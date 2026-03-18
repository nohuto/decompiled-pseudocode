/*
 * XREFs of _EditionUpdateInputTransformFromHitTest@24 @ 0x11A3E
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z @ 0x11AF6 (-SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     _WPP_RECORDER_SF_qqi@36 @ 0x147E5B (_WPP_RECORDER_SF_qqi@36.c)
 *     ?SetCompositionInput@InputTransform@@YGHPAUtagWND@@PAX@Z @ 0x15E709 (-SetCompositionInput@InputTransform@@YGHPAUtagWND@@PAX@Z.c)
 *     ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750 (-StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z.c)
 */

int __stdcall EditionUpdateInputTransformFromHitTest(int a1, int a2, int a3, int a4, char a5, InputTransform *a6)
{
  int *v6; // esi
  int v7; // ebx
  int v8; // eax
  int v10; // [esp-1Ch] [ebp-2Ch]
  int v11; // [esp-18h] [ebp-28h]
  int v12; // [esp-14h] [ebp-24h]
  struct tagWND *v13; // [esp+0h] [ebp-10h]
  InputTransform *v14; // [esp+0h] [ebp-10h]
  struct tagWND *v15; // [esp+4h] [ebp-Ch]
  struct tagWND *v16; // [esp+4h] [ebp-Ch]
  unsigned __int64 *v17; // [esp+8h] [ebp-8h]
  void *v18; // [esp+8h] [ebp-8h]

  v6 = *(int **)(a1 + 80);
  v7 = 0;
  if ( a2 && !SetCompositionInputWindowUIOwner(v13, v15) || a4 )
  {
LABEL_7:
    v8 = 0;
    goto LABEL_12;
  }
  if ( !InputTransform::StoreTransform(a6, v13, v15, v17) )
  {
    v8 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    WPP_RECORDER_SF_qqi(v10, v11, v12, (char)v6, a5, *(_DWORD *)a6, *((_DWORD *)a6 + 1));
    goto LABEL_7;
  }
  if ( !InputTransform::SetCompositionInput(v14, v16, v18)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(16, 33, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, (char)v6, a3);
  }
  v8 = 1;
LABEL_12:
  if ( v6 )
    v7 = *v6;
  return EtwTraceDITResolveDCompInputHandleToHwnd(a3, v7, *(_DWORD *)a6, *((_DWORD *)a6 + 1), v8);
}
