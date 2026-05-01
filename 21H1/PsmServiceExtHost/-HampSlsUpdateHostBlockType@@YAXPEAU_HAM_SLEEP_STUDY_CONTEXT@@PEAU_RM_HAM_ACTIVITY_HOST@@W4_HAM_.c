/*
 * XREFs of ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180083178
 * Callers:
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x1800824A8 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18008299C (-HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180082A64 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180082C2C (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HA.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x180082CD4 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180082DB4 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 */

void __fastcall HampSlsUpdateHostBlockType(__int64 a1, struct _RM_HAM_ACTIVITY_HOST *a2, unsigned __int8 a3)
{
  int v5; // r9d
  int v6; // r9d
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v7; // rdi
  int v8; // r9d
  PVOID P; // [rsp+30h] [rbp-89h] BYREF
  int v10; // [rsp+38h] [rbp-81h] BYREF
  int v11; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v12; // [rsp+40h] [rbp-79h] BYREF
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v13; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-69h] BYREF
  int *v15; // [rsp+70h] [rbp-49h]
  __int64 v16; // [rsp+78h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-39h] BYREF
  int *v18; // [rsp+A0h] [rbp-19h]
  __int64 v19; // [rsp+A8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+B0h] [rbp-9h] BYREF
  int *v21; // [rsp+D0h] [rbp+17h]
  __int64 v22; // [rsp+D8h] [rbp+1Fh]

  P = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1
      && (int)HampSlsBlockerEntryFind((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, a2, &v13) >= 0
      && (int)HampSlsBlockerEntryUpdateBlockType((__int64)v13, 0, a1) < 0
      && (unsigned int)dword_1800B3218 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
      {
        v10 = v5;
        v15 = &v10;
        v16 = 4LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800B3218,
          (unsigned __int8 *)dword_1800A229E,
          0LL,
          0LL,
          3u,
          &v14);
      }
    }
    return;
  }
  if ( (int)HampSlsBlockerEntryCreate(
              (struct _HAM_SLEEP_STUDY_CONTEXT *)a1,
              a2,
              (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **)&P) >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) == 0 && (*(_BYTE *)(a1 + 32) & 1) != 0 )
    {
      v7 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P;
      HampSlsBlockerEntryFindOrInsert(
        (struct _HAM_SLEEP_STUDY_CONTEXT *)a1,
        (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P,
        &v13);
      if ( v13 == v7 )
        v7 = 0LL;
      P = v7;
      if ( (int)HampSlsBlockerEntryUpdateBlockType((__int64)v13, a3, a1) < 0
        && (unsigned int)dword_1800B3218 > 4
        && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
      {
        v12 = v8;
        v21 = &v12;
        v22 = 4LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800B3218,
          (unsigned __int8 *)dword_1800A229E,
          0LL,
          0LL,
          3u,
          &v20);
      }
      goto LABEL_14;
    }
  }
  else if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
  {
    v11 = v6;
    v18 = &v11;
    v19 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A2262,
      0LL,
      0LL,
      3u,
      &v17);
  }
  v7 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P;
LABEL_14:
  if ( v7 )
  {
    HampSlsBlockerEntryCleanup(v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
