/*
 * XREFs of _NtUserDefSetText@8 @ 0xC0E70
 * Callers:
 *     <none>
 * Callees:
 *     _DefSetText@8 @ 0x1E45A (_DefSetText@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserDefSetText(int a1, ULONG a2)
{
  int v2; // ebx
  int *v3; // eax
  int *v4; // edx
  unsigned int *v5; // esi
  int *v6; // esi
  unsigned int v7; // edx
  ULONG v8; // edx
  unsigned int v10; // [esp+10h] [ebp-30h] BYREF
  int v11; // [esp+14h] [ebp-2Ch]
  ULONG v12; // [esp+18h] [ebp-28h]
  int *v13; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v2 = 0;
  EnterCrit(0, 1);
  v3 = (int *)ValidateHwnd(a1);
  v13 = v3;
  if ( v3 )
  {
    v4 = (int *)a2;
    if ( a2 )
    {
      ms_exc.registration.TryLevel = 0;
      v5 = (unsigned int *)_MmUserProbeAddress;
      if ( a2 < _MmUserProbeAddress )
        v5 = (unsigned int *)a2;
      v10 = *v5;
      v6 = (int *)(v5 + 1);
      v11 = *v6;
      v12 = v6[1];
      if ( v12 )
      {
        if ( v10 > (v11 & 0x7FFFFFFFu)
          || (v11 < 0 ? (v7 = v10 + 1) : (v7 = v10 + 2), (v8 = v12 + v7, v8 < v12) || v8 > _MmUserProbeAddress) )
        {
          ExRaiseAccessViolation();
        }
      }
      else
      {
        v10 = 0;
      }
      v4 = (int *)&v10;
      ms_exc.registration.TryLevel = -2;
      v3 = v13;
    }
    v2 = DefSetText(v3, v4);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
