/*
 * XREFs of _NtUserGetGestureExtArgs@12 @ 0x162C2C
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 */

int __stdcall NtUserGetGestureExtArgs(int a1, unsigned int a2, volatile void *Address)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  SIZE_T v6; // eax
  int v7; // eax
  int v9; // [esp-4h] [ebp-34h]

  v3 = 1;
  EnterCrit(0, 1);
  if ( !Address )
  {
    v9 = 87;
LABEL_3:
    v3 = 0;
    UserSetLastError((struct _NT_TIB *)v9);
    goto LABEL_12;
  }
  v4 = HMValidateHandle(a1, 21);
  v5 = v4;
  if ( !v4 )
  {
    v3 = 0;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v4 + 8) != _gptiCurrent )
  {
    v9 = 5;
    goto LABEL_3;
  }
  v6 = *(_DWORD *)(v4 + 56);
  if ( a2 < v6 )
  {
    v9 = 122;
    goto LABEL_3;
  }
  ProbeForWrite(Address, v6, 1u);
  memcpy((void *)Address, (const void *)(v5 + 64), *(_DWORD *)(v5 + 56));
  v7 = *(_DWORD *)(_gptiCurrent + 608);
  if ( v7 == a1 )
  {
    _FreeGestureInfo(v7, 1);
    *(_DWORD *)(_gptiCurrent + 608) = 0;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit();
  return v3;
}
