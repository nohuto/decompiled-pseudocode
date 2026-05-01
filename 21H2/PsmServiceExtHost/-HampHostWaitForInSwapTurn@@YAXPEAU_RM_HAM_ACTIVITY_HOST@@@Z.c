/*
 * XREFs of ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000849C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D934 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x1800087D8 (CempListEntryIsNull.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000969C (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800096F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180072F1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampHostWaitForInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdi
  char *v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  char **v6; // rcx
  unsigned int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  char **v11; // rax
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v2 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
  v3 = (char *)a1 + 976;
  while ( 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 120)
                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*((_BYTE *)a1 + 664) & 0x40) != 0 )
      break;
    if ( (*((_QWORD *)a1 + 81) & 0x200000000000LL) != 0 )
      break;
    if ( !*(_DWORD *)(v4 + 552) )
    {
      v5 = (_QWORD *)(v4 + 536);
      if ( (_QWORD *)*v5 == v5 || (char *)*v5 == v3 )
        break;
    }
    if ( (unsigned int)CempListEntryIsNull((char *)a1 + 976) )
    {
      v6 = *(char ***)(v2 + 712);
      if ( *v6 != (char *)(v2 + 704) )
        goto LABEL_19;
      *(_QWORD *)v3 = v2 + 704;
      *((_QWORD *)a1 + 123) = v6;
      *v6 = v3;
      *(_QWORD *)(v2 + 712) = v3;
    }
    v14 = *(_DWORD *)(v2 + 724);
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
    HampHostReleaseLockExclusiveEx(a1, v7);
    RmpReleaseGlobalLock();
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    {
      v12 = *(_DWORD *)(v2 + 720);
      v13 = *((_DWORD *)a1 + 166);
      v15 = *((_QWORD *)a1 - 4);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800B3218,
        (unsigned int)&unk_1800A0B04,
        v8,
        v9,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12);
    }
    RtlWaitOnAddress(v2 + 724, &v14, 4LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
  }
  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 976) )
  {
    v10 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v11 = (char **)*((_QWORD *)a1 + 123), *v11 != v3) )
LABEL_19:
      __fastfail(3u);
    *v11 = (char *)v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_OWORD *)v3 = 0LL;
  }
  ++*(_DWORD *)(v2 + 720);
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
}
