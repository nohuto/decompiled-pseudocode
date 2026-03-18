/*
 * XREFs of _xxxCsEvent@8 @ 0x1A4AB1
 * Callers:
 *     _xxxChangeMonitorFlags@8 @ 0xE3CE8 (_xxxChangeMonitorFlags@8.c)
 *     _NtUserEvent@4 @ 0x161639 (_NtUserEvent@4.c)
 *     _xxxMessageEvent@24 @ 0x1A4CAC (_xxxMessageEvent@24.c)
 * Callees:
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall xxxCsEvent(void *a1, unsigned __int16 a2)
{
  size_t v3; // edi
  char *v4; // esi
  int v6; // edi
  ULONG NumberOfMapRegisters; // eax
  int v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  char *v11; // eax
  ULONG v12; // edi
  char *v13; // ecx
  _DWORD *v14; // ecx
  _DWORD *v15; // eax
  void *v16; // edi
  _DWORD v17[3]; // [esp+14h] [ebp-4Ch] BYREF
  _DWORD v18[3]; // [esp+20h] [ebp-40h] BYREF
  int v19; // [esp+2Ch] [ebp-34h] BYREF
  void *v20; // [esp+30h] [ebp-30h]
  int v21; // [esp+34h] [ebp-2Ch]
  int v22; // [esp+3Ch] [ebp-24h]
  void *Src; // [esp+40h] [ebp-20h]
  char *v24; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  Src = a1;
  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  v22 = _gptiCurrent;
  v3 = a2 + 8;
  v4 = (char *)Win32AllocPoolWithQuota(v3, 895775573);
  v24 = v4;
  if ( !v4 )
    return 16392;
  memcpy(v4, Src, v3);
  ms_exc.registration.TryLevel = -2;
  *((_WORD *)v4 + 3) = a2;
  v6 = 0;
  NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  if ( WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    v8 = *(_DWORD *)v4;
    do
    {
      if ( ((v8 & *(_DWORD *)(NumberOfMapRegisters + 20)) == 0 || *((_WORD *)v4 + 2))
        && ((v8 & *(_DWORD *)(NumberOfMapRegisters + 20)) != 0 || !*((_WORD *)v4 + 2)) )
      {
        ++v6;
      }
      NumberOfMapRegisters = *(_DWORD *)(NumberOfMapRegisters + 12);
    }
    while ( NumberOfMapRegisters );
  }
  v9 = (_DWORD *)Win32AllocPoolWithQuotaZInit(4 * v6 + 4, 912552789);
  v10 = v9;
  if ( !v9 )
  {
    Win32FreePool(v4);
    return 16392;
  }
  *v9 = v6;
  v11 = 0;
  v24 = 0;
  v12 = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  if ( WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    v13 = (char *)(v10 + 1);
    Src = v10 + 1;
    do
    {
      if ( (int)v11 >= *v10 )
        break;
      if ( (*(_DWORD *)v4 & *(_DWORD *)(v12 + 20)) != 0 && !*((_WORD *)v4 + 2)
        || (*(_DWORD *)v4 & *(_DWORD *)(v12 + 20)) == 0 && *((_WORD *)v4 + 2) )
      {
        v11 = v24;
      }
      else
      {
        HMAssignmentLock(v13, 0);
        v11 = ++v24;
        v13 = (char *)Src + 4;
        Src = (char *)Src + 4;
      }
      v12 = *(_DWORD *)(v12 + 12);
    }
    while ( v12 );
  }
  PushW32ThreadLock((int)v4, v17, (int)Win32FreePool);
  PushW32ThreadLock((int)v10, v18, (int)DestroyEventPacketTargets);
  Src = 0;
  if ( (int)*v10 > 0 )
  {
    v14 = v10 + 1;
    v24 = (char *)(v10 + 1);
    do
    {
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v15 = (_DWORD *)HMAssignmentUnlock(v14);
      if ( v15 )
      {
        v16 = (void *)ValidateHwnd(*v15);
        if ( v16 )
        {
          v19 = *(_DWORD *)(v22 + 228);
          *(_DWORD *)(v22 + 228) = &v19;
          v20 = v16;
          HMLockObject(v16);
          xxxSendMessage(v16, 0, (int)v4);
          ThreadUnlock1();
        }
      }
      Src = (char *)Src + 1;
      v14 = v24 + 4;
      v24 += 4;
    }
    while ( (int)Src < *v10 );
  }
  PopAndFreeAlwaysW32ThreadLock((int)v18);
  PopAndFreeAlwaysW32ThreadLock((int)v17);
  return 0;
}
