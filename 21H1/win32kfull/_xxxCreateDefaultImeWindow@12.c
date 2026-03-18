/*
 * XREFs of _xxxCreateDefaultImeWindow@12 @ 0x1D8EA
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     _unsafe_cast_fnid_or_class_to_PIMEWND@4 @ 0x1DB34 (_unsafe_cast_fnid_or_class_to_PIMEWND@4.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _CreateInputContext@4 @ 0x9A7CC (_CreateInputContext@4.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@H@Z @ 0xF17DA (--0-$SmartObjStackRef@UtagMENU@@@@QAE@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

struct tagVWPL **__fastcall xxxCreateDefaultImeWindow(_DWORD *a1, __int16 a2, int a3)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // eax
  wchar_t *v9; // eax
  PVOID *v10; // esi
  PKTHREAD v11; // eax
  int v12; // eax
  _DWORD *v13; // edi
  int CurrentProcessWin32Process; // eax
  int v15; // eax
  ULONG *v16; // eax
  ULONG v17; // ecx
  int v18; // ecx
  _BYTE v20[12]; // [esp+10h] [ebp-64h] BYREF
  _BYTE v21[12]; // [esp+1Ch] [ebp-58h] BYREF
  _BYTE v22[12]; // [esp+28h] [ebp-4Ch] BYREF
  _DWORD v23[3]; // [esp+34h] [ebp-40h] BYREF
  PVOID BaseAddress; // [esp+44h] [ebp-30h]
  int v25; // [esp+48h] [ebp-2Ch]
  int v26; // [esp+4Ch] [ebp-28h]
  _DWORD *v27; // [esp+50h] [ebp-24h]
  struct tagVWPL **Window; // [esp+54h] [ebp-20h]
  int v29; // [esp+58h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]
  ULONG v31; // [esp+7Ch] [ebp+8h]

  HIWORD(v29) = a2;
  v27 = a1;
  memset(v22, 0, sizeof(v22));
  memset(v20, 0, sizeof(v20));
  v23[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v6 = (_DWORD *)ThreadWin32Thread;
  v26 = ThreadWin32Thread;
  if ( !*(_DWORD *)(ThreadWin32Thread + 440) )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)_gpidLogon )
      CreateInputContext(0);
    if ( !v6[110] )
      return 0;
  }
  if ( HIWORD(v29) == *(_WORD *)(_gpsi + 498) )
    return 0;
  if ( (*(_BYTE *)(*(_DWORD *)(a1[19] + 4) + 10) & 1) != 0 )
    return 0;
  v7 = a1[5];
  if ( (*(_BYTE *)(v7 + 23) & 0xC0) == 0x40
    && *(_DWORD *)(*(_DWORD *)(a1[14] + 8) + 232) != v6[58]
    && (*(_DWORD *)(v7 + 20) & 0x10000000) == 0 )
  {
    return 0;
  }
  v8 = v6[62];
  v29 = v8;
  if ( !*(_DWORD *)(v8 + 64) )
    return 0;
  v25 = v8;
  v9 = (wchar_t *)DesktopAlloc(v8, 0x18u, 9);
  BaseAddress = v9;
  if ( !v9 )
    return 0;
  qmemcpy(v9, L"Default IME", 0x18u);
  RtlInitLargeUnicodeString(v22, v9);
  v10 = (PVOID *)v29;
  PushW32ThreadLock(v29, v20, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v11 = KeGetCurrentThread();
  v12 = W32GetThreadWin32Thread(v11);
  v23[0] = *(_DWORD *)(v12 + 228);
  *(_DWORD *)(v12 + 228) = v23;
  v13 = v27;
  v23[1] = v27;
  HMLockObject(v27);
  if ( !PsGetCurrentProcessWin32Process()
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
        v15 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
        v29 = 1,
        !v15) )
  {
    v29 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(0);
  Window = (struct tagVWPL **)xxxCreateWindowEx(
                                *(unsigned __int16 *)(_gpsi + 498),
                                v22,
                                -2013265920,
                                0,
                                0,
                                0,
                                0,
                                v13,
                                v21,
                                a3,
                                0,
                                0,
                                1024,
                                v29,
                                0);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v21);
  if ( Window )
  {
    v16 = (ULONG *)unsafe_cast_fnid_or_class_to_PIMEWND();
    ms_exc.registration.TryLevel = 0;
    if ( v16 )
      v17 = *v16;
    else
      v17 = 0;
    v31 = v17;
    if ( v17 )
    {
      if ( (v17 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v17 >= _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      *(_BYTE *)v17 = *(_BYTE *)v17;
      *(_BYTE *)(v17 + 28) = *(_BYTE *)(v17 + 28);
      v18 = *(_DWORD *)(v17 + 24) | 8;
      *(_DWORD *)(v31 + 24) = v18;
      if ( (*(_BYTE *)(v13[5] + 23) & 0xC0) == 0x40 && *(_DWORD *)(v13[14] + 8) != v26 )
        *(_DWORD *)(v31 + 24) = v18 | 0x10;
    }
    else
    {
      xxxDestroyWindow(Window);
      Window = 0;
    }
    ms_exc.registration.TryLevel = -2;
  }
  ThreadUnlock1();
  RtlFreeHeap(v10[16], 0, BaseAddress);
  PopAndFreeW32ThreadLock(v20);
  return Window;
}
