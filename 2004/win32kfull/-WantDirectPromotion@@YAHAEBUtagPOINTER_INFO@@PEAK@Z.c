/*
 * XREFs of ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C0219DBC
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021A064 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C01071B0 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall WantDirectPromotion(const struct tagPOINTER_INFO *a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax

  v2 = *((_DWORD *)a1 + 3);
  if ( (v2 & 0x10000) != 0 )
  {
    v4 = 0x10000000;
  }
  else
  {
    if ( (v2 & 0x40004) != 0 )
      return 0LL;
    v4 = 0;
  }
  v5 = ValidateHwnd(*((_QWORD *)a1 + 3));
  if ( v5 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v5 + 16)) & 0x40000000000LL) != 0 )
  {
    *a2 = v4;
    return 1LL;
  }
  return 0LL;
}
