/*
 * XREFs of ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C011EFB4
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C00FE750 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C011ECD4 (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwRemoveCounter(int a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char *v5; // rbx
  bool v6; // cl
  PVOID v7; // rax
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v9.m_State = Unlocked;
  v9.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v9.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v9);
  v5 = (char *)ndisPcwConsumerList;
  if ( ndisPcwConsumerList )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v5 + 2) == a1
        && *((_QWORD *)v5 + 2) == *(_QWORD *)a2
        && RtlEqualUnicodeString((PCUNICODE_STRING)(v5 + 24), *(PCUNICODE_STRING *)(a2 + 8), 0) != 0;
      v7 = *(PVOID *)v5;
      if ( v6 )
        break;
      v2 = v5;
      v5 = *(char **)v5;
      if ( !v7 )
        goto LABEL_13;
    }
    if ( v2 )
      *v2 = v7;
    else
      ndisPcwConsumerList = *(PVOID *)v5;
    ndisPcwDeleteConsumer(v5);
  }
LABEL_13:
  KLockHolder::~KLockHolder(&v9);
  return 0LL;
}
