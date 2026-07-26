/*
 * XREFs of ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C0125070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A54 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B60 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0102138 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x1C01241C8 (-insertSorted@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0124600 (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0124A38 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 */

__int64 __fastcall ndisReadLwfById(const struct _GUID *a1)
{
  struct _GUID v1; // xmm0
  unsigned int FilterAltitude; // ebx
  char *v3; // rcx
  bool v5; // [rsp+30h] [rbp-D0h] BYREF
  void **m_ptr; // [rsp+38h] [rbp-C8h] BYREF
  KRegKey v7; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS (__stdcall *v8)(HANDLE); // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v9; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  unsigned int v14; // [rsp+80h] [rbp-80h] BYREF
  bool v15; // [rsp+84h] [rbp-7Ch] BYREF
  int v16; // [rsp+88h] [rbp-78h]
  wchar_t Dst[128]; // [rsp+90h] [rbp-70h] BYREF

  v1 = *a1;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  P = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v9 = v1;
  v7.m_ptr = 0LL;
  netsetupBuildObjectPath(3LL, a1, 0, PropertyBag, Dst);
  FilterAltitude = KRegKey::Open(&v7, 1u, Dst, 0LL);
  if ( !FilterAltitude )
  {
    m_ptr = (void **)&v7;
    FilterAltitude = ndisBlowStringListIntoAtoms(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D3528, (__int64)&v10);
    if ( !FilterAltitude )
    {
      FilterAltitude = ndisBlowStringListIntoAtoms(
                         &m_ptr,
                         (const struct _NETSETUPPROPKEY *)&unk_1C00D3540,
                         (__int64)&v12);
      if ( !FilterAltitude )
      {
        FilterAltitude = ndisGetFilterAltitude((struct NetSetupPropertyBag *)&m_ptr, &v14);
        if ( !FilterAltitude )
        {
          FilterAltitude = NetSetupPropertyBag::ReadBoolean(
                             &m_ptr,
                             (const struct _NETSETUPPROPKEY *)&unk_1C00D3570,
                             &v15);
          if ( !FilterAltitude )
          {
            v5 = 0;
            NetSetupPropertyBag::ReadBoolean(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D3558, &v5);
            v3 = v5 ? (char *)qword_1C00E4598 + 56 : (char *)qword_1C00E4598 + 40;
            FilterAltitude = -1073741670;
            if ( Rtl::KArray<LwfBindProperties,1>::insertSorted((__int64)v3, (__int64)&v9) )
              FilterAltitude = 0;
          }
        }
      }
    }
  }
  if ( v7.m_ptr )
  {
    m_ptr = (void **)v7.m_ptr;
    v8 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v8, &m_ptr);
  }
  if ( P )
  {
    ExFreePoolWithTag(P, 0x7272414Bu);
    P = 0LL;
    v12 = 0LL;
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x7272414Bu);
  return FilterAltitude;
}
