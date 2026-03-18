/*
 * XREFs of ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1C0309910
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0053730 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C01FFE58 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGGLOBAL::DelayDestroyAdapterWork(_QWORD *P)
{
  struct DXGGLOBAL *Global; // rbx
  _QWORD *v3; // rcx
  PVOID *v4; // rax

  Global = DXGGLOBAL_GetGlobal();
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 704));
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 752));
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v3, (struct DXGADAPTER *)P) )
  {
    --*((_DWORD *)Global + 76214);
    if ( *((_BYTE *)P + 2636) )
    {
      --*((_DWORD *)Global + 76210);
    }
    else if ( *((_BYTE *)P + 2631) )
    {
      --*((_DWORD *)Global + 76211);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 94);
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 88);
  DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)P);
}
