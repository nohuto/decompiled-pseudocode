/*
 * XREFs of RtlDispatchException @ 0x14032BD60
 * Callers:
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     RtlLookupExceptionHandler @ 0x14032187C (RtlLookupExceptionHandler.c)
 *     RtlpPopUserShadowStack @ 0x140321BBC (RtlpPopUserShadowStack.c)
 *     RtlpGetStackLimitsEx @ 0x14032BC70 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x14032BCA0 (KeQueryCurrentStackInformation.c)
 *     RtlpIsFrameInBounds @ 0x14032C190 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x14032C1B0 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x14032C730 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14032E660 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x14032EEA0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14032F8A0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1403FECF0 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x14057F4C0 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x14057F660 (RtlpLogExceptionHandler.c)
 */

__int64 __fastcall RtlDispatchException(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r13
  int v5; // esi
  unsigned __int64 v6; // rcx
  BOOL v7; // r15d
  unsigned __int64 v8; // rax
  void *v9; // rsp
  __int64 v10; // rdi
  _DWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  int v19; // r8d
  unsigned int v20; // ecx
  bool v21; // zf
  __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r15
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // r9d
  int v30; // r10d
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  char v33; // cl
  int v34; // esi
  __int64 v35; // rax
  char IsFrameInBounds; // al
  int v38; // [rsp+40h] [rbp+0h] BYREF
  int v39; // [rsp+44h] [rbp+4h] BYREF
  char v40; // [rsp+48h] [rbp+8h]
  char v41; // [rsp+49h] [rbp+9h]
  unsigned int v42; // [rsp+4Ch] [rbp+Ch] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp+18h] BYREF
  char *v45; // [rsp+60h] [rbp+20h] BYREF
  __int64 v46; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp+30h] BYREF
  __int64 v48; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp+40h]
  __int64 v50; // [rsp+88h] [rbp+48h]
  _QWORD v51[10]; // [rsp+90h] [rbp+50h] BYREF
  __int64 v52; // [rsp+E0h] [rbp+A0h]
  _DWORD v53[2]; // [rsp+F0h] [rbp+B0h] BYREF
  __int64 v54; // [rsp+F8h] [rbp+B8h]
  __int64 v55; // [rsp+100h] [rbp+C0h]
  _QWORD v56[25]; // [rsp+108h] [rbp+C8h] BYREF

  v52 = a2;
  v50 = a1;
  v42 = 0;
  v4 = 0;
  memset(v51, 0, sizeof(v51));
  v40 = 0;
  v43 = 0LL;
  v48 = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  v39 = 0;
  memset(v56, 0, 0xC0uLL);
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v40 = 1;
    RtlpLogExceptionDispatch(a1, a2);
  }
  v5 = *(_DWORD *)(a1 + 4) & 1;
  v38 = v5;
  KeQueryCurrentStackInformation(&v39, &v45, &v44);
  v6 = *(_QWORD *)(a2 + 152);
  v7 = v39 == 10;
  v39 = v7;
  if ( !RtlpGetStackLimitsEx(v6, &v45, &v44) )
  {
    *(_DWORD *)(a1 + 4) = v5 | 8;
    return v4;
  }
  RtlGetExtendedContextLength2(1048587LL, &v42, 0LL);
  v8 = v42 + 15LL;
  if ( v8 <= v42 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(&v38, 1048587LL, &v46, 0LL);
  RtlpCopyContext(&v38, a2);
  v10 = *(_QWORD *)(a2 + 248);
  v49 = 0LL;
  v11 = v53;
  v53[0] = 0;
  v55 = 0LL;
  v53[1] = 0x1000000;
  v54 = -1LL;
  while ( 1 )
  {
    v12 = RtlLookupFunctionEntry(v10, &v47, v11);
    v13 = v12;
    if ( !v12 )
    {
      if ( v10 == *(_QWORD *)v51[9] )
        goto LABEL_52;
      v56[6] = *(_QWORD *)v51[9];
      v51[9] += 8LL;
      RtlpPopUserShadowStack((__int64)&v38);
      goto LABEL_11;
    }
    v14 = v47;
    v15 = RtlVirtualUnwind(1, v47, v10, v12, (__int64)&v38, (__int64)&v48, (__int64)&v43, 0LL);
    v16 = v43;
    v17 = v15;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v45, v43, &v44) )
    {
      if ( (_BYTE)v39 == 1 )
      {
        LOBYTE(v39) = 2;
        RtlpGetStackLimitsEx(v16, &v45, &v44);
        v16 = v43;
      }
      else if ( !(_BYTE)v39 )
      {
        v34 = v38 | 8;
LABEL_53:
        v4 = 0;
        *(_DWORD *)(v50 + 4) = v34;
        return v4;
      }
    }
    if ( v17 )
      break;
LABEL_10:
    v7 = v39;
LABEL_11:
    v18 = v51[9];
    v10 = v56[6];
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v45, v51[9], &v44) )
    {
      if ( !v7 || (LOBYTE(v7) = 0, v39 = v7, !RtlpGetStackLimitsEx(v18, &v45, &v44)) )
      {
LABEL_52:
        v34 = v38;
        goto LABEL_53;
      }
    }
  }
  v19 = v38;
  v20 = 0;
  v42 = 0;
  while ( 1 )
  {
    v21 = v40 == 0;
    v22 = v50;
    v23 = v48;
    v41 = 0;
    v51[0] = v10;
    *(_DWORD *)(v50 + 4) = v19;
    v51[1] = v14;
    v51[2] = v13;
    v51[3] = v16;
    v51[5] = &v38;
    v51[6] = v17;
    v51[7] = v23;
    v51[8] = v11;
    LODWORD(v51[9]) = v20;
    v46 = 0LL;
    if ( !v21 )
    {
      v35 = RtlpLogExceptionHandler(v22, &v38, v10, v17);
      v16 = v43;
      v46 = v35;
    }
    v24 = v16;
    v25 = v50;
    v26 = RtlpExecuteHandlerForException(v50, v24, v52, v51);
    if ( v46 )
      *(_DWORD *)(v46 + 1396) = v26;
    v27 = *(_DWORD *)(v25 + 4) & 1;
    v16 = v43;
    v19 = v27 | v38;
    v38 |= v27;
    if ( v49 == v43 )
    {
      v19 &= ~0x10u;
      v49 = 0LL;
      v38 = v19;
    }
    if ( v26 == 1 )
      goto LABEL_21;
    if ( !v26 )
      break;
    v28 = v26 - 2;
    if ( v28 )
    {
      if ( v28 != 1 )
        RtlRaiseStatus(0xC0000026);
      v10 = v51[0];
      v47 = v51[1];
      RtlpCopyContext(&v38, v51[5]);
      v46 = RtlVirtualUnwind(1, v30, v10, v29, (__int64)&v38, (__int64)&v48, (__int64)&v43, 0LL);
      v43 = v51[3];
      v13 = RtlLookupFunctionEntry(v10, &v47, v11);
      if ( v13 != v51[2]
        || (v14 = v47, (int)RtlLookupExceptionHandler(v13, v47, 2u, v31, &v46, &v48) < 0)
        || (v17 = v46, v46 != v51[6])
        || v48 != v51[7] )
      {
        __fastfail(0x27u);
      }
      v16 = v43;
      v11 = (_DWORD *)v51[8];
      v42 = v51[9];
      v41 = 1;
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v45, v43, &v44) && (_BYTE)v39 == 1 )
      {
        RtlpGetStackLimitsEx(v16, &v45, &v44);
        v19 = v38;
        v16 = v43;
LABEL_45:
        LOBYTE(v39) = 0;
        goto LABEL_22;
      }
      v19 = v38;
    }
    else
    {
      v32 = v51[3];
      v19 |= 0x10u;
      v33 = 1;
      v38 = v19;
      if ( (_BYTE)v39 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v45, v51[3], &v44);
        v19 = v38;
        v33 = IsFrameInBounds;
        v32 = v51[3];
      }
      if ( v32 > v49 || !v33 )
        v49 = v32;
    }
LABEL_21:
    if ( (_BYTE)v39 == 2 )
      goto LABEL_45;
LABEL_22:
    v20 = v42;
    if ( !v41 )
      goto LABEL_10;
  }
  if ( (v19 & 1) != 0 )
    RtlRaiseStatus(0xC0000025);
  return 1;
}
