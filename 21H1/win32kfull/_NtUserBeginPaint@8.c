/*
 * XREFs of _NtUserBeginPaint@8 @ 0x71348
 * Callers:
 *     <none>
 * Callees:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserBeginPaint(int a1, ULONG a2)
{
  struct tagVWPL **v2; // esi
  int v3; // ebx
  void *v4; // eax
  int v6; // [esp+14h] [ebp-74h] BYREF
  struct tagVWPL **v7; // [esp+18h] [ebp-70h]
  int v8; // [esp+1Ch] [ebp-6Ch]
  struct tagVWPL **v9; // [esp+20h] [ebp-68h]
  ULONG v10; // [esp+28h] [ebp-60h]
  _BYTE v11[64]; // [esp+2Ch] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h]

  v10 = a2;
  memset(v11, 0, sizeof(v11));
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v2 = (struct tagVWPL **)ValidateHwnd(a1);
  v9 = v2;
  if ( v2 )
  {
    v6 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v6;
    v7 = v2;
    HMLockObject(v2);
    v3 = xxxBeginPaint(v2);
    ms_exc.registration.TryLevel = 0;
    v4 = (void *)v10;
    if ( v10 >= _MmUserProbeAddress )
      v4 = (void *)_MmUserProbeAddress;
    qmemcpy(v4, v11, 0x40u);
    ms_exc.registration.TryLevel = -2;
    ThreadUnlock1();
  }
  else
  {
    v3 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
