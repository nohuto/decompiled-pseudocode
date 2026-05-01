/*
 * XREFs of sub_180071894 @ 0x180071894
 * Callers:
 *     sub_180071AF0 @ 0x180071AF0 (sub_180071AF0.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180071894(__int64 a1)
{
  struct _RTL_BITMAP *v1; // rsi
  unsigned int i; // ebx
  __int64 v4; // rcx

  v1 = (struct _RTL_BITMAP *)(a1 + 16);
  RtlClearAllBits((PRTL_BITMAP)(a1 + 16));
  for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
  {
    v4 = *(_QWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)a1 + 48);
    if ( *(char *)(v4 + 1162) < 0 )
      RtlSetBit(v1, *(_DWORD *)(v4 + 620));
  }
  return RtlNumberOfSetBits(v1);
}
