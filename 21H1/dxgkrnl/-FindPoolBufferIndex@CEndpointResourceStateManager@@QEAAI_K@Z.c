/*
 * XREFs of ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C006A718
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006C814 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointResourceStateManager::FindPoolBufferIndex(CEndpointResourceStateManager **this, __int64 a2)
{
  CEndpointResourceStateManager *v2; // r8
  unsigned int i; // r9d
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *this;
  for ( i = 0; ; ++i )
  {
    if ( v2 == (CEndpointResourceStateManager *)this )
      return 0LL;
    v4 = (__int64)v2 + 24;
    if ( !v2 )
      v4 = 32LL;
    if ( (*(_BYTE *)v4 & 2) == 0 )
    {
      v5 = (__int64)v2 + 16;
      if ( !v2 )
        v5 = 24LL;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 40LL) == a2 )
        break;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  return i;
}
