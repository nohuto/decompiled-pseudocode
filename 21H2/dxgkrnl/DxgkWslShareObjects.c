/*
 * XREFs of DxgkWslShareObjects @ 0x1C031E7F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0025B34 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01D9694 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DCBD0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01E03F8 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01E7E90 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgkWslShareObjects(int a1, unsigned int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  struct DXGSYNCOBJECT **v8; // rsi
  int v9; // edi
  unsigned int *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPROCESS *Current; // r15
  __int64 v16; // rbx
  const wchar_t *v17; // r9
  __int64 v19; // r14
  _QWORD *v20; // r10
  unsigned int v21; // edx
  int v22; // r9d
  unsigned int EntryType; // ebx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  struct DXGGLOBAL *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // rcx
  void *v32; // rbx
  void *v33; // [rsp+50h] [rbp-48h] BYREF
  struct DXGSYNCOBJECT **v34; // [rsp+58h] [rbp-40h] BYREF
  __int64 v35; // [rsp+60h] [rbp-38h] BYREF
  char v36; // [rsp+68h] [rbp-30h]

  v8 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v9 = -1073741823;
  v10 = (unsigned int *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 4);
  Current = DXGPROCESS::GetCurrent(v12, v11, v13, v14);
  if ( !Current )
  {
    v16 = 1007LL;
    WdLogSingleEntry1(2LL, 1007LL);
    v17 = L"Invalid process context";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, v16, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1 != 1 )
  {
    v16 = 1012LL;
    WdLogSingleEntry1(2LL, 1012LL);
    v17 = L"Invalid object count";
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v19 = *a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v35, Current);
  v20 = (_QWORD *)((char *)Current + 280);
  v21 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
  if ( v21 < *((_DWORD *)Current + 74)
    && (v22 = *(_DWORD *)(*v20 + 16LL * v21 + 8),
        (((unsigned int)v19 >> 25) & 0x60) == (*(_BYTE *)(*v20 + 16LL * v21 + 8) & 0x60))
    && (v22 & 0x2000) == 0
    && (v22 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((__int64)Current + 280, v21);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v35);
  if ( EntryType == 4 )
  {
    v9 = CreateSharedResourceNtObject(0LL, v24, (unsigned int)v19, 0LL, a3, 0, &v33);
    if ( v9 < 0 )
      goto LABEL_27;
    Global = DXGGLOBAL_GetGlobal();
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v35,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v28 = HMGRTABLE::AllocHandle(v10, (__int64)v33, 4, 0, 0);
    if ( !v28 )
    {
      v29 = 1058LL;
      WdLogSingleEntry1(2LL, 1058LL);
      goto LABEL_20;
    }
LABEL_24:
    v9 = 0;
    *a5 = v28;
LABEL_25:
    if ( v36 )
    {
      v31 = v35;
      *(_QWORD *)(v35 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v31, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_27;
  }
  if ( EntryType == 8 || EntryType == 11 )
  {
    CreateSharedSyncNtObject(0LL, EntryType, (unsigned int)v19, 0LL, a3, 0, &v34);
    v27 = DXGGLOBAL_GetGlobal();
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v35,
      (struct DXGGLOBAL *)((char *)v27 + 40));
    v8 = v34;
    v28 = HMGRTABLE::AllocHandle(v10, (__int64)v34, 8, 0, 0);
    if ( !v28 )
    {
      v29 = 1041LL;
      WdLogSingleEntry1(2LL, 1041LL);
LABEL_20:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate NT shared object handle",
        v29,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741801;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  WdLogSingleEntry1(2LL, v19);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid object handle type: 0x%I64x", v19, 0LL, 0LL, 0LL, 0LL);
LABEL_27:
  if ( v9 < 0 )
  {
    if ( v8 )
    {
      DxgkSharedSyncObjectObDeleteProcedure(v8, v25, v26);
      operator delete(v8);
    }
    v32 = v33;
    if ( v33 )
    {
      DxgkSharedAllocationObDeleteProcedure(v33, v25, v26);
      operator delete(v32);
    }
  }
  return (unsigned int)v9;
}
