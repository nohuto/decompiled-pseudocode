/*
 * XREFs of _xxxCreateWindowSmIcon@12 @ 0x13138
 * Callers:
 *     ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876 (-xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z.c)
 *     _xxxGetWindowSmIcon@8 @ 0x1D0E0 (_xxxGetWindowSmIcon@8.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     _xxxClientCopyImage@20 @ 0x16E68 (_xxxClientCopyImage@20.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 */

int __fastcall xxxCreateWindowSmIcon(int a1, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int DpiForSystem; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // eax
  int DpiDependentMetric; // [esp-8h] [ebp-1Ch]

  v4 = a2;
  LOBYTE(a2) = 3;
  v5 = 0;
  if ( HMValidateHandleNoRip(v4, a2) )
  {
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
    v7 = GetDpiForSystem();
    v8 = GetDpiDependentMetric(20, v7);
    v9 = (int *)xxxClientCopyImage(v8, DpiDependentMetric, a3 != 0 ? 0x4000 : 0);
    if ( v9 )
    {
      v5 = *v9;
      if ( *v9 )
      {
        v9[11] |= 0x80u;
        *(_DWORD *)(*(_DWORD *)(a1 + 20) + 168) = v5;
        if ( !a3 )
          SetOrClrWF(1824, 1);
      }
    }
  }
  return v5;
}
