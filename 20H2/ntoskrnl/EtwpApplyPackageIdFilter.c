/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x1409430AC
 * Callers:
 *     EtwpApplyScopeFilters @ 0x1405F4C98 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x1406E3280 (EtwpApplyTransientFilters.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x1402E3F50 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D18A0 (_wcsnicmp.c)
 *     memset @ 0x140411300 (memset.c)
 *     PsQueryProcessAttributesByToken @ 0x140634B40 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, _WORD *a2, _WORD *a3)
{
  struct _KPROCESS *v6; // rcx
  char v7; // bl
  bool v8; // r12
  struct _DMA_ADAPTER *v9; // r13
  bool v10; // r14
  unsigned __int16 v11; // r14
  unsigned int v12; // esi
  unsigned __int16 v13; // si
  unsigned int v14; // edi
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h]
  ULONG_PTR PackageSize[52]; // [rsp+40h] [rbp-C0h] BYREF

  v18 = a1;
  memset(PackageSize, 0, 0x198uLL);
  v6 = *(struct _KPROCESS **)(a1 + 80);
  v7 = 0;
  v16 = 0;
  v8 = a3 == 0LL;
  v9 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v6);
  PsQueryProcessAttributesByToken((__int64)v9, &v16, v17);
  if ( v16 )
  {
    PackageSize[0] = 256LL;
    PackageSize[1] = 130LL;
    if ( RtlQueryPackageIdentity(v9, (PWSTR)&PackageSize[2], PackageSize, (PWSTR)&PackageSize[34], &PackageSize[1], 0LL) >= 0 )
    {
      v10 = a2 == 0LL;
      if ( a2 )
      {
        v11 = 0;
        v12 = (PackageSize[0] >> 1) - 1;
        if ( *a2 )
        {
          while ( (unsigned __int16)a2[8 * v11 + 4] != v12
               || wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], (const wchar_t *)&PackageSize[2], v12) )
          {
            if ( ++v11 >= *a2 )
              goto LABEL_8;
          }
          v10 = 1;
        }
        else
        {
LABEL_8:
          v10 = 0;
        }
      }
      if ( a3 )
      {
        v13 = 0;
        v14 = (PackageSize[1] >> 1) - 1;
        if ( *a3 )
        {
          while ( (unsigned __int16)a3[8 * v13 + 4] != v14
               || wcsnicmp(*(const wchar_t **)&a3[8 * v13 + 8], (const wchar_t *)&PackageSize[34], v14) )
          {
            if ( ++v13 >= *a3 )
              goto LABEL_14;
          }
          v8 = 1;
        }
        else
        {
LABEL_14:
          v8 = 0;
        }
      }
      if ( v10 && v8 )
        v7 = 1;
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v18 + 80) + 1208LL), v9);
  return v7;
}
