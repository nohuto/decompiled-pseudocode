/*
 * XREFs of sub_180043A60 @ 0x180043A60
 * Callers:
 *     sub_1800438C0 @ 0x1800438C0 (sub_1800438C0.c)
 *     _iswupper_l @ 0x180043920 (_iswupper_l.c)
 * Callees:
 *     sub_18003E874 @ 0x18003E874 (sub_18003E874.c)
 *     CoTaskMemFree @ 0x18004550E (CoTaskMemFree.c)
 *     RoGetAgileReference @ 0x180045532 (RoGetAgileReference.c)
 *     CoReleaseMarshalData @ 0x18004553E (CoReleaseMarshalData.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043A60(_QWORD *a1, unsigned int a2, IStream *a3)
{
  HRESULT AgileReference; // edi
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
    AgileReference = CoReleaseMarshalData(a3);
  }
  else
  {
    pv = 0LL;
    AgileReference = CoUnmarshalInterface(a3, &stru_180051438, &pv);
    if ( AgileReference >= 0 )
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
      AgileReference = 0;
      if ( v7 )
      {
        if ( v10 )
        {
          *v8 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        AgileReference = RoGetAgileReference(0LL, &stru_180051438, v7, a1 + 9);
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
  if ( AgileReference >= 0 )
  {
    v12 = (ULONG *)(a1 + 4);
    AgileReference = IStream_Read(a3, a1 + 4, 4u);
    if ( AgileReference >= 0 )
    {
      v13 = *v12;
      v14 = 0LL;
      pv = 0LL;
      if ( is_mul_ok(v13, 1uLL) )
      {
        v15 = sub_18003E874((IMalloc *)v13, (v13 * (unsigned __int128)1uLL) >> 64, v13, &pv);
        v14 = (BYTE *)pv;
        AgileReference = v15;
        if ( v15 >= 0 )
        {
          if ( *v12 )
            AgileReference = IStream_Read(a3, pv, *v12);
          if ( AgileReference >= 0 )
          {
            v16 = SHCreateMemStream(v14, *v12);
            v17 = a1[10];
            v18 = v16;
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            a1[10] = v18;
            AgileReference = v18 == 0LL ? 0x8007000E : 0;
            if ( v18 )
              AgileReference = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, IStream *))(*a1 + 96LL))(a1, a2, v18);
          }
        }
      }
      else
      {
        AgileReference = -2147024362;
      }
      CoTaskMemFree(v14);
    }
  }
  return (unsigned int)AgileReference;
}
