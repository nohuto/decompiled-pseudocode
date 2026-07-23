/*
 * XREFs of ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C3918
 * Callers:
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x1405C3BF4 (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140706430 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14088A6E0 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_DEVICE::GetStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER **a3)
{
  __int64 v4; // rax
  int v6; // edi
  DWORD Size; // esi
  struct _STORAGE_DESCRIPTOR_HEADER *v8; // rbx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v11[4]; // [rsp+48h] [rbp-40h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  LODWORD(NumberOfBytes) = 0;
  v11[2] = 0;
  v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, SIZE_T *))(v4 + 32))(this, 6LL, &NumberOfBytes);
  if ( v6 >= 0 )
  {
    Size = NumberOfBytes;
    v11[1] = 0;
    v11[0] = 6;
    v8 = (struct _STORAGE_DESCRIPTOR_HEADER *)SC_ENV::Allocate((unsigned int)NumberOfBytes);
    if ( v8 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, _DWORD *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *, DWORD))(*(_QWORD *)this + 16LL))(
               this,
               2954240LL,
               v11,
               12LL,
               v8,
               Size);
        if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -2147483643 )
          break;
        if ( v8->Size <= Size )
        {
          v8->Size = Size;
          v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *))(*(_QWORD *)this + 40LL))(
                 this,
                 6LL,
                 v8);
          if ( v6 >= 0 )
          {
            *a3 = v8;
            v8 = 0LL;
          }
          break;
        }
        Size = v8->Size;
        SC_ENV::Free(v8);
        v8 = (struct _STORAGE_DESCRIPTOR_HEADER *)SC_ENV::Allocate(Size);
        if ( !v8 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v6 = -1073741670;
    }
    if ( v8 )
      SC_ENV::Free(v8);
  }
  return (unsigned int)v6;
}
