/*
 * XREFs of NtUserQueryWindow @ 0x1C00E7A90
 * Callers:
 *     <none>
 * Callees:
 *     ProcessHungWindow @ 0x1C00038FC (ProcessHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     IsHungWindow @ 0x1C00E7D90 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00E82D8 (ShouldProcessHungWindow.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rbx
  HANDLE ThreadId; // rax
  __int64 v10; // rdi
  int v12; // eax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  EnterSharedCrit(0LL, 1LL);
  v4 = (_QWORD *)ValidateHwnd(a1);
  v8 = v4;
  if ( !v4 )
  {
LABEL_24:
    v10 = 0LL;
    goto LABEL_6;
  }
  v7 = v4[2];
  if ( a2 == 2 )
  {
    v5 = v4[5];
    if ( (*(_DWORD *)(v5 + 232) & 0x800) != 0 && *(char *)(v5 + 19) >= 0 )
    {
      v6 = *(_QWORD *)(v4[3] + 128LL);
      v10 = *(int *)(v6 + *(_QWORD *)(v5 + 296) + 4);
      goto LABEL_6;
    }
    ThreadId = PsGetThreadId(*(PETHREAD *)v7);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v5 = v4[5];
    if ( (*(_DWORD *)(v5 + 232) & 0x800) != 0 && *(char *)(v5 + 19) >= 0 )
    {
      v6 = *(_QWORD *)(v4[3] + 128LL);
      v10 = *(int *)(v6 + *(_QWORD *)(v5 + 296));
      goto LABEL_6;
    }
LABEL_9:
    ThreadId = PsGetThreadProcessId(*(PETHREAD *)v7);
LABEL_5:
    v10 = (__int64)ThreadId;
    goto LABEL_6;
  }
  v6 = 0x1C0000000uLL;
  switch ( a2 )
  {
    case 1:
      goto LABEL_9;
    case 3:
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 120LL);
      if ( !v10 )
        goto LABEL_24;
      goto LABEL_16;
    case 4:
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 112LL);
      if ( !v10 )
        break;
      goto LABEL_16;
    case 5:
      v6 = *(_WORD *)(v4[5] + 42LL) & 0x3FFF;
      if ( (_DWORD)v6 == 682 )
      {
        v10 = 1LL;
      }
      else
      {
        v12 = IsHungWindow(v4);
        v10 = v12;
        if ( v12 )
        {
          v13 = (unsigned __int64 *)ShouldProcessHungWindow(v8);
          if ( v13 )
          {
            v14 = *v13;
            if ( gdwInAtomicOperation )
            {
              v6 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7);
            EnterCrit(0LL, 1LL);
            if ( HMValidateHandleNoSecure(v14, 1) )
              ProcessHungWindow();
            UserSessionSwitchLeaveCrit(v16, v15, v17);
            EnterSharedCrit(0LL, 1LL);
          }
        }
      }
      break;
    case 7:
      v6 = gpqForeground;
      v10 = *(_QWORD *)(v7 + 424) == gpqForeground;
      break;
    case 8:
      v10 = *(_QWORD *)(v7 + 776);
      if ( !v10 )
        goto LABEL_24;
      goto LABEL_16;
    case 9:
      v10 = *(_QWORD *)(v7 + 784);
      if ( !v10 )
        goto LABEL_24;
LABEL_16:
      v10 = *(_QWORD *)v10;
      break;
    default:
      goto LABEL_24;
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v10;
}
