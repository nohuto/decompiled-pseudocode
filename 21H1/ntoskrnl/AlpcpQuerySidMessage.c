/*
 * XREFs of AlpcpQuerySidMessage @ 0x14066B32C
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x14066B4A0 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memset @ 0x140408F80 (memset.c)
 *     AlpcpQuerySidToken @ 0x14066B274 (AlpcpQuerySidToken.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14066B3DC (AlpcpGetEffectiveTokenMessage.c)
 */

__int64 __fastcall AlpcpQuerySidMessage(int a1, int a2, void *a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  unsigned int SidToken; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  PADAPTER_OBJECT v13[9]; // [rsp+40h] [rbp-58h] BYREF

  memset(v13, 0, sizeof(v13));
  v12 = 0LL;
  v11[0] = 0;
  result = AlpcpGetEffectiveTokenMessage(a1, a2, (unsigned int)&v12, (unsigned int)v13, (__int64)v11);
  if ( (int)result >= 0 )
  {
    SidToken = AlpcpQuerySidToken(v12, a3, a4, a5);
    if ( v11[0] )
      HalPutDmaAdapter(v13[2]);
    return SidToken;
  }
  return result;
}
