/*
 * XREFs of CmpOKToFollowLink @ 0x1406FC010
 * Callers:
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     _tlgWriteAgg @ 0x140375E94 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

char __fastcall CmpOKToFollowLink(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( !a1 || a1 == a2 )
    return 1;
  if ( (*(_DWORD *)(a2 + 4152) & 1) != 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v4 = *(_QWORD **)(a2 + 4160);
    if ( v4 != (_QWORD *)(a2 + 4160) )
    {
      while ( v4 - 520 != (_QWORD *)a1 )
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
  if ( PsIsCurrentThreadInServerSilo(a1, a2) && (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 0x200000010000LL) )
    {
      v8 = 0x1000000LL;
      v10 = &v8;
      v11 = 8LL;
      tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&word_140022AA6, v5, 3u, &v9);
      v6 = dword_140C02130;
    }
    if ( v6 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&byte_140022A6F,
          0LL,
          0LL,
          2u,
          &v9);
    }
  }
  return 0;
}
