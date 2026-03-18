/*
 * XREFs of CmpOKToFollowLink @ 0x140623500
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x1403727B4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

char __fastcall CmpOKToFollowLink(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( !a1 || a1 == (_QWORD *)a2 )
    return 1;
  if ( (*(_DWORD *)(a2 + 4152) & 1) != 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v4 = *(_QWORD **)(a2 + 4160);
    if ( v4 != (_QWORD *)(a2 + 4160) )
    {
      while ( v4 - 520 != a1 )
      {
        v4 = (_QWORD *)*v4;
        if ( v4 == (_QWORD *)(a2 + 4160) )
          goto LABEL_7;
      }
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      return 1;
    }
LABEL_7:
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  if ( PsIsCurrentThreadInServerSilo() && (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 0x200000010000LL) )
    {
      v8 = 0x1000000LL;
      v10 = &v8;
      v11 = 8LL;
      tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_140021A0F, v5, 3u, &v9);
      v6 = dword_140C02130;
    }
    if ( v6 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_140021A61,
          0LL,
          0LL,
          2u,
          &v9);
    }
  }
  return 0;
}
