/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180021DF8
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180021CD8 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryCurrentMemoryUsage(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rdi
  int v13; // ebx
  unsigned __int64 v14; // r8
  int v16; // r8d
  int v17; // r9d
  void *v18; // rdx
  unsigned __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  int v21; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp+40h] BYREF

  v8 = a6;
  v13 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *, _QWORD))this
         + 3))(
          a3,
          a4,
          a2,
          a5,
          a6,
          &v20,
          0LL);
  if ( v13 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      return (unsigned int)v13;
    v18 = &unk_18009AB0C;
LABEL_10:
    v21 = v13;
    v22 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (_DWORD)v18,
      v16,
      v17,
      (__int64)&v21,
      (__int64)&v22);
    return (unsigned int)v13;
  }
  v13 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *))this
         + 12))(
          a3,
          a4,
          a2,
          a5,
          v8,
          &v19);
  if ( v13 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      return (unsigned int)v13;
    v18 = &unk_18009AAC5;
    goto LABEL_10;
  }
  v14 = v19 << 12;
  if ( is_mul_ok(v19, 0x1000uLL) )
  {
    v13 = 0;
  }
  else
  {
    v14 = -1LL;
    v13 = -1073741675;
  }
  *a7 = v20;
  *a8 = v14;
  return (unsigned int)v13;
}
