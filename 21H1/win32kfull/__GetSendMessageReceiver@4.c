/*
 * XREFs of __GetSendMessageReceiver@4 @ 0x1812D5
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _GetSendMessageReceiver(int a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // [esp+14h] [ebp+8h]

  v1 = PtiFromThreadId(a1);
  v2 = v1;
  if ( !v1 || *(_DWORD *)(v1 + 248) != *(_DWORD *)(_gptiCurrent + 248) )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  v3 = *(_DWORD *)(v1 + 232);
  v7 = *(_DWORD *)(_gptiCurrent + 232);
  if ( (unsigned __int8)Enforced() )
  {
    v4 = (unsigned __int8)CheckAccess(v7 + 496, v3 + 496);
  }
  else
  {
    if ( *(_DWORD *)(v7 + 424) == *(_DWORD *)(v3 + 424) && *(_DWORD *)(v7 + 428) == *(_DWORD *)(v3 + 428) )
      goto LABEL_11;
    v4 = 0;
  }
  if ( v4 )
  {
LABEL_11:
    v5 = *(_DWORD *)(v2 + 272);
    if ( !v5 )
      return 0;
    result = *(_DWORD *)(v5 + 60);
    if ( !result )
      return 0;
    if ( *(_DWORD *)(*(_DWORD *)(result + 8) + 248) == *(_DWORD *)(_gptiCurrent + 248) )
      return result;
    goto LABEL_10;
  }
  EtwTraceUIPIMsgError(*(_DWORD *)(_gptiCurrent + 232), *(_DWORD *)(v2 + 232), 0, 0, 0);
LABEL_10:
  UserSetLastError((struct _NT_TIB *)5);
  return 0;
}
