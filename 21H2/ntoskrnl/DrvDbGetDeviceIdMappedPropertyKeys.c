/*
 * XREFs of DrvDbGetDeviceIdMappedPropertyKeys @ 0x14097D4B0
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140672910 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140735334 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14097D42C (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rdi
  HANDLE v8; // rax
  int CompositeMappedPropertyKeys; // ebx
  __int64 v10; // rcx
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  Handle[0] = 0LL;
  v8 = a3;
  v13 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    CompositeMappedPropertyKeys = DrvDbOpenDeviceIdRegKey(a1, a2, 1, 0, (__int64)Handle, 0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_7;
    v8 = Handle[0];
  }
  CompositeMappedPropertyKeys = PnpCtxRegQueryInfoKey((__int64)&v13, v8, 0LL, 0LL, &v13, 0LL, 0LL);
  if ( CompositeMappedPropertyKeys >= 0 && v13 )
    CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(v10, (_OWORD **)off_140C0F108, 3u, a4, a5, v6);
LABEL_7:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)CompositeMappedPropertyKeys;
}
