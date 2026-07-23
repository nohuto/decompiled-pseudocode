/*
 * XREFs of RtlFreeUTF8String @ 0x14090C720
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
