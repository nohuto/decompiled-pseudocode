/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x18007B0B8
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x1800EEAE0 (-CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18024E73C (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x1802500BC (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007ACF4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007AD58 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BB450 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::CopyFrontToBackBuffer(CLegacySwapChain *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  FastRegion::Internal::CRgnData *v5; // rcx
  unsigned int v7; // r12d
  int v8; // esi
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rcx
  FastRegion::Internal::CRgnData *v17; // rcx
  unsigned int RectangleCount; // eax
  _BYTE v19[8]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-11h]
  int *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+88h] [rbp+7h]
  _DWORD v24[6]; // [rsp+98h] [rbp+17h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this - 31) + 8LL * *((unsigned int *)this - 56));
  v5 = *(FastRegion::Internal::CRgnData **)(v4 + 16);
  if ( *(_DWORD *)v5 )
  {
    v7 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start,
        a3,
        1LL,
        v24);
      v5 = *(FastRegion::Internal::CRgnData **)(v4 + 16);
    }
    FastRegion::Internal::CRgnData::BeginIterator(v5, (struct FastRegion::CRegion::Iterator *)v19);
    while ( (unsigned __int64)v21 < v20 )
    {
      v8 = *v21;
      v9 = v21[2];
      v10 = *((_QWORD *)this - 32);
      v24[2] = 0;
      v11 = 2 * v23;
      v12 = *((_QWORD *)this - 33);
      v14 = *(_DWORD *)(v22 + 4 * v11 + 4);
      v15 = *((_QWORD *)this - 36);
      v24[0] = *(_DWORD *)(v22 + 4 * v11);
      v13 = v24[0];
      v16 = *(_QWORD *)(v15 + 600);
      v24[1] = v8;
      v24[3] = v14;
      v24[4] = v9;
      v24[5] = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *, _DWORD))(*(_QWORD *)v16 + 920LL))(
        v16,
        v12,
        0LL,
        v24[0],
        v8,
        0,
        v10,
        0,
        v24,
        0);
      v7 += (v9 - v8) * (v14 - v13);
      FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v19);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(v4 + 16));
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
        RectangleCount,
        v7);
    }
    **(_DWORD **)(*(_QWORD *)(*((_QWORD *)this - 31) + 8LL * *((unsigned int *)this - 56)) + 16LL) = 0;
  }
  return 0LL;
}
