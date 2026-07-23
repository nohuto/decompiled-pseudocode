/*
 * XREFs of ?ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ @ 0x1405C8E78
 * Callers:
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C9230 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1405C6A98 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall SC_DEVICE::ExtractDeviceStrings(SC_DEVICE *this)
{
  _DWORD *v1; // rbx
  int v3; // esi
  unsigned int *v4; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _OWORD **v8; // rdx
  __int64 v9; // r9
  _OWORD *v10; // r8
  unsigned int *v11; // rcx
  _DWORD v13[4]; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-29h] BYREF
  _OWORD v15[4]; // [rsp+58h] [rbp-9h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 20);
  v3 = 0;
  v13[0] = v1[3];
  v13[1] = v1[4];
  v13[2] = v1[5];
  v13[3] = v1[6];
  v14[0] = (char *)this + 24;
  v14[1] = (char *)this + 40;
  v14[2] = (char *)this + 56;
  v14[3] = (char *)this + 72;
  memset(v15, 0, sizeof(v15));
  v4 = v13;
  v5 = v1[1] - 1;
  v6 = 0;
  while ( 1 )
  {
    v7 = *v4;
    if ( (unsigned int)v7 >= 0x24 && (unsigned int)v7 <= v5 )
    {
      v3 = ScAnsiToUnicodeString((char *)(*((_QWORD *)this + 20) + v7), (struct _UNICODE_STRING *)&v15[v6]);
      if ( v3 < 0 )
        break;
    }
    ++v6;
    ++v4;
    if ( v6 >= 4 )
    {
      v8 = (_OWORD **)v14;
      v9 = 4LL;
      v10 = v15;
      v11 = v13;
      do
      {
        if ( *v11 >= 0x24 && *v11 <= v5 )
          **v8 = *v10;
        ++v11;
        ++v10;
        ++v8;
        --v9;
      }
      while ( v9 );
      return (unsigned int)v3;
    }
  }
  return (unsigned int)v3;
}
