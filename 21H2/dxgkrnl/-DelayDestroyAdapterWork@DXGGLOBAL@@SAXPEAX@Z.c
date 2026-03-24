/*
 * XREFs of ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1C0268E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C004646C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C0185FF0 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGGLOBAL::DelayDestroyAdapterWork(_QWORD *P, __int64 a2)
{
  struct DXGGLOBAL *Global; // rbx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  Global = DXGGLOBAL::GetGlobal((__int64)P, a2);
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 584));
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 624));
  v4 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v5 = (PVOID *)P[1], *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v4, (struct DXGADAPTER *)P) )
  {
    --*((_DWORD *)Global + 76152);
    if ( *((_BYTE *)P + 2540) )
    {
      --*((_DWORD *)Global + 76148);
    }
    else if ( *((_BYTE *)P + 2535) )
    {
      --*((_DWORD *)Global + 76149);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 78, v6);
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 73, v7);
  DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)P);
}
