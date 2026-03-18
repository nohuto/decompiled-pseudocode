/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x1800A80A4
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F16C0 (-CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18024AD1C (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x18024C69C (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800A6058 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800A6094 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C07A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801523A8 (McTemplateU0qq_EventWriteTransfer.c)
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
  int Ptr; // ebx
  ULONG v14; // edi
  __int64 v15; // rax
  __int64 v16; // rcx
  FastRegion::Internal::CRgnData *v17; // rcx
  unsigned int RectangleCount; // eax
  _BYTE v19[8]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-11h]
  int *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+88h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+98h] [rbp+17h] BYREF
  int v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+ACh] [rbp+2Bh]

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
        1u,
        &v24);
      v5 = *(FastRegion::Internal::CRgnData **)(v4 + 16);
    }
    FastRegion::Internal::CRgnData::BeginIterator(v5, (struct FastRegion::CRegion::Iterator *)v19);
    while ( (unsigned __int64)v21 < v20 )
    {
      v8 = *v21;
      v9 = v21[2];
      v10 = *((_QWORD *)this - 32);
      v24.Size = 0;
      v11 = 2 * v23;
      v12 = *((_QWORD *)this - 33);
      v14 = *(_DWORD *)(v22 + 4 * v11 + 4);
      v15 = *((_QWORD *)this - 36);
      LODWORD(v24.Ptr) = *(_DWORD *)(v22 + 4 * v11);
      Ptr = v24.Ptr;
      v16 = *(_QWORD *)(v15 + 600);
      HIDWORD(v24.Ptr) = v8;
      v24.Reserved = v14;
      v25 = v9;
      v26 = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, struct _EVENT_DATA_DESCRIPTOR *, _DWORD))(*(_QWORD *)v16 + 920LL))(
        v16,
        v12,
        0LL,
        LODWORD(v24.Ptr),
        v8,
        0,
        v10,
        0,
        &v24,
        0);
      v7 += (v9 - v8) * (v14 - Ptr);
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
