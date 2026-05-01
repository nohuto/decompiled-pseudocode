/*
 * XREFs of ?GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801381D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18003DB30 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByAppID(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  char v6; // r15
  const struct _GUID *v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  unsigned int v10; // esi
  int (__fastcall *v11)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  void *v14; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+50h] BYREF
  int v16; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v9 = CEnumerableObjectCollection::CreateInstance(v8, v7, &v14);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v15);
    v10 = 0;
    if ( v9 >= 0 )
    {
      do
      {
        if ( v10 >= v15 )
          break;
        v13 = 0LL;
        v11 = *(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        if ( v11(this, v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v13) >= 0
          && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v13 + 88LL))(v13, a2, &v16) >= 0
          && v16 )
        {
          v9 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 40LL))(v14, v13);
          v6 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        ++v10;
      }
      while ( v9 >= 0 );
      if ( v9 >= 0 )
      {
        if ( !v6 )
          v9 = -2147319765;
        if ( v9 >= 0 )
          v9 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v14)(
                 v14,
                 &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                 a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v9;
}
