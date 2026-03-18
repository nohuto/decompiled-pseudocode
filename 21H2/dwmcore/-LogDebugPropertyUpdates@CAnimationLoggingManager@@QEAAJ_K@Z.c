/*
 * XREFs of ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180046414
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800C085C (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801FC734 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 */

__int64 __fastcall CAnimationLoggingManager::LogDebugPropertyUpdates(CAnimationLoggingManager *this, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  struct CResource *ResourceWithoutType; // rax
  __int64 v8; // r9
  struct CResource *v9; // r14
  int v10; // eax
  unsigned int v11; // ecx
  _BYTE v12[64]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v13; // [rsp+90h] [rbp-48h] BYREF
  int v14; // [rsp+98h] [rbp-40h]
  char i; // [rsp+9Ch] [rbp-3Ch]

  memset_0(v12, 0, sizeof(v12));
  v13 = 0LL;
  v4 = 0LL;
  v14 = 18;
  for ( i = 0; (unsigned int)v4 < *((_DWORD *)this + 22); v4 = (unsigned int)(v4 + 1) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                            *(CResourceTable **)(*((_QWORD *)this + 6) + 32LL),
                            *(_DWORD *)(*((_QWORD *)this + 8) + 12 * v4));
    v9 = ResourceWithoutType;
    if ( ResourceWithoutType )
    {
      v10 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(*(_QWORD *)ResourceWithoutType + 136LL))(
              ResourceWithoutType,
              *(unsigned int *)(v8 + 12 * v4 + 4),
              v12);
      v5 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1A6u, 0LL);
        goto LABEL_3;
      }
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        this,
        v9,
        1LL,
        a2,
        *(_DWORD *)(*((_QWORD *)this + 8) + 12 * v4 + 8),
        *(_DWORD *)(*((_QWORD *)this + 8) + 12 * v4),
        *(_DWORD *)(*((_QWORD *)this + 8) + 12 * v4 + 4),
        0LL,
        v12);
    }
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 12LL);
  v5 = 0;
LABEL_3:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v13);
  return v5;
}
