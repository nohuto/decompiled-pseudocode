/*
 * XREFs of _NtUserMNDragOver@8 @ 0x1662FB
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxMNDragOver@8 @ 0x1A7669 (_xxxMNDragOver@8.c)
 */

int __stdcall NtUserMNDragOver(ULONG a1, ULONG a2)
{
  _DWORD *v2; // ecx
  int v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // edi
  int v7; // [esp+10h] [ebp-38h] BYREF
  int v8; // [esp+14h] [ebp-34h]
  int v9; // [esp+18h] [ebp-30h]
  int v10; // [esp+1Ch] [ebp-2Ch]
  _DWORD v11[2]; // [esp+20h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v2 = (_DWORD *)_MmUserProbeAddress;
  if ( a1 < _MmUserProbeAddress )
    v2 = (_DWORD *)a1;
  v11[0] = *v2;
  v11[1] = v2[1];
  ms_exc.registration.TryLevel = -2;
  v3 = xxxMNDragOver(v11, &v7);
  if ( v3 )
  {
    ms_exc.registration.TryLevel = 1;
    v4 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v4 = (_DWORD *)_MmUserProbeAddress;
    *v4 = v7;
    v5 = v4 + 1;
    *v5++ = v8;
    *v5 = v9;
    v5[1] = v10;
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
