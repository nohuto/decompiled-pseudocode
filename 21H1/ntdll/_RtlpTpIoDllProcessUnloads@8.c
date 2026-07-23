/*
 * XREFs of _RtlpTpIoDllProcessUnloads@8 @ 0x4B38592E
 * Callers:
 *     _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1 (_RtlpTpIoDllUnloaded@4.c)
 * Callees:
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0 (_RtlDuplicateUnicodeString@12.c)
 */

unsigned __int32 __fastcall RtlpTpIoDllProcessUnloads(int a1, int a2)
{
  int i; // esi
  int v5; // edx
  int v6; // eax
  unsigned __int32 result; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // [esp-4h] [ebp-10h]

  for ( i = a2; ; i = *(_DWORD *)(i + 56) - 56 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(i + 68);
      if ( (v5 & 2) != 0 )
        break;
      v6 = *(_DWORD *)(i + 60);
      v10 = 2;
LABEL_6:
      *(_DWORD *)(i + 68) = v10 | v5;
      if ( v6 )
        i = v6 - 56;
    }
    if ( (v5 & 4) == 0 )
    {
      v6 = *(_DWORD *)(i + 64);
      v10 = 4;
      goto LABEL_6;
    }
    result = *(_DWORD *)i;
    v8 = *(_DWORD *)(i + 68);
    if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)i )
    {
      result = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16);
      if ( *(_DWORD *)i < result )
      {
        v9 = *(_DWORD *)(i + 48);
        *(_DWORD *)(i + 68) = v5 | 1;
        TpAdjustBindingCount(v9, -*(_DWORD *)(i + 52));
        *(_DWORD *)(i + 36) = 0;
        *(_DWORD *)(i + 80) = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(i + 84) = *(_DWORD *)(a1 + 16);
        result = RtlDuplicateUnicodeString(1u, *(PUNICODE_STRING *)(a1 + 4), (PUNICODE_STRING)(i + 72));
        v8 = *(_DWORD *)(i + 68);
      }
    }
    *(_DWORD *)(i + 68) = v8 & 0xFFFFFFF9;
    if ( i == a2 )
      break;
  }
  return result;
}
