/*
 * XREFs of _NtUserMagGetContextInformation@16 @ 0x16642C
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _MagGetLensContextInformation@28 @ 0x13CB12 (_MagGetLensContextInformation@28.c)
 */

int __stdcall NtUserMagGetContextInformation(int a1, int a2, char *a3, ULONG a4)
{
  char *v4; // ebx
  void **v5; // edi
  NTSTATUS LensContextInformation; // esi
  size_t *v7; // ecx
  size_t v8; // eax
  size_t v9; // esi
  void **v10; // eax
  void *v11; // edx
  char *v12; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v15; // ecx
  int v16; // ebx
  struct _NT_TIB *v17; // eax
  size_t v19; // [esp-4h] [ebp-F4h]
  _BYTE v20[48]; // [esp+10h] [ebp-E0h] BYREF
  void **v21; // [esp+54h] [ebp-9Ch]
  void **v22; // [esp+58h] [ebp-98h]
  void *v23; // [esp+5Ch] [ebp-94h]
  int v24; // [esp+60h] [ebp-90h]
  ULONG v25; // [esp+64h] [ebp-8Ch]
  size_t MaxCount; // [esp+68h] [ebp-88h] BYREF
  _BYTE v27[108]; // [esp+6Ch] [ebp-84h] BYREF
  CPPEH_RECORD ms_exc; // [esp+D8h] [ebp-18h]

  v4 = a3;
  v25 = a4;
  v5 = 0;
  MaxCount = 0;
  memset(v27, 0, 0x68u);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  EnterCrit(0, 1);
  if ( a1 == -3 )
  {
    v24 = -1;
  }
  else if ( a1 )
  {
    v24 = ValidateHwnd(a1);
    if ( !v24 )
    {
LABEL_5:
      LensContextInformation = -1073741811;
      goto LABEL_52;
    }
  }
  else
  {
    v24 = 0;
  }
  if ( a2 < 11 )
  {
    ms_exc.registration.TryLevel = 0;
    v7 = (size_t *)v25;
    if ( v25 >= _MmUserProbeAddress )
      v7 = (size_t *)_MmUserProbeAddress;
    v8 = *v7;
    MaxCount = *v7;
    ms_exc.registration.TryLevel = -2;
    switch ( a2 )
    {
      case 0:
      case 1:
        goto LABEL_5;
      case 2:
        if ( !a3 )
          goto LABEL_5;
        v19 = 16;
        goto LABEL_43;
      case 3:
        if ( !a3 )
          goto LABEL_5;
        v19 = 32;
        goto LABEL_43;
      case 4:
        if ( !a3 )
          goto LABEL_5;
        v19 = 36;
        goto LABEL_43;
      case 5:
        if ( !a3 )
          goto LABEL_5;
        v19 = 100;
        goto LABEL_43;
      case 6:
        if ( !a3 )
          goto LABEL_5;
        if ( v8 < 8 )
          goto LABEL_22;
        v9 = 108;
        if ( v8 <= 0x6C )
          v9 = v8;
        v10 = (void **)Win32AllocPoolZInit(v9, 1735226197);
        v21 = v10;
        goto LABEL_26;
      case 7:
        if ( !a3 )
          goto LABEL_5;
        if ( v8 < 0x10 )
          goto LABEL_22;
        v9 = 112;
        if ( v8 <= 0x70 )
          v9 = v8;
        v10 = (void **)Win32AllocPoolZInit(v9, 1735226197);
        v22 = v10;
LABEL_26:
        if ( !v10 )
          goto LABEL_27;
        v5 = v10;
        MaxCount = v9;
        goto LABEL_45;
      case 8:
        if ( !a3 )
          goto LABEL_5;
        if ( v8 < 0x30 )
          goto LABEL_22;
        v11 = (void *)Win32AllocPoolZInit(48, 1735226197);
        v23 = v11;
        if ( !v11 )
        {
LABEL_27:
          LensContextInformation = -1073741801;
          goto LABEL_52;
        }
        ms_exc.registration.TryLevel = 1;
        v12 = a3;
        if ( a3 + 48 < a3 || (unsigned int)(a3 + 48) > _MmUserProbeAddress )
          v12 = (char *)_MmUserProbeAddress;
        qmemcpy(v20, v12, sizeof(v20));
        qmemcpy(v11, v20, 0x30u);
        ms_exc.registration.TryLevel = -2;
        v5 = (void **)v11;
        MaxCount = 48;
        goto LABEL_45;
      case 9:
      case 10:
        if ( !a3 )
          goto LABEL_5;
        v19 = 4;
LABEL_43:
        if ( v8 < v19 )
        {
LABEL_22:
          LensContextInformation = -1073741306;
          goto LABEL_52;
        }
        MaxCount = v19;
        v5 = (void **)v27;
LABEL_45:
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        LensContextInformation = MagGetLensContextInformation(
                                   _gMagnContext,
                                   ThreadWin32Thread,
                                   (_DWORD *)v24,
                                   0,
                                   a2,
                                   v5,
                                   &MaxCount);
        if ( LensContextInformation >= 0 )
        {
          ms_exc.registration.TryLevel = 2;
          if ( (unsigned int)a3 >= _MmUserProbeAddress )
            v4 = (char *)_MmUserProbeAddress;
          memcpy(v4, v5, MaxCount);
          v15 = (_DWORD *)v25;
          if ( v25 >= _MmUserProbeAddress )
            v15 = (_DWORD *)_MmUserProbeAddress;
          *v15 = MaxCount;
          ms_exc.registration.TryLevel = -2;
        }
        v16 = 1;
        if ( LensContextInformation < 0 )
          goto LABEL_52;
        goto LABEL_53;
      default:
        goto LABEL_45;
    }
  }
  LensContextInformation = -1073741821;
LABEL_52:
  v16 = 0;
  v17 = (struct _NT_TIB *)RtlNtStatusToDosError(LensContextInformation);
  UserSetLastError(v17);
LABEL_53:
  if ( v23 )
    Win32FreePool(v23);
  if ( v22 )
    Win32FreePool(v22);
  if ( v21 )
    Win32FreePool(v21);
  UserSessionSwitchLeaveCrit();
  return v16;
}
