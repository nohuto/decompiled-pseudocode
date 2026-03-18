/*
 * XREFs of _NtUserGetListBoxInfo@4 @ 0x16371B
 * Callers:
 *     <none>
 * Callees:
 *     _xxxGetListBoxInfo@4 @ 0x1A701A (_xxxGetListBoxInfo@4.c)
 */

int __stdcall NtUserGetListBoxInfo(int a1)
{
  int ListBoxInfo; // esi
  int v2; // eax
  int v3; // edi
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  ListBoxInfo = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v5 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v5;
    v6 = v2;
    HMLockObject(v2);
    ListBoxInfo = xxxGetListBoxInfo(v3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return ListBoxInfo;
}
