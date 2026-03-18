/*
 * XREFs of sub_1C000A080 @ 0x1C000A080
 * Callers:
 *     sub_1C00022A0 @ 0x1C00022A0 (sub_1C00022A0.c)
 *     sub_1C00071D0 @ 0x1C00071D0 (sub_1C00071D0.c)
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C0014C0C @ 0x1C0014C0C (sub_1C0014C0C.c)
 *     sub_1C00167EC @ 0x1C00167EC (sub_1C00167EC.c)
 *     sub_1C001C580 @ 0x1C001C580 (sub_1C001C580.c)
 *     sub_1C002ABC4 @ 0x1C002ABC4 (sub_1C002ABC4.c)
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 *     sub_1C0033A0C @ 0x1C0033A0C (sub_1C0033A0C.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 *     sub_1C0038920 @ 0x1C0038920 (sub_1C0038920.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 *     sub_1C003C654 @ 0x1C003C654 (sub_1C003C654.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002AD90 @ 0x1C002AD90 (sub_1C002AD90.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C000A080(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v8; // rbp
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  KIRQL v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rsi
  char *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  KIRQL v31; // bp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 *v35; // rdi
  __int64 *v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rdx
  __int64 **v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int16 v48; // si
  unsigned __int16 v49; // bp
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  char v53[4]; // [rsp+54h] [rbp-54h] BYREF
  _BYTE v54[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v55; // [rsp+5Ah] [rbp-4Eh]
  __int16 v56; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int16 v57; // [rsp+5Eh] [rbp-4Ah]

  v4 = a2;
  v8 = 0LL;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v9 = *(_DWORD **)(a1 + 64);
  if ( !v9 )
    goto LABEL_109;
  if ( *v9 != 541218120 )
    sub_1C002DC78(a1, v9);
  v10 = v9[640];
  if ( (v10 & 0x4000) != 0 )
  {
    sub_1C000FD80(a1, 4, 1937076805, 0, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v10 & 0x10) != 0 )
  {
    sub_1C000FD80(a1, 4, 1752319312, 0, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PoolType, 0xAuLL, 0x42554855u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_BYTE *)PoolWithTag + 9) = 0;
      PoolWithTag[2] = 4;
      *(_DWORD *)a3 = 0;
      PoolWithTag[3] = v4;
      *(_DWORD *)PoolWithTag = 0;
      v54[0] = -93;
      *((_BYTE *)PoolWithTag + 8) = 0;
      v54[1] = 0;
      v55 = 0;
      v56 = v4;
      v57 = PoolWithTag[2];
      v13 = (int)sub_1C000A740(a1, (unsigned int)v54, (_DWORD)PoolWithTag, (int)PoolWithTag + 4);
      v14 = 0LL;
      if ( (dword_1C006B268 & 0x100) != 0 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
          *(_DWORD *)v16 = 1329877100;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 16) = v4;
          *(_QWORD *)(v16 + 24) = 1383420738LL;
        }
      }
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
      stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
      if ( (dword_1C006B268 & 8) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
          *(_DWORD *)v19 = 1413771367;
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_QWORD *)(v19 + 16) = v4;
          *(_QWORD *)(v19 + 24) = 0LL;
        }
      }
      if ( !(_WORD)v4 )
        goto LABEL_27;
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        if ( *(_DWORD *)v20 != 541218120 )
          sub_1C002DC78(a1, v20);
        if ( (unsigned __int16)v4 <= *(unsigned __int8 *)(v20 + 2938) )
        {
          v21 = *(_QWORD *)(v20 + 3056);
          if ( v21 )
          {
            v22 = v21 + 2928 * v4 - 2928;
            if ( (dword_1C006B268 & 8) != 0 )
            {
              v23 = *(_QWORD *)(v20 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
              *(_DWORD *)v23 = 1044672615;
              *(_QWORD *)(v23 + 8) = 0LL;
              *(_QWORD *)(v23 + 16) = v4;
              *(_QWORD *)(v23 + 24) = v22;
            }
            if ( v22 )
            {
              v14 = *(_QWORD *)(v22 + 392);
              if ( v14 )
              {
                v24 = *(_QWORD *)(v14 + 64);
                if ( !v24 )
                  sub_1C002DC78(*(_QWORD *)(v22 + 392), 0LL);
                if ( *(_DWORD *)v24 != 1329877064 )
                  sub_1C002DC78(*(_QWORD *)(v22 + 392), *(_QWORD *)(v14 + 64));
                v25 = (char *)ExAllocatePoolWithTag(PoolType, 0x30uLL, 0x42554855u);
                if ( v25 )
                {
                  *(_QWORD *)(v25 + 4) = 0LL;
                  *(_QWORD *)(v25 + 12) = 0LL;
                  *((_DWORD *)v25 + 5) = 0;
                  *((_QWORD *)v25 + 3) = 1383420738LL;
                  *(_DWORD *)v25 = 1668571500;
                  *((_QWORD *)v25 + 4) = v14;
                  *((_QWORD *)v25 + 5) = 0LL;
                  v26 = v25 + 8;
                  v27 = *(_QWORD **)(v24 + 1280);
                  if ( *v27 != v24 + 1272 )
                    goto LABEL_69;
                  *v26 = v24 + 1272;
                  v26[1] = v27;
                  *v27 = v26;
                  *(_QWORD *)(v24 + 1280) = v26;
                }
                else
                {
                  ++*(_DWORD *)(v24 + 1288);
                }
              }
            }
          }
        }
LABEL_27:
        stru_1C006B480.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v17);
        if ( v14 )
        {
          v8 = *(_QWORD *)(v14 + 64);
          if ( !v8 )
            goto LABEL_94;
          if ( *(_DWORD *)v8 != 1329877064 )
            sub_1C002DC78(v14, *(_QWORD *)(v14 + 64));
        }
        if ( (int)v13 >= 0 && v8 && *(_BYTE *)(v8 + 2740) )
        {
          v48 = *v12;
          v49 = v12[1];
          if ( ((v49 | *v12) & 8) != 0 )
          {
            v50 = sub_1C000F050(a1);
            sub_1C001A550(a1, v50 + 2264, 3LL);
          }
          if ( (v48 & 1) == 0 && (v49 & 1) != 0 )
          {
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
              sub_1C002E62C(DeviceObject->DeviceExtension, v28, 3, 21, (__int64)"FKh&", a1);
            byte_1C006B688 = 1;
            sub_1C002AD90(a1, a2, v53);
            v51 = sub_1C000F050(a1);
            sub_1C001A550(a1, v51 + 2264, 3LL);
          }
        }
        if ( !v14 )
          goto LABEL_55;
        if ( (dword_1C006B268 & 0x100) != 0 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = 1329877109;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 16) = v14;
            *(_QWORD *)(v30 + 24) = 1383420738LL;
          }
        }
        v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
        stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
        if ( (dword_1C006B268 & 0x100) != 0 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 1348891236;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 16) = v14;
            *(_QWORD *)(v33 + 24) = 1383420738LL;
          }
        }
        v34 = *(_QWORD *)(v14 + 64);
        if ( v34 )
        {
          if ( *(_DWORD *)v34 != 1329877064 )
            sub_1C002DC78(v14, *(_QWORD *)(v14 + 64));
          v35 = (__int64 *)(v34 + 1272);
          v36 = *(__int64 **)(v34 + 1272);
          if ( v36 == (__int64 *)(v34 + 1272) )
          {
LABEL_96:
            v52 = *(_DWORD *)(v34 + 1288);
            if ( v52 )
              *(_DWORD *)(v34 + 1288) = v52 - 1;
            goto LABEL_53;
          }
          while ( 1 )
          {
            if ( (dword_1C006B268 & 0x100) != 0 )
            {
              v37 = *(_QWORD *)(a1 + 64);
              if ( v37 )
              {
                v38 = *(_QWORD *)(v37 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
                *(_DWORD *)v38 = 1064591724;
                *(_QWORD *)(v38 + 8) = 0LL;
                *(_QWORD *)(v38 + 16) = v34;
                *(_QWORD *)(v38 + 24) = 1383420738LL;
              }
            }
            if ( *((_DWORD *)v36 + 4) == 1383420738 && !v36[4] )
              break;
            v36 = (__int64 *)*v36;
            if ( v36 == v35 )
              goto LABEL_96;
          }
          v39 = (__int64 *)*v36;
          if ( *(__int64 **)(*v36 + 8) == v36 )
          {
            v40 = (__int64 **)v36[1];
            if ( *v40 == v36 )
            {
              *v40 = v39;
              v39[1] = (__int64)v40;
              ExFreePoolWithTag(v36 - 1, 0);
LABEL_53:
              if ( (__int64 *)*v35 == v35 && !*(_DWORD *)(v34 + 1288) )
                KeSetEvent((PRKEVENT)(v34 + 1296), 0, 0);
              stru_1C006B480.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v31);
LABEL_55:
              if ( (dword_1C006B268 & 4) != 0 )
              {
                v41 = *(_QWORD *)(a1 + 64);
                if ( v41 )
                {
                  v42 = *(_QWORD *)(v41 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
                  *(_DWORD *)v42 = 1953722449;
                  *(_QWORD *)(v42 + 8) = 0LL;
                  *(_QWORD *)(v42 + 16) = v13;
                  *(_QWORD *)(v42 + 24) = 0LL;
                }
              }
              if ( (int)v13 < 0 || v12[2] == 4 )
              {
                if ( (v13 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4((unsigned int)v13) )
                {
                  sub_1C000FD80(a1, 4, 1366324018, v12[2], 0LL);
                  sub_1C004A608(a1, a2, 8, (_DWORD)v12, 10, v13, 0, (__int64)aBusC, 1649, 0);
                }
                if ( (int)v13 >= 0 )
                {
                  v43 = v12[1];
                  *(_WORD *)(a3 + 2) = v43;
                  v44 = *v12;
                  *(_WORD *)a3 = v44;
                  if ( (dword_1C006B268 & 4) != 0 )
                  {
                    v45 = *(_QWORD *)(a1 + 64);
                    if ( v45 )
                    {
                      v46 = *(_QWORD *)(v45 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
                      *(_DWORD *)v46 = 1953722448;
                      *(_QWORD *)(v46 + 8) = 0LL;
                      *(_QWORD *)(v46 + 16) = v43;
                      *(_QWORD *)(v46 + 24) = v44;
                    }
                  }
                }
                if ( a4 )
                  *a4 = 0;
                ExFreePoolWithTag(v12, 0);
                return (unsigned int)v13;
              }
              else
              {
                sub_1C000FD80(a1, 4, 1366324017, v12[2], 0LL);
                sub_1C004A608(a1, a2, 9, (_DWORD)v12, 10, v13, 0, (__int64)aBusC, 1635, 0);
                if ( a4 )
                  *a4 = 0;
                ExFreePoolWithTag(v12, 0);
                return 3221225473LL;
              }
            }
          }
LABEL_69:
          __fastfail(3u);
        }
LABEL_94:
        sub_1C002DC78(v14, 0LL);
      }
LABEL_109:
      sub_1C002DC78(a1, 0LL);
    }
    sub_1C000FD80(a1, 4, 1366319468, 0, 0LL);
    if ( a4 )
      *a4 = -1073737728;
    return 3221225626LL;
  }
}
