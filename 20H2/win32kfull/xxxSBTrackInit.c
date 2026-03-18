/*
 * XREFs of xxxSBTrackInit @ 0x1C0245720
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C02451EC (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     CalcSBStuff @ 0x1C005DF24 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C014D02C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015D040 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D40E8 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C0241484 (zzzShowCaret.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0243AFC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0243C78 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C02445A0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244B44 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

unsigned __int8 **__fastcall xxxSBTrackInit(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v5; // r14
  unsigned __int8 **result; // rax
  __int64 v8; // rsi
  __int64 **v9; // rcx
  __int64 v10; // rbx
  struct tagWND **v11; // r12
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int *v16; // rsi
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r14d
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // ecx
  __int128 *v23; // r8
  __int128 *v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // r10d
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char v33; // [rsp+30h] [rbp-69h]
  int v34; // [rsp+30h] [rbp-69h]
  int v35; // [rsp+34h] [rbp-65h]
  __int64 v36; // [rsp+40h] [rbp-59h] BYREF
  struct tagWND *v37; // [rsp+48h] [rbp-51h]
  int v38; // [rsp+50h] [rbp-49h]
  __int128 v39; // [rsp+58h] [rbp-41h] BYREF
  char v40; // [rsp+70h] [rbp-29h] BYREF

  v4 = a3;
  v38 = a4;
  v35 = a3;
  v39 = 0LL;
  v5 = a2;
  result = (unsigned __int8 **)safe_cast_fnid_to_PSBWND((__int64)a1, a2, a3, a4);
  v8 = (__int64)result;
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) && (result || v4) )
  {
    result = gpUserTypeIsolation;
    v9 = (__int64 **)gpUserTypeIsolation[5];
    if ( v9 )
    {
      result = (unsigned __int8 **)NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v9, 0LL);
      v10 = (__int64)result;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      *(_DWORD *)v10 &= ~1u;
      *(_QWORD *)(v10 + 48) = xxxTrackBox;
      *(_QWORD *)(v10 + 8) = 0LL;
      v11 = (struct tagWND **)(v10 + 24);
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 24) = 0LL;
      v36 = v10 + 8;
      *(_QWORD *)(v10 + 64) = 0LL;
      v37 = a1;
      HMAssignmentLock(&v36);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = v10;
      v12 = *(_DWORD *)v10 & 0xFFFFFFFB | (v35 == 0 ? 4 : 0);
      *(_DWORD *)v10 = v12;
      if ( (v12 & 4) != 0 )
      {
        v36 = v10 + 16;
        v37 = a1;
        HMAssignmentLock(&v36);
        v13 = 2 * *(_DWORD *)(v8 + 8);
        v36 = v10 + 24;
        *(_DWORD *)v10 ^= (*(_DWORD *)v10 ^ v13) & 2;
        v37 = (struct tagWND *)*((_QWORD *)a1 + 13);
        HMAssignmentLock(&v36);
        v14 = *(_DWORD *)(v8 + 12);
        v15 = 2;
        v33 = v14;
        v16 = (int *)(v8 + 16);
      }
      else
      {
        v17 = *((_QWORD *)a1 + 5);
        v18 = (unsigned __int16)(WORD1(v5) - *(_WORD *)(v17 + 92)) << 16;
        if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
          v19 = (unsigned __int16)(*(_WORD *)(v17 + 96) - v5);
        else
          v19 = (unsigned __int16)(v5 - *(_WORD *)(v17 + 88));
        v36 = v10 + 24;
        LODWORD(v5) = v18 | v19;
        v37 = a1;
        HMAssignmentLock(&v36);
        v37 = 0LL;
        v36 = v10 + 16;
        HMAssignmentLock(&v36);
        v20 = *(_DWORD *)v10 ^ (*(_DWORD *)v10 ^ (2 * v35)) & 2;
        *(_DWORD *)v10 = v20;
        v16 = (int *)&v40;
        LOBYTE(v14) = GetWndSBDisableFlags((__int64)a1, (v20 >> 1) & 1, v21);
        v33 = v14;
        v5 = (int)v5;
        v15 = v35 != 6;
      }
      *(_DWORD *)(v10 + 88) = v15;
      *(_QWORD *)(v10 + 96) = v16;
      if ( (v14 & 3) == 3 )
        goto LABEL_26;
      v22 = *(_DWORD *)v10;
      if ( (*(_DWORD *)v10 & 4) == 0 )
      {
        CalcSBStuff((__int64)a1, v16, (v22 >> 1) & 1);
        v22 = *(_DWORD *)v10;
        LOBYTE(v14) = v33;
      }
      v23 = &v39;
      if ( (v22 & 2) == 0 )
        v23 = (__int128 *)((char *)&v39 + 4);
      v24 = (__int128 *)((char *)&v39 + 4);
      if ( (v22 & 2) != 0 )
      {
        v25 = v5 >> 16;
      }
      else
      {
        v24 = &v39;
        LOWORD(v25) = v5;
      }
      v26 = (__int16)v25;
      *(_DWORD *)v23 = v16[6];
      *(_DWORD *)v24 = v16[4];
      *((_DWORD *)v23 + 2) = v16[7];
      v27 = v16[5];
      *(_DWORD *)(v10 + 56) = -1;
      v34 = v26;
      *((_DWORD *)v24 + 2) = v27;
      if ( v26 >= v16[9] )
      {
        if ( v26 >= v16[10] )
        {
          if ( (v14 & 2) == 0 )
          {
            *(_DWORD *)(v10 + 56) = 1;
            *(_DWORD *)v24 = v16[10];
            goto LABEL_44;
          }
          if ( (v22 & 4) != 0 )
          {
            zzzShowCaret(*(struct tagWND **)(v10 + 16));
LABEL_25:
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
            if ( (unsigned __int8 *)v10 != result[90] )
              return result;
          }
LABEL_26:
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
          HMAssignmentUnlock(v10 + 24);
          HMAssignmentUnlock(v10 + 16);
          v28 = v10 + 8;
LABEL_27:
          HMAssignmentUnlock(v28);
          return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v10);
        }
        if ( v26 >= v16[13] )
        {
          if ( v26 < v16[12] )
            goto LABEL_40;
          *(_DWORD *)(v10 + 56) = 3;
          *(_DWORD *)v24 = v16[12];
          v29 = v16[10];
        }
        else
        {
          *(_DWORD *)(v10 + 56) = 2;
          *(_DWORD *)v24 = v16[9];
          v29 = v16[13];
        }
      }
      else
      {
        if ( (v14 & 1) != 0 )
        {
          if ( (v22 & 4) != 0 )
            goto LABEL_25;
          goto LABEL_26;
        }
        *(_DWORD *)(v10 + 56) = 0;
        v29 = v16[9];
      }
      *((_DWORD *)v24 + 2) = v29;
LABEL_44:
      while ( 1 )
      {
        if ( v38 != 1 )
          goto LABEL_47;
        v32 = *(_DWORD *)(v10 + 56);
        if ( !v32 )
          break;
        if ( v32 == 1 )
        {
LABEL_47:
          if ( v38 != 2 )
            break;
        }
        if ( *(_DWORD *)(v10 + 56) == 4 )
        {
          *(_DWORD *)(v10 + 72) = v16[8] / -2;
          break;
        }
LABEL_40:
        if ( v16[10] - v16[9] <= v16[8] )
          goto LABEL_26;
        *(_DWORD *)(v10 + 56) = 4;
        CalcTrackDragRect((struct tagSBTRACK *)v10);
        *(_QWORD *)(v10 + 48) = xxxTrackThumb;
        v30 = v16[13];
        v16[11] = v30;
        *(_DWORD *)(v10 + 76) = v30;
        v31 = v16[3];
        *(_DWORD *)(v10 + 80) = v31;
        *(_DWORD *)(v10 + 84) = v31;
        *(_DWORD *)(v10 + 72) = v16[11] - v34;
        xxxCapture(gptiCurrent, a1, 3);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v10 == result[90] )
        {
          if ( !*v11 )
            continue;
          xxxDoScroll(*(struct _LARGE_STRING ***)(v10 + 16), *v11, 5u, *(_DWORD *)(v10 + 80), (*(_DWORD *)v10 >> 1) & 1);
          result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
          if ( (unsigned __int8 *)v10 == result[90] )
            continue;
        }
        return result;
      }
      xxxCapture(gptiCurrent, a1, 3);
      result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
      if ( (unsigned __int8 *)v10 == result[90] )
      {
        if ( *(_DWORD *)(v10 + 56) != 4 )
          *(_OWORD *)(v10 + 32) = v39;
        xxxSBTrackLoop(a1, v5, (struct tagSBCALC *)v16);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        v10 = (__int64)result[90];
        if ( v10 )
        {
          result[90] = 0LL;
          HMAssignmentUnlock(v10 + 24);
          HMAssignmentUnlock(v10 + 16);
          v28 = v10 + 8;
          goto LABEL_27;
        }
      }
    }
  }
  return result;
}
