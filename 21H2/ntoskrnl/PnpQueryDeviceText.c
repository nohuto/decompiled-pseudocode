/*
 * XREFs of PnpQueryDeviceText @ 0x14076AD30
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     PiNormalizeDeviceText @ 0x14076AE00 (PiNormalizeDeviceText.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryDeviceText(struct _DEVICE_OBJECT *a1, int a2, __int64 a3, PVOID *a4)
{
  int v7; // eax
  PVOID v8; // rbx
  int v9; // edi
  _DWORD v11[18]; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  *a4 = 0LL;
  memset(v11, 0, sizeof(v11));
  v11[4] = PsDefaultSystemLocaleId;
  LOWORD(v11[0]) = 3099;
  v11[2] = a2;
  v7 = IopSynchronousCall(a1, (__int64)v11, -1073741637, 0LL, &P);
  v8 = P;
  v9 = v7;
  if ( !P )
    v9 = -1073741637;
  if ( v9 >= 0 )
  {
    *a4 = P;
    PiNormalizeDeviceText(v8);
  }
  return (unsigned int)v9;
}
