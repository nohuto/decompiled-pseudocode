/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C0145ED4
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C0145C90 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0145FE8 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _LARGE_STRING *v3; // r10
  __int64 *v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rdi
  PRKPROCESS *v11; // r14
  ULONG64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  _BYTE v28[48]; // [rsp+50h] [rbp-A8h]
  __int128 v29; // [rsp+80h] [rbp-78h]
  int v30; // [rsp+100h] [rbp+8h]
  _OWORD *v31; // [rsp+108h] [rbp+10h]

  v31 = (_OWORD *)a2;
  v3 = (struct _LARGE_STRING *)a2;
  v5 = 0LL;
  *(_DWORD *)v28 = 64;
  v6 = 0;
  if ( a1 )
  {
    v7 = a1[5];
    v8 = 674LL;
    if ( (*(_WORD *)(v7 + 42) & 0x3FFF) == 0x2A2
      || (a2 = **(unsigned __int16 **)(a1[17] + 8LL), v8 = gpsi, (_WORD)a2 == *(_WORD *)(gpsi + 878LL)) )
    {
      if ( *(_DWORD *)(v7 + 252) )
        v9 = (__int64 *)a1[35];
      else
        v9 = *(__int64 **)(v7 + 296);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
      goto LABEL_12;
  }
  else
  {
    v9 = 0LL;
  }
  v5 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
  if ( !v5 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout((unsigned __int64)a1, 0x164u, 0LL, v3, 0, 0, 0LL, 1, 1);
  }
LABEL_12:
  if ( *(_DWORD *)v3 != 64 )
  {
    UserSetLastError(87LL, a2, a3);
    return 0LL;
  }
  v11 = *(PRKPROCESS **)(a1[2] + 416LL);
  if ( v11 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v8) )
  {
    v30 = 0;
  }
  else
  {
    v30 = 1;
    KeAttachProcess(*v11);
  }
  if ( v9 )
  {
    v13 = *v9;
  }
  else
  {
    v14 = *v5;
    if ( !*v5 )
      goto LABEL_56;
    if ( PsGetCurrentProcessWow64Process(v12) )
      v15 = 0LL;
    else
      v15 = 3LL;
    if ( (v15 & v14) != 0 )
      goto LABEL_55;
    v12 = MmUserProbeAddress;
    v13 = *(_QWORD *)(v14 + 144);
  }
  if ( v13 )
  {
    if ( PsGetCurrentProcessWow64Process(v12) )
      v16 = 0LL;
    else
      v16 = 3LL;
    if ( (v16 & v13) == 0 )
    {
      v17 = *(_QWORD *)v13;
      v18 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
      if ( (v18 & v17) == 0 )
      {
        v19 = 0LL;
        if ( v17 )
          v19 = *(_QWORD *)v17;
        *(_QWORD *)&v28[40] = v19;
        v20 = *(_QWORD *)(v13 + 64);
        v21 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
        if ( (v21 & v20) == 0 )
        {
          v22 = 0LL;
          if ( v20 )
            v22 = *(_QWORD *)v20;
          if ( v22 == *a1 )
            v22 = 0LL;
          *(_QWORD *)&v29 = v22;
          v23 = *(_QWORD *)(v13 + 72);
          v24 = PsGetCurrentProcessWow64Process(v22) ? 0LL : 3LL;
          if ( (v24 & v23) == 0 )
          {
            v25 = 0LL;
            if ( v23 )
              v25 = *(_QWORD *)v23;
            *((_QWORD *)&v29 + 1) = v25;
            *(_OWORD *)&v28[4] = *(_OWORD *)(v13 + 16);
            *(_OWORD *)&v28[20] = *(_OWORD *)(v13 + 32);
            *(_DWORD *)&v28[36] = 0;
            v26 = *(_DWORD *)(v13 + 80);
            v27 = 0;
            if ( (v26 & 3) == 1 )
            {
              v27 = 0x8000;
              *(_DWORD *)&v28[36] = 0x8000;
            }
            if ( (v26 & 0x20) != 0 )
              *(_DWORD *)&v28[36] = v27 | 8;
            *v31 = *(_OWORD *)v28;
            v31[1] = *(_OWORD *)&v28[16];
            v31[2] = *(_OWORD *)&v28[32];
            v31[3] = v29;
            v6 = 1;
            goto LABEL_56;
          }
        }
      }
    }
LABEL_55:
    ExRaiseDatatypeMisalignment();
  }
LABEL_56:
  if ( v30 )
    KeDetachProcess();
  return v6;
}
