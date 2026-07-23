/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x180002210
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800021A0 (RtlpHpExtrasGet.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x1800022C4 (RtlpHpSegSizeInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegDescriptorValidate @ 0x180022944 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpLargeAllocSize @ 0x18008465C (RtlpHpLargeAllocSize.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // r9d
  __int64 v13; // rax

  if ( (_WORD)a2 )
  {
    v8 = 0;
  }
  else
  {
    v13 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(a2 - qword_18016BC18) >> 20));
    if ( !v13 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
    v8 = v13 - 1;
  }
  if ( v8 == 2 )
    return RtlpHpLargeAllocSize(a1, a2, a3, a4);
  v9 = 192LL * v8 + a1;
  v10 = RtlpHpSegDescriptorValidate(v9 + 256, a2);
  if ( v10 )
    return RtlpHpSegSizeInternal((int)v9 + 256, v10, a2, v11, a4);
  else
    return -1LL;
}
