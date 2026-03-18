/*
 * XREFs of NtUserSlicerControl @ 0x1C0204250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     MagSlicerControl @ 0x1C01CE994 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, __int128 *a3, unsigned int a4)
{
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r13
  NTSTATUS v12; // ebx
  __int64 v13; // rdi
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int128 *v17; // rcx
  __int128 *v19; // rcx
  ULONG64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  __int128 *v23; // rax
  unsigned int i; // edx
  __int64 v25; // r9
  __int128 *v26; // r8
  __int128 v27; // xmm0
  __int64 ThreadWin32Thread; // rax
  int v29; // eax
  unsigned int Size; // [rsp+34h] [rbp-114h]
  __int128 *Size_4; // [rsp+38h] [rbp-110h]
  __int128 *v32; // [rsp+50h] [rbp-F8h]
  __int64 v33; // [rsp+90h] [rbp-B8h]
  __int128 v34; // [rsp+A8h] [rbp-A0h]
  __int128 v35; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-60h]
  __int128 v37; // [rsp+F8h] [rbp-50h]

  Size_4 = 0LL;
  Size = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( !v11 || a2 >= 5 )
  {
    v12 = -1073741811;
LABEL_3:
    v8 = 0;
    v13 = 0LL;
    goto LABEL_4;
  }
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      if ( a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      Size_4 = 0LL;
      Size = 0;
    }
    else if ( a2 == 2 )
    {
      if ( !a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x10 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v35 = *a3;
      if ( (unsigned int)v35 > 6 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      v21 = 32LL * (unsigned int)v35;
      if ( v21 > 0xFFFFFFFF )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      v22 = v21 + 16;
      if ( (int)v21 + 16 < (unsigned int)v21 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      v23 = (__int128 *)Win32AllocPool(v22, 1735226197LL);
      Size_4 = v23;
      if ( !v23 )
      {
        v12 = -1073741801;
        goto LABEL_62;
      }
      v32 = v23;
      *v23 = v35;
      for ( i = 0; i < *(_DWORD *)v23; ++i )
      {
        v25 = 2LL * i;
        v26 = &a3[v25 + 1];
        if ( v26 + 2 < v26 || (unsigned __int64)(v26 + 2) > MmUserProbeAddress )
          v26 = (__int128 *)MmUserProbeAddress;
        v27 = v26[1];
        v23[v25 + 1] = *v26;
        v23[v25 + 2] = v27;
      }
      Size = v22;
    }
    else if ( a2 == 3 )
    {
      if ( !a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x18 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      v20 = (ULONG64)a3;
      if ( (__int128 *)((char *)a3 + 24) < a3 || (unsigned __int64)a3 + 24 > MmUserProbeAddress )
        v20 = MmUserProbeAddress;
      v33 = *(_QWORD *)(v20 + 16);
      v35 = *(_OWORD *)v20;
      *(_QWORD *)&v36 = v33;
      Size_4 = &v35;
      Size = 24;
    }
    else
    {
      if ( !a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x20 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      v19 = a3;
      if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
        v19 = (__int128 *)MmUserProbeAddress;
      v34 = v19[1];
      v35 = *v19;
      v36 = v34;
      Size_4 = &v35;
      Size = 32;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v29 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v11, a2, Size_4, Size);
  v12 = v29;
  if ( a2 == 4 && v29 >= 0 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    memmove(a3, Size_4, Size);
  }
LABEL_62:
  if ( v12 < 0 )
    goto LABEL_3;
  v13 = 1LL;
LABEL_4:
  if ( !v8 )
  {
    v14 = RtlNtStatusToDosError(v12);
    UserSetLastError(v14, v15, v16);
  }
  v17 = v32;
  if ( v32 )
    Win32FreePool(v32);
  UserSessionSwitchLeaveCrit(v17, v9, v10);
  return v13;
}
