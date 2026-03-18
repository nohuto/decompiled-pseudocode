/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C01FF460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01CD4A0 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // rsi
  __int64 v8; // r13
  _OWORD *v9; // r14
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r8
  NTSTATUS LensContextInformation; // ebx
  __int64 v14; // rdi
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _DWORD *v20; // r15
  unsigned int *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r15d
  __int64 v24; // rax
  __int128 *v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 ThreadWin32Thread; // rax
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  __int64 v30; // [rsp+48h] [rbp-140h]
  _OWORD *v31; // [rsp+50h] [rbp-138h]
  ULONG64 v32; // [rsp+68h] [rbp-120h]
  __int64 v33; // [rsp+70h] [rbp-118h]
  __int64 v34; // [rsp+78h] [rbp-110h]
  __int128 v35; // [rsp+A0h] [rbp-E8h]
  __int128 v36; // [rsp+B0h] [rbp-D8h]
  __int128 v37; // [rsp+C0h] [rbp-C8h]
  _BYTE v38[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v32 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v38, 0, 0x68uLL);
  v8 = 0LL;
  v30 = 0LL;
  v34 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v33 = -1LL;
  }
  else if ( a1 )
  {
    v33 = ValidateHwnd(a1);
    if ( !v33 )
      goto LABEL_5;
  }
  else
  {
    v33 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v20 = (_DWORD *)v32;
  v21 = (unsigned int *)v32;
  if ( v32 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v22 = *v21;
  LODWORD(Size) = *v21;
  if ( a2 > 6 )
  {
    v11 = (unsigned int)(a2 - 7);
    if ( a2 != 7 )
    {
      v11 = (unsigned int)(a2 - 8);
      if ( a2 != 8 )
      {
        v11 = (unsigned int)(a2 - 9);
        if ( (unsigned int)v11 > 1 )
          goto LABEL_67;
        if ( a3 )
        {
          if ( v22 < 4 )
            goto LABEL_30;
          v7 = v38;
          LODWORD(Size) = 4;
          goto LABEL_67;
        }
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_5;
      if ( v22 < 0x30 )
        goto LABEL_30;
      v9 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      v31 = v9;
      if ( v9 )
      {
        v25 = (__int128 *)a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > MmUserProbeAddress )
          v25 = (__int128 *)MmUserProbeAddress;
        v35 = *v25;
        v36 = v25[1];
        v26 = v36;
        v37 = v25[2];
        v27 = v37;
        *v9 = v35;
        v9[1] = v26;
        v9[2] = v27;
        v7 = v9;
        LODWORD(Size) = 48;
        goto LABEL_67;
      }
LABEL_55:
      LensContextInformation = -1073741801;
      goto LABEL_6;
    }
    if ( !a3 )
      goto LABEL_5;
    if ( v22 < 0x10 )
      goto LABEL_30;
    v23 = 160;
    if ( v22 <= 0xA0 )
      v23 = v22;
    v24 = Win32AllocPoolZInit(v23, 1735226197LL);
    v34 = v24;
LABEL_65:
    if ( v24 )
    {
      LODWORD(Size) = v23;
      v20 = (_DWORD *)v32;
      v7 = (_BYTE *)v24;
      goto LABEL_67;
    }
    goto LABEL_55;
  }
  if ( a2 == 6 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( v22 < 8 )
      goto LABEL_30;
    v23 = 208;
    if ( v22 <= 0xD0 )
      v23 = v22;
    v24 = Win32AllocPoolZInit(v23, 1735226197LL);
    v8 = v24;
    v30 = v24;
    goto LABEL_65;
  }
  if ( a2 < 0 )
    goto LABEL_67;
  if ( a2 <= 1 )
    goto LABEL_5;
  switch ( a2 )
  {
    case 2:
      if ( a3 )
      {
        if ( v22 < 0x10 )
          goto LABEL_30;
        v7 = v38;
        LODWORD(Size) = 16;
        goto LABEL_67;
      }
      goto LABEL_5;
    case 3:
      if ( a3 )
      {
        if ( v22 < 0x20 )
          goto LABEL_30;
        v7 = v38;
        LODWORD(Size) = 32;
        goto LABEL_67;
      }
      goto LABEL_5;
    case 4:
      if ( a3 )
      {
        if ( v22 < 0x24 )
          goto LABEL_30;
        v7 = v38;
        LODWORD(Size) = 36;
        goto LABEL_67;
      }
LABEL_5:
      LensContextInformation = -1073741811;
LABEL_6:
      v10 = 0;
      v14 = 0LL;
      goto LABEL_7;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v22 < 0x64 )
  {
LABEL_30:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v38;
  LODWORD(Size) = 100;
LABEL_67:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v33,
                             0LL,
                             a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation >= 0 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    if ( (unsigned __int64)v20 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = Size;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v14 = 1LL;
LABEL_7:
  if ( !v10 )
  {
    v15 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v15, v16, v17);
  }
  if ( v9 )
    Win32FreePool(v9);
  v18 = v34;
  if ( v34 )
    Win32FreePool(v34);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v18, v11, v12);
  return v14;
}
