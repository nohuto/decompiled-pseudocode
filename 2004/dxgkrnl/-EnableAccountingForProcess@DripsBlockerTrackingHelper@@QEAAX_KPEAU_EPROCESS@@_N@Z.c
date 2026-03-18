/*
 * XREFs of ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02C0604
 * Callers:
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02BED1C (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1C02C0728 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C02C3500 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableAccountingForProcess(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  SIZE_T v7; // r14
  unsigned int v8; // esi
  DripsBlockerTrackingHelper *i; // rbx
  __int64 v10; // r14
  unsigned int j; // ebx
  SIZE_T Length; // [rsp+30h] [rbp-68h] BYREF
  _OWORD Source2[2]; // [rsp+38h] [rbp-60h] BYREF
  char v14; // [rsp+58h] [rbp-40h]

  Length = 0LL;
  v14 = 0;
  memset(Source2, 0, sizeof(Source2));
  DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(this, 0LL, a3, (char *)Source2, 0x21u, &Length);
  v7 = Length;
  if ( Length )
  {
    v8 = 0;
    for ( i = this;
          !*((_BYTE *)i + 104)
       || *(_QWORD *)i != a2
       || RtlCompareMemory((char *)this + 4720 * v8 + 8, Source2, v7) != v7;
          i = (DripsBlockerTrackingHelper *)((char *)i + 4720) )
    {
      if ( ++v8 >= 0x40 )
        return;
    }
    v10 = 4720LL * v8;
    for ( j = 0; j < *(_DWORD *)((char *)this + v10 + 44); ++j )
    {
      if ( *(_DWORD *)((char *)this + 72 * j + v10 + 144) )
        DripsBlockerTrackingHelper::EnableEntryAccounting(this, v8, j, a4);
    }
  }
}
