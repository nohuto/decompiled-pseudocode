/*
 * XREFs of ?SetOverallZoom@CDropFeedback@@UEAAJ_N@Z @ 0x1804231A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::SetOverallZoom(CDropFeedback *this, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int i; // esi
  __int64 v7; // rbx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 100) != (_BYTE)a2 )
  {
    *((_BYTE *)this + 100) = a2;
    v4 = *((_QWORD *)this + 17);
    v2 = -2147467259;
    if ( v4 )
      v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 184LL))(v4, a2, 1LL);
    v5 = *((_QWORD *)this + 13);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v10);
      for ( i = 0; i < v10; ++i )
      {
        v9 = 0LL;
        v7 = *((_QWORD *)this + 13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL))(
               v7,
               i,
               &GUID_3b3d24a4_78ef_4796_bec6_c9896b501c36,
               &v9) >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      }
    }
  }
  return v2;
}
