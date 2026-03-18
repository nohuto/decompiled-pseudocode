/*
 * XREFs of RtlUnwindEx @ 0x1402E70E0
 * Callers:
 *     RtlUnwind @ 0x14035E150 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403CCE90 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1403F2DC0 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x140408440 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14029AE20 (RtlpGetStackLimits.c)
 *     RtlGuardRestoreContext @ 0x1402E6944 (RtlGuardRestoreContext.c)
 *     RtlpGetStackLimitsEx @ 0x1402E6B30 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x1402E6B60 (KeQueryCurrentStackInformation.c)
 *     RtlpIsFrameInBounds @ 0x1402E7050 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x1402E7070 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x1402E75F0 (RtlpCopyContext.c)
 *     RtlpxVirtualUnwind @ 0x1402E88B0 (RtlpxVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x1402E9520 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     RtlpPopUserShadowStack @ 0x14035F56C (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403F6280 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1403FF270 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140400000 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall RtlUnwindEx(unsigned __int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rbx
  char v10; // di
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  int *v15; // r13
  __int64 v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  unsigned int v20; // ecx
  int v21; // eax
  _QWORD *v22; // r10
  int v23; // edx
  int v24; // edx
  int *v25; // rax
  int v26; // et0
  char v27; // al
  int *v28; // rax
  _DWORD *v29; // r15
  __int64 v31; // r9
  __int64 v32; // r8
  int v33; // r10d
  __int64 v34; // rax
  bool v35; // bl
  _QWORD *v36; // rcx
  int v37; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v38; // [rsp+54h] [rbp+4h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp+8h] BYREF
  int *v40; // [rsp+60h] [rbp+10h] BYREF
  char *v41; // [rsp+68h] [rbp+18h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp+20h] BYREF
  __int64 v43; // [rsp+78h] [rbp+28h] BYREF
  __int64 v44; // [rsp+80h] [rbp+30h] BYREF
  __int64 v45; // [rsp+88h] [rbp+38h] BYREF
  _QWORD *v46; // [rsp+90h] [rbp+40h]
  __int64 v47; // [rsp+98h] [rbp+48h]
  __int64 v48; // [rsp+A0h] [rbp+50h]
  __int64 v49; // [rsp+A8h] [rbp+58h]
  __int64 v50; // [rsp+B0h] [rbp+60h]
  _QWORD v51[10]; // [rsp+C0h] [rbp+70h] BYREF
  int *v52; // [rsp+110h] [rbp+C0h]
  __int64 v53; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v54; // [rsp+120h] [rbp+D0h]
  _QWORD v55[20]; // [rsp+130h] [rbp+E0h] BYREF

  v6 = a5;
  v8 = a6;
  v50 = a2;
  v46 = a3;
  v49 = a4;
  v48 = a5;
  v47 = a6;
  memset(v51, 0, sizeof(v51));
  memset(v55, 0, 0x98uLL);
  v45 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v38 = 0;
  v41 = 0LL;
  v37 = 0;
  KeQueryCurrentStackInformation(&v37, &v41, &v42);
  v10 = v37 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v41, (__int64)&v42) )
LABEL_63:
    RtlRaiseStatus(3221225512LL);
  RtlGetExtendedContextLength2(1048587LL, &v38, 0LL);
  v11 = v38 + 15LL;
  if ( v11 <= v38 )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = alloca(v12);
  v14 = alloca(v12);
  v52 = &v37;
  RtlInitializeExtendedContext2(&v37, 1048587LL, &v40, 0LL);
  v40 = &v37;
  v15 = &v37;
  RtlCaptureContext2(a5);
  if ( a6 )
    *(_BYTE *)(a6 + 6) = 1;
  if ( !a3 )
  {
    v34 = *(_QWORD *)(a5 + 248);
    v46 = v55;
    v55[2] = v34;
    LODWORD(v55[0]) = -1073741785;
    v55[1] = 0LL;
    LODWORD(v55[3]) = 0;
  }
  v37 = 2;
  if ( !a1 )
    v37 = 6;
  v39 = 0LL;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v6 + 248);
    v17 = RtlLookupFunctionEntry(v16, &v44, v8);
    if ( v17 )
    {
      RtlpCopyContext(v15, v6);
      v43 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      RtlpxVirtualUnwind(
        2,
        v44,
        v16,
        v17,
        (__int64)v15,
        0LL,
        (__int64)&v45,
        (__int64)&v39,
        (__int64)&v43,
        (__int64)&v53);
      v18 = v39;
      v19 = v43;
      if ( (v39 & 7) != 0 || v39 < (unsigned __int64)v41 || v39 >= v42 )
      {
        if ( v10 != 1 )
          goto LABEL_63;
        v10 = 2;
        if ( !RtlpGetStackLimitsEx(v39, &v41, &v42) )
          goto LABEL_63;
        v18 = v39;
      }
      if ( a1 && !v10 && a1 < v18 )
        goto LABEL_63;
      if ( v19 )
      {
        v20 = 0;
        v51[4] = v50;
        v21 = v37;
        v38 = 0;
        while ( 1 )
        {
          if ( a1 == v18 )
          {
            v21 |= 0x20u;
            v37 = v21;
          }
          v22 = v46;
          *((_DWORD *)v46 + 1) = v21;
          *(_QWORD *)(v6 + 120) = v49;
          v51[1] = v44;
          v51[7] = v45;
          v51[8] = v47;
          v51[0] = v16;
          v51[2] = v17;
          v51[3] = v39;
          v51[5] = v6;
          v51[6] = v19;
          LODWORD(v51[9]) = v20;
          v35 = (*(_DWORD *)(v6 + 48) & 0x100040) == 1048640;
          v23 = RtlpExecuteHandlerForUnwind(v22, v39, v6, v51);
          if ( !v35 && (*(_DWORD *)(v6 + 48) & 0x100040) == 0x100040 )
            *(_DWORD *)(v6 + 48) &= ~0x40u;
          v37 &= 0xFFFFFF9F;
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 != 2 )
              RtlRaiseStatus(3221225510LL);
            v16 = v51[0];
            v17 = v51[2];
            v44 = v51[1];
            RtlpCopyContext(v48, v51[5]);
            v40 = v52;
            v6 = v31;
            RtlpCopyContext(v52, v31);
            v19 = RtlVirtualUnwind(2, v33, v16, v17, v32, (__int64)&v45, (__int64)&v39, 0LL);
            if ( v19 != v51[6] || (v18 = v39, v39 != v51[3]) || v45 != v51[7] )
              __fastfail(0x27u);
            v37 |= 0x40u;
            v47 = v51[8];
            v38 = v51[9];
            if ( RtlpIsFrameInBounds((unsigned __int64 *)&v41, v39, &v42) || v10 != 1 )
              goto LABEL_30;
            v10 = 2;
            RtlpGetStackLimitsEx(v18, &v41, &v42);
          }
          else
          {
            if ( v39 != a1 )
            {
              v25 = (int *)v6;
              v6 = (__int64)v40;
              v40 = v25;
            }
            v26 = _mm_getcsr();
            LODWORD(v43) = v26;
            *(_DWORD *)(v6 + 52) = v26;
            *(_DWORD *)(v6 + 280) = v26;
          }
          v18 = v39;
LABEL_30:
          v21 = v37;
          v20 = v38;
          if ( (v37 & 0x40) == 0 )
            goto LABEL_31;
        }
      }
      if ( v18 == a1 )
      {
LABEL_31:
        v15 = v40;
      }
      else
      {
        v28 = (int *)v6;
        v6 = (__int64)v40;
        v15 = v28;
        v40 = v28;
      }
    }
    else
    {
      v36 = *(_QWORD **)(v6 + 152);
      *(_QWORD *)(v6 + 248) = *v36;
      *(_QWORD *)(v6 + 152) = v36 + 1;
      RtlpPopUserShadowStack(v6);
      v18 = v39;
    }
    v27 = 0;
    if ( v10 != 2 )
      v27 = v10;
    if ( (v18 & 7) != 0 || v18 < (unsigned __int64)v41 || v18 >= v42 )
      break;
    if ( v18 == a1 )
      goto LABEL_41;
    v8 = v47;
    v10 = v27;
  }
  if ( v18 == a1 )
  {
LABEL_41:
    v29 = v46;
    *(_QWORD *)(v6 + 120) = v49;
    if ( *v29 != -2147483607 )
    {
      *(_QWORD *)(v6 + 248) = v50;
      if ( *v29 != -2147483610 )
        *v29 = -1073741785;
    }
    return RtlGuardRestoreContext(v6, (__int64)v29);
  }
  else
  {
    if ( v16 == *(_QWORD *)(v6 + 248) )
      RtlRaiseStatus(3221225727LL);
    return ZwRaiseException(v46, v6, 0LL);
  }
}
