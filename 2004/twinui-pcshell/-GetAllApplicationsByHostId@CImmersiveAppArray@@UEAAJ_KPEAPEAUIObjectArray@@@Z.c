/*
 * XREFs of ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180041DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18003E1A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByHostId(
        CImmersiveAppArray *this,
        const struct _GUID *a2,
        struct IObjectArray **a3)
{
  char v6; // si
  int v7; // ebx
  char *v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rcx
  void *v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  void *v14; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+40h] BYREF
  int v16; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v14 = 0LL;
  v7 = CEnumerableObjectCollection::CreateInstance((__int64)this, a2, &v14);
  if ( v7 >= 0 )
  {
    v8 = (char *)this - 8;
    v7 = (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 1) + 24LL))((char *)this - 8, &v15);
    v9 = 0;
    if ( v7 >= 0 )
    {
      do
      {
        if ( v9 >= v15 )
          break;
        v13 = 0LL;
        if ( (*(int (__fastcall **)(char *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
               v8,
               v9,
               &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3,
               &v13) >= 0
          && (*(int (__fastcall **)(__int64, const struct _GUID *, int *))(*(_QWORD *)v13 + 32LL))(v13, a2, &v16) >= 0
          && v16 )
        {
          v7 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 40LL))(v14, v13);
          v6 = 1;
        }
        v10 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        ++v9;
      }
      while ( v7 >= 0 );
      if ( v7 >= 0 )
      {
        if ( !v6 )
          v7 = -2147319765;
        if ( v7 >= 0 )
          v7 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v14)(
                 v14,
                 &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                 a3);
      }
    }
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v7;
}
