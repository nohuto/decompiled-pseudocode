/*
 * XREFs of ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180023634
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180023E70 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x1800219A4 (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x180023E24 (-HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampPkgCommitStateSummary(struct _HAM_PACKAGE *a1, union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  __int128 v4; // xmm1
  __int16 v5; // ax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  char UpdateMask; // al
  __int128 v12; // xmm0
  int v13; // ecx
  char v14; // r15
  __int128 v15; // xmm1
  DWORD v16; // r14d
  __int64 v17; // rax
  _DWORD *v18; // r9
  __int128 v19; // xmm0
  int v20; // ecx
  __int128 v21; // xmm1
  unsigned __int64 v22; // rsi
  __int64 **v23; // rdi
  _QWORD *Value; // rbx
  __int64 *i; // rbx
  int v26; // ecx
  _QWORD *v27; // rax
  _DWORD v29[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v30; // [rsp+30h] [rbp-D8h]
  __int128 v31; // [rsp+40h] [rbp-C8h]
  __int128 v32; // [rsp+50h] [rbp-B8h]
  __int128 v33; // [rsp+60h] [rbp-A8h]
  __int128 v34; // [rsp+70h] [rbp-98h]
  __int128 v35; // [rsp+80h] [rbp-88h]
  __int128 v36; // [rsp+90h] [rbp-78h]
  __int128 v37; // [rsp+A0h] [rbp-68h]
  __int16 v38; // [rsp+B0h] [rbp-58h]
  _BYTE v39[334]; // [rsp+B2h] [rbp-56h] BYREF
  __int128 v40; // [rsp+200h] [rbp+F8h]
  __int128 v41; // [rsp+210h] [rbp+108h]
  __int128 v42; // [rsp+220h] [rbp+118h]
  __int128 v43; // [rsp+230h] [rbp+128h]
  int v44; // [rsp+240h] [rbp+138h]
  int v45; // [rsp+244h] [rbp+13Ch]

  memset_0(v39, 0, sizeof(v39));
  v4 = *((_OWORD *)a1 + 7);
  v30 = *((_OWORD *)a1 + 6);
  v5 = *((_WORD *)a1 + 112);
  v6 = *((_OWORD *)a1 + 8);
  v31 = v4;
  v7 = *((_OWORD *)a1 + 9);
  v32 = v6;
  v8 = *((_OWORD *)a1 + 10);
  v33 = v7;
  v9 = *((_OWORD *)a1 + 11);
  v34 = v8;
  v10 = *((_OWORD *)a1 + 12);
  v35 = v9;
  v36 = v10;
  v37 = *((_OWORD *)a1 + 13);
  v38 = v5;
  v29[0] = 1;
  UpdateMask = HampStateSummaryGetUpdateMask((struct _HAM_PACKAGE *)((char *)a1 + 344), a2);
  v12 = *(_OWORD *)((char *)a1 + 228);
  v13 = *(_DWORD *)a2;
  v14 = UpdateMask;
  v15 = *(_OWORD *)((char *)a1 + 244);
  v16 = HampLockTrackerId;
  v45 = *((_DWORD *)a1 + 74);
  v17 = *((_QWORD *)a1 + 4);
  v40 = v12;
  *v18 = v13;
  v19 = *(_OWORD *)((char *)a1 + 260);
  v29[1] = v13;
  v20 = *((_DWORD *)a1 + 73);
  v41 = v15;
  v44 = v20;
  v21 = *(_OWORD *)((char *)a1 + 276);
  v42 = v19;
  v43 = v21;
  v22 = *(_QWORD *)(*(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v23 = (__int64 **)(v22 - 56);
  if ( v16 != -1 )
  {
    Value = TlsGetValue(v16);
    if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(v22 - 168);
  for ( i = *v23; i != (__int64 *)v23; i = (__int64 *)*i )
  {
    if ( (i[15] & 1) == 0 && (!v45 || (v26 = *((_DWORD *)i + 34)) == 0 || v45 == v26) )
    {
      if ( v29[0] )
      {
        if ( v29[0] != 1 || (i[18] & 2) != 0 )
        {
LABEL_12:
          if ( ((v14 & 1) == 0 || (i[18] & 4) != 0) && ((v14 & 2) == 0 || (i[18] & 8) != 0) )
          {
            if ( (i[15] & 2) != 0 )
              ((void (__fastcall *)(_DWORD *, __int64))i[13])(v29, i[14]);
            else
              RmpWnfPublishMessageToClientStateName(i + 12, v29, 0x220u, i[13]);
          }
        }
      }
      else if ( (i[18] & 1) != 0 )
      {
        goto LABEL_12;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v27 = TlsGetValue(HampLockTrackerId);
    if ( (*(_DWORD *)v27 & 0x400LL) == 0 )
      __int2c();
    if ( v27[11]-- == 1LL )
      *v27 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(v22 - 168);
}
