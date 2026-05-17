/*
 * XREFs of _RtlCopyContext@12 @ 0x4B35B5F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCopyLegacyContext@16 @ 0x4B35BCDD (_RtlpCopyLegacyContext@16.c)
 *     _RtlpCopyXStateChunk@20 @ 0x4B35C23D (_RtlpCopyXStateChunk@20.c)
 *     _RtlpGetContextFlagsLocation@8 @ 0x4B35C423 (_RtlpGetContextFlagsLocation@8.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

int __stdcall RtlCopyContext(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax
  int v5; // edx
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  int v10; // edx
  int v11; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch] BYREF
  int *ContextFlagsLocation; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v3 = 0;
  result = RtlpValidateContextFlags(a2, 0);
  if ( result < 0 )
    return result;
  ContextFlagsLocation = (int *)RtlpGetContextFlagsLocation(a1, a2);
  v6 = (int *)RtlpGetContextFlagsLocation(a3, v5);
  v7 = *v6;
  v8 = *v6 | *ContextFlagsLocation;
  v15 = *ContextFlagsLocation;
  result = RtlpValidateContextFlags(a2 | v8, 0);
  if ( result < 0 )
    return result;
  v12 = a2 & v7;
  result = RtlpValidateContextFlags(a2 & v7, &v11);
  if ( result < 0 )
    return result;
  result = RtlpValidateContextFlags(v15, &v13);
  v9 = result;
  if ( result < 0 )
    return result;
  if ( (~v13 & v11) != 0 )
    return -2147483643;
  RtlpCopyLegacyContext(v12, a3);
  *ContextFlagsLocation |= v15;
  if ( (v13 & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  if ( (v12 & 0x10000) != 0 )
  {
    v10 = a3 + 716;
    v3 = a1 + 716;
    if ( (v15 & 0x10020) != 65568 && (v12 & 0x10020) == 65568 )
      *(_DWORD *)(a1 + 728) = 716;
    goto LABEL_18;
  }
  if ( (a2 & 0x100000) == 0 )
  {
    if ( (a2 & 0x200000) != 0 )
    {
      v10 = a3 + 416;
      v3 = a1 + 416;
      goto LABEL_18;
    }
    if ( (a2 & 0x400000) != 0 )
    {
      v10 = a3 + 912;
      v3 = a1 + 912;
      goto LABEL_18;
    }
LABEL_17:
    v10 = 0;
    goto LABEL_18;
  }
  v10 = a3 + 1232;
  v3 = a1 + 1232;
LABEL_18:
  if ( (v11 & 2) != 0 )
    return RtlpCopyXStateChunk(v3, v10, v10);
  return v9;
}
