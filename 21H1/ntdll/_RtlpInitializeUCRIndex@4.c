/*
 * XREFs of _RtlpInitializeUCRIndex@4 @ 0x4B37079C
 * Callers:
 *     _RtlpPerformHeapMaintenance@4 @ 0x4B2AED81 (_RtlpPerformHeapMaintenance@4.c)
 * Callees:
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     @RtlpAllocateListLookup@16 @ 0x4B370752 (@RtlpAllocateListLookup@16.c)
 */

_DWORD *__thiscall RtlpInitializeUCRIndex(_DWORD *this)
{
  _DWORD *v2; // ebx
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // [esp+Ch] [ebp-4h]

  v2 = this + 35;
  result = RtlpAllocateListLookup(this, (int)(this + 35), this[23] >> 9, (int)this);
  v4 = (int)result;
  v9 = result;
  if ( result )
  {
    this[46] = result;
    v5 = v2[1];
    while ( v2 != (_DWORD *)v5 )
    {
      v6 = (_DWORD *)v4;
      v7 = *(_DWORD *)(v5 + 20) >> 12;
      if ( v7 >= *(_DWORD *)(v4 + 4) )
      {
        while ( 1 )
        {
          v8 = (_DWORD *)*v6;
          if ( !*v6 )
            break;
          v6 = (_DWORD *)*v6;
          if ( v7 < v8[1] )
            goto LABEL_8;
        }
        v7 = v6[1] - 1;
      }
LABEL_8:
      result = (_DWORD *)RtlpHeapAddListEntry((int)this, v6, 0, v5, v7, *(_DWORD *)(v5 + 20));
      v5 = *(_DWORD *)(v5 + 4);
      v4 = (int)v9;
    }
  }
  return result;
}
