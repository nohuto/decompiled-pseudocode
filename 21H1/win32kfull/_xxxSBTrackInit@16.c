/*
 * XREFs of _xxxSBTrackInit@16 @ 0x1A3B45
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _GetWndSBDisableFlags@8 @ 0xC1ECC (_GetWndSBDisableFlags@8.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF55A4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@@@YGXPAX@Z.c)
 *     _safe_cast_fnid_to_PSBWND@4 @ 0x1436EC (_safe_cast_fnid_to_PSBWND@4.c)
 *     _zzzShowCaret@4 @ 0x19FB39 (_zzzShowCaret@4.c)
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ @ 0x1A25E7 (-Allocate@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?CalcTrackDragRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A26D0 (-CalcTrackDragRect@@YGXPAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 */

unsigned __int8 **__fastcall xxxSBTrackInit(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  _DWORD *v5; // ebx
  unsigned __int8 **result; // eax
  unsigned __int8 *v7; // ecx
  unsigned __int8 **v8; // edi
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // ecx
  unsigned __int8 *v13; // eax
  unsigned __int8 *v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned __int16 v19; // ax
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // edx
  unsigned __int8 *v23; // ecx
  int *v24; // edx
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  unsigned __int8 *v30; // edx
  unsigned __int8 *v31; // eax
  _DWORD *v32; // edi
  int v33; // [esp-18h] [ebp-98h]
  struct tagSBCALC *v34; // [esp-14h] [ebp-94h]
  int *v36; // [esp+14h] [ebp-6Ch]
  unsigned __int8 **v37; // [esp+18h] [ebp-68h]
  int v38; // [esp+1Ch] [ebp-64h]
  int v39; // [esp+1Ch] [ebp-64h]
  char v40; // [esp+20h] [ebp-60h]
  unsigned int v41; // [esp+24h] [ebp-5Ch]
  unsigned __int16 v42; // [esp+24h] [ebp-5Ch]
  char v43; // [esp+28h] [ebp-58h] BYREF
  int v44; // [esp+6Ch] [ebp-14h] BYREF
  int v45; // [esp+70h] [ebp-10h] BYREF
  int v46; // [esp+74h] [ebp-Ch]
  int v47; // [esp+78h] [ebp-8h]

  v44 = 0;
  v5 = a1;
  v41 = a2;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  result = (unsigned __int8 **)safe_cast_fnid_to_PSBWND(a1);
  v37 = result;
  if ( !*(_DWORD *)(v5[2] + 392) && (result || a3) )
  {
    result = gpUserTypeIsolation;
    v7 = gpUserTypeIsolation[5];
    if ( v7 )
    {
      result = (unsigned __int8 **)NSInstrumentation::CTypeIsolation<20480,72>::Allocate(v7);
      v8 = result;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 )
    {
      *v8 = (unsigned __int8 *)((unsigned int)*v8 & 0xFFFFFFFE);
      v8[10] = 0;
      v8[8] = (unsigned __int8 *)xxxTrackBox;
      v8[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
      HMAssignmentLock(v8 + 1, 0);
      *(_DWORD *)(v5[2] + 392) = v8;
      v10 = (unsigned int)*v8 & 0xFFFFFFFB | (a3 != 0 ? 0 : 4);
      *v8 = (unsigned __int8 *)v10;
      if ( (v10 & 4) != 0 )
      {
        HMAssignmentLock(v10, v9);
        *v8 = (unsigned __int8 *)(((unsigned int)*v8 ^ (2 * (_DWORD)v37[1])) & 2 ^ (unsigned int)*v8);
        v34 = (struct tagSBCALC *)v5[14];
        v33 = (int)(v8 + 3);
        HMAssignmentLock(v12, v11);
        v13 = v37[2];
        v14 = (unsigned __int8 *)(v37 + 3);
        v40 = (char)v13;
        v15 = 2;
      }
      else
      {
        v16 = v5[5];
        v17 = (unsigned __int16)a2;
        v18 = (unsigned __int16)(HIWORD(a2) - *(_WORD *)(v16 + 56)) << 16;
        v38 = v18;
        if ( (*(_BYTE *)(v16 + 18) & 0x40) != 0 )
        {
          v19 = *(_WORD *)(v16 + 60) - a2;
        }
        else
        {
          LOWORD(v17) = a2 - *(_WORD *)(v16 + 52);
          v19 = v17;
        }
        v42 = v19;
        HMAssignmentLock(v17, v18);
        v34 = 0;
        v33 = (int)(v8 + 2);
        HMAssignmentLock(v21, v20);
        v22 = (unsigned int)*v8 ^ ((unsigned int)*v8 ^ (2 * a3)) & 2;
        *v8 = (unsigned __int8 *)v22;
        LOBYTE(v13) = GetWndSBDisableFlags((int)v5, (v22 >> 1) & 1);
        v14 = (unsigned __int8 *)&v43;
        v40 = (char)v13;
        v15 = a3 != 6;
        v41 = v38 | v42;
      }
      v8[15] = (unsigned __int8 *)v15;
      v8[16] = v14;
      if ( ((unsigned __int8)v13 & 3) == 3 )
        goto LABEL_24;
      v23 = *v8;
      if ( ((unsigned __int8)*v8 & 4) == 0 )
      {
        CalcSBStuff(v5, ((unsigned int)v23 >> 1) & 1);
        v23 = *v8;
      }
      v36 = &v44;
      v24 = &v45;
      if ( ((unsigned __int8)v23 & 2) != 0 )
      {
        v25 = HIWORD(v41);
      }
      else
      {
        v36 = &v45;
        v24 = &v44;
        LOWORD(v25) = v41;
      }
      v39 = (__int16)v25;
      *v36 = *((_DWORD *)v14 + 6);
      *v24 = *((_DWORD *)v14 + 4);
      v36[2] = *((_DWORD *)v14 + 7);
      v26 = *((_DWORD *)v14 + 5);
      v8[9] = (unsigned __int8 *)-1;
      v5 = a1;
      v24[2] = v26;
      if ( v39 >= *((_DWORD *)v14 + 9) )
      {
        if ( v39 >= *((_DWORD *)v14 + 10) )
        {
          if ( (v40 & 2) == 0 )
          {
            v8[9] = (unsigned __int8 *)1;
            *v24 = *((_DWORD *)v14 + 10);
            goto LABEL_42;
          }
          if ( ((unsigned __int8)v23 & 4) != 0 )
          {
            zzzShowCaret((struct tagWND *)v8[2]);
LABEL_23:
            result = (unsigned __int8 **)a1[2];
            if ( v8 != (unsigned __int8 **)result[98] )
              return result;
          }
LABEL_24:
          result = (unsigned __int8 **)v5[2];
LABEL_25:
          result[98] = 0;
          HMAssignmentUnlock(v8 + 3);
          HMAssignmentUnlock(v8 + 2);
          HMAssignmentUnlock(v8 + 1);
          return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<20480,72>>(v8);
        }
        if ( v39 >= *((_DWORD *)v14 + 13) )
        {
          if ( v39 < *((_DWORD *)v14 + 12) )
            goto LABEL_38;
          v8[9] = (unsigned __int8 *)3;
          *v24 = *((_DWORD *)v14 + 12);
          v27 = *((_DWORD *)v14 + 10);
        }
        else
        {
          v8[9] = (unsigned __int8 *)2;
          *v24 = *((_DWORD *)v14 + 9);
          v27 = *((_DWORD *)v14 + 13);
        }
      }
      else
      {
        if ( (v40 & 1) != 0 )
        {
          if ( ((unsigned __int8)v23 & 4) != 0 )
            goto LABEL_23;
          goto LABEL_24;
        }
        v8[9] = 0;
        v27 = *((_DWORD *)v14 + 9);
      }
      v24[2] = v27;
LABEL_42:
      while ( 1 )
      {
        if ( a4 != 1 )
          goto LABEL_45;
        v31 = v8[9];
        if ( !v31 )
          break;
        if ( v31 == (unsigned __int8 *)1 )
        {
LABEL_45:
          if ( a4 != 2 )
            break;
        }
        if ( v8[9] == (unsigned __int8 *)4 )
        {
          v8[11] = (unsigned __int8 *)(*((_DWORD *)v14 + 8) / -2);
          break;
        }
LABEL_38:
        if ( *((_DWORD *)v14 + 10) - *((_DWORD *)v14 + 9) <= *((_DWORD *)v14 + 8) )
          goto LABEL_24;
        v8[9] = (unsigned __int8 *)4;
        CalcTrackDragRect((int *)v8);
        v8[8] = (unsigned __int8 *)&xxxTrackThumb;
        v28 = (unsigned __int8 *)*((_DWORD *)v14 + 13);
        *((_DWORD *)v14 + 11) = v28;
        v8[12] = v28;
        v29 = (unsigned __int8 *)*((_DWORD *)v14 + 3);
        v8[13] = v29;
        v8[14] = v29;
        v8[11] = (unsigned __int8 *)(*((_DWORD *)v14 + 11) - v39);
        xxxCapture(_gptiCurrent, (int)a1, 3);
        result = (unsigned __int8 **)a1[2];
        if ( v8 == (unsigned __int8 **)result[98] )
        {
          v30 = v8[3];
          if ( !v30 )
            continue;
          xxxDoScroll(
            v30,
            (int *)v8[2],
            (struct tagWND *)5,
            (struct tagWND *)v8[13],
            ((unsigned int)*v8 >> 1) & 1,
            v33,
            (int)v34);
          result = (unsigned __int8 **)a1[2];
          if ( v8 == (unsigned __int8 **)result[98] )
            continue;
        }
        return result;
      }
      xxxCapture(_gptiCurrent, (int)a1, 3);
      result = (unsigned __int8 **)a1[2];
      if ( v8 == (unsigned __int8 **)result[98] )
      {
        if ( v8[9] != (unsigned __int8 *)4 )
        {
          v32 = v8 + 4;
          *v32++ = v44;
          *v32++ = v45;
          *v32 = v46;
          v32[1] = v47;
        }
        xxxSBTrackLoop(v41, (int)a1, (struct tagWND *)v14, v33, v34);
        result = (unsigned __int8 **)a1[2];
        v8 = (unsigned __int8 **)result[98];
        if ( v8 )
          goto LABEL_25;
      }
    }
  }
  return result;
}
