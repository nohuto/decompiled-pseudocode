/*
 * XREFs of _NtUserGetControlColor@16 @ 0x162799
 * Callers:
 *     <none>
 * Callees:
 *     _xxxGetControlColor@16 @ 0xBFABC (_xxxGetControlColor@16.c)
 */

int __stdcall NtUserGetControlColor(int a1, int a2, unsigned int a3, int a4)
{
  int ControlColor; // esi
  _DWORD *v5; // eax
  int *v6; // ebx
  int v8; // [esp+Ch] [ebp-18h] BYREF
  int *v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]
  _DWORD *v14; // [esp+2Ch] [ebp+8h]

  v8 = 0;
  ControlColor = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  EnterCrit(0, 1);
  v5 = (_DWORD *)ValidateHwnd(a1);
  v14 = v5;
  if ( v5 )
  {
    v11 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v11;
    v12 = v5;
    HMLockObject(v5);
    v6 = (int *)ValidateHwnd(a2);
    if ( v6 && a3 && (unsigned int)(a4 - 306) <= 6 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v6;
      HMLockObject(v6);
      ControlColor = xxxGetControlColor(v14, v6, a3, a4);
      ThreadUnlock1();
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return ControlColor;
}
