/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x140760B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmIsDevicePresent @ 0x1405FF5F8 (_CmIsDevicePresent.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  char v7; // si
  PCUNICODE_STRING v8; // rax
  PVOID i; // rdi
  int DeviceRegProp; // eax
  unsigned int v11; // r15d
  __int64 *v12; // r14
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  int ObjectProperty; // eax
  unsigned int v17; // eax
  const WCHAR *v18; // rdi
  __int64 v19; // rax
  void *v20; // rcx
  PVOID PoolWithTag; // rdi
  void *v22; // rcx
  int v23; // ecx
  __int64 (__fastcall *v24)(__int64, const WCHAR *, _QWORD, _QWORD); // rax
  int v25; // [rsp+40h] [rbp-99h]
  _BYTE v26[4]; // [rsp+60h] [rbp-79h] BYREF
  SIZE_T NumberOfBytes; // [rsp+64h] [rbp-75h] BYREF
  SIZE_T v28; // [rsp+6Ch] [rbp-6Dh] BYREF
  unsigned int v29; // [rsp+74h] [rbp-65h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _WORD v31[40]; // [rsp+90h] [rbp-49h] BYREF

  v29 = a3;
  memset(v31, 0, 0x4EuLL);
  v7 = 0;
  DestinationString = 0LL;
  v26[0] = 0;
  NumberOfBytes = 0LL;
  v28 = 0LL;
  if ( !*(_BYTE *)(a4 + 8) || CmIsDevicePresent(a1, a2, v26) >= 0 && v26[0] )
  {
    v8 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v8->Length >= 2u && *v8->Buffer )
    {
      for ( i = *(PVOID *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = i )
      {
        LODWORD(NumberOfBytes) = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(
                          a1,
                          (__int64)a2,
                          0LL,
                          5,
                          (__int64)&NumberOfBytes + 4,
                          (__int64)i,
                          (__int64)&NumberOfBytes,
                          0);
        if ( !DeviceRegProp && (unsigned int)NumberOfBytes < 2 )
          break;
        if ( DeviceRegProp != -1073741789 )
          goto LABEL_9;
        if ( (unsigned int)NumberOfBytes < 2 )
          break;
        i = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x47706E50u);
        if ( !i )
        {
          DeviceRegProp = -1073741670;
LABEL_9:
          if ( !DeviceRegProp )
          {
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
            if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) >= 0 )
            {
              if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
              {
                v7 = 1;
                goto LABEL_53;
              }
            }
          }
          break;
        }
        v20 = *(void **)(a4 + 16);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        *(_DWORD *)(a4 + 24) = NumberOfBytes;
      }
      v11 = 0;
      v12 = &qword_140007ED8;
      while ( 2 )
      {
        if ( *(_DWORD *)v12 != 2 || v31[0] )
        {
          while ( 1 )
          {
LABEL_19:
            v13 = *(unsigned int *)v12;
            v14 = v31;
            v25 = *(_DWORD *)(a4 + 24);
            if ( (_DWORD)v13 == 1 )
              v14 = a2;
            LODWORD(NumberOfBytes) = *(_DWORD *)(a4 + 24);
            ObjectProperty = PnpGetObjectProperty(
                               a1,
                               (__int64)v14,
                               v13,
                               0LL,
                               0LL,
                               *(v12 - 1),
                               (__int64)&v28 + 4,
                               *(_QWORD *)(a4 + 16),
                               v25,
                               (__int64)&v28,
                               0);
            LODWORD(NumberOfBytes) = v28;
            if ( !ObjectProperty && (unsigned int)v28 < 2 )
              break;
            if ( ObjectProperty != -1073741789 )
              goto LABEL_23;
            if ( (unsigned int)v28 < 2 )
              break;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v28, 0x47706E50u);
            if ( !PoolWithTag )
            {
              ObjectProperty = -1073741670;
LABEL_23:
              if ( ObjectProperty >= 0 && HIDWORD(v28) == 8210 )
              {
                v17 = *(_DWORD *)(a4 + 24);
                if ( v17 > 2 )
                {
                  *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v17 >> 1) - 2) = 0;
                  v17 = *(_DWORD *)(a4 + 24);
                }
                if ( v17 > 4 )
                  *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v17 >> 1) - 4) = 0;
                v18 = *(const WCHAR **)(a4 + 16);
                if ( *v18 )
                {
                  while ( RtlInitUnicodeStringEx(&DestinationString, v18) < 0
                       || !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                  {
                    v19 = -1LL;
                    do
                      ++v19;
                    while ( v18[v19] );
                    v18 += v19 + 1;
                    if ( !*v18 )
                      goto LABEL_38;
                  }
                  v7 = 1;
                }
LABEL_38:
                if ( v7 )
                  goto LABEL_53;
              }
              break;
            }
            v22 = *(void **)(a4 + 16);
            if ( v22 )
              ExFreePoolWithTag(v22, 0);
            v23 = NumberOfBytes;
            *(_QWORD *)(a4 + 16) = PoolWithTag;
            *(_DWORD *)(a4 + 24) = v23;
          }
          ++v11;
          v12 += 2;
          if ( v11 < 4 )
            continue;
        }
        else
        {
          LODWORD(NumberOfBytes) = 78;
          if ( (int)CmGetDeviceRegProp(
                      a1,
                      (__int64)a2,
                      0LL,
                      9,
                      (__int64)&NumberOfBytes + 4,
                      (__int64)v31,
                      (__int64)&NumberOfBytes,
                      0) >= 0
            && HIDWORD(NumberOfBytes) == 1
            && (unsigned int)NumberOfBytes >= 2 )
          {
            v31[38] = 0;
            goto LABEL_19;
          }
        }
        break;
      }
    }
    else
    {
      v7 = 1;
    }
    if ( v7 )
    {
LABEL_53:
      v24 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, _QWORD))(a4 + 32);
      if ( v24 )
        return v24(a1, a2, v29, *(_QWORD *)(a4 + 40));
    }
  }
  return v7;
}
