/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C007A488
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C00C37C8 (xxxGetWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C0073878 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r12
  __int16 v9; // di
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rax

  v5 = 0LL;
  v6 = HMValidateHandleNoRip(a2, 3);
  v8 = (__int64 *)v6;
  if ( v6 )
  {
    v9 = *(_WORD *)(v6 + 74);
    DpiForSystem = GetDpiForSystem(v7);
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
    v13 = GetDpiForSystem(v12);
    v14 = GetDpiDependentMetric(20LL, v13);
    v15 = xxxClientCopyImage(*v8, (unsigned int)(v9 != 3) + 1, v14, DpiDependentMetric, a3 != 0 ? 0x4000 : 0);
    if ( v15 )
    {
      v5 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 )
      {
        *(_DWORD *)(v15 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v5;
        if ( !a3 )
          SetOrClrWF(1LL, a1, 1824LL, 1LL);
      }
    }
  }
  return v5;
}
