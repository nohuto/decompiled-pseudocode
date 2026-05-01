/*
 * XREFs of ?ApplicationChanged@CDropFeedback@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1803FEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::ApplicationChanged(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v13; // [rsp+30h] [rbp-20h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+30h] BYREF

  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v17);
    v9 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        v14 = 0LL;
        v15 = 0LL;
        v10 = *(_QWORD *)(a1 + 88);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 32LL))(
               v10,
               v9,
               &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
               &v14) >= 0 )
        {
          v11 = (__int64)v14;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, &v15) >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v15 + 104LL))(v15, a2, &v13);
            if ( v13 )
              break;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        if ( ++v9 >= v17 )
          return 0LL;
      }
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      if ( (**v14)(v14, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7, &v16) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v16 + 24LL))(v16, a2, a3, a4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    }
  }
  return 0LL;
}
