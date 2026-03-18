/*
 * XREFs of _NtUserfnINOUTLPWINDOWPOS@28 @ 0x98BAC
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINOUTLPWINDOWPOS(int a1, int a2, int a3, void *a4, int a5, char a6, int a7)
{
  _BYTE v9[28]; // [esp+10h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]
  int v11; // [esp+60h] [ebp+14h]

  memset(v9, 0, sizeof(v9));
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  qmemcpy(a4, a4, 0x1Cu);
  qmemcpy(v9, a4, sizeof(v9));
  ms_exc.registration.TryLevel = -2;
  v11 = ((int (__stdcall *)(int, int, int, _BYTE *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v9, a5);
  qmemcpy(a4, v9, 0x1Cu);
  return v11;
}
