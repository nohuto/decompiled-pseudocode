/*
 * XREFs of _NtUserMagSetContextInformation@16 @ 0x1667BD
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 */

int __stdcall NtUserMagSetContextInformation(unsigned int a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int *v4; // esi
  int v5; // ebx
  int *v6; // edi
  int *v7; // esi
  int v8; // eax
  int v9; // ebx
  unsigned int *v10; // esi
  _BYTE *v11; // esi
  int *v12; // eax
  int v13; // ecx
  unsigned int i; // edx
  int *v15; // esi
  int *v16; // ecx
  int *v17; // eax
  int v18; // ecx
  int *v19; // esi
  unsigned int v20; // edx
  int *v21; // esi
  int *v22; // esi
  _DWORD *v23; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v26; // edi
  struct _NT_TIB *v27; // eax
  int v29; // [esp-4h] [ebp-1B0h]
  ULONG *v30; // [esp+0h] [ebp-1ACh]
  ULONG *v31; // [esp+0h] [ebp-1ACh]
  unsigned int v32; // [esp+0h] [ebp-1ACh]
  unsigned int *v33; // [esp+4h] [ebp-1A8h]
  _BYTE v34[100]; // [esp+10h] [ebp-19Ch] BYREF
  _BYTE v35[36]; // [esp+74h] [ebp-138h] BYREF
  _BYTE v36[32]; // [esp+98h] [ebp-114h] BYREF
  int v37; // [esp+B8h] [ebp-F4h]
  int v38; // [esp+BCh] [ebp-F0h]
  int v39; // [esp+C0h] [ebp-ECh]
  int v40; // [esp+C4h] [ebp-E8h]
  unsigned int v41; // [esp+C8h] [ebp-E4h]
  unsigned int v42; // [esp+CCh] [ebp-E0h]
  unsigned int v43; // [esp+D0h] [ebp-DCh]
  unsigned int v44; // [esp+D4h] [ebp-D8h]
  int v45; // [esp+DCh] [ebp-D0h]
  int v46; // [esp+E0h] [ebp-CCh]
  int v47; // [esp+E8h] [ebp-C4h]
  unsigned int v48; // [esp+ECh] [ebp-C0h]
  int *v49; // [esp+F0h] [ebp-BCh]
  int *v50; // [esp+F4h] [ebp-B8h]
  unsigned int v51; // [esp+F8h] [ebp-B4h]
  int v52; // [esp+FCh] [ebp-B0h]
  int v53; // [esp+100h] [ebp-ACh]
  int *v54; // [esp+104h] [ebp-A8h]
  unsigned int v55; // [esp+108h] [ebp-A4h]
  unsigned int v56; // [esp+10Ch] [ebp-A0h] BYREF
  unsigned int v57; // [esp+110h] [ebp-9Ch]
  int v58; // [esp+114h] [ebp-98h]
  int v59; // [esp+118h] [ebp-94h]
  int *v60; // [esp+11Ch] [ebp-90h]
  int v61; // [esp+120h] [ebp-8Ch]
  int *v62; // [esp+124h] [ebp-88h]
  unsigned int v63[27]; // [esp+128h] [ebp-84h] BYREF
  CPPEH_RECORD ms_exc; // [esp+194h] [ebp-18h]

  v4 = a3;
  v53 = (int)a3;
  v57 = a1;
  v5 = -1073741811;
  v61 = -1073741811;
  v6 = 0;
  v60 = 0;
  v58 = 0;
  v59 = 0;
  memset(v63, 0, 0x68u);
  v56 = 0;
  v51 = 0;
  v54 = 0;
  v50 = 0;
  v62 = 0;
  v49 = 0;
  v55 = 0;
  EnterCrit(0, 1);
  if ( a1 == -3 )
  {
    v52 = -1;
  }
  else if ( v57 )
  {
    v52 = ValidateHwnd(v57);
    if ( !v52 )
    {
LABEL_5:
      v7 = v62;
LABEL_95:
      v26 = 0;
      v27 = (struct _NT_TIB *)RtlNtStatusToDosError(v5);
      UserSetLastError(v27);
      goto LABEL_96;
    }
  }
  else
  {
    v52 = 0;
  }
  v8 = a2;
  if ( a2 >= 11 )
  {
    v5 = -1073741821;
    goto LABEL_5;
  }
  if ( a2 == 4 )
  {
    v57 = _gptiCurrent;
    if ( *(_DWORD *)(_gptiCurrent + 248) != _grpdeskRitInput )
    {
      UserSetLastError((struct _NT_TIB *)5);
      goto LABEL_12;
    }
    if ( (unsigned __int8)Enforced() && *(int *)(*(_DWORD *)(v57 + 232) + 8) >= 0 )
    {
      UserSetLastError((struct _NT_TIB *)5);
      EtwTraceUIPISystemError(*(_DWORD *)(v57 + 232), 0, 7);
      v5 = -1073741790;
      goto LABEL_5;
    }
    v8 = 4;
  }
  ms_exc.registration.TryLevel = 0;
  switch ( v8 )
  {
    case 0:
    case 1:
      if ( a3 )
        goto LABEL_19;
      v6 = 0;
      v9 = 0;
      goto LABEL_21;
    case 2:
      if ( !a3 )
        goto LABEL_19;
      v9 = 16;
      if ( a4 < 0x10 )
        goto LABEL_25;
      if ( a3 + 4 < a3 || (unsigned int)(a3 + 4) > _MmUserProbeAddress )
        v4 = (unsigned int *)_MmUserProbeAddress;
      v41 = *v4;
      v10 = v4 + 1;
      v42 = *v10++;
      v43 = *v10;
      v44 = v10[1];
      v63[0] = v41;
      v63[1] = v42;
      v63[2] = v43;
      v63[3] = v44;
      goto LABEL_30;
    case 3:
      if ( !a3 )
        goto LABEL_19;
      v9 = 32;
      if ( a4 < 0x20 )
        goto LABEL_25;
      if ( a3 + 8 < a3 || (unsigned int)(a3 + 8) > _MmUserProbeAddress )
        v4 = (unsigned int *)_MmUserProbeAddress;
      qmemcpy(v36, v4, sizeof(v36));
      v29 = 8;
      v11 = v36;
      goto LABEL_37;
    case 4:
      if ( !a3 )
        goto LABEL_19;
      v9 = 36;
      if ( a4 < 0x24 )
        goto LABEL_25;
      if ( a3 + 9 < a3 || (unsigned int)(a3 + 9) > _MmUserProbeAddress )
        v4 = (unsigned int *)_MmUserProbeAddress;
      qmemcpy(v35, v4, sizeof(v35));
      v29 = 9;
      v11 = v35;
      goto LABEL_37;
    case 5:
      if ( !a3 )
        goto LABEL_19;
      v9 = 100;
      if ( a4 < 0x64 )
        goto LABEL_25;
      if ( a3 + 25 < a3 || (unsigned int)(a3 + 25) > _MmUserProbeAddress )
        v4 = (unsigned int *)_MmUserProbeAddress;
      qmemcpy(v34, v4, sizeof(v34));
      v29 = 25;
      v11 = v34;
LABEL_37:
      qmemcpy(v63, v11, 4 * v29);
LABEL_30:
      v6 = (int *)v63;
      goto LABEL_21;
    case 6:
      if ( !a3 )
        goto LABEL_19;
      if ( a4 < 0xC )
        goto LABEL_25;
      if ( a3 + 3 < a3 || (unsigned int)(a3 + 3) > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      v63[0] = *a3;
      v63[1] = a3[1];
      v63[2] = a3[2];
      if ( v63[1] > 0x19 || v63[0] > 0x19 )
        goto LABEL_25;
      if ( (ULongAdd(v63[1], v63[0], (int *)&v56, (unsigned int)v30, v33) & 0x80000000) != 0 )
        goto LABEL_19;
      if ( v56 > 0x19 )
      {
LABEL_25:
        v5 = -1073741306;
LABEL_19:
        v61 = v5;
        ms_exc.registration.TryLevel = -2;
        goto LABEL_12;
      }
      if ( ULongLongToULong(4LL * v56, v31) < 0 )
        goto LABEL_19;
      v58 = v51 + 8;
      v57 = v51 + 8;
      if ( v51 + 8 < v51 )
        goto LABEL_19;
      v9 = v51 + 8;
      v12 = (int *)Win32AllocPool(v51 + 8, 1735226197);
      v6 = v12;
      v60 = v12;
      if ( !v12 )
      {
LABEL_62:
        v5 = -1073741801;
        goto LABEL_19;
      }
      v13 = v53;
      v46 = v53;
      v54 = v12;
      v50 = v12;
      *v12 = v63[0];
      v12[1] = v63[1];
      for ( i = 0; ; ++i )
      {
        v48 = i;
        if ( i >= v56 )
          break;
        v15 = (int *)(v13 + 8 + 4 * i);
        if ( v15 + 1 < v15 || (v9 = v58, (unsigned int)(v15 + 1) > _MmUserProbeAddress) )
          v15 = (int *)_MmUserProbeAddress;
        v54[i + 2] = *v15;
      }
LABEL_22:
      v59 = v9;
LABEL_93:
      ms_exc.registration.TryLevel = -2;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v5 = MagSetLensContextInformation(_gMagnContext, ThreadWin32Thread, v52, 0, a2, v6, v9);
LABEL_12:
      v7 = v62;
      v26 = 1;
      if ( v5 < 0 )
        goto LABEL_95;
LABEL_96:
      if ( v7 )
        Win32FreePool(v7);
      if ( v54 )
        Win32FreePool(v54);
      UserSessionSwitchLeaveCrit();
      return v26;
    case 7:
      if ( !a3 )
        goto LABEL_19;
      v58 = 16;
      if ( a4 < 0x10 )
        goto LABEL_25;
      if ( a3 + 4 < a3 || (unsigned int)(a3 + 4) > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      v63[0] = *a3;
      v63[1] = a3[1];
      v63[2] = a3[2];
      v63[3] = a3[3];
      if ( v63[0] > 6 )
        goto LABEL_25;
      if ( ULongLongToULong(16LL * v63[0], v30) < 0 || (ULongAdd(v58, v55, v16, v32, v33) & 0x80000000) != 0 )
        goto LABEL_19;
      v9 = v55;
      v17 = (int *)Win32AllocPool(v55, 1735226197);
      v60 = v17;
      if ( !v17 )
        goto LABEL_62;
      v18 = v53;
      v45 = v53;
      v19 = v17;
      v62 = v17;
      v49 = v17;
      *v17 = v63[0];
      v17[1] = v63[1];
      v17[2] = v63[2];
      v17[3] = v63[3];
      v20 = 0;
      v47 = 0;
      while ( v20 < *v19 )
      {
        v53 = 16 * v20;
        v21 = (int *)(16 * v20 + v18 + 16);
        if ( v21 + 4 < v21 || (unsigned int)(v21 + 4) > _MmUserProbeAddress )
          v21 = (int *)_MmUserProbeAddress;
        v37 = *v21;
        v22 = v21 + 1;
        v38 = *v22++;
        v39 = *v22;
        v40 = v22[1];
        v23 = (int *)((char *)v62 + v53 + 16);
        *v23++ = v37;
        *v23++ = v38;
        *v23 = v39;
        v23[1] = v40;
        v47 = ++v20;
        v19 = v62;
      }
      v59 = v9;
      v6 = v60;
      goto LABEL_93;
    case 8:
      goto LABEL_19;
    case 9:
    case 10:
      if ( !a3 )
        goto LABEL_19;
      if ( a4 < 4 )
        goto LABEL_25;
      if ( a3 + 1 < a3 || (unsigned int)(a3 + 1) > _MmUserProbeAddress )
        v4 = (unsigned int *)_MmUserProbeAddress;
      v63[0] = *v4;
      v6 = (int *)v63;
      v9 = 4;
LABEL_21:
      v60 = v6;
      goto LABEL_22;
    default:
      v9 = v58;
      goto LABEL_93;
  }
}
