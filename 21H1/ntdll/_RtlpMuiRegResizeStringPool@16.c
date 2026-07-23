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

int __fastcall RtlpMuiRegResizeStringPool(const void **BaseAddress, __int16 a2, __int16 a3, char a4)
{
  int v4; // edi
  __int16 v6; // cx
  int v7; // ebx
  int v8; // eax
  int StringPool; // eax
  size_t v11; // [esp-4h] [ebp-1Ch]
  size_t v12; // [esp-4h] [ebp-1Ch]
  int Size; // [esp+Ch] [ebp-Ch] BYREF
  int Size_4; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  v4 = 0;
  if ( a2 < 1 )
    a2 = 4;
  v6 = a3;
  if ( a3 < 1 )
    v6 = 40;
  if ( BaseAddress )
  {
    if ( v6 >= 1 )
    {
      v7 = a2;
      if ( a2 >= (int)*((unsigned __int16 *)BaseAddress + 3) )
      {
        v8 = *((unsigned __int16 *)BaseAddress + 5);
        v15 = v6;
        if ( v6 >= v8
          && RtlULongLongToUInt(
               &Size_4,
               2 * *((unsigned __int16 *)BaseAddress + 2),
               (unsigned __int64)*((unsigned __int16 *)BaseAddress + 2) >> 31) >= 0
          && RtlULongLongToUInt(
               &Size,
               2 * *((unsigned __int16 *)BaseAddress + 4),
               (unsigned __int64)*((unsigned __int16 *)BaseAddress + 4) >> 31) >= 0 )
        {
          StringPool = RtlpMuiRegCreateStringPool(v7, v15);
          v4 = StringPool;
          if ( StringPool )
          {
            LODWORD(v11) = Size_4;
            memcpy(*(void **)(StringPool + 12), BaseAddress[3], v11);
            LODWORD(v12) = Size;
            memcpy(*(void **)(v4 + 16), BaseAddress[4], v12);
            *(_WORD *)(v4 + 6) = *((_WORD *)BaseAddress + 3);
            *(_WORD *)(v4 + 10) = *((_WORD *)BaseAddress + 5);
            if ( !a4 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          }
        }
      }
    }
  }
  return v4;
}
