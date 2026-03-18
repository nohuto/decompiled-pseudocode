/*
 * XREFs of RtlULongLongAdd @ 0x1402E0E30
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x14066BFC0 (CmpCaptureKeyValueArray.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406AE854 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1406AF4C4 (LdrpResGetResourceDirectory.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
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
