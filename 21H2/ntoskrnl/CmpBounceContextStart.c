/*
 * XREFs of CmpBounceContextStart @ 0x1407C1A00
 * Callers:
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 * Callees:
 *     _tlgWriteAgg @ 0x1402A1A20 (_tlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x1407D557C (CmpIsBufferGloballyVisible.c)
 */

__int64 __fastcall CmpBounceContextStart(__int64 a1, struct _SLIST_ENTRY *a2, size_t a3, int a4, char a5)
{
  PSLIST_ENTRY v6; // rdi
  struct _SLIST_ENTRY *TransientPoolWithQuotaTag; // rax
  unsigned int v10; // edx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-88h] BYREF
  __int64 v13; // [rsp+38h] [rbp-80h] BYREF
  __int64 v14; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]
  char *v18; // [rsp+80h] [rbp-38h]
  __int64 v19; // [rsp+88h] [rbp-30h]
  __int64 *v20; // [rsp+90h] [rbp-28h]
  __int64 v21; // [rsp+98h] [rbp-20h]

  *(_QWORD *)a1 = a2;
  v6 = a2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !a4 && (unsigned __int8)CmpIsBufferGloballyVisible(a2) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 8) = v6;
    return 0LL;
  }
  if ( (unsigned int)dword_140C03868 > 5 && (byte_140C03878 & 4) != 0 && (qword_140C03880 & 4) == qword_140C03880 )
  {
    v13 = 1LL;
    v16 = &v13;
    v10 = a3;
    v12 = a5;
    v18 = &v12;
    v17 = 8LL;
    v19 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v11 = -1;
      if ( (_DWORD)a3 )
      {
        do
        {
          ++v11;
          v10 >>= 1;
        }
        while ( v10 );
      }
      v10 = 1 << (v11 + 1);
    }
    v14 = v10;
    v21 = 8LL;
    v20 = &v14;
    tlgWriteAgg((__int64)&dword_140C03868, (unsigned __int8 *)&dword_14002988C, a3, 5u, &v15);
  }
  if ( a3 <= 0x40 )
  {
    v6 = (PSLIST_ENTRY)(a1 + 17);
    memset((void *)(a1 + 17), 0, a3);
    goto LABEL_10;
  }
  if ( a3 <= 0x1000 )
  {
    ++dword_140CE2414;
    v6 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
    if ( v6
      || (++dword_140CE2418,
          (v6 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_140CE2430)(
                                (unsigned int)dword_140CE2424,
                                (unsigned int)dword_140CE242C,
                                (unsigned int)dword_140CE2428,
                                &CmpBounceBufferLookaside)) != 0LL) )
    {
      memset(v6, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_10;
    }
  }
  TransientPoolWithQuotaTag = (struct _SLIST_ENTRY *)CmpAllocateTransientPoolWithQuotaTag(a1, a3, 0x42424D43u);
  v6 = TransientPoolWithQuotaTag;
  if ( TransientPoolWithQuotaTag )
  {
    memset(TransientPoolWithQuotaTag, 0, a3);
    goto LABEL_10;
  }
  return 3221225626LL;
}
