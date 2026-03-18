/*
 * XREFs of ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _FindQMsg@24 @ 0x6A480 (_FindQMsg@24.c)
 *     _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6 (_WPP_RECORDER_SF_qiqdd@44.c)
 *     ?CheckRemoveHotkeyBit@@YGXPAUtagTHREADINFO@@PAUtagMLIST@@@Z @ 0xC52E8 (-CheckRemoveHotkeyBit@@YGXPAUtagTHREADINFO@@PAUtagMLIST@@@Z.c)
 *     ?CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z @ 0xC93F4 (-CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _FreePointerMessageParams@4 @ 0x15A014 (_FreePointerMessageParams@4.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 */

BOOL __userpurge xxxReadPostMessage@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagMSG *a4,
        struct tagWND *a5,
        _DWORD *a6,
        int a7,
        struct _QMSG_POSTCHAR_FLAGS *a8,
        int a9)
{
  _DWORD *v9; // ebx
  _DWORD *v10; // edi
  int v11; // eax
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  unsigned int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int QMsg; // eax
  _DWORD *v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // esi
  unsigned int v26; // edx
  int v27; // ecx
  int v29; // eax
  int v30; // eax
  int *v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  _DWORD *v36; // edi
  _DWORD *v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // ecx
  int v42; // ecx
  struct tagTHREADINFO *v43; // [esp+0h] [ebp-24h]
  struct tagMLIST *v44; // [esp+4h] [ebp-20h]
  PKTHREAD CurrentThread; // [esp+10h] [ebp-14h]
  int v46; // [esp+10h] [ebp-14h]
  void *v47; // [esp+14h] [ebp-10h]
  int v49; // [esp+18h] [ebp-Ch]
  _DWORD *v50; // [esp+1Ch] [ebp-8h]

  v9 = a2;
  v10 = a1;
  v11 = a2[66];
  if ( (v11 & 0x40000000) != 0 && !a2[114] )
  {
    v12 = a7;
    if ( a7 )
      a2[66] = v11 & 0xBFFFFFFF;
    *a1 = 0;
    a1[1] = 18;
    a1[2] = a2[78];
    a1[3] = 0;
    v13 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v15 = MEMORY[0xFFDF0324];
      v16 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v15 = MEMORY[0xFFDF0324];
          v16 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v9 = a2;
        v10 = a1;
        v13 = MEMORY[0xFFDF0004];
      }
      v14 = v13 * (v15 << 8) + (((unsigned int)v13 * (unsigned __int64)v16) >> 24);
      v12 = a7;
    }
    else
    {
      v14 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    v10[4] = v14;
    v17 = v9[59];
    v18 = *(_DWORD *)(v17 + 64);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 8);
LABEL_27:
      *(_QWORD *)(v10 + 5) = LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(*(_DWORD *)(v19 + 232) + 156));
      EtwTraceRetrievePseudoMessage(v9, v10, v12);
      return 1;
    }
    goto LABEL_26;
  }
  QMsg = FindQMsg(a2, a2 + 112, a3, a4, a5, 0);
  v21 = (_DWORD *)QMsg;
  v50 = (_DWORD *)QMsg;
  if ( !QMsg )
  {
    v22 = v9[66];
    if ( (v22 & 0x40000000) != 0 && !v9[114] )
    {
      v12 = a7;
      if ( a7 )
        v9[66] = v22 & 0xBFFFFFFF;
      *v10 = 0;
      v10[1] = 18;
      v10[2] = v9[78];
      v10[3] = 0;
      v23 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v25 = MEMORY[0xFFDF0324];
        v26 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v25 = MEMORY[0xFFDF0324];
            v26 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v9 = a2;
          v10 = a1;
          v23 = MEMORY[0xFFDF0004];
        }
        v24 = v23 * (v25 << 8) + (((unsigned int)v23 * (unsigned __int64)v26) >> 24);
        v12 = a7;
      }
      else
      {
        v24 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      v10[4] = v24;
      v17 = v9[59];
      v27 = *(_DWORD *)(v17 + 64);
      if ( v27 )
      {
        v19 = *(_DWORD *)(v27 + 8);
        goto LABEL_27;
      }
LABEL_26:
      v19 = *(_DWORD *)(v17 + 52);
      goto LABEL_27;
    }
    goto LABEL_78;
  }
  if ( (v9[172] & 0x2000) == 0 && ((v29 = *(_DWORD *)(QMsg + 12), v29 == 571) || v29 == 572) )
    v30 = 1;
  else
    v30 = a7;
  a7 = v30;
  EtwTraceRetrievePostMessage(v21, v30);
  v9[76] = v21[6];
  if ( v9[104] != v21[7] || v9[105] != v21[8] )
    v9[66] |= 0x100000u;
  v9[104] = v21[7];
  v9[105] = v21[8];
  v47 = v21 + 2;
  v49 = v21[2];
  CurrentThread = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
    PsGetThreadWin32Thread(CurrentThread);
  if ( (unsigned int)(unsigned __int16)v49 < *(_DWORD *)(_gpsi + 4)
    && ((v46 = _gSharedInfo[1] + (unsigned __int16)v49 * _gSharedInfo[2],
         v31 = (int *)HMPkheFromPhe(v46),
         HIWORD(v49) == *(_WORD *)(v46 + 14))
     || !HIWORD(v49)
     || HIWORD(v49) == 0xFFFF)
    && (*(_BYTE *)(v46 + 13) & 1) == 0
    && *(_BYTE *)(v46 + 12) == 1 )
  {
    v32 = *v31;
  }
  else
  {
    v32 = 0;
  }
  if ( v32 )
    v33 = *(_DWORD *)(*(_DWORD *)(v32 + 20) + 184);
  else
    v33 = *(_DWORD *)(v9[58] + 156);
  v9[106] = v33;
  v34 = v9[59];
  v9[107] = v21[11];
  v35 = v21[12];
  v9[77] = v21;
  v9[108] = v35;
  *(_DWORD *)(v34 + 300) = v21[10];
  v9[174] = v21[20];
  v9[175] = v21[21];
  qmemcpy(v10, v47, 0x1Cu);
  v21 = v50;
  if ( a6 )
  {
    *a6 ^= (*a6 ^ ((int)v50[16] >> 14)) & 1;
    *a6 ^= ((unsigned __int8)*a6 ^ (unsigned __int8)((int)v50[16] >> 14)) & 2;
  }
  if ( a7 )
  {
    v36 = v9 + 112;
    if ( *(_DWORD *)(v9[112] + 12) == 786 )
      CheckRemoveHotkeyBit(v43, v44);
    if ( (v9[66] & 0x400) != 0 && CheckProcessForeground(v43) < 0 )
      return 0;
    v37 = (_DWORD *)v50[1];
    if ( v37 )
      *v37 = *v50;
    v38 = *v50;
    if ( *v50 )
      *(_DWORD *)(v38 + 4) = v50[1];
    if ( (_DWORD *)*v36 == v50 )
      *v36 = *v50;
    if ( (_DWORD *)v9[113] == v50 )
      v9[113] = v50[1];
    if ( (((unsigned int)&loc_AFFFF + 1) & v50[16]) == 0 )
    {
      v39 = v9[114] - 1;
      v9[114] = v39;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qiqdd(
          v38,
          20,
          &WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
          (char)v50,
          v50[24],
          v50[25],
          (_BYTE)v9 - 64,
          v9[115],
          v39);
    }
    if ( (v50[16] & 8) != 0 && !v50[15] && IsPointerInputMessage(v50[3]) )
      FreePointerMessageParams(v50);
    Win32FreeToPagedLookasideList(_QEntryLookaside, v50);
  }
  else
  {
    v9[77] = 1;
  }
  v10 = a1;
  v40 = a1[1];
  if ( (unsigned int)(v40 + 2147482655) > 7 )
    goto LABEL_78;
  a1[1] = v40 & 0x7FFFFFFF;
  xxxDDETrackGetMessageHook(a1);
  v41 = a7;
  if ( !a7 )
  {
    if ( v50 == (_DWORD *)FindQMsg(v9, v9 + 112, a3, a4, a5, 0) )
    {
      qmemcpy(v47, a1, 0x1Cu);
      v21 = v50;
      v10 = a1;
    }
LABEL_78:
    v41 = a7;
  }
  if ( !v9[114] && (v9[66] & 0x40000000) == 0 )
  {
    *(_WORD *)(v9[61] + 6) &= 0xFEF7u;
    *(_WORD *)(v9[61] + 4) &= ~0x100u;
  }
  if ( v41 )
  {
    if ( !v21 )
      return 0;
    v42 = v10[1];
    if ( (unsigned int)(v42 - 256) <= 9 && v42 != 258 )
      v9[191] &= ~1u;
  }
  return v21 != 0;
}
