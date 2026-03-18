/*
 * XREFs of CcFreeVirtualAddress @ 0x140287EE0
 * Callers:
 *     CcPinMappedData @ 0x140631980 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x140631B50 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140640770 (CcMdlRead.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
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
