/*
 * XREFs of ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18028EAB0
 * Callers:
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18028F460 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800B84E0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1800D6E94 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompSwapChain::CopyFrontToBackBuffer(CCompSwapChain *this)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // eax
  int v5; // edi
  ULONG v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  FastRegion::Internal::CRgnData *v11; // rcx
  int RectangleCount; // eax
  _BYTE v14[8]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-41h]
  _DWORD *v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  int v18; // [rsp+70h] [rbp-29h]
  FastRegion::Internal::CRgnData *v19; // [rsp+80h] [rbp-19h] BYREF
  int v20; // [rsp+88h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+D0h] [rbp+37h] BYREF
  const void *retaddr; // [rsp+F8h] [rbp+5Fh]

  if ( **((_DWORD **)this + 30) || *((_DWORD *)this + 40) == 3 && **((_DWORD **)this + 39) )
  {
    v20 = 0;
    v19 = (FastRegion::Internal::CRgnData *)&v20;
    v2 = FastRegion::CRegion::Copy((int **)&v19, (int **)this + 30);
    if ( v2 < 0 )
      ModuleFailFastForHRESULT(v2, retaddr);
    if ( *((_DWORD *)this + 40) == 3 )
    {
      v4 = FastRegion::CRegion::Union(&v19, (const struct FastRegion::Internal::CRgnData **)this + 39);
      if ( v4 < 0 )
        ModuleFailFastForHRESULT(v4, retaddr);
    }
    v5 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start,
        v3,
        1u,
        &v21);
    FastRegion::Internal::CRgnData::BeginIterator(v19, (struct FastRegion::CRegion::Iterator *)v14);
    while ( (unsigned __int64)v16 < v15 )
    {
      v6 = v16[2];
      v7 = 2 * v18;
      HIDWORD(v21.Ptr) = *v16;
      v21.Reserved = v6;
      v8 = *(_DWORD *)(v17 + 4 * v7);
      v9 = *((_QWORD *)this + 13);
      v21.Size = *(_DWORD *)(v17 + 4 * v7 + 4);
      v10 = *((_QWORD *)this + 9);
      LODWORD(v21.Ptr) = v8;
      CD3DDevice::CopySubresourceRegion(v10, *((_QWORD *)this + 14), 0, (int *)&v21, v9, 0, v8, SHIDWORD(v21.Ptr), 0);
      v11 = (FastRegion::Internal::CRgnData *)((v21.Reserved - HIDWORD(v21.Ptr)) * (v21.Size - LODWORD(v21.Ptr)));
      v5 += (int)v11;
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v14);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)&v19);
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
        RectangleCount,
        v5);
    }
    FastRegion::CRegion::FreeMemory((void **)&v19);
  }
  return 0LL;
}
