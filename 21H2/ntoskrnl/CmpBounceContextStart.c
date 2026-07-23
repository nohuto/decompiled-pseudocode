/*
 * XREFs of CmpBounceContextStart @ 0x1406E3F10
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x1406E35B0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x1405F38B0 (CmpIsBufferGloballyVisible.c)
 */

__int64 __fastcall CmpBounceContextStart(__int64 a1, unsigned __int64 a2, size_t a3, int a4, char a5)
{
  void *TransientPoolWithQuotaTag; // rdi
  unsigned int v9; // edx
  char v10; // cl
  char v11; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-58h]
  __int64 v16; // [rsp+78h] [rbp-50h]
  char *v17; // [rsp+80h] [rbp-48h]
  __int64 v18; // [rsp+88h] [rbp-40h]
  __int64 *v19; // [rsp+90h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp-30h]

  *(_QWORD *)a1 = a2;
  TransientPoolWithQuotaTag = (void *)a2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !a4 && CmpIsBufferGloballyVisible(a2) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 8) = TransientPoolWithQuotaTag;
    return 0LL;
  }
  if ( (unsigned int)dword_140C02130 > 5 && (byte_140C02140 & 4) != 0 && (qword_140C02148 & 4) == qword_140C02148 )
  {
    v12 = 1LL;
    v15 = &v12;
    v9 = a3;
    v11 = a5;
    v17 = &v11;
    v16 = 8LL;
    v18 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v10 = -1;
      if ( (_DWORD)a3 )
      {
        do
        {
          ++v10;
          v9 >>= 1;
        }
        while ( v9 );
      }
      v9 = 1 << (v10 + 1);
    }
    v13 = v9;
    v20 = 8LL;
    v19 = &v13;
    tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_1400234AB, a3, 5u, &v14);
  }
  if ( a3 <= 0x40 )
  {
    TransientPoolWithQuotaTag = (void *)(a1 + 17);
LABEL_13:
    memset(TransientPoolWithQuotaTag, 0, a3);
    goto LABEL_10;
  }
  if ( a3 <= 0x1000 )
  {
    ++dword_140CDB954;
    TransientPoolWithQuotaTag = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
    if ( TransientPoolWithQuotaTag
      || (++dword_140CDB958,
          (TransientPoolWithQuotaTag = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB970)(
                                                 (unsigned int)dword_140CDB964,
                                                 (unsigned int)dword_140CDB96C,
                                                 (unsigned int)dword_140CDB968,
                                                 &CmpBounceBufferLookaside)) != 0LL) )
    {
      memset(TransientPoolWithQuotaTag, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_10;
    }
  }
  TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(a1, a3, 0x42424D43u);
  if ( TransientPoolWithQuotaTag )
    goto LABEL_13;
  return 3221225626LL;
}
