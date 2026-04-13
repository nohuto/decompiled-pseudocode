/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180004A28
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180004D7C (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800339E0 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAA.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180033E80 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180046890 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?NotifyFailure@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18004EBD0 (-NotifyFailure@-$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0EAAA.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180055090 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeli_ea_180055090.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18006A7C0 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeli_ea_18006A7C0.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007DD10 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeli_ea_18007DD10.c)
 *     ?NotifyFailure@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180081060 (-NotifyFailure@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A6290 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAA.c)
 * Callees:
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1800044F8 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180018720 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800187B0 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     memset_0 @ 0x1800CDE41 (memset_0.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rdi
  void **v35; // r14
  volatile signed __int32 *v36; // rcx
  rsize_t v37; // rdi
  void *v38; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  void *v52; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  v4 = 2LL;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v5 + 2 * v7) );
    v6 = 2 * v7 + 2;
  }
  else
  {
    v6 = 2LL;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *((_QWORD *)a2 + 5);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *((_QWORD *)a2 + 6);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *((_QWORD *)a2 + 8);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *((_QWORD *)a2 + 15);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *((_QWORD *)a2 + 13);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *((_QWORD *)a2 + 14);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *((_QWORD *)a2 + 10);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v29 + v31) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *((_QWORD *)a2 + 11);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v4 = 2 * v33 + 2;
  }
  v34 = v27 + v4 + v30;
  v35 = (void **)((char *)this + 144);
  v36 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  v37 = v6 + v9 + v12 + v15 + v18 + v21 + v24 + v34;
  if ( v36 )
  {
    if ( *v36 == 1 && *((_QWORD *)this + 19) >= v37 )
      goto LABEL_57;
    if ( _InterlockedExchangeAdd(v36, 0xFFFFFFFF) == 1 )
    {
      v38 = *v35;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v38);
    }
    *v35 = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  wil::details::shared_buffer::create((volatile signed __int32 **)this + 18, 0LL, v37);
  v36 = (volatile signed __int32 *)*v35;
LABEL_57:
  v40 = (unsigned __int64)(v36 + 1) & -(__int64)(v36 != 0LL);
  v41 = v40 + *((_QWORD *)this + 19);
  v42 = v41 & -(__int64)(v40 != 0);
  if ( v40 )
  {
    v43 = wil::details::WriteResultString<unsigned short const *>(
            v40,
            v41 & -(__int64)(v40 != 0),
            *((_QWORD *)a2 + 2),
            (char *)this + 16);
    v44 = wil::details::WriteResultString<char const *>(v43, v42, *((_QWORD *)a2 + 4), (char *)this + 32);
    v45 = wil::details::WriteResultString<char const *>(v44, v42, *((_QWORD *)a2 + 5), (char *)this + 40);
    v46 = wil::details::WriteResultString<char const *>(v45, v42, *((_QWORD *)a2 + 6), (char *)this + 48);
    v47 = wil::details::WriteResultString<char const *>(v46, v42, *((_QWORD *)a2 + 8), (char *)this + 64);
    v48 = wil::details::WriteResultString<char const *>(v47, v42, *((_QWORD *)a2 + 15), (char *)this + 120);
    v49 = wil::details::WriteResultString<char const *>(v48, v42, *((_QWORD *)a2 + 13), (char *)this + 104);
    v50 = wil::details::WriteResultString<unsigned short const *>(v49, v42, *((_QWORD *)a2 + 14), (char *)this + 112);
    v51 = wil::details::WriteResultString<char const *>(v50, v42, *((_QWORD *)a2 + 10), (char *)this + 80);
    v52 = (void *)wil::details::WriteResultString<unsigned short const *>(
                    v51,
                    v42,
                    *((_QWORD *)a2 + 11),
                    (char *)this + 88);
    memset_0(v52, 0, v42 - (_QWORD)v52);
  }
}
