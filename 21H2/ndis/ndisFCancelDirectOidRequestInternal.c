/*
 * XREFs of ndisFCancelDirectOidRequestInternal @ 0x1C00AE650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A7EC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00AE4B0 (ndisDoCancelDirectOidRequest.c)
 */

void __fastcall ndisFCancelDirectOidRequestInternal(_QWORD *Parameter)
{
  void *v1; // r14
  struct _NDIS_FILTER_BLOCK *v2; // rbx
  struct _NDIS_FILTER_BLOCK *v3; // rdi
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  bool v5; // bp
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // rax
  KIRQL v7; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF

  v1 = (void *)Parameter[3];
  v2 = 0LL;
  v3 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v4 = 0LL;
  v5 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_3215b46893a730bc04993878aec4e6e9_Traceguids,
      (char)v3,
      v1);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(v3, &NewIrql);
  NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)v3->NextDirectRequestHandle;
  if ( NextDirectRequestHandle->Header.Type == 5 )
  {
    v9 = 0;
    v2 = NextDirectRequestHandle;
    v5 = ndisReferenceRefEx(&NextDirectRequestHandle->PnPRef.SpinLock, 2u, (enum _NDIS_REFERENCE_STATUS *)&v9);
    if ( !v5 )
      v2 = 0LL;
  }
  else
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)v3->NextDirectRequestHandle;
  }
  v7 = NewIrql;
  v3->LockThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v7);
  if ( v4 || v2 )
    ndisDoCancelDirectOidRequest(v4, v2, v1);
  if ( v5 )
    ndisDereferenceRef(&v2->PnPRef.SpinLock, 2u);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_3215b46893a730bc04993878aec4e6e9_Traceguids,
      (char)v3,
      v1);
}
