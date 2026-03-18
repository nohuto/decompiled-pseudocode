/*
 * XREFs of ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C01B61D4
 * Callers:
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01B6180 (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 */

bool __fastcall GetDeviceRects(void *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  void *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagRECT v6; // xmm1
  bool result; // al
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = a3;
  if ( !TouchExtensibility::ghInjectionDevice )
    return 0;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, &Object) < 0 )
    return 0;
  v3 = Object == (PVOID)-88LL ? 0LL : (void *)*((_QWORD *)Object + 11);
  TouchExtensibility::hDeviceUser = v3;
  ObfDereferenceObject(Object);
  v4 = HMValidateHandleNoSecure((unsigned __int64)v3, 19);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 480);
  if ( !v5 )
    return 0;
  TouchExtensibility::rcHimetricRect = *(struct tagRECT *)(v5 + 176);
  v6 = *(struct tagRECT *)(v5 + 192);
  result = 1;
  TouchExtensibility::rcLogicalRect = v6;
  return result;
}
