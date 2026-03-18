/*
 * XREFs of ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18024E270
 * Callers:
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18024EAA0 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A362C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800A6094 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6118 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C07A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18023AFB8 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 */

__int64 __fastcall CCompSwapChain::CopyFrontToBackBuffer(CCompSwapChain *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  FastRegion::Internal::CRgnData *v9; // rcx
  unsigned int v11; // [rsp+50h] [rbp-49h] BYREF
  int v12; // [rsp+54h] [rbp-45h]
  int v13; // [rsp+58h] [rbp-41h]
  int v14; // [rsp+5Ch] [rbp-3Dh]
  char v15[8]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-31h]
  int *v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+80h] [rbp-19h]
  FastRegion::Internal::CRgnData *v20; // [rsp+90h] [rbp-9h] BYREF
  int v21; // [rsp+98h] [rbp-1h] BYREF
  const void *retaddr; // [rsp+F8h] [rbp+5Fh]

  if ( **((_DWORD **)this + 22) || *((_DWORD *)this + 25) == 3 && **((_DWORD **)this + 31) )
  {
    v21 = 0;
    v20 = (FastRegion::Internal::CRgnData *)&v21;
    v2 = FastRegion::CRegion::Copy(&v20, (const struct FastRegion::Internal::CRgnData **)this + 22);
    if ( v2 < 0 )
      ModuleFailFastForHRESULT(v2, retaddr);
    if ( *((_DWORD *)this + 25) == 3 )
    {
      v3 = FastRegion::CRegion::Union((void **)&v20, (const struct FastRegion::Internal::CRgnData **)this + 31);
      if ( v3 < 0 )
        ModuleFailFastForHRESULT(v3, retaddr);
    }
    FastRegion::Internal::CRgnData::BeginIterator(v20, (struct FastRegion::CRegion::Iterator *)v15);
    while ( (unsigned __int64)v17 < v16 )
    {
      v4 = v17[2];
      v5 = 2 * v19;
      v12 = *v17;
      v14 = v4;
      v6 = *(_DWORD *)(v18 + 4 * v5);
      v7 = *((_QWORD *)this + 6);
      v13 = *(_DWORD *)(v18 + 4 * v5 + 4);
      v8 = *((_QWORD *)this + 3);
      v11 = v6;
      CD3DDevice::CopySubresourceRegion(v8, *((_QWORD *)this + 7), 0, (int *)&v11, v7, 0, v6, v12, 0);
      FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)v15);
    }
    FastRegion::CRegion::FreeMemory((void **)&v20);
  }
  return 0LL;
}
