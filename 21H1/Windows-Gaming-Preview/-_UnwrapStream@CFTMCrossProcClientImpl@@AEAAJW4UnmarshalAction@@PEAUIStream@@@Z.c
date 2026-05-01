/*
 * XREFs of ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x180043B90
 * Callers:
 *     ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1800439F0 (-UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x180043A50 (-ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003E974 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x18004563E (CoTaskMemFree_0.c)
 *     RoGetAgileReference_0 @ 0x180045662 (RoGetAgileReference_0.c)
 *     CoReleaseMarshalData_0 @ 0x18004566E (CoReleaseMarshalData_0.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::_UnwrapStream(_QWORD *a1, unsigned int a2, IStream *a3)
{
  HRESULT AgileReference_0; // edi
  void *v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rcx
  ULONG *v12; // rsi
  SIZE_T v13; // rcx
  BYTE *v14; // rbx
  int v15; // eax
  IStream *v16; // rax
  __int64 v17; // rcx
  IStream *v18; // rsi
  void *pv; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 )
  {
    AgileReference_0 = CoReleaseMarshalData_0(a3);
  }
  else
  {
    pv = 0LL;
    AgileReference_0 = CoUnmarshalInterface(a3, &GUID_00000000_0000_0000_c000_000000000046, &pv);
    if ( AgileReference_0 >= 0 )
    {
      v7 = pv;
      v8 = a1 + 9;
      v9 = a1[9];
      v10 = 0LL;
      a1[9] = 0LL;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v10 = *v8;
      }
      AgileReference_0 = 0;
      if ( v7 )
      {
        if ( v10 )
        {
          *v8 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        AgileReference_0 = RoGetAgileReference_0(0LL, &GUID_00000000_0000_0000_c000_000000000046, v7, a1 + 9);
      }
      else
      {
        *v8 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    v11 = pv;
    if ( pv )
    {
      pv = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( AgileReference_0 >= 0 )
  {
    v12 = (ULONG *)(a1 + 4);
    AgileReference_0 = IStream_Read(a3, a1 + 4, 4u);
    if ( AgileReference_0 >= 0 )
    {
      v13 = *v12;
      v14 = 0LL;
      pv = 0LL;
      if ( is_mul_ok(v13, 1uLL) )
      {
        v15 = CTCoAllocPolicy::Alloc((IMalloc *)v13, (v13 * (unsigned __int128)1uLL) >> 64, v13, &pv);
        v14 = (BYTE *)pv;
        AgileReference_0 = v15;
        if ( v15 >= 0 )
        {
          if ( *v12 )
            AgileReference_0 = IStream_Read(a3, pv, *v12);
          if ( AgileReference_0 >= 0 )
          {
            v16 = SHCreateMemStream(v14, *v12);
            v17 = a1[10];
            v18 = v16;
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            a1[10] = v18;
            AgileReference_0 = v18 == 0LL ? 0x8007000E : 0;
            if ( v18 )
              AgileReference_0 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, IStream *))(*a1 + 96LL))(a1, a2, v18);
          }
        }
      }
      else
      {
        AgileReference_0 = -2147024362;
      }
      CoTaskMemFree_0(v14);
    }
  }
  return (unsigned int)AgileReference_0;
}
