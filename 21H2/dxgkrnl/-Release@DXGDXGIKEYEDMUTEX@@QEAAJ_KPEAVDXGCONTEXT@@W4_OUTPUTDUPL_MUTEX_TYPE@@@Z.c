/*
 * XREFs of ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0323928
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0327D4C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0328988 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C0340B28 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Release(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v8; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // edi
  const wchar_t *v14; // r9
  unsigned __int64 v15; // r9
  size_t Size; // [rsp+28h] [rbp-60h]
  unsigned int v17[4]; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry1(1LL, 722LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pContext == NULL) || (m_pProducerDevice->GetRenderCore()->IsCoreResourceSharedOwner())",
        722LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *(_QWORD *)(a1 + 120);
    if ( a3 != v8 )
    {
      WdLogSingleEntry3(1LL, a3, a1, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Context 0x%I64x does not own DxgiKeyedMutex 0x%I64x, context 0x%I64x does",
        a3,
        a1,
        *(_QWORD *)(a1 + 120),
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
  {
    WdLogSingleEntry1(1LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DxgiKeyedMutex 0x%I64x has not been acquired",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    v10 = ++*(_QWORD *)(a1 + 112);
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 24LL);
    v17[0] = *(_DWORD *)(a1 + 96);
    v12 = *(_QWORD *)(a3 + 16);
    v18 = v11;
    v13 = SignalSynchronizationObjectInternal(
            1u,
            v17,
            0,
            1LL,
            &v18,
            0LL,
            v10,
            0LL,
            *(struct DXGPROCESS **)(v12 + 40),
            0,
            1,
            0);
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      v14 = L"Failed to submit GPU signal for DxgiKeyedMutex 0x%I64x";
LABEL_12:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, a1, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v13;
    }
  }
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  LODWORD(Size) = 0;
  v13 = DXGKEYEDMUTEX::ReleaseSync(
          *(DXGKEYEDMUTEX **)(a1 + 24 * v4 + 24),
          *(_DWORD *)(a1 + 24 * v4 + 16),
          a2,
          v15,
          0LL,
          Size,
          0);
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    v14 = L"Failed to release DxgiKeyedMutex 0x%I64x";
    goto LABEL_12;
  }
  return 0LL;
}
