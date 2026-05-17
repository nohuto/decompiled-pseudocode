/*
 * XREFs of _RtlImageNtHeaderEx_ExceptionFilter@8 @ 0x4B365FF3
 * Callers:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return ((unsigned __int8)~a1 >> 1) & 1;
}
