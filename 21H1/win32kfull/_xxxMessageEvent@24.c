/*
 * XREFs of _xxxMessageEvent@24 @ 0x1A4CAC
 * Callers:
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 *     _xxxDDETrackSendHook@16 @ 0x180600 (_xxxDDETrackSendHook@16.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxCsEvent@8 @ 0x1A4AB1 (_xxxCsEvent@8.c)
 */

int __fastcall xxxMessageEvent(int *a1, int a2, unsigned int a3, int a4, int a5, const void *a6)
{
  int result; // eax
  _DWORD *v8; // ebx
  HANDLE ThreadId; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  unsigned int v14; // edx
  int v15; // eax
  int v16; // eax
  _DWORD v17[3]; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+18h] [ebp-8h]
  _DWORD *v19; // [esp+1Ch] [ebp-4h]

  v18 = a2;
  memset(v17, 0, sizeof(v17));
  result = Win32AllocPoolWithQuota(80, 946107221);
  v8 = (_DWORD *)result;
  v19 = (_DWORD *)result;
  if ( result )
  {
    *(_DWORD *)result = a5;
    *(_WORD *)(result + 4) = 1;
    ThreadId = 0;
    *(_WORD *)(result + 6) = 72;
    *(_DWORD *)(result + 8) = 72;
    v10 = 0;
    if ( a1 )
      v10 = *a1;
    v8[3] = v10;
    v11 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v13 = MEMORY[0xFFDF0324];
      v14 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v13 = MEMORY[0xFFDF0324];
          v14 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v8 = v19;
        ThreadId = 0;
        v11 = MEMORY[0xFFDF0004];
      }
      v12 = v11 * (v13 << 8) + (((unsigned int)v11 * (unsigned __int64)v14) >> 24);
    }
    else
    {
      v12 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    v8[4] = v12;
    v15 = HMValidateHandleNoSecure(a3, 1);
    if ( v15 )
      ThreadId = PsGetThreadId(**(PETHREAD **)(v15 + 8));
    v16 = v18;
    v8[5] = ThreadId;
    v8[7] = a3;
    v8[6] = v16;
    v8[8] = a4;
    if ( a6 )
      qmemcpy(v8 + 9, a6, 0x2Cu);
    PushW32ThreadLock((int)v8, v17, (int)Win32FreePool);
    xxxCsEvent(v8, 0x48u);
    return PopAndFreeAlwaysW32ThreadLock((int)v17);
  }
  return result;
}
