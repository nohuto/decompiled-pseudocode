/*
 * XREFs of NVMeSetFeaturesCachePhase1Completion @ 0x1C0013C80
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

char __fastcall NVMeSetFeaturesCachePhase1Completion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  int *v6; // r8
  char v7; // bp
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // edi
  unsigned __int8 v11; // al
  char result; // al

  SrbExtension = GetSrbExtension(a2);
  v7 = 1;
  v8 = SrbExtension;
  if ( *(_BYTE *)(v5 + 3) == 1 )
  {
    if ( v6 )
    {
      v9 = *(_QWORD *)(SrbExtension + 4232);
      v10 = *v6;
      *(_BYTE *)(v5 + 3) = 0;
      *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xF8 | 1;
      SrbAssignQueueId(a1, v5);
      *(_OWORD *)(v8 + 4096) = 0LL;
      *(_OWORD *)(v8 + 4112) = 0LL;
      *(_OWORD *)(v8 + 4128) = 0LL;
      *(_OWORD *)(v8 + 4144) = 0LL;
      v11 = *(_BYTE *)(v9 + 2) >> 2;
      *(_BYTE *)(v8 + 4096) = 9;
      *(_BYTE *)(v8 + 4136) = 6;
      if ( (v10 & 1) != 0 )
        *(_DWORD *)(v8 + 4136) |= 0x80000000;
      *(_DWORD *)(v8 + 4140) ^= (*(_DWORD *)(v8 + 4140) ^ v11) & 1;
      *(_QWORD *)(v8 + 4224) = 0LL;
      ProcessCommand(a1, a2);
      v7 = 0;
    }
    else
    {
      *(_BYTE *)(v5 + 3) = 4;
    }
  }
  result = (8 * v7) | *(_BYTE *)(v8 + 4253) & 0xF7;
  *(_BYTE *)(v8 + 4253) = result;
  return result;
}
