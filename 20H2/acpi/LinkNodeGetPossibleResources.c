/*
 * XREFs of LinkNodeGetPossibleResources @ 0x1C00B65E8
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6FEC (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C009B7C0 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall LinkNodeGetPossibleResources(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 *v4; // rcx
  int v6; // ebx
  _DWORD *v7; // rcx
  PVOID P; // [rsp+70h] [rbp+20h] BYREF
  PVOID v10; // [rsp+78h] [rbp+28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF

  *a2 = 0LL;
  v4 = *(__int64 **)(a1 + 560);
  v10 = 0LL;
  P = 0LL;
  v6 = -1073741823;
  *a3 = 0;
  ACPIGet(v4, 1397903455, 335609864, 0LL, 0, 0LL, 0LL, (__int64)&P, 0LL);
  if ( P )
  {
    v6 = PnpBiosResourcesToNtResources(0LL, P, 0LL, (unsigned int **)&v10);
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( v6 >= 0 )
    {
      v7 = v10;
      v11 = 0LL;
      *a3 = *((_BYTE *)v10 + 56) | ((*((_BYTE *)v10 + 44) & 1) == 0);
      v6 = PnpIoResourceListToCmResourceList(v7, &v11);
      if ( v6 >= 0 )
      {
        v6 = 0;
        *a2 = v11;
      }
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v6;
}
