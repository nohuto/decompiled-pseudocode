/*
 * XREFs of RtlFreeUTF8String @ 0x14090B470
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __cdecl RtlFreeUTF8String(PUTF8_STRING Utf8String)
{
  ULONG v1; // edx
  char *Buffer; // rcx

  Buffer = Utf8String->Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, v1);
    *Utf8String = 0LL;
  }
}
