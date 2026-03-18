/*
 * XREFs of _NtUserGetGestureInfo@8 @ 0x162D25
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 */

int __stdcall NtUserGetGestureInfo(int a1, ULONG a2)
{
  int v2; // ebx
  void *v3; // edi
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v9; // [esp-4h] [ebp-44h]

  v2 = 1;
  EnterCrit(0, 1);
  v3 = (void *)a2;
  if ( !a2 )
  {
    v9 = 87;
LABEL_3:
    v2 = 0;
    UserSetLastError((struct _NT_TIB *)v9);
    goto LABEL_17;
  }
  v4 = (_DWORD *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v4 = (_DWORD *)_MmUserProbeAddress;
  if ( *v4 != 48 )
  {
    v2 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_17;
  }
  v5 = HMValidateHandle(a1, 21);
  v6 = v5;
  if ( !v5 )
  {
    v2 = 0;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v5 + 8) != _gptiCurrent )
  {
    v9 = 5;
    goto LABEL_3;
  }
  if ( a2 >= _MmUserProbeAddress )
    v3 = (void *)_MmUserProbeAddress;
  qmemcpy(v3, (const void *)(v5 + 16), 0x30u);
  v7 = *(_DWORD *)(_gptiCurrent + 608);
  if ( v7 == a1 && !*(_DWORD *)(v6 + 56) )
  {
    _FreeGestureInfo(v7, 1);
    *(_DWORD *)(_gptiCurrent + 608) = 0;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit();
  return v2;
}
