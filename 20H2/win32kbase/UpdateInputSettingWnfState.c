/*
 * XREFs of UpdateInputSettingWnfState @ 0x1C013AFD0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0021FC0 (UpdateTPCurrentActiveState.c)
 *     EnablePTPDevices @ 0x1C0120780 (EnablePTPDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInputSettingWnfState(int a1)
{
  _DWORD *v1; // r9
  char v2; // dl
  unsigned int i; // r10d
  __int64 v4; // rax

  ++dword_1C0248508[0];
  v1 = &unk_1C024850C;
  v2 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( *v1 == a1 )
    {
      v2 = 1;
      v1[1] = dword_1C0248508[0];
    }
    if ( v2 && i < 3 )
    {
      v4 = *(_QWORD *)v1;
      *(_QWORD *)v1 = *(_QWORD *)&dword_1C0248508[2 * i + 3];
      *(_QWORD *)&dword_1C0248508[2 * i + 3] = v4;
    }
    v1 += 2;
  }
  return ZwUpdateWnfStateData(&WNF_INPT_SETTINGS_CHANGE, dword_1C0248508, 36LL, 0LL, 0LL, 0, 0);
}
