/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x14086E48C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14086D55C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402720C0 (RtlGetDaclSecurityDescriptor.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140633C40 (RtlSetSaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14063D8A0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x14065E650 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x14066A940 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406BB650 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406BB6B0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406ED5B0 (RtlGetOwnerSecurityDescriptor.c)
 *     CmpFreeSecurityDescriptor @ 0x1406F8F24 (CmpFreeSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x14074CB80 (RtlGetGroupSecurityDescriptor.c)
 *     CmpAssignSecurityDescriptor @ 0x14086E388 (CmpAssignSecurityDescriptor.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rdx
  unsigned int v6; // r12d
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  __int64 v10; // rax
  int SaclSecurityDescriptor; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  _WORD *v15; // rsi
  PSID Owner; // [rsp+30h] [rbp-50h] BYREF
  PACL Sacl; // [rsp+38h] [rbp-48h] BYREF
  void *v18; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-30h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h]
  BOOLEAN SaclDefaulted; // [rsp+C0h] [rbp+40h] BYREF
  BOOLEAN SaclPresent; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+58h]

  v25 = a4;
  v5 = *(unsigned int *)(a2 + 44);
  v6 = *(_DWORD *)(a4 + 44);
  SaclPresent = 0;
  v20[1] = 0;
  v22 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v20[0] = -1;
  v19[0] = -1;
  v19[1] = 0;
  SaclDefaulted = 0;
  v18 = 0LL;
  Owner = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Sacl = 0LL;
  v10 = v9(a1, v5, v20);
  if ( !v10 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v10 + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v6, v19);
      v14 = v13;
      if ( v13 )
      {
        v15 = (_WORD *)(v13 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v13 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          WORD1(SecurityDescriptor[0]) = v15[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, Sacl, SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v15, &Owner, &SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v15, &Owner, &SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v15, &SaclPresent, &Sacl, &SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        SaclSecurityDescriptor = SeCaptureSecurityDescriptor(
                                                   (__int64)SecurityDescriptor,
                                                   0,
                                                   PagedPool,
                                                   1,
                                                   &v18);
                        if ( SaclSecurityDescriptor >= 0 )
                        {
                          if ( (unsigned __int8)HvMarkCellDirty(a3, v6, 0LL)
                            && (unsigned __int8)HvMarkCellDirty(a3, *(unsigned int *)(v14 + 4), 0LL)
                            && (unsigned __int8)HvMarkCellDirty(a3, *(unsigned int *)(v14 + 8), 0LL) )
                          {
                            CmpFreeSecurityDescriptor(a3, a5);
                            SaclSecurityDescriptor = CmpAssignSecurityDescriptor(a3, a5, v25, v18, 0);
                            SeReleaseSecurityDescriptor(v18, 0, 1);
                          }
                          else
                          {
                            SeReleaseSecurityDescriptor(v18, 0, 1);
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v19);
      }
    }
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v20);
  return (unsigned int)SaclSecurityDescriptor;
}
