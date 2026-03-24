/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x14094087C
 * Callers:
 *     EtwpApplyScopeFilters @ 0x140644118 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x1406C3300 (EtwpApplyTransientFilters.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14024F4D0 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D2210 (_wcsnicmp.c)
 *     memset @ 0x140414200 (memset.c)
 *     PsQueryProcessAttributesByToken @ 0x140601050 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
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
  size_t v19[52]; // [rsp+40h] [rbp-C0h] BYREF

  v18 = a1;
  memset(v19, 0, 0x198uLL);
  v6 = *(struct _KPROCESS **)(a1 + 80);
  v7 = 0;
  v16 = 0;
  v8 = a3 == 0LL;
  v9 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v6);
  PsQueryProcessAttributesByToken((__int64)v9, &v16, v17);
  if ( v16 )
  {
    v19[0] = 256LL;
    v19[1] = 130LL;
    if ( RtlQueryPackageIdentity((int)v9, (wchar_t *)&v19[2], v19, (wchar_t *)&v19[34], &v19[1], 0LL) >= 0 )
    {
      v10 = a2 == 0LL;
      if ( a2 )
      {
        v11 = 0;
        v12 = (v19[0] >> 1) - 1;
        if ( *a2 )
        {
          while ( (unsigned __int16)a2[8 * v11 + 4] != v12
               || wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], (const wchar_t *)&v19[2], v12) )
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
        v14 = (v19[1] >> 1) - 1;
        if ( *a3 )
        {
          while ( (unsigned __int16)a3[8 * v13 + 4] != v14
               || wcsnicmp(*(const wchar_t **)&a3[8 * v13 + 8], (const wchar_t *)&v19[34], v14) )
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
