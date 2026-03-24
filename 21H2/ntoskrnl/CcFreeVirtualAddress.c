/*
 * XREFs of CcFreeVirtualAddress @ 0x1403209F0
 * Callers:
 *     CcMdlRead @ 0x1406D3BB0 (CcMdlRead.c)
 *     CcPinMappedData @ 0x1406EF380 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x1406EF550 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall CcFreeVirtualAddress(__int64 a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
  {
    v3 = *(struct _KEVENT **)(v1 + 184);
    if ( v3 )
      result = KeSetEvent(v3, 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 544));
  }
  return result;
}
