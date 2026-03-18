/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C0148504
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C01482C0 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C01485C8 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     unsafe_cast_fnid_or_class_to_PCOMBOWND @ 0x1C0148660 (unsafe_cast_fnid_or_class_to_PCOMBOWND.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rsi
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // r14
  PRKPROCESS *v11; // r15
  ULONG64 v12; // rcx
  int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  _BYTE v29[48]; // [rsp+50h] [rbp-A8h]
  __int128 v30; // [rsp+80h] [rbp-78h]

  v4 = 0LL;
  *(_DWORD *)v29 = 64;
  v5 = 0;
  v9 = (__int64 *)unsafe_cast_fnid_or_class_to_PCOMBOWND();
  if ( !v9 )
  {
    v4 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
    if ( !v4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(
               (unsigned __int64)a1,
               0x164u,
               0LL,
               (struct _LARGE_STRING *)a2,
               0,
               0,
               0LL,
               1,
               1);
    }
  }
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87LL, v6, v8);
    return 0LL;
  }
  v11 = *(PRKPROCESS **)(a1[2] + 424LL);
  if ( v11 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v7, v6, v8) )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    KeAttachProcess(*v11);
  }
  if ( v9 )
  {
    v14 = *v9;
  }
  else
  {
    v15 = *v4;
    if ( !*v4 )
      goto LABEL_48;
    if ( PsGetCurrentProcessWow64Process(v12) )
      v16 = 0LL;
    else
      v16 = 3LL;
    if ( (v16 & v15) != 0 )
      goto LABEL_47;
    v12 = MmUserProbeAddress;
    v14 = *(_QWORD *)(v15 + 144);
  }
  if ( v14 )
  {
    if ( PsGetCurrentProcessWow64Process(v12) )
      v17 = 0LL;
    else
      v17 = 3LL;
    if ( (v17 & v14) == 0 )
    {
      v18 = *(_QWORD *)v14;
      v19 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
      if ( (v19 & v18) == 0 )
      {
        v20 = 0LL;
        if ( v18 )
          v20 = *(_QWORD *)v18;
        *(_QWORD *)&v29[40] = v20;
        v21 = *(_QWORD *)(v14 + 64);
        v22 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
        if ( (v22 & v21) == 0 )
        {
          v23 = 0LL;
          if ( v21 )
            v23 = *(_QWORD *)v21;
          if ( v23 == *a1 )
            v23 = 0LL;
          *(_QWORD *)&v30 = v23;
          v24 = *(_QWORD *)(v14 + 72);
          v25 = PsGetCurrentProcessWow64Process(v23) ? 0LL : 3LL;
          if ( (v25 & v24) == 0 )
          {
            v26 = 0LL;
            if ( v24 )
              v26 = *(_QWORD *)v24;
            *((_QWORD *)&v30 + 1) = v26;
            *(_OWORD *)&v29[4] = *(_OWORD *)(v14 + 16);
            *(_OWORD *)&v29[20] = *(_OWORD *)(v14 + 32);
            *(_DWORD *)&v29[36] = 0;
            v27 = *(_DWORD *)(v14 + 80);
            v28 = 0;
            if ( (v27 & 3) == 1 )
            {
              v28 = 0x8000;
              *(_DWORD *)&v29[36] = 0x8000;
            }
            if ( (v27 & 0x20) != 0 )
              *(_DWORD *)&v29[36] = v28 | 8;
            *(_OWORD *)a2 = *(_OWORD *)v29;
            *(_OWORD *)(a2 + 16) = *(_OWORD *)&v29[16];
            *(_OWORD *)(a2 + 32) = *(_OWORD *)&v29[32];
            *(_OWORD *)(a2 + 48) = v30;
            v5 = 1;
            goto LABEL_48;
          }
        }
      }
    }
LABEL_47:
    ExRaiseDatatypeMisalignment();
  }
LABEL_48:
  if ( v13 )
    KeDetachProcess();
  return v5;
}
