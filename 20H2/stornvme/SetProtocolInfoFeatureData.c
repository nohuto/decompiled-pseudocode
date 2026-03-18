/*
 * XREFs of SetProtocolInfoFeatureData @ 0x1C0015D6C
 * Callers:
 *     IoctlSetProtocolInfoProcess @ 0x1C0011F24 (IoctlSetProtocolInfoProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

__int64 __fastcall SetProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rdi
  __int64 v4; // r8
  _DWORD *v5; // rbx
  int v6; // eax
  int v7; // r11d
  int v8; // r10d
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  int v12; // ecx

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v5 = *(_DWORD **)(v2 + 64);
  else
    v5 = *(_DWORD **)(v2 + 24);
  v6 = v5[11];
  if ( (v6 & 0x7FFFFF00) != 0 || (_BYTE)v6 != 16 )
  {
    *(_BYTE *)(v2 + 3) = 6;
    return 3238002694LL;
  }
  else
  {
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(v4, v2);
    v7 = v5[19];
    v8 = v5[18];
    v9 = v5[17];
    v10 = v5[16];
    v11 = v5[12];
    v12 = v5[11];
    *(_DWORD *)(SrbExtension + 4100) = -1;
    *(_QWORD *)(SrbExtension + 4120) = 0LL;
    *(_BYTE *)(SrbExtension + 4096) = 9;
    *(_DWORD *)(SrbExtension + 4136) = v12;
    *(_DWORD *)(SrbExtension + 4140) = v11;
    *(_DWORD *)(SrbExtension + 4144) = v10;
    *(_DWORD *)(SrbExtension + 4148) = v9;
    *(_DWORD *)(SrbExtension + 4152) = v8;
    *(_DWORD *)(SrbExtension + 4156) = v7;
    *(_BYTE *)(SrbExtension + 4253) &= ~4u;
    *(_QWORD *)(SrbExtension + 4224) = SetProtocolInfoCompletion;
    *(_QWORD *)(SrbExtension + 4200) = 0LL;
    *(_DWORD *)(SrbExtension + 4240) = 0;
    *(_QWORD *)(SrbExtension + 4208) = 0LL;
    return 0LL;
  }
}
