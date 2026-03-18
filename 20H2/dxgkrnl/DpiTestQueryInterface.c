/*
 * XREFs of DpiTestQueryInterface @ 0x1C017DC0C
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C01625D0 (DpiPdoDispatchPnp.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

__int64 __fastcall DpiTestQueryInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  int RegistryValues; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD v13[14]; // [rsp+30h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = -1073741637;
  if ( RtlCompareMemory(*(const void **)a2, &GUID_DEVINTERFACE_BRIGHTNESS, 0x10uLL) == 16
    && *(_WORD *)(a2 + 10) == 1
    && *(_WORD *)(a2 + 8) == 56 )
  {
    v6 = *(_QWORD **)(a2 + 16);
    memset(&v13[1], 0, 0x68uLL);
    v7 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
    v13[3] = 0LL;
    LODWORD(v13[4]) = 0;
    v13[5] = 0LL;
    LODWORD(v13[6]) = 0;
    v13[0] = &DpiTestProcessRegKey;
    v13[2] = L"TestBrightnessLevels";
    LODWORD(v13[1]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v7 + 536), v13, 0LL, 0LL);
    v11 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = W32kStub_DCompositionNotifyCompositionTokenPresent;
      v4 = 0;
      v6[3] = W32kStub_DCompositionNotifyCompositionTokenPresent;
      v6[4] = &DpiTestGetPossibleBrightness;
      v6[5] = DpiTestSetBrightness;
      v6[6] = DpiTestGetBrightness;
    }
    else
    {
      v12 = WdLogNewEntry5_WdEvent(v10, v9);
      *(_QWORD *)(v12 + 24) = v11;
      WdLogEvent5_WdEvent(v12);
    }
  }
  return v4;
}
