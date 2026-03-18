/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C00D5480
 * Callers:
 *     <none>
 * Callees:
 *     DwmSyncGetCompositionAttribute @ 0x1C0015170 (DwmSyncGetCompositionAttribute.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00472B4 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, ULONG64 a2)
{
  __int64 v2; // r12
  NTSTATUS CompositionAttribute; // edi
  __int64 v4; // r13
  ULONG v5; // r8d
  void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  int v10; // r10d
  _QWORD *v11; // rbx
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m256i *Prop; // rax
  unsigned int v18; // r12d
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __m256i *v23; // rax
  __int32 v24; // edx
  unsigned __int32 v25; // eax
  int v26; // eax
  __int64 v27; // r8
  bool v28; // al
  _QWORD *v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  ULONG v33; // eax
  int v34; // r8d
  __int64 v35; // rax
  __int64 CurrentProcessWow64Process; // rax
  ULONG v37; // r8d
  __int128 Src; // [rsp+28h] [rbp-1F0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-1E0h]
  size_t Size; // [rsp+58h] [rbp-1C0h]
  __m256i v41; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v42; // [rsp+80h] [rbp-198h]
  void *v43[2]; // [rsp+88h] [rbp-190h]
  SIZE_T v44; // [rsp+98h] [rbp-180h]
  __m256i v45; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-158h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-148h]
  SIZE_T Length; // [rsp+E0h] [rbp-138h]
  _OWORD v49[2]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v50; // [rsp+120h] [rbp-F8h]
  _OWORD v51[2]; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v52; // [rsp+148h] [rbp-D0h]
  _OWORD v53[2]; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+170h] [rbp-A8h]
  _OWORD v55[2]; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+198h] [rbp-80h]
  _OWORD v57[2]; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v58; // [rsp+1C0h] [rbp-58h]
  __int128 v59; // [rsp+1C8h] [rbp-50h]
  __int128 v60; // [rsp+1D8h] [rbp-40h]

  v2 = a1;
  CompositionAttribute = -1073741811;
  *(_OWORD *)v43 = 0LL;
  v44 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v39 = 0LL;
  if ( a2 + 24 < a2 || a2 + 24 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v43 = *(_OWORD *)Address;
  v44 = Length;
  v4 = 1LL;
  if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
    v5 = 1;
  else
    v5 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v5);
  if ( (unsigned int)(LODWORD(Address[0]) - 1) <= 0x19 )
  {
    Size = qword_1C02E9858[2 * SLODWORD(Address[0])];
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
  v9 = v7;
  if ( !v7 )
    goto LABEL_72;
  if ( LODWORD(v43[0]) == 18 )
  {
    v10 = 0;
    memset(&v45, 0, sizeof(v45));
    v46 = 0LL;
    v11 = (_QWORD *)v7;
    v12 = 0;
    while ( 1 )
    {
      v13 = v11[13];
      if ( v13 )
      {
        v14 = 0LL;
        v8 = v11[3];
        if ( v8 )
        {
          v8 = *(_QWORD *)(v8 + 8);
          if ( v8 )
            v14 = *(_QWORD *)(v8 + 24);
        }
        if ( v13 == v14 )
          goto LABEL_35;
      }
      if ( (*(_BYTE *)(v11[5] + 26LL) & 8) != 0 )
      {
        v29 = v11;
        do
        {
          v8 = v29[13];
          if ( v8 )
          {
            v30 = 0LL;
            v31 = v29[3];
            if ( v31 )
            {
              v32 = *(_QWORD *)(v31 + 8);
              if ( v32 )
                v30 = *(_QWORD *)(v32 + 24);
            }
            if ( v8 == v30 )
              break;
          }
          v29 = (_QWORD *)v29[13];
        }
        while ( v8 );
        if ( v29 )
        {
LABEL_35:
          Prop = (__m256i *)GetProp((__int64)v11, (unsigned __int16)atomDWMProp, 1LL);
          if ( Prop )
          {
            v45 = *Prop;
            v46 = Prop[1].m256i_i64[0];
            v18 = v45.m256i_i32[0];
          }
          else
          {
            v18 = v12 & 0xFFFF0000;
            memset((char *)v45.m256i_i64 + 4, 0, 28);
            v59 = 0LL;
            v46 = 0LL;
          }
          v12 = v18 & 0x1FFFF;
          v45.m256i_i32[0] = v12;
          v8 = 0LL;
          if ( (v12 & 0x400) != 0 || (v12 & 0x2000) != 0 )
            v8 = 1LL;
          v10 = v8 | 2;
          if ( (v12 & 0x800) == 0 )
            v10 = v8;
          if ( v10 )
            break;
        }
      }
      v11 = (_QWORD *)v11[13];
      if ( !v11 )
        goto LABEL_22;
    }
    if ( v11 != (_QWORD *)v9 )
      v10 |= 4u;
LABEL_22:
    LODWORD(Src) = v10;
    v2 = a1;
    goto LABEL_23;
  }
  if ( LODWORD(v43[0]) == 21 )
  {
    v35 = *(_QWORD *)(v7 + 40);
    v8 = *(_BYTE *)(v35 + 234) & 0x10;
    LODWORD(Src) = *(_BYTE *)(v35 + 234) & 0x10;
  }
  else
  {
    v19 = *(_QWORD *)(v7 + 104);
    if ( !v19 )
      goto LABEL_115;
    v20 = 0LL;
    v8 = *(_QWORD *)(v9 + 24);
    if ( v8 )
    {
      v21 = *(_QWORD *)(v8 + 8);
      if ( v21 )
        v20 = *(_QWORD *)(v21 + 24);
    }
    if ( v19 != v20 )
    {
LABEL_115:
      if ( LODWORD(v43[0]) != 20 || !IsTopLevelOrLayeredChildWindow(v9) )
        goto LABEL_72;
    }
    switch ( LODWORD(v43[0]) )
    {
      case 1:
        v22 = 0LL;
        memset(&v41, 0, sizeof(v41));
        v42 = 0LL;
        if ( v19 )
        {
          v8 = *(_QWORD *)(v9 + 24);
          if ( v8 )
          {
            v8 = *(_QWORD *)(v8 + 8);
            if ( v8 )
              v22 = *(_QWORD *)(v8 + 24);
          }
          if ( v19 == v22 )
            goto LABEL_50;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v9) )
        {
LABEL_50:
          v23 = (__m256i *)GetProp(v9, (unsigned __int16)atomDWMProp, 1LL);
          if ( v23 )
          {
            v41 = *v23;
            v42 = v23[1].m256i_i64[0];
            v24 = v41.m256i_i32[1];
            v25 = v41.m256i_i32[0];
          }
          else
          {
            v25 = v41.m256i_i32[0] & 0xFFFF0000;
            v24 = 0;
            memset((char *)v41.m256i_i64 + 4, 0, 28);
            v60 = 0LL;
            v42 = 0LL;
          }
          v26 = v25 & 0x1FFFF;
          v41.m256i_i32[0] = v26;
          v27 = *(_QWORD *)(v9 + 40);
          v8 = *(unsigned int *)(v27 + 24);
          if ( ((v8 & 0x80000) == 0 || (v8 & 0x20000000) != 0) && (v26 & 1) == 0 )
          {
            if ( v24 )
            {
              if ( v24 == 2 )
                LODWORD(v6) = 1;
            }
            else
            {
              v8 = *(unsigned __int8 *)(v27 + 30);
              v28 = (v8 & 0xC0) != 0xC0;
              LOBYTE(v8) = ~((unsigned __int8)v8 >> 2);
              if ( ((unsigned __int8)v8 & v28 & 1) == 0 )
                LODWORD(v6) = 1;
            }
          }
        }
        LODWORD(Src) = (_DWORD)v6;
        break;
      case 0x14:
        memset(v49, 0, sizeof(v49));
        v50 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v9, (__int64)v49) && (v49[0] & 0x1000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x17:
        memset(v51, 0, sizeof(v51));
        v52 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v9, (__int64)v51) && (v51[0] & 0x2000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x18:
        memset(v53, 0, sizeof(v53));
        v54 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v9, (__int64)v53) && (v53[0] & 0x4000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x19:
        memset(v55, 0, sizeof(v55));
        v56 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v9, (__int64)v55) && (v55[0] & 0x8000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x1A:
        memset(v57, 0, sizeof(v57));
        v58 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v9, (__int64)v57) && (v57[0] & 0x10000) != 0 )
          LODWORD(Src) = 1;
        break;
      default:
        if ( !(unsigned int)IsWindowDesktopComposed(v9) )
        {
LABEL_72:
          CompositionAttribute = -1073741816;
          goto LABEL_24;
        }
        break;
    }
  }
LABEL_23:
  v6 = (void *)ReferenceDwmApiPort(v8);
LABEL_24:
  UserSessionSwitchLeaveCrit(v8);
  if ( CompositionAttribute >= 0 && LODWORD(v43[0]) != 18 && LODWORD(v43[0]) != 1 )
  {
    switch ( LODWORD(v43[0]) )
    {
      case 5:
        v34 = 5;
        goto LABEL_82;
      case 8:
        v34 = 8;
        goto LABEL_82;
      case 0xC:
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15);
        v37 = 4;
        if ( CurrentProcessWow64Process )
          v37 = 1;
        ProbeForRead(v43[1], 4uLL, v37);
        LODWORD(Src) = *(_DWORD *)v43[1];
        v34 = 12;
LABEL_82:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v6, v2, v34, &Src);
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
    v33 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v33);
    return 0LL;
  }
  memmove(v43[1], &Src, Size);
  return v4;
}
