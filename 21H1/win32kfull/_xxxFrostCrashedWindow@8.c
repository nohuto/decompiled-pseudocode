/*
 * XREFs of _xxxFrostCrashedWindow@8 @ 0x170644
 * Callers:
 *     _NtUserFrostCrashedWindow@8 @ 0x1618EA (_NtUserFrostCrashedWindow@8.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     ?_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z @ 0x16FC5F (-_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YGHPAU_GHOSTINFO@@@Z @ 0x170464 (-xxxSendSyncGHOSTINFO@@YGHPAU_GHOSTINFO@@@Z.c)
 */

unsigned int __fastcall xxxFrostCrashedWindow(int a1, int a2)
{
  int v4; // ebx
  PETHREAD *v5; // eax
  HANDLE ThreadId; // eax
  unsigned int v7; // esi
  BOOL v8; // edi
  _DWORD *v9; // eax
  int v10; // esi
  unsigned int v11; // esi
  _DWORD *v12; // eax
  int v13; // edi
  _DWORD v15[5]; // [esp+10h] [ebp-18h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  v4 = 0;
  if ( _ShouldFrostCrashedWindow((_DWORD *)a1) )
  {
    v15[1] = *(_DWORD *)a1;
    v5 = *(PETHREAD **)(a1 + 8);
    v16 = 0;
    v15[0] = 2;
    v15[2] = PsGetThreadProcessId(*v5);
    ThreadId = PsGetThreadId(**(PETHREAD **)(a1 + 8));
    v7 = *(_DWORD *)a1;
    v15[3] = ThreadId;
    v15[4] = a2;
    v8 = xxxSendSyncGHOSTINFO(v15);
    v9 = (_DWORD *)HMValidateHandleNoSecure(v7, 1);
    v10 = (int)v9;
    if ( v8 )
    {
      if ( v9 )
      {
        if ( !IsWindowBeingDestroyed(v9) )
        {
          if ( _GetProp(v10, *(unsigned __int16 *)(_gpsi + 978), 1) )
          {
            v11 = v16;
            if ( v16 )
            {
              v12 = (_DWORD *)HMValidateHandleNoSecure(v16, 1);
              v13 = (int)v12;
              if ( v12 )
              {
                if ( !IsWindowBeingDestroyed(v12) && _GetProp(v13, *(unsigned __int16 *)(_gpsi + 978), 1) )
                  return v11;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
