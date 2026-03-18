/*
 * XREFs of ?SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@@Z @ 0x18024FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800B1708 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x18024F6C8 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::SetSize(CCompSwapChain *this, const struct D2D_SIZE_U *a2)
{
  unsigned int v4; // edi
  void (__fastcall ***v5)(_QWORD, __int64 *); // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 16LL)
                                                + *((_QWORD *)this + 5)
                                                + 8LL);
  (**v5)(v5, &v16);
  if ( v16 != *a2 )
  {
    v6 = *((_QWORD *)this + 5) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(
      v6,
      ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 56) >> 64));
    v7 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v7 )
    {
      v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    CD3DDevice::Trim(*((CD3DDevice **)this + 3));
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(**((_QWORD **)this + 4) + 104LL))(
            *((_QWORD *)this + 4),
            0LL,
            a2->width,
            a2->height,
            *((_DWORD *)this + 16),
            0);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC9u, 0LL);
    }
    else
    {
      v13 = CCompSwapChain::Initialize((CCompSwapChain *)((char *)this - 56));
      v4 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xCCu, 0LL);
    }
  }
  return v4;
}
