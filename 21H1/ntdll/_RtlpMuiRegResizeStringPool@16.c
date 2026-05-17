/*
 * XREFs of _RtlpMuiRegResizeStringPool@16 @ 0x4B36BD9D
 * Callers:
 *     _RtlpMuiRegGrowStringPool@16 @ 0x4B36B939 (_RtlpMuiRegGrowStringPool@16.c)
 * Callees:
 *     _RtlpMuiRegCreateStringPool@8 @ 0x4B2ADB4D (_RtlpMuiRegCreateStringPool@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpMuiRegResizeStringPool(int a1, __int16 a2, __int16 a3, char a4)
{
  int v4; // edi
  __int16 v6; // cx
  int v7; // ebx
  int v8; // eax
  int StringPool; // eax
  size_t v11; // [esp+Ch] [ebp-Ch] BYREF
  size_t Size; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h]

  v4 = 0;
  if ( a2 < 1 )
    a2 = 4;
  v6 = a3;
  if ( a3 < 1 )
    v6 = 40;
  if ( a1 )
  {
    if ( v6 >= 1 )
    {
      v7 = a2;
      if ( a2 >= (int)*(unsigned __int16 *)(a1 + 6) )
      {
        v8 = *(unsigned __int16 *)(a1 + 10);
        v13 = v6;
        if ( v6 >= v8
          && RtlULongLongToUInt(
               (int *)&Size,
               2 * *(unsigned __int16 *)(a1 + 4),
               (unsigned __int64)*(unsigned __int16 *)(a1 + 4) >> 31) >= 0
          && RtlULongLongToUInt(
               (int *)&v11,
               2 * *(unsigned __int16 *)(a1 + 8),
               (unsigned __int64)*(unsigned __int16 *)(a1 + 8) >> 31) >= 0 )
        {
          StringPool = RtlpMuiRegCreateStringPool(v7, v13);
          v4 = StringPool;
          if ( StringPool )
          {
            memcpy(*(void **)(StringPool + 12), *(const void **)(a1 + 12), Size);
            memcpy(*(void **)(v4 + 16), *(const void **)(a1 + 16), v11);
            *(_WORD *)(v4 + 6) = *(_WORD *)(a1 + 6);
            *(_WORD *)(v4 + 10) = *(_WORD *)(a1 + 10);
            if ( !a4 )
              RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
          }
        }
      }
    }
  }
  return v4;
}
