/*
 * XREFs of _xxxUpdateClientRect@4 @ 0x19E4A4
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 */

int __stdcall xxxUpdateClientRect(int a1)
{
  int *v1; // esi
  _DWORD *v2; // edi
  int result; // eax
  int v4; // [esp+10h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-Ch]
  int v6; // [esp+18h] [ebp-8h]
  int v7; // [esp+1Ch] [ebp-4h]

  v1 = (int *)(*(_DWORD *)(a1 + 20) + 52);
  v4 = *v1++;
  v5 = *v1++;
  v6 = *v1;
  v7 = v1[1];
  xxxCalcClientRect((struct tagEVENTHOOK *)a1, &v4, 0);
  v2 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 68);
  result = 1;
  *v2++ = v4;
  *v2++ = v5;
  *v2 = v6;
  v2[1] = v7;
  return result;
}
