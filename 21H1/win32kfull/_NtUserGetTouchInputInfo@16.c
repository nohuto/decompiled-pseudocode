/*
 * XREFs of _NtUserGetTouchInputInfo@16 @ 0x16483D
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 */

int __stdcall NtUserGetTouchInputInfo(int a1, unsigned int a2, volatile void *Address, int a4)
{
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  SIZE_T v8; // esi
  unsigned int v9; // eax
  int v11; // [esp-4h] [ebp-34h]
  int v12; // [esp+3Ch] [ebp+Ch]

  v5 = 1;
  EnterCrit(0, 1);
  if ( !Address || a4 != 40 )
  {
    v11 = 87;
    goto LABEL_14;
  }
  v6 = HMValidateHandle(a1, 20);
  v12 = v6;
  if ( !v6 )
  {
    v5 = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v6 + 8) != _gptiCurrent )
  {
    v11 = 5;
LABEL_14:
    v5 = 0;
    UserSetLastError((struct _NT_TIB *)v11);
    goto LABEL_15;
  }
  v7 = *(_DWORD *)(v6 + 12);
  if ( v7 < a2 )
    a2 = v7;
  if ( a2 > 0x6666666 )
    ExRaiseAccessViolation();
  v8 = 40 * a2;
  ProbeForWrite(Address, v8, 1u);
  memcpy((void *)Address, (const void *)(v12 + 20), v8);
  v9 = *(_DWORD *)(_gptiCurrent + 604);
  if ( v9 == a1 )
  {
    _FreeTouchInputInfo(v9, 1);
    *(_DWORD *)(_gptiCurrent + 604) = 0;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v5;
}
