/*
 * XREFs of _NtUserMsgWaitForMultipleObjectsEx@20 @ 0x82980
 * Callers:
 *     <none>
 * Callees:
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxGetInputEvent@4 @ 0x82D1E (_xxxGetInputEvent@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _xxxMsgWaitForMultipleObjectsEx@20 @ 0xEFE84 (_xxxMsgWaitForMultipleObjectsEx@20.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     __CancelQueueEventCompletionPacket@0 @ 0x1420D4 (__CancelQueueEventCompletionPacket@0.c)
 *     __ReassociateQueueEventCompletionPacket@0 @ 0x1421D5 (__ReassociateQueueEventCompletionPacket@0.c)
 *     __SetWaitForQueueAttach@4 @ 0x142231 (__SetWaitForQueueAttach@4.c)
 */

unsigned int __stdcall NtUserMsgWaitForMultipleObjectsEx(
        unsigned int a1,
        volatile void *Address,
        int a3,
        unsigned __int16 a4,
        int a5)
{
  unsigned int v5; // esi
  int v7; // eax
  __int16 v8; // cx
  int CurrentProcess; // eax
  char *v10; // esi
  int v11; // esi
  void *v12; // eax
  _DWORD *v13; // esi
  unsigned int v14; // eax
  int v15; // edx
  int v16; // edi
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // edi
  int *ThreadWin32Thread; // eax
  __int32 v21; // esi
  int v22; // ecx
  unsigned int i; // edx
  PKTHREAD CurrentThread; // edi
  int v25; // esi
  int *v26; // eax
  size_t v28; // [esp-4h] [ebp-5D0h]
  _BYTE v29[704]; // [esp+10h] [ebp-5BCh] BYREF
  _DWORD v30[177]; // [esp+2D0h] [ebp-2FCh] BYREF
  int InputEvent; // [esp+594h] [ebp-38h]
  unsigned int v32; // [esp+598h] [ebp-34h]
  int v33; // [esp+59Ch] [ebp-30h] BYREF
  _DWORD *v34; // [esp+5A0h] [ebp-2Ch]
  void (__stdcall *v35)(_DWORD *); // [esp+5A4h] [ebp-28h]
  int v36; // [esp+5A8h] [ebp-24h]
  void *v37; // [esp+5ACh] [ebp-20h]
  int v38; // [esp+5B0h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+5B4h] [ebp-18h]
  int v40; // [esp+5D4h] [ebp+8h]
  PKTHREAD Addressa; // [esp+5D8h] [ebp+Ch]

  v5 = -1;
  v30[176] = -1;
  EnterCrit(0, 1);
  v37 = 0;
  if ( (a5 & 0xFFFFFFE0) != 0 || a1 > 0x3F )
  {
    v5 = -1;
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_54;
  }
  v36 = a5 & 1;
  v7 = *(_DWORD *)(_gptiCurrent + 244);
  if ( v7 && ((a5 & 1) == 0 || !a1) )
  {
    v8 = (a5 & 4) != 0 ? *(_WORD *)(v7 + 6) : 0;
    if ( ((unsigned __int16)(v8 | *(_WORD *)(v7 + 4)) & a4) != 0 )
    {
      v5 = a1;
      goto LABEL_54;
    }
  }
  InputEvent = xxxGetInputEvent(a4 | ((unsigned __int16)a5 << 16));
  if ( !InputEvent )
    goto LABEL_54;
  if ( (a5 & 1) != 0 )
  {
    v40 = 0;
    _CancelQueueEventCompletionPacket();
  }
  else
  {
    v40 = *(_DWORD *)(_gptiCurrent + 820);
    if ( !v40 )
      goto LABEL_54;
  }
  ms_exc.registration.TryLevel = 0;
  CurrentProcess = PsGetCurrentProcess();
  v10 = *(char **)(PsGetProcessPeb(CurrentProcess) + 16);
  if ( v10 + 704 < v10 || (unsigned int)(v10 + 704) > _MmUserProbeAddress )
    v10 = (char *)_MmUserProbeAddress;
  qmemcpy(v29, v10, sizeof(v29));
  qmemcpy(v30, v29, 0x2C0u);
  if ( a1 )
  {
    v11 = 4 * a1;
    ProbeForRead(Address, 4 * a1, 1u);
  }
  else
  {
    v11 = 0;
  }
  v12 = (void *)Win32AllocPoolWithQuota(v11 + 4, 2037609301);
  v37 = v12;
  if ( !v12 )
  {
    v5 = -1;
    v38 = -1;
    UserSetLastError((struct _NT_TIB *)8);
    ms_exc.registration.TryLevel = -2;
    goto LABEL_54;
  }
  v28 = v11;
  v13 = v12;
  memcpy(v12, (const void *)Address, v28);
  v14 = 0;
  v32 = 0;
  v15 = v30[8];
  v16 = v30[7];
  while ( v14 < a1 )
  {
    v17 = v13[v14];
    if ( v17 < 0xFFFFFFF4 )
      goto LABEL_31;
    switch ( v17 )
    {
      case 0xFFFFFFF4:
        v13[v14] = v15;
LABEL_31:
        v32 = ++v14;
        break;
      case 0xFFFFFFF5:
        v13[v14++] = v16;
        v32 = v14;
        break;
      case 0xFFFFFFF6:
        v13[v14++] = v30[6];
        v32 = v14;
        break;
      default:
        goto LABEL_31;
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( (a5 & 8) != 0 )
    _SetWaitForQueueAttach(1);
  v18 = InputEvent;
  if ( !v36 )
    v18 = v40;
  v13[a1] = v18;
  Addressa = KeGetCurrentThread();
  v19 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(Addressa);
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
  }
  v33 = *(_DWORD *)(v19 + 8);
  *(_DWORD *)(v19 + 8) = &v33;
  v34 = v13;
  v35 = (void (__stdcall *)(_DWORD *))Win32FreePool;
  v38 = xxxMsgWaitForMultipleObjectsEx(a3, a4, a5);
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v22 = MEMORY[0xFFDF0324];
    for ( i = MEMORY[0xFFDF0320]; MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328]; i = MEMORY[0xFFDF0320] )
    {
      _mm_pause();
      v22 = MEMORY[0xFFDF0324];
    }
    v21 = MEMORY[0xFFDF0004] * (v22 << 8) + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)i) >> 24);
  }
  else
  {
    v21 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  _InterlockedExchange((volatile __int32 *)(*(_DWORD *)(_gptiCurrent + 244) + 12), v21);
  if ( !*(_DWORD *)(_gptiCurrent + 660) )
    xxxUpdateInputHangInfo(0, 1);
  *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = 0;
  *(_DWORD *)(_gptiCurrent + 688) &= ~0x400u;
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v26 = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( v26 )
      v25 = *v26;
  }
  *(_DWORD *)(v25 + 8) = v33;
  v35(v34);
  if ( v36 )
    _ReassociateQueueEventCompletionPacket();
  v5 = v38;
LABEL_54:
  UserSessionSwitchLeaveCrit();
  return v5;
}
