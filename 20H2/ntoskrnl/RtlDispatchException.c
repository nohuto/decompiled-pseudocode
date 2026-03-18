/*
 * XREFs of RtlDispatchException @ 0x1402E5630
 * Callers:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 * Callees:
 *     RtlpIsFrameInBounds @ 0x1402E5A60 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x1402E5A80 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x1402E6000 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x1402E7340 (RtlpGetStackLimitsEx.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlLookupExceptionHandler @ 0x14033002C (RtlLookupExceptionHandler.c)
 *     RtlpPopUserShadowStack @ 0x14033036C (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x140406380 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x140583530 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405836D0 (RtlpLogExceptionHandler.c)
 */

__int64 __fastcall RtlDispatchException(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r13
  __int64 v5; // r9
  int v6; // esi
  __int64 v7; // rcx
  BOOL v8; // r15d
  unsigned __int64 v9; // rax
  void *v10; // rsp
  __int64 v11; // rdi
  _DWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rbx
  int v23; // r8d
  unsigned int v24; // ecx
  bool v25; // zf
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // r9d
  int v34; // r10d
  int v35; // r9d
  unsigned __int64 v36; // rax
  char v37; // cl
  int v38; // esi
  __int64 v39; // rax
  char IsFrameInBounds; // al
  int v42; // [rsp+40h] [rbp+0h] BYREF
  int v43; // [rsp+44h] [rbp+4h] BYREF
  char v44; // [rsp+48h] [rbp+8h]
  char v45; // [rsp+49h] [rbp+9h]
  unsigned int v46; // [rsp+4Ch] [rbp+Ch] BYREF
  __int64 v47; // [rsp+50h] [rbp+10h] BYREF
  __int64 v48; // [rsp+58h] [rbp+18h] BYREF
  __int64 v49; // [rsp+60h] [rbp+20h] BYREF
  __int64 v50; // [rsp+68h] [rbp+28h] BYREF
  __int64 v51; // [rsp+70h] [rbp+30h] BYREF
  __int64 v52; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v53; // [rsp+80h] [rbp+40h]
  __int64 v54; // [rsp+88h] [rbp+48h]
  _QWORD v55[10]; // [rsp+90h] [rbp+50h] BYREF
  __int64 v56; // [rsp+E0h] [rbp+A0h]
  _DWORD v57[2]; // [rsp+F0h] [rbp+B0h] BYREF
  __int64 v58; // [rsp+F8h] [rbp+B8h]
  __int64 v59; // [rsp+100h] [rbp+C0h]
  _QWORD v60[25]; // [rsp+108h] [rbp+C8h] BYREF

  v56 = a2;
  v54 = a1;
  v46 = 0;
  v4 = 0;
  memset(v55, 0, sizeof(v55));
  v44 = 0;
  v47 = 0LL;
  v52 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  v43 = 0;
  memset(v60, 0, 0xC0uLL);
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v44 = 1;
    RtlpLogExceptionDispatch(a1, a2);
  }
  v6 = *(_DWORD *)(a1 + 4) & 1;
  v42 = v6;
  KeQueryCurrentStackInformation(&v43, &v49, &v48, v5);
  v7 = *(_QWORD *)(a2 + 152);
  v8 = v43 == 10;
  v43 = v8;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(v7, &v49, &v48) )
  {
    *(_DWORD *)(a1 + 4) = v6 | 8;
    return v4;
  }
  RtlGetExtendedContextLength2(1048587LL, &v46, 0LL);
  v9 = v46 + 15LL;
  if ( v9 <= v46 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(&v42, 1048587LL, &v50, 0LL);
  RtlpCopyContext(&v42, a2);
  v11 = *(_QWORD *)(a2 + 248);
  v53 = 0LL;
  v12 = v57;
  v57[0] = 0;
  v59 = 0LL;
  v57[1] = 0x1000000;
  v58 = -1LL;
  while ( 1 )
  {
    v13 = RtlLookupFunctionEntry(v11, &v51, v12);
    v17 = v13;
    if ( !v13 )
    {
      if ( v11 == *(_QWORD *)v55[9] )
        goto LABEL_52;
      v60[6] = *(_QWORD *)v55[9];
      v55[9] += 8LL;
      RtlpPopUserShadowStack(&v42, v14, v15, v16);
      goto LABEL_11;
    }
    v18 = v51;
    v19 = RtlVirtualUnwind(1, v51, v11, v13, (__int64)&v42, (__int64)&v52, (__int64)&v47, 0LL);
    v20 = v47;
    v21 = v19;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v49, v47, &v48) )
    {
      if ( (_BYTE)v43 == 1 )
      {
        LOBYTE(v43) = 2;
        RtlpGetStackLimitsEx(v20, &v49, &v48);
        v20 = v47;
      }
      else if ( !(_BYTE)v43 )
      {
        v38 = v42 | 8;
LABEL_53:
        v4 = 0;
        *(_DWORD *)(v54 + 4) = v38;
        return v4;
      }
    }
    if ( v21 )
      break;
LABEL_10:
    v8 = v43;
LABEL_11:
    v22 = v55[9];
    v11 = v60[6];
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v49, v55[9], &v48) )
    {
      if ( !v8 || (LOBYTE(v8) = 0, v43 = v8, !(unsigned __int8)RtlpGetStackLimitsEx(v22, &v49, &v48)) )
      {
LABEL_52:
        v38 = v42;
        goto LABEL_53;
      }
    }
  }
  v23 = v42;
  v24 = 0;
  v46 = 0;
  while ( 1 )
  {
    v25 = v44 == 0;
    v26 = v54;
    v27 = v52;
    v45 = 0;
    v55[0] = v11;
    *(_DWORD *)(v54 + 4) = v23;
    v55[1] = v18;
    v55[2] = v17;
    v55[3] = v20;
    v55[5] = &v42;
    v55[6] = v21;
    v55[7] = v27;
    v55[8] = v12;
    LODWORD(v55[9]) = v24;
    v50 = 0LL;
    if ( !v25 )
    {
      v39 = RtlpLogExceptionHandler(v26, &v42, v11, v21);
      v20 = v47;
      v50 = v39;
    }
    v28 = v20;
    v29 = v54;
    v30 = RtlpExecuteHandlerForException(v54, v28, v56, v55);
    if ( v50 )
      *(_DWORD *)(v50 + 1396) = v30;
    v31 = *(_DWORD *)(v29 + 4) & 1;
    v20 = v47;
    v23 = v31 | v42;
    v42 |= v31;
    if ( v53 == v47 )
    {
      v23 &= ~0x10u;
      v53 = 0LL;
      v42 = v23;
    }
    if ( v30 == 1 )
      goto LABEL_21;
    if ( !v30 )
      break;
    v32 = v30 - 2;
    if ( v32 )
    {
      if ( v32 != 1 )
        RtlRaiseStatus(3221225510LL);
      v11 = v55[0];
      v51 = v55[1];
      RtlpCopyContext(&v42, v55[5]);
      v50 = RtlVirtualUnwind(1, v34, v11, v33, (__int64)&v42, (__int64)&v52, (__int64)&v47, 0LL);
      v47 = v55[3];
      v17 = RtlLookupFunctionEntry(v11, &v51, v12);
      if ( v17 != v55[2]
        || (v18 = v51, (int)RtlLookupExceptionHandler(v17, v51, 2, v35, (__int64)&v50, (__int64)&v52) < 0)
        || (v21 = v50, v50 != v55[6])
        || v52 != v55[7] )
      {
        __fastfail(0x27u);
      }
      v20 = v47;
      v12 = (_DWORD *)v55[8];
      v46 = v55[9];
      v45 = 1;
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v49, v47, &v48) && (_BYTE)v43 == 1 )
      {
        RtlpGetStackLimitsEx(v20, &v49, &v48);
        v23 = v42;
        v20 = v47;
LABEL_45:
        LOBYTE(v43) = 0;
        goto LABEL_22;
      }
      v23 = v42;
    }
    else
    {
      v36 = v55[3];
      v23 |= 0x10u;
      v37 = 1;
      v42 = v23;
      if ( (_BYTE)v43 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v49, v55[3], &v48);
        v23 = v42;
        v37 = IsFrameInBounds;
        v36 = v55[3];
      }
      if ( v36 > v53 || !v37 )
        v53 = v36;
    }
LABEL_21:
    if ( (_BYTE)v43 == 2 )
      goto LABEL_45;
LABEL_22:
    v24 = v46;
    if ( !v45 )
      goto LABEL_10;
  }
  if ( (v23 & 1) != 0 )
    RtlRaiseStatus(3221225509LL);
  return 1;
}
