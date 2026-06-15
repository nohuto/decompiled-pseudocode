/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x140052600
 * Callers:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1400529D8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E00 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140052364 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03.c)
 */

int __fastcall APOTrackAndLogException(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v11; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+58h] [rbp-40h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-30h] BYREF
  __int64 v15; // [rsp+70h] [rbp-28h] BYREF

  v6 = a3;
  if ( **(_DWORD **)&g_SysFxUtilTlp > 2u && (*(_QWORD *)(*(_QWORD *)&g_SysFxUtilTlp + 16LL) & 0x400000000000LL) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)&g_SysFxUtilTlp + 24LL) & 0x400000000000LL;
    if ( v8 == *(_QWORD *)(*(_QWORD *)&g_SysFxUtilTlp + 24LL) )
    {
      if ( (unsigned int)a3 >= 4 )
        v9 = "Unknown";
      else
        v9 = off_140076FA8[(int)a3];
      LODWORD(v11) = a6;
      v12 = a5;
      v15 = (__int64)v9;
      v13 = a2;
      v14 = a4;
      LODWORD(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                      *(__int64 *)&g_SysFxUtilTlp,
                      (unsigned __int8 *)dword_14007C65B,
                      a3,
                      a4,
                      (const unsigned __int16 **)&v15,
                      &v14,
                      (void **)&v13,
                      (const unsigned __int16 **)&v12,
                      (__int64)&v11);
    }
  }
  if ( a2 )
    LODWORD(v8) = TrackSystemEffectBehavior(a2, v6, 0, 1u);
  return v8;
}
