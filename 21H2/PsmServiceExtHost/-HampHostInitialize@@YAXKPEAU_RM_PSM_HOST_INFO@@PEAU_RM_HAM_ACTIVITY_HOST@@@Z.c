/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D6FC
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C750 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800103AC (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18007D388 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@.c)
 */

void __fastcall HampHostInitialize(char a1, struct _RM_PSM_HOST_INFO *a2, struct _RM_HAM_ACTIVITY_HOST *a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  unsigned __int8 IsPple; // al

  memset_0((char *)a3 + 16, 0, 0x408uLL);
  *(_OWORD *)a3 = 0LL;
  RtlInitializeSRWLock(a3);
  *((_DWORD *)a3 + 2) = 0;
  *((_QWORD *)a3 + 76) = (char *)a3 + 600;
  *((_QWORD *)a3 + 75) = (char *)a3 + 600;
  RtlInitializeConditionVariable((char *)a3 + 16);
  RtlInitializeConditionVariable((char *)a3 + 680);
  *((_OWORD *)a3 + 44) = 0LL;
  *((_QWORD *)a3 + 90) = -1LL;
  *(_OWORD *)((char *)a3 + 744) = 0LL;
  *((_QWORD *)a3 + 95) = -1LL;
  v6 = 4LL;
  *((_QWORD *)a3 + 126) = -1LL;
  *((_QWORD *)a3 + 127) = -1LL;
  *((_QWORD *)a3 + 128) = -1LL;
  *((_QWORD *)a3 + 129) = -1LL;
  *((_QWORD *)a3 + 81) &= 0xFFFFFFFFF997FFFFuLL;
  *((_QWORD *)a3 + 81) |= 0x19940000uLL;
  *((_DWORD *)a3 + 193) &= ~1u;
  *((_DWORD *)a3 + 193) |= a1 & 1;
  v7 = (_OWORD *)((char *)a3 + 24);
  do
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
    v7[3] = *((_OWORD *)a2 + 3);
    v7[4] = *((_OWORD *)a2 + 4);
    v7[5] = *((_OWORD *)a2 + 5);
    v7[6] = *((_OWORD *)a2 + 6);
    v7 += 8;
    v8 = *((_OWORD *)a2 + 7);
    a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
    *(v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v7 = *(_OWORD *)a2;
  v7[1] = *((_OWORD *)a2 + 1);
  *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
  IsPple = RmpActivityHostIsPple((struct _RM_HAM_ACTIVITY_HOST *)((char *)a3 - 64));
  *((_QWORD *)a3 + 100) = 1LL;
  *((_QWORD *)a3 + 81) &= ~0x400000000000000uLL;
  *((_QWORD *)a3 + 81) |= (unsigned __int64)(IsPple & 1) << 58;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      0xFBFFFFFFFFFFFFFFuLL,
      &unk_1800A136F);
}
