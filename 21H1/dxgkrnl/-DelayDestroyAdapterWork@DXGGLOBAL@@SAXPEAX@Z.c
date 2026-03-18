/*
 * XREFs of ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1C0264860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C00445FC (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C0177974 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGGLOBAL::DelayDestroyAdapterWork(_QWORD *P, __int64 a2)
{
  struct DXGGLOBAL *Global; // rbx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  Global = DXGGLOBAL::GetGlobal((__int64)P, a2);
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 472));
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 512));
  v4 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v5 = (PVOID *)P[1], *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v4, (struct DXGADAPTER *)P) )
  {
    --*((_DWORD *)Global + 76122);
    if ( *((_BYTE *)P + 2516) )
    {
      --*((_DWORD *)Global + 76118);
    }
    else if ( *((_BYTE *)P + 2511) )
    {
      --*((_DWORD *)Global + 76119);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 64, v6);
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 59, v7);
  DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)P);
}
