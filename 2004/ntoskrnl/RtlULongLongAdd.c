/*
 * XREFs of RtlULongLongAdd @ 0x14027F100
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1405E0B70 (CmpCaptureKeyValueArray.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14065B394 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x14065C004 (LdrpResGetResourceDirectory.c)
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // rdx

  v3 = ullAugend + ullAddend;
  if ( v3 < ullAugend )
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  else
  {
    *pullResult = v3;
    return 0;
  }
}
