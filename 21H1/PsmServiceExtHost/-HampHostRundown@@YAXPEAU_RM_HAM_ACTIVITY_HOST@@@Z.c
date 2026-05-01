/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000604C
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005DD8 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800038BC (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180004628 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempListEntryIsNull @ 0x180008768 (CempListEntryIsNull.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002217C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180022F90 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180025E00 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002752C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@4@Z @ 0x18007CAA0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_18007CAA0.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rcx
  struct _HAM_HOST_DEPENDENCY *v7; // rcx
  struct _HAM_DEPENDENCY_GROUP *v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v3 = *((_QWORD *)a1 + 97);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
      v4,
      &unk_1800A127D);
  if ( (*((_BYTE *)a1 + 772) & 1) != 0 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 81) |= 0x200000000000000uLL;
    HampHostReleaseLockExclusiveEx(a1, v5);
    v6 = *((_QWORD *)a1 + 103);
    if ( v6 )
      TpWaitForTimer(v6, 1LL);
  }
  v7 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 87);
  if ( v7 )
    HampDepGroupInvalidateDependency(v7, a2);
  v8 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 86);
  if ( v8 )
    HampDepGroupRemoveHost(v8, a1);
  if ( v3 )
  {
    v9 = *(_QWORD *)(v3 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v9 + 328) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v3 + 88));
      *(_QWORD *)(v9 + 328) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v9);
    }
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v3);
    if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 808) )
    {
      v11 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v3 + 568) )
      *(_QWORD *)(v3 + 568) = 0LL;
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v3);
  }
  v13 = *((_QWORD *)a1 + 98);
  if ( v13 )
  {
    if ( (*(_QWORD *)(v13 + 592))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v13 - 64));
  }
}
