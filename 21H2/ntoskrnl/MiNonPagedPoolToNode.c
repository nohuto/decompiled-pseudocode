/*
 * XREFs of MiNonPagedPoolToNode @ 0x14024B164
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x140308264 (MiMakeSystemRangeAvailable.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiNonPagedPoolToNode(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  unsigned __int64 *p_Region; // rdx

  result = 0LL;
  if ( !KeNumberNodes )
LABEL_6:
    KeBugCheckEx(0x1Au, 0x5201uLL, BugCheckParameter2, 0LL, 0LL);
  p_Region = &SListHead[10].Region;
  while ( BugCheckParameter2 < *(p_Region - 1) || BugCheckParameter2 >= *p_Region )
  {
    result = (unsigned int)(result + 1);
    p_Region += 22;
    if ( (unsigned int)result >= (unsigned __int16)KeNumberNodes )
      goto LABEL_6;
  }
  return result;
}
