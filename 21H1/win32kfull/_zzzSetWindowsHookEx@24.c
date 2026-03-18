/*
 * XREFs of _zzzSetWindowsHookEx@24 @ 0x13290
 * Callers:
 *     _NtUserSetWindowsHookEx@24 @ 0x131D4 (_NtUserSetWindowsHookEx@24.c)
 *     _NtUserSetWindowsHookAW@12 @ 0x16A673 (_NtUserSetWindowsHookAW@12.c)
 * Callees:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     _AddHmodDependency@4 @ 0x15F82 (_AddHmodDependency@4.c)
 *     _GetHmodTableIndex@4 @ 0x15FAE (_GetHmodTableIndex@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z @ 0x1526E3 (-zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__fastcall zzzSetWindowsHookEx(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, char a6)
{
  _DWORD *v6; // ebx
  char v7; // cl
  ACCESS_MASK v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // edx
  PRKPROCESS *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int HmodTableIndex; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  ACCESS_MASK v20; // [esp-4h] [ebp-5Ch]
  struct tagTHREADINFO *v21; // [esp+0h] [ebp-58h]
  int v22; // [esp+4h] [ebp-54h]
  int v23; // [esp+10h] [ebp-48h] BYREF
  _DWORD *v24; // [esp+14h] [ebp-44h]
  int v25; // [esp+18h] [ebp-40h]
  _DWORD v26[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD *v27; // [esp+28h] [ebp-30h]
  int v28; // [esp+2Ch] [ebp-2Ch]
  _DWORD *v29; // [esp+30h] [ebp-28h]
  _DWORD *v30; // [esp+34h] [ebp-24h]
  int v31; // [esp+38h] [ebp-20h]
  int v32; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v30 = a2;
  v32 = a1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26[0] = 0x4000;
  v26[1] = -1;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v17 = 1426;
    goto LABEL_65;
  }
  if ( !a5 )
  {
    v17 = 1427;
    goto LABEL_65;
  }
  v28 = _gptiCurrent;
  v6 = a3;
  if ( a3 )
  {
    v7 = byte_2510CD[a4];
    if ( (v7 & 2) != 0 )
    {
      if ( a3[62] != *(_DWORD *)(_gptiCurrent + 248) )
        goto LABEL_63;
      if ( *(_DWORD *)(_gptiCurrent + 232) == a3[58] )
        goto LABEL_7;
      if ( !v32 && (v7 & 0x24) == 0 )
        goto LABEL_40;
      if ( !(unsigned __int8)Enforced() )
      {
        v18 = *(_DWORD *)(_gptiCurrent + 232);
        v19 = a3[58];
        if ( (*(_DWORD *)(v19 + 424) != *(_DWORD *)(v18 + 424) || *(_DWORD *)(v19 + 428) != *(_DWORD *)(v18 + 428))
          && (a3[66] & 0x400000) == 0 )
        {
LABEL_63:
          v17 = 5;
          goto LABEL_65;
        }
      }
      if ( ((unsigned __int8)~((unsigned __int8)byte_2510CD[a4] >> 4) & ((a3[66] & 0xC) != 0)) == 0 )
        goto LABEL_7;
      v17 = 1458;
    }
    else
    {
      v17 = 1429;
    }
LABEL_65:
    UserSetLastError(v17);
    return 0;
  }
  if ( !a1 && (byte_2510CD[a4] & 0x24) == 0 )
  {
LABEL_40:
    v17 = 1428;
    goto LABEL_65;
  }
LABEL_7:
  if ( (byte_2510CD[a4] & 4) != 0
    && !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v26)
    && *(int *)(*(_DWORD *)(_gptiCurrent + 232) + 8) >= 0 )
  {
    UserSetLastError(5);
    EtwTraceUIPISystemError(*(_DWORD *)(_gptiCurrent + 232), 0, 4);
    return 0;
  }
  if ( a4 )
  {
    if ( a4 == 1 )
      v20 = 32;
    else
      v20 = 8;
  }
  else
  {
    v20 = 16;
  }
  v8 = v20;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(_gptiCurrent + 496), v20) )
    goto LABEL_63;
  if ( v8 != 8 && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 20) + 32) & 4) != 0 )
  {
    v17 = 1459;
    goto LABEL_65;
  }
  v9 = (_DWORD *)HMAllocObject(_gptiCurrent, *(_DWORD *)(_gptiCurrent + 248), 5, 52);
  v10 = v9;
  v27 = v9;
  v29 = v9;
  if ( !v9 )
    return 0;
  v9[9] = -1;
  if ( v32 )
  {
    HmodTableIndex = GetHmodTableIndex(v30);
    v10[9] = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      HMFreeObject(v10);
      return 0;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency(HmodTableIndex);
  }
  v11 = a4;
  if ( a3 )
  {
    v30 = &a3[a4 + 129];
    a3[93] |= 1 << (a4 + 1);
    if ( a3[65] )
    {
      v12 = (PRKPROCESS *)a3[58];
      if ( v12 == *(PRKPROCESS **)(_gptiCurrent + 232) )
      {
        v31 = 0;
      }
      else
      {
        KeAttachProcess(*v12);
        v31 = 1;
        v11 = a4;
      }
      ms_exc.registration.TryLevel = 0;
      *(_DWORD *)(a3[65] + 36) = a3[93];
      ms_exc.registration.TryLevel = -2;
      if ( v31 )
      {
        KeDetachProcess();
        v11 = a4;
      }
    }
    v13 = v27;
  }
  else
  {
    v30 = (_DWORD *)(*(_DWORD *)(_gptiCurrent + 252) + 4 * a4 + 24);
    v10[8] |= 1u;
    *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8) |= 1 << (a4 + 1);
    v6 = 0;
    v13 = v10;
  }
  v13[10] = v6;
  v10[8] |= a6 & 0x42;
  v10[6] = v11;
  v10[7] = a5 - v32;
  v14 = v30;
  v10[5] = *v30;
  *v14 = v10;
  if ( (byte_2510CD[v11] & 4) != 0 )
  {
    v23 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v23;
    v24 = v10;
    HMLockObject(v10);
    if ( !zzzJournalAttach(v21, v22) )
    {
      if ( ThreadUnlock1() )
        zzzUnhookWindowsHookEx((int)v10);
      return 0;
    }
    v10 = (_DWORD *)ThreadUnlock1();
    if ( v10 )
    {
      v11 = a4;
      goto LABEL_23;
    }
    return 0;
  }
LABEL_23:
  if ( (v10[8] & 1) != 0 && (byte_2510CD[v11] & 0x10) != 0 )
  {
    *(_DWORD *)(_gptiCurrent + 264) |= (unsigned int)&loc_3FFFD + 3;
    KeSetPriorityThread((PKTHREAD)*_gptiCurrent, 14);
    if ( (byte_2510CD[a4] & 4) != 0 )
    {
      v23 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v23;
      v24 = v10;
      HMLockObject(v10);
      GenerateMouseMove(0);
      v10 = (_DWORD *)ThreadUnlock1();
      if ( a4 == 1 )
        _gppiInputProvider = *(_DWORD *)(_gptiCurrent + 232);
    }
  }
  return v10;
}
