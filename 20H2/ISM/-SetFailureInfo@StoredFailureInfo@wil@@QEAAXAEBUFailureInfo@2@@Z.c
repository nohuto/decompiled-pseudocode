/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180067160
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180067700 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180093CF0 (-NotifyFailure@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflector.c)
 *     ?NotifyFailure@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800D0290 (-NotifyFailure@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAA.c)
 *     ?NotifyFailure@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800D05E0 (-NotifyFailure@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180160930 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgRefle.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180160B00 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180160E50 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180063CC0 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180063D34 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180066E08 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x180066E34 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180067D88 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180067EBC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rbx
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rbx
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rbx
  const char *v9; // rdx
  __int64 v10; // rbx
  const char *v11; // rdx
  __int64 v12; // rbx
  const char *v13; // rdx
  __int64 v14; // rbx
  const char *v15; // rdx
  __int64 v16; // rbx
  const char *v17; // rdx
  __int64 v18; // rbx
  const char *v19; // rdx
  __int64 v20; // rbx
  const char *v21; // rdx
  unsigned __int64 v22; // rbx
  _DWORD *v23; // rcx
  unsigned __int16 *v24; // rcx
  const unsigned __int16 *v25; // rbx
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  unsigned __int16 *v32; // rax
  char *v33; // rax
  unsigned __int16 *v34; // rax
  char *v35; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 13), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 10), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 8), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 4), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v21) + v20;
  v23 = (_DWORD *)*((_QWORD *)this + 18);
  if ( !v23 || *v23 != 1 || *((_QWORD *)this + 19) < v22 )
  {
    wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 144));
    wil::details::shared_buffer::create((wil::StoredFailureInfo *)((char *)this + 144), 0LL, v22);
    v23 = (_DWORD *)*((_QWORD *)this + 18);
  }
  v24 = (unsigned __int16 *)((unsigned __int64)(v23 + 1) & -(__int64)(v23 != 0LL));
  if ( v24 )
    v25 = (unsigned __int16 *)((char *)v24 + *((_QWORD *)this + 19));
  else
    v25 = 0LL;
  if ( v24 )
  {
    v26 = wil::details::WriteResultString<unsigned short const *>(
            v24,
            v25,
            *((wil::details **)a2 + 2),
            (unsigned __int16 **)this + 2);
    v27 = wil::details::WriteResultString<char const *>(
            v26,
            (const char *)v25,
            *((wil::details **)a2 + 4),
            (char **)this + 4);
    v28 = wil::details::WriteResultString<char const *>(
            v27,
            (const char *)v25,
            *((wil::details **)a2 + 5),
            (char **)this + 5);
    v29 = wil::details::WriteResultString<char const *>(
            v28,
            (const char *)v25,
            *((wil::details **)a2 + 6),
            (char **)this + 6);
    v30 = wil::details::WriteResultString<char const *>(
            v29,
            (const char *)v25,
            *((wil::details **)a2 + 8),
            (char **)this + 8);
    v31 = wil::details::WriteResultString<char const *>(
            v30,
            (const char *)v25,
            *((wil::details **)a2 + 15),
            (char **)this + 15);
    v32 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v31,
                                (const char *)v25,
                                *((wil::details **)a2 + 13),
                                (char **)this + 13);
    v33 = wil::details::WriteResultString<unsigned short const *>(
            v32,
            v25,
            *((wil::details **)a2 + 14),
            (unsigned __int16 **)this + 14);
    v34 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v33,
                                (const char *)v25,
                                *((wil::details **)a2 + 10),
                                (char **)this + 10);
    v35 = wil::details::WriteResultString<unsigned short const *>(
            v34,
            v25,
            *((wil::details **)a2 + 11),
            (unsigned __int16 **)this + 11);
    memset_0(v35, 0, (char *)v25 - v35);
  }
}
