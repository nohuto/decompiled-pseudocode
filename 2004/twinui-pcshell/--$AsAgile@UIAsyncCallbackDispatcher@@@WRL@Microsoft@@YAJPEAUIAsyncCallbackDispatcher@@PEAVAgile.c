/*
 * XREFs of ??$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgileRef@01@@Z @ 0x1801E6BCC
 * Callers:
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1801EAED8 (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AsAgile<IAsyncCallbackDispatcher>(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, a1, a2);
  }
  else
  {
    v6 = *a2;
    v7 = 0LL;
    *a2 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return v2;
}
