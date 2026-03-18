/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x1C00612B0
 * Callers:
 *     <none>
 * Callees:
 *     _SystemParametersInfoForDpi @ 0x1C006142C (_SystemParametersInfoForDpi.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 CurrentProcessWow64Process; // rax
  size_t v11; // r15
  _DWORD *v12; // rax
  int v13; // edx
  int v14; // r9d
  const void *v15; // rdi
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  EnterCrit(0LL, 1LL);
  if ( !a5 || !a3 )
    goto LABEL_14;
  switch ( a1 )
  {
    case 41:
      v9 = 504;
      break;
    case 31:
      v9 = 92;
      break;
    case 45:
      v9 = 108;
      break;
    default:
      goto LABEL_14;
  }
  if ( a2 != v9 )
  {
LABEL_14:
    v16 = 0;
    UserSetLastError(87LL);
    goto LABEL_9;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
  v11 = v9;
  ProbeForWrite(a3, v9, CurrentProcessWow64Process != 0 ? 1 : 4);
  v12 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v9, 2037674837LL);
  v15 = v12;
  if ( !v12 )
    ExRaiseStatus(-1073741801);
  *v12 = *a3;
  v16 = SystemParametersInfoForDpi(a1, v13, (_DWORD)v12, v14, a5);
  memmove(a3, v15, v11);
  Win32FreePool(v15);
LABEL_9:
  UserSessionSwitchLeaveCrit(v18, v17, v19);
  return v16;
}
