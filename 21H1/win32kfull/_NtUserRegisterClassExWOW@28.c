/*
 * XREFs of _NtUserRegisterClassExWOW@28 @ 0x6F44C
 * Callers:
 *     <none>
 * Callees:
 *     __RegisterClassEx@20 @ 0x47B74 (__RegisterClassEx@20.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _RegisterDefaultClass@4 @ 0x70420 (_RegisterDefaultClass@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _RegisterIconTitleClass@0 @ 0x82F88 (_RegisterIconTitleClass@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserRegisterClassExWOW(
        unsigned int a1,
        ULONG a2,
        int *a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        int *a7)
{
  unsigned __int16 v7; // bx
  int v8; // ecx
  unsigned int v9; // eax
  ULONG v10; // ecx
  int v11; // edx
  int *v12; // ecx
  int *v13; // esi
  int *v14; // esi
  int *v15; // ecx
  const void *v16; // esi
  char *v17; // esi
  void *v18; // edi
  unsigned int v19; // esi
  ULONG v20; // esi
  void *v21; // eax
  unsigned int v22; // edx
  ULONG v23; // edx
  int *v24; // esi
  __int16 Atom; // di
  int v26; // edx
  unsigned int v27; // ecx
  __int16 v28; // ax
  int v29; // eax
  _BYTE v31[48]; // [esp+10h] [ebp-F4h] BYREF
  _DWORD v32[12]; // [esp+40h] [ebp-C4h] BYREF
  unsigned int v33; // [esp+70h] [ebp-94h]
  int v34; // [esp+74h] [ebp-90h]
  int v35; // [esp+78h] [ebp-8Ch]
  _BYTE v36[12]; // [esp+7Ch] [ebp-88h] BYREF
  _BYTE v37[12]; // [esp+88h] [ebp-7Ch] BYREF
  int v38; // [esp+94h] [ebp-70h] BYREF
  int v39; // [esp+98h] [ebp-6Ch]
  ULONG v40; // [esp+9Ch] [ebp-68h]
  int v41; // [esp+A0h] [ebp-64h]
  int v42; // [esp+A4h] [ebp-60h]
  ULONG v43; // [esp+A8h] [ebp-5Ch]
  int v44; // [esp+B0h] [ebp-54h]
  unsigned int v45; // [esp+B4h] [ebp-50h]
  int v46; // [esp+BCh] [ebp-48h]
  int v47; // [esp+C0h] [ebp-44h] BYREF
  int v48; // [esp+C4h] [ebp-40h]
  int v49; // [esp+C8h] [ebp-3Ch]
  int v50; // [esp+CCh] [ebp-38h]
  int v51; // [esp+D0h] [ebp-34h]
  void *Src; // [esp+D4h] [ebp-30h]
  int v53; // [esp+D8h] [ebp-2Ch]
  int v54; // [esp+DCh] [ebp-28h]
  void *v55; // [esp+E0h] [ebp-24h]
  int v56; // [esp+E4h] [ebp-20h]
  void *v57; // [esp+E8h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+ECh] [ebp-18h]
  __int16 v59; // [esp+10Ch] [ebp+8h]
  int v60; // [esp+110h] [ebp+Ch]
  unsigned int v61; // [esp+114h] [ebp+10h]
  unsigned int v62; // [esp+118h] [ebp+14h]

  v7 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  memset(v36, 0, sizeof(v36));
  memset(v37, 0, sizeof(v37));
  v49 = 0;
  v50 = 0;
  EnterCrit(0, 1);
  v46 = _gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    v8 = 1004;
LABEL_3:
    UserSetLastError(v8);
    goto LABEL_81;
  }
  if ( a5 )
  {
    if ( (unsigned __int16)(a5 - 666) <= 0x1Eu )
    {
      v9 = 0;
      while ( word_24CC4C[v9] != a5 )
      {
        v9 += 14;
        if ( v9 >= 112 )
          goto LABEL_9;
      }
      v8 = 87;
      goto LABEL_3;
    }
    goto LABEL_77;
  }
LABEL_9:
  if ( (*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) & 0x10000000) == 0 && !RegisterIconTitleClass() )
    goto LABEL_81;
  ms_exc.registration.TryLevel = 0;
  v10 = a2;
  if ( a2 >= _MmUserProbeAddress )
    v10 = _MmUserProbeAddress;
  v11 = *(_DWORD *)v10;
  v53 = v11;
  v54 = v11;
  Src = *(void **)(v10 + 4);
  v55 = Src;
  v12 = a3;
  if ( (unsigned int)a3 >= _MmUserProbeAddress )
    v12 = (int *)_MmUserProbeAddress;
  v60 = *v12;
  v56 = *v12;
  v61 = v12[1];
  v57 = (void *)v61;
  v13 = (int *)a4;
  if ( a4 + 12 < a4 || a4 + 12 > _MmUserProbeAddress )
    v13 = (int *)_MmUserProbeAddress;
  v41 = *v13;
  v14 = v13 + 1;
  v42 = *v14;
  v43 = v14[1];
  v38 = v41;
  v39 = v42;
  v40 = v43;
  v15 = (int *)v43;
  if ( v43 >= _MmUserProbeAddress )
    v15 = (int *)_MmUserProbeAddress;
  v51 = *v15;
  v44 = v51;
  v62 = v15[1];
  v45 = v62;
  v16 = (const void *)a1;
  if ( a1 + 48 < a1 || a1 + 48 > _MmUserProbeAddress )
    v16 = (const void *)_MmUserProbeAddress;
  qmemcpy(v31, v16, sizeof(v31));
  qmemcpy(v32, v31, sizeof(v32));
  if ( ((unsigned int)Src & 0xFFFF0000) != 0 )
  {
    v17 = (char *)Src + (unsigned __int16)v11 + 2;
    if ( v17 <= Src || (unsigned int)v17 >= _MmUserProbeAddress )
      goto LABEL_30;
    if ( (unsigned __int16)v11 > HIWORD(v53) || (v11 & 1) != 0 )
    {
      if ( (v11 & 1) == 0 )
        goto LABEL_30;
      goto LABEL_29;
    }
  }
  if ( ((unsigned int)Src & 0xFFFF0000) != 0 )
  {
    v59 = v11 + 2;
    if ( (unsigned __int16)(v11 + 2) < (unsigned __int16)v11 )
      goto LABEL_34;
    v18 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v11 + 2), 2020897621);
    v55 = v18;
    if ( !v18 )
      goto LABEL_37;
    v49 = 1;
    PushW32ThreadLock(v18, v36, Win32FreePool);
    v19 = (unsigned __int16)v53;
    memcpy(v18, Src, (unsigned __int16)v53);
    *((_WORD *)v18 + (v19 >> 1)) = 0;
    HIWORD(v54) = v59;
  }
  else
  {
    v18 = v55;
  }
  if ( (v61 & 0xFFFF0000) != 0 )
  {
    v20 = (unsigned __int16)v60 + v61 + 2;
    if ( v20 <= v61 || v20 >= _MmUserProbeAddress )
      goto LABEL_30;
    if ( (unsigned __int16)v60 > HIWORD(v60) || (v60 & 1) != 0 )
    {
      if ( (v60 & 1) != 0 )
LABEL_29:
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_30:
      ExRaiseAccessViolation();
    }
  }
  if ( (v61 & 0xFFFF0000) != 0 )
  {
    if ( (unsigned __int16)(v60 + 2) < (unsigned __int16)v60 )
LABEL_34:
      ExRaiseStatus(-1073741675);
    v21 = (void *)Win32AllocPoolWithQuota((unsigned __int16)(v60 + 2), 2020897621);
    v57 = v21;
    if ( v21 )
    {
      v50 = 1;
      PushW32ThreadLock(v21, v37, Win32FreePool);
      memcpy(v57, (const void *)v61, (unsigned __int16)v60);
      *((_WORD *)v57 + ((unsigned __int16)v60 >> 1)) = 0;
      HIWORD(v56) = v60 + 2;
      goto LABEL_50;
    }
LABEL_37:
    ExRaiseStatus(-1073741801);
  }
LABEL_50:
  v22 = v62;
  if ( (v62 & 0xFFFF0000) != 0 )
  {
    v23 = (unsigned __int16)v51 + v62 + 2;
    if ( v23 <= v62 || v23 >= _MmUserProbeAddress )
      goto LABEL_30;
    if ( (unsigned __int16)v51 > HIWORD(v51) || (v51 & 1) != 0 )
    {
      if ( (v51 & 1) != 0 )
        goto LABEL_29;
      goto LABEL_30;
    }
    v22 = v62;
  }
  v24 = a7;
  if ( a7 )
  {
    v47 = *a7;
    v48 = a7[1];
    v24 = &v47;
    v18 = v55;
  }
  v32[10] = v18;
  v33 = (unsigned int)v57;
  v32[9] = v22;
  ms_exc.registration.TryLevel = -2;
  if ( (*(_DWORD *)(*(_DWORD *)(v46 + 232) + 8) & 0x2000) != 0 || RegisterDefaultClass(v18) )
  {
    if ( (v33 & 0xFFFF0000) != 0 )
      Atom = UserFindAtom(v33);
    else
      Atom = v33;
    v34 = 0;
    v35 = 0;
    if ( Atom )
    {
      v26 = 0;
      v27 = 0;
      while ( 1 )
      {
        v7 = 0;
        if ( Atom == *(_WORD *)(_gpsi + 2 * (((unsigned int)gDefaultServerClasses[v27 / 4] >> 3) & 0x1F) + 468) )
        {
          v28 = word_24CC4E[v27 / 2];
          if ( v28 )
            break;
        }
        ++v26;
        v27 += 28;
        if ( v27 >= 0xE0 )
          goto LABEL_76;
      }
      LOWORD(a6) = v28 | a6;
      if ( (a6 & 0x200) != 0 && v32[4] < dword_24CC58[7 * v26] )
      {
        UserSetLastError(5);
        UserSetLastError(0);
        goto LABEL_77;
      }
      v29 = dword_24CC58[7 * v26];
      if ( v32[4] >= v29 )
      {
        v34 = dword_24CC58[7 * v26];
        v32[4] -= v29;
      }
    }
LABEL_76:
    v7 = _RegisterClassEx(v32, &v38, a5, a6, v24);
  }
LABEL_77:
  if ( v50 )
    PopAndFreeAlwaysW32ThreadLock(v37);
  if ( v49 )
    PopAndFreeAlwaysW32ThreadLock(v36);
LABEL_81:
  UserSessionSwitchLeaveCrit();
  return v7;
}
