/*
 * XREFs of WbReAlloc @ 0x1406E2598
 * Callers:
 *     WbAddLookupEntryEx @ 0x14065D2A8 (WbAddLookupEntryEx.c)
 *     sub_14065FDD8 @ 0x14065FDD8 (sub_14065FDD8.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     WbAlloc @ 0x14065F5FC (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbReAlloc(PVOID P, size_t Size, SIZE_T NumberOfBytes, _QWORD *a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi
  int v8; // eax
  PVOID v9; // rbx
  unsigned int v10; // r15d
  PVOID Pa[5]; // [rsp+20h] [rbp-28h] BYREF

  Pa[0] = 0LL;
  v4 = Size;
  v7 = NumberOfBytes;
  v8 = WbAlloc((unsigned int)NumberOfBytes, Pa);
  v9 = Pa[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( P )
    {
      if ( v4 )
      {
        if ( v7 >= v4 )
          v7 = v4;
        memmove(Pa[0], P, v7);
      }
      ExFreePoolWithTag(P, 0x42524157u);
    }
    if ( a4 )
    {
      *a4 = v9;
      v9 = 0LL;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x42524157u);
  return v10;
}
