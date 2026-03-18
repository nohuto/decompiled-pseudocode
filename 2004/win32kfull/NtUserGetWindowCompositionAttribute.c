/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C00902A0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C003E010 (DwmSyncGetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006E71C (IsTopLevelOrLayeredChildWindow.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, ULONG64 a2)
{
  __int64 v2; // r12
  NTSTATUS CompositionAttribute; // edi
  __int64 v4; // r13
  ULONG v5; // r8d
  void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  int v12; // r10d
  _QWORD *v13; // rbx
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m256i *Prop; // rax
  unsigned int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __m256i *v24; // rax
  __int32 v25; // edx
  unsigned __int32 v26; // eax
  int v27; // eax
  __int64 v28; // r8
  bool v29; // al
  _QWORD *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  ULONG v34; // eax
  int v35; // r8d
  __int64 v36; // rax
  __int64 CurrentProcessWow64Process; // rax
  ULONG v38; // r8d
  __int128 Src; // [rsp+28h] [rbp-1F0h] BYREF
  __int64 v40; // [rsp+38h] [rbp-1E0h]
  size_t Size; // [rsp+58h] [rbp-1C0h]
  __m256i v42; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v43; // [rsp+80h] [rbp-198h]
  void *v44[2]; // [rsp+88h] [rbp-190h]
  SIZE_T v45; // [rsp+98h] [rbp-180h]
  __m256i v46; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-158h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-148h]
  SIZE_T Length; // [rsp+E0h] [rbp-138h]
  _OWORD v50[2]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v51; // [rsp+120h] [rbp-F8h]
  _OWORD v52[2]; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+148h] [rbp-D0h]
  _OWORD v54[2]; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+170h] [rbp-A8h]
  _OWORD v56[2]; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+198h] [rbp-80h]
  _OWORD v58[2]; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v59; // [rsp+1C0h] [rbp-58h]
  __int128 v60; // [rsp+1C8h] [rbp-50h]
  __int128 v61; // [rsp+1D8h] [rbp-40h]

  v2 = a1;
  CompositionAttribute = -1073741811;
  *(_OWORD *)v44 = 0LL;
  v45 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v40 = 0LL;
  if ( a2 + 24 < a2 || a2 + 24 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v44 = *(_OWORD *)Address;
  v45 = Length;
  v4 = 1LL;
  if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
    v5 = 1;
  else
    v5 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v5);
  if ( (unsigned int)(LODWORD(Address[0]) - 1) <= 0x19 )
  {
    Size = qword_1C02EA6C8[2 * SLODWORD(Address[0])];
    if ( (unsigned int)Length < Size )
      CompositionAttribute = -1073741789;
    else
      CompositionAttribute = 0;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_73;
  v6 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(v2);
  v11 = v7;
  if ( !v7 )
    goto LABEL_72;
  if ( LODWORD(v44[0]) == 18 )
  {
    v12 = 0;
    memset(&v46, 0, sizeof(v46));
    v47 = 0LL;
    v13 = (_QWORD *)v7;
    v14 = 0;
    while ( 1 )
    {
      v15 = v13[13];
      if ( v15 )
      {
        v16 = 0LL;
        v9 = v13[3];
        if ( v9 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          if ( v9 )
            v16 = *(_QWORD *)(v9 + 24);
        }
        if ( v15 == v16 )
          goto LABEL_35;
      }
      if ( (*(_BYTE *)(v13[5] + 26LL) & 8) != 0 )
      {
        v30 = v13;
        do
        {
          v9 = v30[13];
          if ( v9 )
          {
            v31 = 0LL;
            v32 = v30[3];
            if ( v32 )
            {
              v33 = *(_QWORD *)(v32 + 8);
              if ( v33 )
                v31 = *(_QWORD *)(v33 + 24);
            }
            if ( v9 == v31 )
              break;
          }
          v30 = (_QWORD *)v30[13];
        }
        while ( v9 );
        if ( v30 )
        {
LABEL_35:
          Prop = (__m256i *)GetProp((__int64)v13, (unsigned __int16)atomDWMProp, 1LL);
          if ( Prop )
          {
            v46 = *Prop;
            v47 = Prop[1].m256i_i64[0];
            v20 = v46.m256i_i32[0];
          }
          else
          {
            v20 = v14 & 0xFFFF0000;
            memset((char *)v46.m256i_i64 + 4, 0, 28);
            v60 = 0LL;
            v47 = 0LL;
          }
          v14 = v20 & 0x1FFFF;
          v46.m256i_i32[0] = v14;
          v9 = 0LL;
          if ( (v14 & 0x400) != 0 || (v14 & 0x2000) != 0 )
            v9 = 1LL;
          v12 = v9 | 2;
          if ( (v14 & 0x800) == 0 )
            v12 = v9;
          if ( v12 )
            break;
        }
      }
      v13 = (_QWORD *)v13[13];
      if ( !v13 )
        goto LABEL_22;
    }
    if ( v13 != (_QWORD *)v11 )
      v12 |= 4u;
LABEL_22:
    LODWORD(Src) = v12;
    v2 = a1;
    goto LABEL_23;
  }
  if ( LODWORD(v44[0]) == 21 )
  {
    v36 = *(_QWORD *)(v7 + 40);
    v9 = *(_BYTE *)(v36 + 234) & 0x10;
    LODWORD(Src) = *(_BYTE *)(v36 + 234) & 0x10;
  }
  else
  {
    v21 = *(_QWORD *)(v7 + 104);
    if ( !v21 )
      goto LABEL_115;
    v22 = 0LL;
    v9 = *(_QWORD *)(v11 + 24);
    if ( v9 )
    {
      v8 = *(_QWORD *)(v9 + 8);
      if ( v8 )
        v22 = *(_QWORD *)(v8 + 24);
    }
    if ( v21 != v22 )
    {
LABEL_115:
      if ( LODWORD(v44[0]) != 20 || !IsTopLevelOrLayeredChildWindow(v11) )
        goto LABEL_72;
    }
    switch ( LODWORD(v44[0]) )
    {
      case 1:
        v23 = 0LL;
        memset(&v42, 0, sizeof(v42));
        v43 = 0LL;
        if ( v21 )
        {
          v9 = *(_QWORD *)(v11 + 24);
          if ( v9 )
          {
            v9 = *(_QWORD *)(v9 + 8);
            if ( v9 )
              v23 = *(_QWORD *)(v9 + 24);
          }
          if ( v21 == v23 )
            goto LABEL_50;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v11) )
        {
LABEL_50:
          v24 = (__m256i *)GetProp(v11, (unsigned __int16)atomDWMProp, 1LL);
          if ( v24 )
          {
            v42 = *v24;
            v43 = v24[1].m256i_i64[0];
            v25 = v42.m256i_i32[1];
            v26 = v42.m256i_i32[0];
          }
          else
          {
            v26 = v42.m256i_i32[0] & 0xFFFF0000;
            v25 = 0;
            memset((char *)v42.m256i_i64 + 4, 0, 28);
            v61 = 0LL;
            v43 = 0LL;
          }
          v27 = v26 & 0x1FFFF;
          v42.m256i_i32[0] = v27;
          v28 = *(_QWORD *)(v11 + 40);
          v9 = *(unsigned int *)(v28 + 24);
          if ( ((v9 & 0x80000) == 0 || (v9 & 0x20000000) != 0) && (v27 & 1) == 0 )
          {
            if ( v25 )
            {
              if ( v25 == 2 )
                LODWORD(v6) = 1;
            }
            else
            {
              v9 = *(unsigned __int8 *)(v28 + 30);
              v29 = (v9 & 0xC0) != 0xC0;
              LOBYTE(v9) = ~((unsigned __int8)v9 >> 2);
              if ( ((unsigned __int8)v9 & v29 & 1) == 0 )
                LODWORD(v6) = 1;
            }
          }
        }
        LODWORD(Src) = (_DWORD)v6;
        break;
      case 0x14:
        memset(v50, 0, sizeof(v50));
        v51 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v11, (__int64)v50, v10) && (v50[0] & 0x1000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x17:
        memset(v52, 0, sizeof(v52));
        v53 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v11, (__int64)v52, v10) && (v52[0] & 0x2000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x18:
        memset(v54, 0, sizeof(v54));
        v55 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v11, (__int64)v54, v10) && (v54[0] & 0x4000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x19:
        memset(v56, 0, sizeof(v56));
        v57 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v11, (__int64)v56, v10) && (v56[0] & 0x8000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x1A:
        memset(v58, 0, sizeof(v58));
        v59 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v11, (__int64)v58, v10) && (v58[0] & 0x10000) != 0 )
          LODWORD(Src) = 1;
        break;
      default:
        if ( !(unsigned int)IsWindowDesktopComposed(v11) )
        {
LABEL_72:
          CompositionAttribute = -1073741816;
          goto LABEL_24;
        }
        break;
    }
  }
LABEL_23:
  v6 = (void *)ReferenceDwmApiPort(v9);
LABEL_24:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  if ( CompositionAttribute >= 0 && LODWORD(v44[0]) != 18 && LODWORD(v44[0]) != 1 )
  {
    switch ( LODWORD(v44[0]) )
    {
      case 5:
        v35 = 5;
        goto LABEL_82;
      case 8:
        v35 = 8;
        goto LABEL_82;
      case 0xC:
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17);
        v38 = 4;
        if ( CurrentProcessWow64Process )
          v38 = 1;
        ProbeForRead(v44[1], 4uLL, v38);
        LODWORD(Src) = *(_DWORD *)v44[1];
        v35 = 12;
LABEL_82:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v6, v2, v35, &Src);
        v6 = 0LL;
        break;
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v6);
  if ( CompositionAttribute < 0 )
  {
LABEL_73:
    v34 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v34);
    return 0LL;
  }
  memmove(v44[1], &Src, Size);
  return v4;
}
