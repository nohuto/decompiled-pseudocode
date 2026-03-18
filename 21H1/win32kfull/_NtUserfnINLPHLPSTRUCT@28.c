/*
 * XREFs of _NtUserfnINLPHLPSTRUCT@28 @ 0x16BDBE
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserfnINLPHLPSTRUCT(int a1, int a2, int a3, int *Src, int a5, char a6, int a7)
{
  int v7; // ebx
  int *v8; // esi
  _WORD *v9; // esi
  int v11; // [esp+10h] [ebp-40h]
  _DWORD v12[5]; // [esp+20h] [ebp-30h] BYREF
  _WORD *v13; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v7 = 0;
  v13 = 0;
  memset(v12, 0, 12);
  ms_exc.registration.TryLevel = 0;
  v8 = (int *)_MmUserProbeAddress;
  if ( (unsigned int)Src < _MmUserProbeAddress )
    v8 = Src;
  v11 = *v8;
  if ( (unsigned __int16)*v8 >= 0x10u )
  {
    v9 = (_WORD *)Win32AllocPoolWithQuota((unsigned __int16)v11, 1818784597);
    v13 = v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock((int)v9, v12, (int)Win32FreePool);
    memcpy(v9, Src, (unsigned __int16)v11);
    *v9 = v11;
    ms_exc.registration.TryLevel = -2;
    v7 = ((int (__stdcall *)(int, int, int, _WORD *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v9, a5);
    PopAndFreeAlwaysW32ThreadLock((int)v12);
  }
  else
  {
    v12[4] = 0;
    ms_exc.registration.TryLevel = -2;
  }
  return v7;
}
