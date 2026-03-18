/*
 * XREFs of _NtUserTrackMouseEvent@4 @ 0x9A894
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _QueryTrackMouseEvent@4 @ 0x9A940 (_QueryTrackMouseEvent@4.c)
 *     _TrackMouseEvent@4 @ 0x9A9BE (_TrackMouseEvent@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserTrackMouseEvent(int *a1)
{
  int v1; // ebx
  int *v2; // esi
  int *v3; // esi
  int v5; // ecx
  int v6; // [esp+10h] [ebp-3Ch] BYREF
  int v7; // [esp+14h] [ebp-38h]
  int v8; // [esp+18h] [ebp-34h]
  int v9; // [esp+1Ch] [ebp-30h]
  int v10; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v1 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v2 = (int *)_MmUserProbeAddress;
  if ( (unsigned int)a1 < _MmUserProbeAddress )
    v2 = a1;
  v6 = *v2;
  v3 = v2 + 1;
  v7 = *v3++;
  v8 = *v3;
  v9 = v3[1];
  if ( v6 != 16 )
  {
    v5 = 87;
LABEL_12:
    UserSetLastError((struct _NT_TIB *)v5);
    v10 = 0;
    goto LABEL_7;
  }
  if ( (v7 & 0x3FFFFFEC) != 0 )
  {
    v5 = 1004;
    goto LABEL_12;
  }
  ms_exc.registration.TryLevel = -2;
  if ( (v7 & 0x40000000) == 0 )
  {
    v1 = TrackMouseEvent(&v6);
    goto LABEL_8;
  }
  v1 = QueryTrackMouseEvent(&v6);
  v10 = v1;
  ms_exc.registration.TryLevel = 1;
  *a1 = v6;
  a1[1] = v7;
  a1[2] = v8;
  a1[3] = v9;
LABEL_7:
  ms_exc.registration.TryLevel = -2;
LABEL_8:
  UserSessionSwitchLeaveCrit();
  return v1;
}
