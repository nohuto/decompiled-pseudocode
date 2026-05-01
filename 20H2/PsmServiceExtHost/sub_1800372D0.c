/*
 * XREFs of sub_1800372D0 @ 0x1800372D0
 * Callers:
 *     sub_180002FF8 @ 0x180002FF8 (sub_180002FF8.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800372D0(__int64 a1, ULONG *a2)
{
  ULONG v3; // edi
  int *v4; // rbx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  RtlInitializeBitMap(&BitMapHeader, a2, 0x2Fu);
  v3 = 0;
  v4 = (int *)(a1 + 164);
  do
  {
    if ( *v4 < 101 )
      RtlSetBit(&BitMapHeader, v3);
    ++v3;
    ++v4;
  }
  while ( v3 < 0x2F );
}
