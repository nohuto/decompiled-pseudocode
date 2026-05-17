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
  _DWORD *v5; // esi
  int v6; // eax
  int (__thiscall *v7)(_DWORD, int, int, int *, _DWORD *); // edx
  int v8; // eax
  _DWORD *v10; // esi
  int v11; // [esp-4h] [ebp-5Ch]
  int v12; // [esp+Ch] [ebp-4Ch]
  int v13; // [esp+10h] [ebp-48h]
  int v15; // [esp+14h] [ebp-44h]
  _DWORD *v16; // [esp+18h] [ebp-40h]
  int v17; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD v18[13]; // [esp+20h] [ebp-38h] BYREF

  v3 = 0;
  v5 = *(_DWORD **)(a2 + 200);
  v16 = v5;
  memset(v18, 0, 0x30u);
  v13 = *(_DWORD *)(a1 + 112);
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v11 = 4;
    }
    else
    {
      if ( v13 != 2 )
        return 0;
      v11 = 10;
    }
  }
  else
  {
    v11 = 5;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  v12 = v11;
  if ( !a3 && v5 && v11 != 10 && *(_BYTE *)(a1 + 107) == 1 )
  {
    v10 = v5 + 7;
    RtlAcquireSRWLockExclusive(v10);
    v16[8] = NtCurrentTeb()->ClientId.UniqueThread;
    v16[34] = *(_DWORD *)(a1 + 104);
    v16[35] = *(_DWORD *)(a1 + 108);
    v16[36] = v13;
    v16[8] = 0;
    RtlReleaseSRWLockExclusive(v10);
  }
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(int (__thiscall **)(_DWORD, int, int, int *, _DWORD *))v6;
  v15 = *(_DWORD *)(v6 + 4);
  v18[2] = *(_DWORD *)(a1 + 104);
  v8 = *(_DWORD *)(a1 + 108);
  v18[0] = 48;
  v18[1] = v12;
  v18[3] = v8;
  v18[6] = *(_DWORD *)(a1 + 40);
  v17 = 48;
  v18[7] = *(_DWORD *)(a1 + 44);
  v18[8] = *(_DWORD *)(a1 + 48);
  v18[9] = *(_DWORD *)(a1 + 52);
  if ( v7 )
    return v7(v7, v12, v15, &v17, v18);
  return v3;
}
