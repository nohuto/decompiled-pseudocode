/*
 * XREFs of PiPnpRtlGatherPanelRemoveInfo @ 0x140948AC4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140948594 (PiPnpRtlFreePanelRemoveInfo.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherPanelRemoveInfo(__int64 a1, __int64 a2, unsigned int ***a3)
{
  __int64 *Pool2; // rax
  unsigned int Object; // ebx
  int v8; // eax

  Pool2 = (__int64 *)ExAllocatePool2(256LL, 16LL, 1198550608LL);
  *a3 = (unsigned int **)Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
LABEL_8:
    PiPnpRtlFreePanelRemoveInfo(*a3);
    *a3 = 0LL;
    return Object;
  }
  Object = PiDmGetObject(1LL, a1, Pool2);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_8;
  v8 = PiDmGetObject(6LL, a2, (__int64 *)*a3 + 1);
  Object = v8;
  if ( v8 == -1073741772 )
  {
    return 0;
  }
  else if ( v8 < 0 )
  {
    goto LABEL_8;
  }
  return Object;
}
