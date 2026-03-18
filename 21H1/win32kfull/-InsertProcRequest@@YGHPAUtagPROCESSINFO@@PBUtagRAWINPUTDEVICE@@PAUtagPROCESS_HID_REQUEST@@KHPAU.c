/*
 * XREFs of ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90
 * Callers:
 *     ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA (-SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _AllocateAndLinkHidTLCInfo@8 @ 0xC97E6 (_AllocateAndLinkHidTLCInfo@8.c)
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 *     _SearchHidTLCInfo@8 @ 0xCA014 (_SearchHidTLCInfo@8.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YGPAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x143A42 (-AllocateAndLinkHidPageOnlyRequest@@YGPAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ?SearchHidPageOnlyRequest@@YGPAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x143E75 (-SearchHidPageOnlyRequest@@YGPAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YGXGKH@Z @ 0x143E91 (-SetHidPOCountToTLCInfo@@YGXGKH@Z.c)
 */

int __userpurge InsertProcRequest@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESSINFO *a3,
        const struct tagRAWINPUTDEVICE *a4,
        struct tagPROCESS_HID_REQUEST *a5,
        unsigned int a6,
        int a7,
        struct tagWND *a8,
        int a9)
{
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  struct DEVICEINFO *i; // edi
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  struct tagHID_PAGEONLY_REQUEST *v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  unsigned __int16 v25; // [esp+0h] [ebp-10h]
  unsigned int v26; // [esp+0h] [ebp-10h]
  int v27; // [esp+4h] [ebp-Ch]

  v9 = a2;
  if ( a4 != (const struct tagRAWINPUTDEVICE *)1 )
  {
    if ( a4 != (const struct tagRAWINPUTDEVICE *)2 )
    {
      if ( a4 != (const struct tagRAWINPUTDEVICE *)3 )
        goto LABEL_12;
      if ( !a5 )
      {
        LOWORD(a1) = *((_WORD *)a3 + 5);
        LOWORD(a2) = *((_WORD *)a3 + 4);
        v23 = SearchHidTLCInfo(a2, a1);
        if ( !v23 )
        {
          v23 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 4), *((_WORD *)a3 + 5));
          if ( !v23 )
            goto LABEL_33;
        }
        *((_DWORD *)a3 + 4) = v23;
        ++*(_DWORD *)(v23 + 28);
      }
      v11 = *(_DWORD *)(v9 + 472) + 24;
      v24 = *(_DWORD *)v11;
      if ( *(_DWORD *)(*(_DWORD *)v11 + 4) == v11 )
      {
        *(_DWORD *)a3 = v24;
        *((_DWORD *)a3 + 1) = v11;
        *(_DWORD *)(v24 + 4) = a3;
        goto LABEL_11;
      }
LABEL_23:
      __fastfail(3u);
    }
    v20 = SearchHidPageOnlyRequest(v25);
    if ( v20 || (v20 = AllocateAndLinkHidPageOnlyRequest(v26)) != 0 )
    {
      *((_DWORD *)a3 + 4) = v20;
      ++*((_DWORD *)v20 + 3);
      SetHidPOCountToTLCInfo(0, v26, v27);
      HMAssignmentLock(v22, v21);
      v11 = *(_DWORD *)(v9 + 472) + 16;
      goto LABEL_9;
    }
LABEL_33:
    UserSetLastError((struct _NT_TIB *)8);
    return 0;
  }
  if ( !a5 )
  {
    LOWORD(a1) = *((_WORD *)a3 + 5);
    LOWORD(a2) = *((_WORD *)a3 + 4);
    v10 = SearchHidTLCInfo(a2, a1);
    if ( v10 || (v10 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 4), *((_WORD *)a3 + 5))) != 0 )
    {
      *((_DWORD *)a3 + 4) = v10;
      ++*(_DWORD *)(v10 + 16);
      goto LABEL_6;
    }
    goto LABEL_33;
  }
LABEL_6:
  if ( !a7 )
    HMAssignmentLock(a2, a1);
  v11 = *(_DWORD *)(v9 + 472) + 8;
LABEL_9:
  v12 = *(_DWORD *)v11;
  if ( *(_DWORD *)(*(_DWORD *)v11 + 4) != v11 )
    goto LABEL_23;
  *(_DWORD *)a3 = v12;
  *((_DWORD *)a3 + 1) = v11;
  *(_DWORD *)(v12 + 4) = a3;
LABEL_11:
  a1 = v27;
  *(_DWORD *)v11 = a3;
LABEL_12:
  v13 = *((_DWORD *)a3 + 3) ^ (*((_DWORD *)a3 + 3) ^ (*(_DWORD *)(a1 + 4) >> 11)) & 4;
  *((_DWORD *)a3 + 3) = v13;
  if ( (*(_DWORD *)(a1 + 4) & 0x1100) != 0 )
  {
    v17 = v13;
    if ( !a5 && (v13 & 1) == 0 )
    {
      ++*(_DWORD *)(*(_DWORD *)(v9 + 472) + 40);
      ++_gHidCounters[2];
      v17 = *((_DWORD *)a3 + 3);
    }
    v18 = v17 | 1;
    *((_DWORD *)a3 + 3) = v18;
    if ( (*(_DWORD *)(a1 + 4) & 0x1000) != 0 )
      v19 = v18 | 2;
    else
      v19 = v18 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 3) = v19;
  }
  for ( i = CBaseInput::TmpGetDeviceList(_gpHidInput); i; i = (struct DEVICEINFO *)*((_DWORD *)i + 7) )
    PostDeviceNotification(a3, v14, (struct DEVICEINFO *)1, 0);
  return 1;
}
