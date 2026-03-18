/*
 * XREFs of CcFreeVirtualAddress @ 0x14022EE90
 * Callers:
 *     CcPinMappedData @ 0x1405FC940 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x1405FCB10 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
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
