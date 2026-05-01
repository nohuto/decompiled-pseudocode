/*
 * XREFs of sub_1800436D4 @ 0x1800436D4
 * Callers:
 *     sub_180043190 @ 0x180043190 (sub_180043190.c)
 *     sub_1800432C0 @ 0x1800432C0 (sub_1800432C0.c)
 *     sub_180043330 @ 0x180043330 (sub_180043330.c)
 *     sub_1800434A0 @ 0x1800434A0 (sub_1800434A0.c)
 * Callees:
 *     CoCreateFreeThreadedMarshaler @ 0x180045526 (CoCreateFreeThreadedMarshaler.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800436D4(LPUNKNOWN punkOuter, IUnknown *a2, _QWORD *a3)
{
  RTL_SRWLOCK *v3; // r14
  struct IUnknownVtbl *lpVtbl; // rbx
  signed int v7; // edi
  HRESULT v8; // esi
  struct IUnknownVtbl *v9; // rbx
  struct IUnknownVtbl *v10; // rcx
  LPUNKNOWN v11; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp+10h] BYREF

  ppunkMarshal = a2;
  *a3 = 0LL;
  v3 = (RTL_SRWLOCK *)&punkOuter[5];
  AcquireSRWLockShared((PSRWLOCK)&punkOuter[5]);
  lpVtbl = punkOuter[6].lpVtbl;
  v7 = lpVtbl == 0LL ? 0x80004005 : 0;
  ReleaseSRWLockShared(v3);
  if ( !lpVtbl )
  {
    ppunkMarshal = 0LL;
    v8 = CoCreateFreeThreadedMarshaler(punkOuter, &ppunkMarshal);
    if ( v8 < 0 )
    {
      v7 = v8;
    }
    else
    {
      AcquireSRWLockExclusive(v3);
      v7 = punkOuter[6].lpVtbl == 0LL ? 0x80004005 : 0;
      if ( !punkOuter[6].lpVtbl )
      {
        v9 = (struct IUnknownVtbl *)ppunkMarshal;
        if ( ppunkMarshal )
        {
          ((void (__fastcall *)(LPUNKNOWN))ppunkMarshal->lpVtbl->AddRef)(ppunkMarshal);
          v10 = punkOuter[6].lpVtbl;
          punkOuter[6].lpVtbl = v9;
          if ( v10 )
            (*((void (__fastcall **)(struct IUnknownVtbl *))v10->QueryInterface + 2))(v10);
        }
        v7 = v8;
      }
      ReleaseSRWLockExclusive(v3);
    }
    v11 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
  }
  if ( v7 >= 0 )
    return (*(unsigned int (__fastcall **)(struct IUnknownVtbl *, void *, _QWORD *))punkOuter[6].lpVtbl->QueryInterface)(
             punkOuter[6].lpVtbl,
             &unk_180051250,
             a3);
  return (unsigned int)v7;
}
