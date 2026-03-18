/*
 * XREFs of xxxSBTrackInit @ 0x1C02469C0
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C024648C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0027538 (CalcSBStuff.c)
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     GetWndSBDisableFlags @ 0x1C014A7FC (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01597A8 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D4E90 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C0242724 (zzzShowCaret.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0244D9C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0244F18 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0245840 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0245DE4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

unsigned __int8 **__fastcall xxxSBTrackInit(struct tagWND *a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned __int8 **result; // rax
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 **v10; // rcx
  __int64 v11; // rbx
  struct tagWND **v12; // r12
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  char *v17; // rsi
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r14d
  unsigned int v21; // edx
  __int64 v22; // r8
  unsigned int v23; // ecx
  __int128 *v24; // r8
  __int128 *v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // r10d
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  char v34; // [rsp+30h] [rbp-69h]
  int v35; // [rsp+30h] [rbp-69h]
  __int64 v37; // [rsp+40h] [rbp-59h] BYREF
  struct tagWND *v38; // [rsp+48h] [rbp-51h]
  int v39; // [rsp+50h] [rbp-49h]
  __int128 v40; // [rsp+58h] [rbp-41h] BYREF
  char v41; // [rsp+70h] [rbp-29h] BYREF

  v39 = a4;
  v40 = 0LL;
  result = (unsigned __int8 **)safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = (__int64)result;
  if ( !*(_QWORD *)(*(_QWORD *)(v8 + 16) + 712LL) && (result || v7) )
  {
    result = gpUserTypeIsolation;
    v10 = (__int64 **)gpUserTypeIsolation[5];
    if ( v10 )
    {
      result = (unsigned __int8 **)NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v10, 0LL);
      v11 = (__int64)result;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      *(_DWORD *)v11 &= ~1u;
      *(_QWORD *)(v11 + 48) = xxxTrackBox;
      *(_QWORD *)(v11 + 8) = 0LL;
      v12 = (struct tagWND **)(v11 + 24);
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      v37 = v11 + 8;
      *(_QWORD *)(v11 + 64) = 0LL;
      v38 = a1;
      HMAssignmentLock(&v37);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) = v11;
      v13 = *(_DWORD *)v11 & 0xFFFFFFFB | (a3 == 0 ? 4 : 0);
      *(_DWORD *)v11 = v13;
      if ( (v13 & 4) != 0 )
      {
        v37 = v11 + 16;
        v38 = a1;
        HMAssignmentLock(&v37);
        v14 = 2 * *(_DWORD *)(v9 + 8);
        v37 = v11 + 24;
        *(_DWORD *)v11 ^= (*(_DWORD *)v11 ^ v14) & 2;
        v38 = (struct tagWND *)*((_QWORD *)a1 + 13);
        HMAssignmentLock(&v37);
        v15 = *(_DWORD *)(v9 + 12);
        v16 = 2;
        v34 = v15;
        v17 = (char *)(v9 + 16);
      }
      else
      {
        v18 = *((_QWORD *)a1 + 5);
        v19 = (unsigned __int16)(WORD1(a2) - *(_WORD *)(v18 + 92)) << 16;
        if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
          v20 = (unsigned __int16)(*(_WORD *)(v18 + 96) - a2);
        else
          v20 = (unsigned __int16)(a2 - *(_WORD *)(v18 + 88));
        v37 = v11 + 24;
        LODWORD(a2) = v19 | v20;
        v38 = a1;
        HMAssignmentLock(&v37);
        v38 = 0LL;
        v37 = v11 + 16;
        HMAssignmentLock(&v37);
        v21 = *(_DWORD *)v11 ^ (*(_DWORD *)v11 ^ (2 * a3)) & 2;
        *(_DWORD *)v11 = v21;
        v17 = &v41;
        LOBYTE(v15) = GetWndSBDisableFlags((__int64)a1, (v21 >> 1) & 1, v22);
        v34 = v15;
        a2 = (int)a2;
        v16 = a3 != 6;
      }
      *(_DWORD *)(v11 + 88) = v16;
      *(_QWORD *)(v11 + 96) = v17;
      if ( (v15 & 3) == 3 )
        goto LABEL_26;
      v23 = *(_DWORD *)v11;
      if ( (*(_DWORD *)v11 & 4) == 0 )
      {
        CalcSBStuff((__int64)a1, (__int64)v17, (v23 >> 1) & 1);
        v23 = *(_DWORD *)v11;
        LOBYTE(v15) = v34;
      }
      v24 = &v40;
      if ( (v23 & 2) == 0 )
        v24 = (__int128 *)((char *)&v40 + 4);
      v25 = (__int128 *)((char *)&v40 + 4);
      if ( (v23 & 2) != 0 )
      {
        v26 = a2 >> 16;
      }
      else
      {
        v25 = &v40;
        LOWORD(v26) = a2;
      }
      v27 = (__int16)v26;
      *(_DWORD *)v24 = *((_DWORD *)v17 + 6);
      *(_DWORD *)v25 = *((_DWORD *)v17 + 4);
      *((_DWORD *)v24 + 2) = *((_DWORD *)v17 + 7);
      v28 = *((_DWORD *)v17 + 5);
      *(_DWORD *)(v11 + 56) = -1;
      v35 = v27;
      *((_DWORD *)v25 + 2) = v28;
      if ( v27 >= *((_DWORD *)v17 + 9) )
      {
        if ( v27 >= *((_DWORD *)v17 + 10) )
        {
          if ( (v15 & 2) == 0 )
          {
            *(_DWORD *)(v11 + 56) = 1;
            *(_DWORD *)v25 = *((_DWORD *)v17 + 10);
            goto LABEL_44;
          }
          if ( (v23 & 4) != 0 )
          {
            zzzShowCaret(*(struct tagWND **)(v11 + 16));
LABEL_25:
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
            if ( (unsigned __int8 *)v11 != result[89] )
              return result;
          }
LABEL_26:
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) = 0LL;
          HMAssignmentUnlock(v11 + 24);
          HMAssignmentUnlock(v11 + 16);
          v29 = v11 + 8;
LABEL_27:
          HMAssignmentUnlock(v29);
          return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v11);
        }
        if ( v27 >= *((_DWORD *)v17 + 13) )
        {
          if ( v27 < *((_DWORD *)v17 + 12) )
            goto LABEL_40;
          *(_DWORD *)(v11 + 56) = 3;
          *(_DWORD *)v25 = *((_DWORD *)v17 + 12);
          v30 = *((_DWORD *)v17 + 10);
        }
        else
        {
          *(_DWORD *)(v11 + 56) = 2;
          *(_DWORD *)v25 = *((_DWORD *)v17 + 9);
          v30 = *((_DWORD *)v17 + 13);
        }
      }
      else
      {
        if ( (v15 & 1) != 0 )
        {
          if ( (v23 & 4) != 0 )
            goto LABEL_25;
          goto LABEL_26;
        }
        *(_DWORD *)(v11 + 56) = 0;
        v30 = *((_DWORD *)v17 + 9);
      }
      *((_DWORD *)v25 + 2) = v30;
LABEL_44:
      while ( 1 )
      {
        if ( v39 != 1 )
          goto LABEL_47;
        v33 = *(_DWORD *)(v11 + 56);
        if ( !v33 )
          break;
        if ( v33 == 1 )
        {
LABEL_47:
          if ( v39 != 2 )
            break;
        }
        if ( *(_DWORD *)(v11 + 56) == 4 )
        {
          *(_DWORD *)(v11 + 72) = *((_DWORD *)v17 + 8) / -2;
          break;
        }
LABEL_40:
        if ( *((_DWORD *)v17 + 10) - *((_DWORD *)v17 + 9) <= *((_DWORD *)v17 + 8) )
          goto LABEL_26;
        *(_DWORD *)(v11 + 56) = 4;
        CalcTrackDragRect((struct tagSBTRACK *)v11);
        *(_QWORD *)(v11 + 48) = xxxTrackThumb;
        v31 = *((_DWORD *)v17 + 13);
        *((_DWORD *)v17 + 11) = v31;
        *(_DWORD *)(v11 + 76) = v31;
        v32 = *((_DWORD *)v17 + 3);
        *(_DWORD *)(v11 + 80) = v32;
        *(_DWORD *)(v11 + 84) = v32;
        *(_DWORD *)(v11 + 72) = *((_DWORD *)v17 + 11) - v35;
        xxxCapture(gptiCurrent, a1, 3);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v11 == result[89] )
        {
          if ( !*v12 )
            continue;
          xxxDoScroll(*(struct _LARGE_STRING ***)(v11 + 16), *v12, 5u, *(_DWORD *)(v11 + 80), (*(_DWORD *)v11 >> 1) & 1);
          result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
          if ( (unsigned __int8 *)v11 == result[89] )
            continue;
        }
        return result;
      }
      xxxCapture(gptiCurrent, a1, 3);
      result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
      if ( (unsigned __int8 *)v11 == result[89] )
      {
        if ( *(_DWORD *)(v11 + 56) != 4 )
          *(_OWORD *)(v11 + 32) = v40;
        xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v17);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        v11 = (__int64)result[89];
        if ( v11 )
        {
          result[89] = 0LL;
          HMAssignmentUnlock(v11 + 24);
          HMAssignmentUnlock(v11 + 16);
          v29 = v11 + 8;
          goto LABEL_27;
        }
      }
    }
  }
  return result;
}
