/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x14087DD04
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x14086B330 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x140351210 (KeEnterCriticalRegion.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6968 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6D4C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1403CE464 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1405CFC30 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CAA94 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpMapSection @ 0x1407D24AC (CmFcpMapSection.c)
 *     CmSiRWLockReleaseExclusive @ 0x1407D3524 (CmSiRWLockReleaseExclusive.c)
 *     CmFcpCleanupSectionState @ 0x1407D4AC8 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x1407D4AE8 (CmFcpUnmapSection.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1407D5458 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmFcpIncrementChangeStamp @ 0x1407D55FC (CmFcpIncrementChangeStamp.c)
 *     CmFcpManagerCreateSection @ 0x14087E570 (CmFcpManagerCreateSection.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E7C4 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x14091A4E4 (RtlpFcUpdateFeatureConfiguration.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureConfigurations(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r15
  NTSTATUS v12; // ebx
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdx
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v30[2]; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  _QWORD v37[10]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]

  v29 = 0LL;
  v35 = 0LL;
  v5 = a3;
  v32 = a4;
  v36 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  memset(v37, 0, 0x48uLL);
  v31 = 0x100000000LL;
  v30[0] = 0;
  v7 = *((unsigned int *)&v31 + v5);
  v30[1] = 1;
  v30[0] = v30[v5];
  v8 = 3 * v7;
  v31 = 3 * v7;
  v9 = &v37[3 * v7];
  KeEnterCriticalRegion();
  CmpVolumeManagerLockContextListExclusive((ULONG_PTR)&stru_140C480F0);
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C48150, (__int64)&v29, &v35);
  v10 = v35;
  v11 = 3LL;
  if ( a2 && v29 != a2 )
  {
    v12 = -1073741823;
    goto LABEL_4;
  }
  v13 = CmFcpIncrementChangeStamp(v29);
  v14 = v32;
  v15 = v13;
  v16 = *(_QWORD *)(v10 + 8 * v8 + 8);
  v29 = 0LL;
  *(_QWORD *)&v33 = v13;
  *v9 = v13;
  updated = RtlpFcUpdateFeatureConfiguration(v16, v17, v14, a5, 0LL, &v29);
  v12 = updated;
  if ( updated >= 0 )
  {
    v20 = v36;
    goto LABEL_18;
  }
  if ( updated == -2147483643 )
  {
    v12 = CmFcpManagerCreateSection(v29, v13, CmFcSystemManager[0], &v33);
    if ( v12 >= 0 )
    {
      v12 = CmFcpMapSection(&v33, v9);
      if ( v12 >= 0 )
      {
        v12 = RtlpFcUpdateFeatureConfiguration(*(_QWORD *)(v10 + 8 * v31 + 8), v19, v32, a5, v9[1], v9 + 2);
        if ( v12 >= 0 )
        {
          if ( (int)RtlpFcValidateFeatureConfigurationBuffer((unsigned int *)v9[1], v9[2]) < 0 )
          {
            if ( (unsigned int)dword_140C01988 > 5 && tlgKeywordOn((__int64)&dword_140C01988, 0x400000000001LL) )
            {
              v41 = 0;
              v39 = &v32;
              v32 = 0x1000000LL;
              v40 = 8;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C01988,
                (unsigned __int8 *)&dword_140023C74,
                0LL,
                0LL,
                3u,
                &v38);
            }
            v12 = -1073741595;
            goto LABEL_4;
          }
          v20 = v34;
          v15 = v33;
LABEL_18:
          RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C48150, v10);
          CmpVolumeManagerLockContextListExclusive((ULONG_PTR)&RunOnce);
          v21 = 3LL * v30[0];
          v22 = qword_140C48108[3 * v30[0]];
          qword_140C48108[v21] = v15;
          v23 = qword_140C48108[v21 + 1];
          *(_QWORD *)&v33 = v22;
          qword_140C48108[v21 + 1] = *((_QWORD *)&v33 + 1);
          v24 = qword_140C48108[v21 + 2];
          qword_140C48108[v21 + 2] = v20;
          *((_QWORD *)&v33 + 1) = v23;
          v34 = v24;
          RtlpFcBufferManagerUpdateBuffers(qword_140C48150, v13, (__int64)v37);
          RtlpFcWriteHighLowHigh((__int64)&qword_140C480F8, v13);
          RtlpFcWriteHighLowHigh(0xFFFFF78000000710uLL, v25);
          CmSiRWLockReleaseExclusive((volatile signed __int64 *)&RunOnce);
          CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140C480F0);
          CmFcpManagerPublishChangeNotifications(v26, v13);
          v12 = 0;
          goto LABEL_19;
        }
      }
    }
  }
LABEL_4:
  CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140C480F0);
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C48150, v10);
LABEL_19:
  v27 = v37;
  do
  {
    CmFcpUnmapSection((__int64)v27);
    v27 += 3;
    --v11;
  }
  while ( v11 );
  CmFcpCleanupSectionState((__int64)&v33);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
