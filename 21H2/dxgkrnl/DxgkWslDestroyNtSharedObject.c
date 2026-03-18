/*
 * XREFs of DxgkWslDestroyNtSharedObject @ 0x1C031E500
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0025B34 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01E7E90 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgkWslDestroyNtSharedObject(unsigned int a1)
{
  unsigned int v2; // r12d
  HMGRTABLE *v3; // rsi
  struct DXGGLOBAL *Global; // rax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // edx
  int EntryType; // eax
  unsigned int v9; // ecx
  __int64 v10; // rdi
  const wchar_t *v11; // r9
  struct DXGSYNCOBJECT **v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  char v20; // [rsp+58h] [rbp-20h]

  v2 = -1073741811;
  v3 = (HMGRTABLE *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 4);
  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v19,
    (struct DXGGLOBAL *)((char *)Global + 40));
  v5 = (a1 >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)v3 + 4) )
    goto LABEL_26;
  v6 = a1 >> 30;
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 16LL * v5 + 8);
  if ( a1 >> 30 != ((v7 >> 5) & 3) || (v7 & 0x2000) != 0 || (v7 & 0x1F) == 0 )
    goto LABEL_26;
  EntryType = HMGRTABLE::GetEntryType((__int64)v3, v5);
  if ( EntryType == 4 )
  {
    if ( v5 < *((_DWORD *)v3 + 4) )
    {
      v16 = *(_DWORD *)(*(_QWORD *)v3 + 16LL * v5 + 8);
      if ( v6 == ((v16 >> 5) & 3) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 && (v16 & 0x1F) != 4 )
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v10 = 1118LL;
    WdLogSingleEntry1(2LL, 1118LL);
    goto LABEL_14;
  }
  if ( EntryType != 8 )
  {
LABEL_26:
    v10 = 1132LL;
    WdLogSingleEntry1(2LL, 1132LL);
    v11 = L"Invalid shared object type handle";
LABEL_27:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
    if ( v20 )
    {
      v17 = v19;
      *(_QWORD *)(v19 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
    }
    return v2;
  }
  if ( v5 >= *((_DWORD *)v3 + 4)
    || (v9 = *(_DWORD *)(*(_QWORD *)v3 + 16LL * v5 + 8), v6 != ((v9 >> 5) & 3))
    || (v9 & 0x2000) != 0
    || (v9 & 0x1F) == 0 )
  {
LABEL_13:
    v10 = 1127LL;
    WdLogSingleEntry1(2LL, 1127LL);
LABEL_14:
    v11 = L"Invalid syncobject handle";
    goto LABEL_27;
  }
  if ( (v9 & 0x1F) != 8 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_13;
  }
  v12 = *(struct DXGSYNCOBJECT ***)(*(_QWORD *)v3 + 16LL * v5);
  if ( !v12 )
    goto LABEL_13;
  HMGRTABLE::FreeHandle(v3, a1);
  if ( v20 )
  {
    v15 = v19;
    *(_QWORD *)(v19 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
  }
  DxgkSharedSyncObjectObDeleteProcedure(v12, v13, v14);
  return 0;
}
