/*
 * XREFs of CcFreeVirtualAddress @ 0x1402A4140
 * Callers:
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 *     CcPinMappedData @ 0x140680800 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x1406809D0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
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
