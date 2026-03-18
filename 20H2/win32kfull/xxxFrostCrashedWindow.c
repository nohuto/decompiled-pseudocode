/*
 * XREFs of xxxFrostCrashedWindow @ 0x1C0209D84
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1C01F8900 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209A2C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C0209C84 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 */

unsigned __int64 __fastcall xxxFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _KTHREAD **v5; // rcx
  unsigned __int64 v6; // rax
  struct _KTHREAD *v7; // rcx
  unsigned int ThreadProcessId; // eax
  PETHREAD *v9; // rcx
  unsigned int ThreadId; // eax
  unsigned __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  int v19; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+24h] [rbp-34h]
  unsigned int v21; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v22; // [rsp+30h] [rbp-28h]
  __int64 v23; // [rsp+34h] [rbp-24h]
  unsigned __int64 v24; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0LL;
  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    v5 = *(struct _KTHREAD ***)(a1 + 16);
    v6 = *(_QWORD *)a1;
    v24 = 0LL;
    v19 = 2;
    v7 = *v5;
    v20 = v6;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v7);
    v9 = *(PETHREAD **)(a1 + 16);
    v21 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(*v9);
    v11 = *(_QWORD *)a1;
    v22 = ThreadId;
    v23 = a2;
    v12 = xxxSendSyncGHOSTINFO((struct _GHOSTINFO *)&v19);
    v13 = HMValidateHandleNoSecure(v11, 1);
    if ( v12 )
    {
      if ( v13 )
      {
        if ( !(unsigned int)IsWindowBeingDestroyed(v13) )
        {
          if ( GetProp(v14, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
          {
            v15 = v24;
            if ( v24 )
            {
              v16 = HMValidateHandleNoSecure(v24, 1);
              if ( v16 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v16)
                  && GetProp(v17, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
                {
                  return v15;
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
