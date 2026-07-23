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

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  PCONTEXT v3; // esi
  NTSTATUS result; // eax
  int v5; // edx
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  NTSTATUS v9; // edi
  PCONTEXT v10; // edx
  int v11; // [esp+8h] [ebp-18h] BYREF
  ULONG v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch] BYREF
  int *ContextFlagsLocation; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v3 = 0;
  result = RtlpValidateContextFlags(ContextFlags, 0);
  if ( result < 0 )
    return result;
  ContextFlagsLocation = (int *)RtlpGetContextFlagsLocation(Context, ContextFlags);
  v6 = (int *)RtlpGetContextFlagsLocation(Source, v5);
  v7 = *v6;
  v8 = *v6 | *ContextFlagsLocation;
  v15 = *ContextFlagsLocation;
  result = RtlpValidateContextFlags(ContextFlags | v8, 0);
  if ( result < 0 )
    return result;
  v12 = ContextFlags & v7;
  result = RtlpValidateContextFlags(ContextFlags & v7, &v11);
  if ( result < 0 )
    return result;
  result = RtlpValidateContextFlags(v15, &v13);
  v9 = result;
  if ( result < 0 )
    return result;
  if ( (~v13 & v11) != 0 )
    return -2147483643;
  RtlpCopyLegacyContext(v12, Source);
  *ContextFlagsLocation |= v15;
  if ( (v13 & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  if ( (v12 & 0x10000) != 0 )
  {
    v10 = Source + 1;
    v3 = Context + 1;
    if ( (v15 & 0x10020) != 65568 && (v12 & 0x10020) == 65568 )
      Context[1].Dr2 = 716;
    goto LABEL_18;
  }
  if ( (ContextFlags & 0x100000) == 0 )
  {
    if ( (ContextFlags & 0x200000) != 0 )
    {
      v10 = (PCONTEXT)&Source->ExtendedRegisters[212];
      v3 = (PCONTEXT)&Context->ExtendedRegisters[212];
      goto LABEL_18;
    }
    if ( (ContextFlags & 0x400000) != 0 )
    {
      v10 = (PCONTEXT)((char *)Source + 912);
      v3 = (PCONTEXT)((char *)Context + 912);
      goto LABEL_18;
    }
LABEL_17:
    v10 = 0;
    goto LABEL_18;
  }
  v10 = (PCONTEXT)((char *)Source + 1232);
  v3 = (PCONTEXT)((char *)Context + 1232);
LABEL_18:
  if ( (v11 & 2) != 0 )
    return RtlpCopyXStateChunk(v3, v10, v10);
  return v9;
}
