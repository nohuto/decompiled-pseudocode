/*
 * XREFs of ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02C37A8
 * Callers:
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00E25C4 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C02C38B0 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::NotifyProcessFreeze(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        char a4)
{
  unsigned int v7; // esi
  DripsBlockerTrackingHelper *i; // rdi
  SIZE_T v9; // rax
  int v10; // eax
  int v11; // eax
  SIZE_T Length; // [rsp+30h] [rbp-68h] BYREF
  _OWORD Source2[2]; // [rsp+38h] [rbp-60h] BYREF
  char v14; // [rsp+58h] [rbp-40h]

  if ( *((_BYTE *)this + 302080) )
  {
    Length = 0LL;
    v14 = 0;
    memset(Source2, 0, sizeof(Source2));
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(this, 0LL, a3, (char *)Source2, 0x21u, &Length);
    if ( Length )
    {
      v7 = 0;
      for ( i = this; ; i = (DripsBlockerTrackingHelper *)((char *)i + 4720) )
      {
        if ( *((_BYTE *)i + 104) )
        {
          if ( *(_QWORD *)i == a2 )
          {
            v9 = RtlCompareMemory((char *)this + 4720 * v7 + 8, Source2, Length);
            if ( v9 == Length )
              break;
          }
        }
        if ( ++v7 >= 0x40 )
          return;
      }
      v10 = *((_DWORD *)this + 1180 * v7 + 27);
      if ( a4 )
      {
        if ( v10 <= 0 )
          return;
        v11 = v10 - 1;
      }
      else
      {
        v11 = v10 + 1;
      }
      *((_DWORD *)this + 1180 * v7 + 27) = v11;
    }
  }
}
