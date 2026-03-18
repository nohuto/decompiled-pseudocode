/*
 * XREFs of sub_1C00071D0 @ 0x1C00071D0
 * Callers:
 *     sub_1C0007F60 @ 0x1C0007F60 (sub_1C0007F60.c)
 * Callees:
 *     sub_1C00071A0 @ 0x1C00071A0 (sub_1C00071A0.c)
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001C160 @ 0x1C001C160 (sub_1C001C160.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0033898 @ 0x1C0033898 (sub_1C0033898.c)
 *     sub_1C00348FC @ 0x1C00348FC (sub_1C00348FC.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00071D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r13d
  int v29; // edx
  int v30; // eax
  int v31; // r15d
  int v32; // r8d
  _DWORD *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 result; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // [rsp+50h] [rbp-41h]
  int v45; // [rsp+68h] [rbp-29h] BYREF
  __int64 v46; // [rsp+70h] [rbp-21h] BYREF
  __int64 v47; // [rsp+78h] [rbp-19h]
  _OWORD v48[3]; // [rsp+80h] [rbp-11h] BYREF
  __int64 v49; // [rsp+B0h] [rbp+1Fh]
  int v51; // [rsp+110h] [rbp+7Fh] BYREF
  int v52; // [rsp+114h] [rbp+83h]

  v52 = HIDWORD(a4);
  v4 = a3;
  v51 = 0;
  v45 = 0;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  v47 = v7;
  if ( !v7 )
    goto LABEL_101;
  if ( *(_DWORD *)v7 != 541218120 )
    sub_1C002DC78(a1, v7);
  if ( !v4 || *(_DWORD *)a2 != 1146120296 )
    sub_1C002DC78(a1, a1);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 1466458992;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 4);
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E55C(DeviceObject->DeviceExtension, v8, (unsigned int)&unk_1C0062098, 98, (__int64)&unk_1C0062098, v8, v4);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v10 = *(_DWORD **)(a1 + 64);
    v11 = *(unsigned __int16 *)(a2 + 4);
    v46 = 0LL;
    if ( !v10 )
LABEL_99:
      sub_1C002DC78(a1, 0LL);
    if ( *v10 != 541218120 )
      sub_1C002DC78(a1, v10);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(
        DeviceObject->DeviceExtension,
        (_DWORD)v10,
        (unsigned int)&unk_1C0062098,
        74,
        (__int64)&unk_1C0062098,
        v11,
        v4);
    if ( (dword_1C006B268 & 0x200) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 909198672;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v11;
      }
    }
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1413771367;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v11;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
    if ( (_WORD)v11 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( !v16 )
        goto LABEL_99;
      if ( *(_DWORD *)v16 != 541218120 )
        sub_1C002DC78(a1, v16);
      if ( (unsigned __int16)v11 <= *(unsigned __int8 *)(v16 + 2938) )
      {
        v17 = *(_QWORD *)(v16 + 3056);
        if ( v17 )
        {
          v18 = 2928 * v11 + v17 - 2928;
          if ( (dword_1C006B268 & 8) != 0 )
          {
            v19 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v19 = 1044672615;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 16) = v11;
            *(_QWORD *)(v19 + 24) = v18;
          }
          if ( v18 )
            v46 = sub_1C00071A0(a1, v18, 16, v4, (__int64)&v46);
        }
      }
    }
    if ( !v46 )
      goto LABEL_63;
    *(_QWORD *)(a2 + 376) = v4;
    v20 = v46;
    *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
    v21 = v20 - 16;
    v22 = *(unsigned __int16 *)(a2 + 4);
    if ( (dword_1C006B268 & 0x200) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 1313891184;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
      if ( (dword_1C006B268 & 0x200) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 1145332592;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = a2;
          *(_QWORD *)(v26 + 24) = v21;
        }
      }
    }
    v27 = *(_DWORD *)(v21 + 8);
    if ( (v27 & 0x16) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
      v27 = *(_DWORD *)(v21 + 8);
    }
    if ( (v27 & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    v28 = sub_1C000A080(a1, *(unsigned __int16 *)(a2 + 4), &v51, &v45);
    if ( v28 >> 30 == 3 )
      v51 = 0;
    v29 = *(_DWORD *)(v21 + 48);
    if ( v28 >> 30 != 3 )
    {
      if ( v29 == 2 )
        v30 = sub_1C0033898(a1, a2, v21, &v51);
      else
        v30 = sub_1C0008BD0(a1, a2, v21, &v51);
      v31 = v30;
      goto LABEL_49;
    }
    v49 = 0LL;
    memset(v48, 0, sizeof(v48));
    if ( v29 == 2 )
    {
      sub_1C0033898(a1, a2, v21, &v51);
    }
    else if ( v29 == 1 )
    {
      sub_1C00348FC(a1, a2, *(_QWORD *)(v21 + 8), v4, 1, *(_QWORD *)(v21 + 40));
      goto LABEL_87;
    }
    sub_1C00348FC(a1, a2, *(_QWORD *)(v21 + 8), v4, 0, 0LL);
LABEL_87:
    WORD2(v48[0]) = *(_WORD *)(a2 + 4);
    LODWORD(v48[0]) = 1145332592;
    DWORD2(v48[0]) = 0x80000;
    v31 = sub_1C0008BD0(a1, a2, v48, &v51);
    if ( !(unsigned __int8)sub_1C001CEB4(v28) && !*(_BYTE *)(v47 + 5268) )
    {
      LOBYTE(v44) = 1;
      sub_1C004A608(a1, *(unsigned __int16 *)(a2 + 4), 1, v21, 56, v28, v45, (__int64)aPchangeC, 6038, v44);
    }
LABEL_49:
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v21 + 48) == 1 )
      sub_1C00171A0(a1, *(_QWORD *)(v21 + 40), v21, 1230065731LL);
    ExFreePoolWithTag((PVOID)v21, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v31 == 5 )
    {
      LODWORD(v4) = a3;
      sub_1C001C160(a1, a2, a3);
      goto LABEL_63;
    }
    if ( *(int *)(a2 + 2876) > 50 )
      break;
    if ( v31 == 4 )
      goto LABEL_54;
    if ( v31 == 3 )
      goto LABEL_95;
    v4 = a3;
  }
  LOBYTE(v44) = 1;
  sub_1C004A608(a1, 0, 139, 0, 0, -1073741823, -1073704960, (__int64)aPchangeC, 6117, v44);
LABEL_95:
  *(_DWORD *)(a2 + 400) = 4;
LABEL_54:
  v33 = *(_DWORD **)(a1 + 64);
  if ( !v33 )
    goto LABEL_101;
  if ( *v33 != 541218120 )
    sub_1C002DC78(a1, v33);
  LODWORD(v4) = a3;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E55C(DeviceObject->DeviceExtension, (_DWORD)v33, v32, 71, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a3);
  v34 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 959530320;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = 0LL;
      *(_QWORD *)(v36 + 24) = v34;
    }
  }
  sub_1C0007840(a1, a2, 19, a3, 0LL, 0, 0LL, 0LL);
LABEL_63:
  *(_DWORD *)(a2 + 8) = 0;
  v37 = *(_DWORD **)(a1 + 64);
  if ( !v37 )
LABEL_101:
    sub_1C002DC78(a1, 0LL);
  if ( *v37 != 541218120 )
    sub_1C002DC78(a1, v37);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 58, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
  v38 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 909133136;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_QWORD *)(v40 + 24) = v38;
    }
  }
  result = sub_1C0007840(a1, a2, 6, v4, 0LL, 0, 0LL, 0LL);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      result = 762017649LL;
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 762017649;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 16) = a2;
      *(_QWORD *)(v43 + 24) = 0LL;
    }
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      return sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 99, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4));
  }
  return result;
}
