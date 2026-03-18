/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x1C01B1140
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0048FC8 (_anonymous_namespace_--ValidateUIPI.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1)
{
  __int64 MouseProcessor; // rax
  unsigned int v3; // edi

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( !MouseProcessor )
    return 0;
  v3 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3760), 1, 1)
    || !anonymous_namespace_::ValidateUIPI(a1, (_DWORD *)(MouseProcessor + 3640)) )
  {
    return 0;
  }
  return v3;
}
