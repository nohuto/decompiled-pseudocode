/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x1C01AB3E0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( !MouseProcessor )
    return 0;
  v5 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3688), 1, 1)
    || !anonymous_namespace_::ValidateUIPI(a1, (_DWORD *)(MouseProcessor + 3568), v3, v4) )
  {
    return 0;
  }
  return v5;
}
