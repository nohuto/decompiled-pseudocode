/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0005F10
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0005E38 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00758E4 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x1C003E054 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // r9d
  _DWORD *v14; // r8

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD **)(a1 + 1744);
  if ( *(char *)(v5 + 110) >= 0 )
  {
    if ( a2 == -1 )
    {
      v12 = -1LL;
    }
    else
    {
      if ( a2 < v6[6] )
        a2 = v6[6];
      v12 = 10000LL * a2;
    }
    v13 = v6[7];
    if ( a2 != v13 )
    {
      v14 = v6;
      if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
      {
        McTemplateK0quuuqqtt_EtwWriteTransfer(
          (v6[8] >> 10) & 1,
          v5,
          (_DWORD)v6,
          *(_DWORD *)(v5 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          v13,
          a2,
          (v6[8] & 0x400) != 0,
          (v6[8] & 0x800) != 0);
        v14 = *(_DWORD **)(a1 + 1744);
      }
      v14[7] = a2;
      v11 = v12;
      goto LABEL_18;
    }
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 5904);
    v8 = v6[7];
    if ( v7 != v8 || a3 )
    {
      v9 = v5;
      v10 = v6;
      if ( StorEtwLoggingEnabled )
      {
        if ( (byte_1C0069841 & 1) != 0 )
        {
          McTemplateK0quuuqqtt_EtwWriteTransfer(
            (v6[8] >> 10) & 1,
            v5,
            v5,
            *(_DWORD *)(v5 + 56),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            v8,
            v7,
            (v6[8] & 0x400) != 0,
            (v6[8] & 0x800) != 0);
          v9 = *(_QWORD *)(a1 + 24);
          v10 = *(_DWORD **)(a1 + 1744);
        }
      }
      v10[7] = *(_DWORD *)(v9 + 5904);
      v11 = 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 5904LL);
LABEL_18:
      PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 1744), v11);
    }
  }
}
