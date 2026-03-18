/*
 * XREFs of _xxxWrapSendMessageBSM@20 @ 0x7D9B6
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSendMessageBSM@24 @ 0x7F422 (_xxxSendMessageBSM@24.c)
 *     _IsPrivileged@4 @ 0xCB7DA (_IsPrivileged@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall xxxWrapSendMessageBSM(int a1, int a2, int a3, int a4, void *a5)
{
  int result; // eax
  _DWORD v6[7]; // [esp+10h] [ebp-40h] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a5 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  qmemcpy(a5, a5, 0x1Cu);
  qmemcpy(v6, a5, sizeof(v6));
  ms_exc.registration.TryLevel = -2;
  if ( (v6[0] & 0x10) != 0 && !IsPrivileged(_psTcb) )
  {
    v6[0] &= ~0x10u;
    qmemcpy(a5, v6, 0x1Cu);
    ms_exc.registration.TryLevel = -2;
  }
  result = xxxSendMessageBSM(a1, a2, a3, a4, v6, 0);
  if ( !result && (v6[1] & 1) != 0 )
    qmemcpy(a5, v6, 0x1Cu);
  return result;
}
