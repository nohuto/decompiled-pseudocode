/*
 * XREFs of RtlUnwindEx @ 0x1402E5AF0
 * Callers:
 *     RtlUnwind @ 0x14032EAB0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403CFB20 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1403F7970 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x14040EE80 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1402265A0 (RtlpGetStackLimits.c)
 *     RtlpxVirtualUnwind @ 0x140228310 (RtlpxVirtualUnwind.c)
 *     RtlpIsFrameInBounds @ 0x1402E5A60 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x1402E5A80 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x1402E6000 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x1402E7340 (RtlpGetStackLimitsEx.c)
 *     RtlGuardRestoreContext @ 0x1402E7368 (RtlGuardRestoreContext.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpPopUserShadowStack @ 0x14033036C (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403FAE50 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x140405540 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140406400 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall RtlUnwindEx(unsigned __int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rbx
  __int64 v10; // r9
  char v11; // di
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int *v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  unsigned __int64 v22; // rbx
  __int64 v23; // r13
  unsigned int v24; // ecx
  int v25; // eax
  _QWORD *v26; // r10
  int v27; // edx
  int v28; // edx
  int *v29; // rax
  int v30; // et0
  char v31; // al
  int *v32; // rax
  _DWORD *v33; // r15
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r10
  __int64 v38; // rax
  bool v39; // bl
  _QWORD *v40; // rcx
  __int64 v41; // [rsp+20h] [rbp-30h]
  __int64 *v42; // [rsp+28h] [rbp-28h]
  unsigned __int64 *v43; // [rsp+30h] [rbp-20h]
  __int64 v44; // [rsp+38h] [rbp-18h]
  int v45; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v46; // [rsp+54h] [rbp+4h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp+8h] BYREF
  int *v48; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp+18h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp+20h] BYREF
  __int64 v51; // [rsp+78h] [rbp+28h] BYREF
  __int64 v52; // [rsp+80h] [rbp+30h] BYREF
  __int64 v53; // [rsp+88h] [rbp+38h] BYREF
  _QWORD *v54; // [rsp+90h] [rbp+40h]
  __int64 v55; // [rsp+98h] [rbp+48h]
  __int64 v56; // [rsp+A0h] [rbp+50h]
  __int64 v57; // [rsp+A8h] [rbp+58h]
  __int64 v58; // [rsp+B0h] [rbp+60h]
  _QWORD v59[10]; // [rsp+C0h] [rbp+70h] BYREF
  int *v60; // [rsp+110h] [rbp+C0h]
  __int64 v61; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v62; // [rsp+120h] [rbp+D0h]
  _QWORD v63[20]; // [rsp+130h] [rbp+E0h] BYREF

  v6 = a5;
  v8 = a6;
  v58 = a2;
  v54 = a3;
  v57 = a4;
  v56 = a5;
  v55 = a6;
  memset(v59, 0, sizeof(v59));
  memset(v63, 0, 0x98uLL);
  v53 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  v46 = 0;
  v49 = 0LL;
  v45 = 0;
  KeQueryCurrentStackInformation(&v45, &v49, &v50, v10);
  v11 = v45 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v49, (__int64)&v50) )
LABEL_63:
    RtlRaiseStatus(3221225512LL);
  RtlGetExtendedContextLength2(1048587LL, &v46, 0LL);
  v12 = v46 + 15LL;
  if ( v12 <= v46 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v60 = &v45;
  RtlInitializeExtendedContext2(&v45, 1048587LL, &v48, 0LL);
  v48 = &v45;
  v16 = &v45;
  RtlCaptureContext2(a5);
  if ( a6 )
    *(_BYTE *)(a6 + 6) = 1;
  if ( !a3 )
  {
    v38 = *(_QWORD *)(a5 + 248);
    v54 = v63;
    v63[2] = v38;
    LODWORD(v63[0]) = -1073741785;
    v63[1] = 0LL;
    LODWORD(v63[3]) = 0;
  }
  v45 = 2;
  if ( !a1 )
    v45 = 6;
  v47 = 0LL;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v6 + 248);
    v21 = RtlLookupFunctionEntry(v17, &v52, v8);
    if ( v21 )
    {
      RtlpCopyContext(v16, v6);
      v51 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      RtlpxVirtualUnwind(2, v52, v17, v21, v16, 0LL, &v53, &v47, &v51, &v61);
      v22 = v47;
      v23 = v51;
      if ( (v47 & 7) != 0 || v47 < v49 || v47 >= v50 )
      {
        if ( v11 != 1 )
          goto LABEL_63;
        v11 = 2;
        if ( !(unsigned __int8)RtlpGetStackLimitsEx(v47, &v49, &v50) )
          goto LABEL_63;
        v22 = v47;
      }
      if ( a1 && !v11 && a1 < v22 )
        goto LABEL_63;
      if ( v23 )
      {
        v24 = 0;
        v59[4] = v58;
        v25 = v45;
        v46 = 0;
        while ( 1 )
        {
          if ( a1 == v22 )
          {
            v25 |= 0x20u;
            v45 = v25;
          }
          v26 = v54;
          *((_DWORD *)v54 + 1) = v25;
          *(_QWORD *)(v6 + 120) = v57;
          v59[1] = v52;
          v59[7] = v53;
          v59[8] = v55;
          v59[0] = v17;
          v59[2] = v21;
          v59[3] = v47;
          v59[5] = v6;
          v59[6] = v23;
          LODWORD(v59[9]) = v24;
          v39 = (*(_DWORD *)(v6 + 48) & 0x100040) == 1048640;
          v27 = RtlpExecuteHandlerForUnwind(v26, v47, v6, v59, v41, v42, v43, v44);
          if ( !v39 && (*(_DWORD *)(v6 + 48) & 0x100040) == 0x100040 )
            *(_DWORD *)(v6 + 48) &= ~0x40u;
          v45 &= 0xFFFFFF9F;
          v28 = v27 - 1;
          if ( v28 )
          {
            if ( v28 != 2 )
              RtlRaiseStatus(3221225510LL);
            v17 = v59[0];
            v21 = v59[2];
            v52 = v59[1];
            RtlpCopyContext(v56, v59[5]);
            v48 = v60;
            v6 = v35;
            RtlpCopyContext(v60, v35);
            v44 = 0LL;
            v43 = &v47;
            v42 = &v53;
            v41 = v36;
            v23 = RtlVirtualUnwind(2, v37, v17);
            if ( v23 != v59[6] || (v22 = v47, v47 != v59[3]) || v53 != v59[7] )
              __fastfail(0x27u);
            v45 |= 0x40u;
            v55 = v59[8];
            v46 = v59[9];
            if ( RtlpIsFrameInBounds(&v49, v47, &v50) || v11 != 1 )
              goto LABEL_30;
            v11 = 2;
            RtlpGetStackLimitsEx(v22, &v49, &v50);
          }
          else
          {
            if ( v47 != a1 )
            {
              v29 = (int *)v6;
              v6 = (__int64)v48;
              v48 = v29;
            }
            v30 = _mm_getcsr();
            LODWORD(v51) = v30;
            *(_DWORD *)(v6 + 52) = v30;
            *(_DWORD *)(v6 + 280) = v30;
          }
          v22 = v47;
LABEL_30:
          v25 = v45;
          v24 = v46;
          if ( (v45 & 0x40) == 0 )
            goto LABEL_31;
        }
      }
      if ( v22 == a1 )
      {
LABEL_31:
        v16 = v48;
      }
      else
      {
        v32 = (int *)v6;
        v6 = (__int64)v48;
        v16 = v32;
        v48 = v32;
      }
    }
    else
    {
      v40 = *(_QWORD **)(v6 + 152);
      *(_QWORD *)(v6 + 248) = *v40;
      *(_QWORD *)(v6 + 152) = v40 + 1;
      RtlpPopUserShadowStack(v6, v18, v19, v20);
      v22 = v47;
    }
    v31 = 0;
    if ( v11 != 2 )
      v31 = v11;
    if ( (v22 & 7) != 0 || v22 < v49 || v22 >= v50 )
      break;
    if ( v22 == a1 )
      goto LABEL_41;
    v8 = v55;
    v11 = v31;
  }
  if ( v22 == a1 )
  {
LABEL_41:
    v33 = v54;
    *(_QWORD *)(v6 + 120) = v57;
    if ( *v33 != -2147483607 )
    {
      *(_QWORD *)(v6 + 248) = v58;
      if ( *v33 != -2147483610 )
        *v33 = -1073741785;
    }
    return RtlGuardRestoreContext(v6, v33);
  }
  else
  {
    if ( v17 == *(_QWORD *)(v6 + 248) )
      RtlRaiseStatus(3221225727LL);
    return ZwRaiseException(v54, v6, 0LL);
  }
}
