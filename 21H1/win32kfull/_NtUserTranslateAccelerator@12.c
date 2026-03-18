/*
 * XREFs of _NtUserTranslateAccelerator@12 @ 0xA8372
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _xxxTranslateAccelerator@12 @ 0xA8452 (_xxxTranslateAccelerator@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserTranslateAccelerator(int a1, int a2, ULONG a3)
{
  int v3; // ebx
  const void *v4; // esi
  int v5; // esi
  _BYTE v7[28]; // [esp+10h] [ebp-50h] BYREF
  int v8; // [esp+2Ch] [ebp-34h] BYREF
  int v9; // [esp+30h] [ebp-30h]
  int v10; // [esp+34h] [ebp-2Ch]
  int v11; // [esp+38h] [ebp-28h] BYREF
  int v12; // [esp+3Ch] [ebp-24h]
  int v13; // [esp+40h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]
  int v15; // [esp+70h] [ebp+10h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v3 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v4 = (const void *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v4 = (const void *)a3;
  qmemcpy(v7, v4, sizeof(v7));
  ms_exc.registration.TryLevel = -2;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v15 = HMValidateHandle(a2, 8);
    if ( v15 )
    {
      v11 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v11;
      v12 = v5;
      HMLockObject(v5);
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v15;
      HMLockObject(v15);
      v3 = xxxTranslateAccelerator(v7);
      ThreadUnlock1();
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
