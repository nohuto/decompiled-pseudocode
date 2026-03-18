/*
 * XREFs of DrvDbGetDeviceIdMappedPropertyKeys @ 0x140978A40
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406B1010 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406B268C (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140712838 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x1409789BC (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rdi
  int v8; // eax
  int InfoKey; // ebx
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
    InfoKey = DrvDbOpenDeviceIdRegKey(a1, a2, 1, 0, (__int64)Handle, 0LL);
    if ( InfoKey < 0 )
      goto LABEL_7;
    v8 = (int)Handle[0];
  }
  InfoKey = PnpCtxRegQueryInfoKey((__int64)&v13, v8, 0, 0, (__int64)&v13, 0LL, 0LL);
  if ( InfoKey >= 0 && v13 )
    InfoKey = DrvDbGetCompositeMappedPropertyKeys(v10, (_OWORD **)off_140C0F090, 3u, a4, a5, v6);
LABEL_7:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)InfoKey;
}
