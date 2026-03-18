/*
 * XREFs of RtlULongLongAdd @ 0x140242A00
 * Callers:
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     CmpCaptureKeyValueArray @ 0x140657D1C (CmpCaptureKeyValueArray.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406FB1D4 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1406FBE44 (LdrpResGetResourceDirectory.c)
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
