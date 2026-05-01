/*
 * XREFs of ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180460E20
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022A4C (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::IsEqual(CAppLayoutItem *this, struct IAppLayoutItem *a2)
{
  unsigned int v4; // r14d
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rsi
  const struct APPLICATION_VIEW_DATA *v7; // r8
  __int64 v9; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-31h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-29h] BYREF
  RECT rc2; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v13[48]; // [rsp+58h] [rbp-9h] BYREF

  v11[1] = -2LL;
  v4 = 0;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( (**(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_972224dc_7815_4df5_9adc_96bd3e7902fd,
         &v9) >= 0 )
  {
    v11[0] = 0LL;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
    if ( (**((int (__fastcall ***)(char *, GUID *, __int64 *))this - 1))(
           (char *)this - 8,
           &GUID_00000000_0000_0000_c000_000000000046,
           v11) >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      if ( (**(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, unsigned __int64 *))a2)(
             a2,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v10) >= 0 )
      {
        v5 = 0LL;
        if ( v10 > v11[0] )
        {
          v5 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
          AcquireSRWLockShared(v5);
          AcquireSRWLockShared((PSRWLOCK)this + 3);
        }
        else
        {
          AcquireSRWLockShared((PSRWLOCK)this + 3);
          if ( v11[0] != v10 )
          {
            v5 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
            AcquireSRWLockShared(v5);
          }
        }
        if ( *((_DWORD *)this + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9)
          && *((_DWORD *)this + 4) == (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a2 + 32LL))(a2) )
        {
          v4 = 1;
          if ( *((_DWORD *)this + 8) != 1 )
            goto LABEL_14;
          *(_QWORD *)&rc2.left = 0LL;
          v6 = v9;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc2.left);
          if ( (*(int (__fastcall **)(__int64, GUID *, RECT *))(*(_QWORD *)v6 + 32LL))(
                 v6,
                 &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                 &rc2) >= 0 )
            v4 = SHIsSameObject(*(struct IUnknown **)&rc2.left, *((struct IUnknown **)this + 5));
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc2.left);
          if ( v4 )
          {
LABEL_14:
            rc2 = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v9 + 40LL))(v9, 0LL, &rc2);
            v4 = EqualRect((const RECT *)this + 3, &rc2);
            if ( v4 )
            {
              rc2 = 0LL;
              (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v9 + 40LL))(v9, 1LL, &rc2);
              v4 = EqualRect((const RECT *)this + 4, &rc2);
              if ( v4 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 48LL))(v9, v13);
                v4 = ImmersiveApplicationLayout::AreAppViewDataEqual(
                       (CAppLayoutItem *)((char *)this + 80),
                       (const struct APPLICATION_VIEW_DATA *)v13,
                       v7);
              }
            }
          }
        }
        else
        {
          v4 = 0;
        }
        if ( v5 )
          ReleaseSRWLockShared(v5);
        if ( this != (CAppLayoutItem *)-24LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 3);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v4;
}
