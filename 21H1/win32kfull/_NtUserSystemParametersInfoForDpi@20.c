/*
 * XREFs of _NtUserSystemParametersInfoForDpi@20 @ 0x91716
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SystemParametersInfoForDpi@20 @ 0x91804 (__SystemParametersInfoForDpi@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *Address, int a4, int a5)
{
  int v5; // esi
  SIZE_T v6; // ebx
  int v7; // ecx
  _DWORD *v8; // edi
  int v10; // [esp-4h] [ebp-48h]

  v5 = 0;
  EnterCrit(0, 1);
  if ( !a5 || !Address )
    goto LABEL_16;
  if ( a1 == 41 )
  {
    v6 = 504;
  }
  else
  {
    if ( a1 == 31 )
    {
      v10 = 92;
    }
    else
    {
      if ( a1 != 45 )
        goto LABEL_16;
      v10 = 108;
    }
    v6 = v10;
  }
  if ( a2 != v6 )
  {
LABEL_16:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_9;
  }
  ProbeForWrite(Address, v6, 1u);
  v8 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v6, 2037674837);
  if ( !v8 )
    ExRaiseStatus(-1073741801);
  *v8 = *Address;
  v5 = _SystemParametersInfoForDpi(v8, v7, a5);
  memcpy(Address, v8, v6);
  Win32FreePool(v8);
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v5;
}
