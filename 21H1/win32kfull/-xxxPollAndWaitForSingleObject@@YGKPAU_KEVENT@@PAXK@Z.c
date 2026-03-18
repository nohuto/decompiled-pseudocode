/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788
 * Callers:
 *     _xxxWaitForInputIdle@12 @ 0xE365C (_xxxWaitForInputIdle@12.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _xxxRemoveQueueCompletion@0 @ 0x6ECD4 (_xxxRemoveQueueCompletion@0.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _ClientDeliverUserApc@0 @ 0xAB94C (_ClientDeliverUserApc@0.c)
 *     _xxxDirectedYield@4 @ 0x155BCE (_xxxDirectedYield@4.c)
 */

NTSTATUS __userpurge xxxPollAndWaitForSingleObject@<eax>(
        int a1@<edx>,
        void *a2@<ecx>,
        struct _KEVENT *a3,
        void *a4,
        unsigned int a5)
{
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  struct _KEVENT *v11; // ebx
  int v12; // esi
  NTSTATUS v13; // esi
  int v14; // eax
  int v16; // esi
  unsigned int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD v20[3]; // [esp+Ch] [ebp-38h] BYREF
  __int64 v21; // [esp+18h] [ebp-2Ch] BYREF
  ULONG Count; // [esp+20h] [ebp-24h]
  int v23; // [esp+24h] [ebp-20h]
  void *v24; // [esp+28h] [ebp-1Ch]
  unsigned int v25; // [esp+2Ch] [ebp-18h]
  int v26; // [esp+30h] [ebp-14h]
  int v27; // [esp+34h] [ebp-10h]
  int v28; // [esp+38h] [ebp-Ch]
  int i; // [esp+3Ch] [ebp-8h]

  memset(v20, 0, sizeof(v20));
  v24 = a2;
  v21 = 0LL;
  v23 = a1;
  v7 = _gptiCurrent;
  v28 = _gptiCurrent;
  if ( !*(_DWORD *)(_gptiCurrent + 492) )
  {
    v8 = Win32AllocPoolNonPaged(20, 1819308885);
    *(_DWORD *)(_gptiCurrent + 492) = v8;
    if ( !v8 )
      return -1;
  }
  PushW32ThreadLock((int)a2, v20, (int)UserDereferenceObject);
  if ( a2 )
    ObfReferenceObject(a2);
  Count = (a1 != 0) + 2;
  *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = 64;
  KeClearEvent(*(PRKEVENT *)(_gptiCurrent + 400));
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 )
    xxxSleepTask(0, -1);
  v9 = MEMORY[0xFFDF0004];
  v27 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v16 = MEMORY[0xFFDF0324];
    v17 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v16 = MEMORY[0xFFDF0324];
        v17 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v7 = v28;
      v9 = v27;
    }
    v10 = v9 * (v16 << 8) + (((unsigned int)v9 * (unsigned __int64)v17) >> 24);
  }
  else
  {
    v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v11 = a3;
  for ( i = v10; ; v10 = i )
  {
    if ( (unsigned int)v11 <= 0x1F4 )
    {
      v12 = (int)v11;
LABEL_41:
      v11 = 0;
      goto LABEL_12;
    }
    v12 = 500;
    v26 = 500;
    if ( v11 != (struct _KEVENT *)-1 )
    {
      v27 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v18 = MEMORY[0xFFDF0324];
        v25 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
        {
          v19 = v25;
        }
        else
        {
          do
          {
            _mm_pause();
            v19 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v7 = v28;
          v18 = MEMORY[0xFFDF0324];
          v12 = v26;
          v11 = a3;
        }
        v10 = v27 * (v18 << 8) + (((unsigned int)v27 * (unsigned __int64)v19) >> 24);
      }
      else
      {
        v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      if ( v10 - i >= (unsigned int)v11 )
        goto LABEL_41;
      v11 = (struct _KEVENT *)((char *)v11 - (v10 - i));
    }
LABEL_12:
    i = v10;
    a3 = v11;
    v21 = -10000LL * v12;
    **(_DWORD **)(v7 + 492) = v24;
    *(_DWORD *)(*(_DWORD *)(v7 + 492) + 4) = *(_DWORD *)(v7 + 812);
    *(_DWORD *)(*(_DWORD *)(v7 + 492) + 8) = v23;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    v13 = KeWaitForMultipleObjects(
            Count,
            *(PVOID **)(v7 + 492),
            WaitAny,
            WrUserRequest,
            1,
            0,
            v12 != -1 ? (PLARGE_INTEGER)&v21 : 0,
            0);
    EnterCrit(0, 1);
    if ( v13 == 1 )
      xxxRemoveQueueCompletion();
    if ( v13 >= 0 )
    {
      if ( v13 != 192 )
        goto LABEL_17;
      ClientDeliverUserApc();
    }
    v13 = -1;
LABEL_17:
    v14 = *(_DWORD *)(v7 + 244);
    if ( (*(_BYTE *)(v14 + 4) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v7 + 264) & 2) != 0 )
      {
        xxxDirectedYield(-1);
        goto LABEL_48;
      }
      while ( (*(_BYTE *)(v14 + 6) & 0x40) != 0 )
      {
        xxxReceiveMessage((_DWORD *)v7);
LABEL_48:
        v14 = *(_DWORD *)(v7 + 244);
      }
      if ( (*(_BYTE *)(v7 + 264) & 2) != 0 )
        xxxSleepTask(0, -1);
    }
    if ( v13 != 258 && v13 != 1 )
      goto LABEL_22;
    if ( !v11 )
      break;
  }
  if ( v13 == 1 )
    v13 = 258;
LABEL_22:
  if ( (*(_BYTE *)(v7 + 264) & 2) != 0 )
    xxxDirectedYield(-1);
  PopAndFreeW32ThreadLock((int)v20);
  return v13;
}
