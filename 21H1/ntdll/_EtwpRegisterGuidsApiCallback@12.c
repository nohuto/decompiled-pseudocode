/*
 * XREFs of _EtwpRegisterGuidsApiCallback@12 @ 0x4B2ADEE1
 * Callers:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall EtwpRegisterGuidsApiCallback(int a1, int a2, char a3)
{
  int v3; // ebx
  _RTL_SRWLOCK *v5; // esi
  int v6; // eax
  int (__thiscall *v7)(_DWORD, int, int, int *, _DWORD *); // edx
  int v8; // eax
  _RTL_SRWLOCK *v10; // esi
  size_t v11; // [esp-4h] [ebp-5Ch]
  int v12; // [esp-4h] [ebp-5Ch]
  int StackCookie; // [esp+Ch] [ebp-4Ch]
  unsigned int StackCookie_4; // [esp+10h] [ebp-48h]
  int v16; // [esp+14h] [ebp-44h]
  unsigned int *v17; // [esp+18h] [ebp-40h]
  int v18; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD v19[13]; // [esp+20h] [ebp-38h] BYREF

  v3 = 0;
  LODWORD(v11) = 48;
  v5 = *(_RTL_SRWLOCK **)(a2 + 200);
  v17 = (unsigned int *)v5;
  memset(v19, 0, v11);
  StackCookie_4 = *(_DWORD *)(a1 + 112);
  if ( StackCookie_4 )
  {
    if ( StackCookie_4 == 1 )
    {
      v12 = 4;
    }
    else
    {
      if ( StackCookie_4 != 2 )
        return 0;
      v12 = 10;
    }
  }
  else
  {
    v12 = 5;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  StackCookie = v12;
  if ( !a3 && v5 && v12 != 10 && *(_BYTE *)(a1 + 107) == 1 )
  {
    v10 = v5 + 7;
    RtlAcquireSRWLockExclusive(v10);
    v17[8] = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
    v17[34] = *(_DWORD *)(a1 + 104);
    v17[35] = *(_DWORD *)(a1 + 108);
    v17[36] = StackCookie_4;
    v17[8] = 0;
    RtlReleaseSRWLockExclusive(v10);
  }
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(int (__thiscall **)(_DWORD, int, int, int *, _DWORD *))v6;
  v16 = *(_DWORD *)(v6 + 4);
  v19[2] = *(_DWORD *)(a1 + 104);
  v8 = *(_DWORD *)(a1 + 108);
  v19[0] = 48;
  v19[1] = StackCookie;
  v19[3] = v8;
  v19[6] = *(_DWORD *)(a1 + 40);
  v18 = 48;
  v19[7] = *(_DWORD *)(a1 + 44);
  v19[8] = *(_DWORD *)(a1 + 48);
  v19[9] = *(_DWORD *)(a1 + 52);
  if ( v7 )
    return v7(v7, StackCookie, v16, &v18, v19);
  return v3;
}
