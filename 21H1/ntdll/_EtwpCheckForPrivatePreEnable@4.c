/*
 * XREFs of _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20
 * Callers:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 * Callees:
 *     _EtwpFindGuidEntry@4 @ 0x4B2ADC68 (_EtwpFindGuidEntry@4.c)
 *     _EtwpRegisterGuidsApiCallback@12 @ 0x4B2ADEE1 (_EtwpRegisterGuidsApiCallback@12.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _EtwpGetUmProcessImageInfo@8 @ 0x4B2F1D78 (_EtwpGetUmProcessImageInfo@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpPopulatePrivateEnableInfoFromGuidEntry@4 @ 0x4B3807B2 (_EtwpPopulatePrivateEnableInfoFromGuidEntry@4.c)
 *     _EtwpPreEnableEventApiCallback@4 @ 0x4B3807EE (_EtwpPreEnableEventApiCallback@4.c)
 */

int __thiscall EtwpCheckForPrivatePreEnable(int this)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edx
  unsigned __int8 *v6; // esi
  char v7; // al
  _DWORD *v8; // [esp+10h] [ebp-90h]
  int v9; // [esp+18h] [ebp-88h]
  char v10; // [esp+1Fh] [ebp-81h]
  _DWORD v11[30]; // [esp+20h] [ebp-80h] BYREF

  v10 = 0;
  result = EtwpFindGuidEntry(this + 12);
  v3 = result;
  v8 = (_DWORD *)result;
  if ( result )
  {
    v4 = result + 28;
    RtlAcquireSRWLockShared(result + 28);
    *(_DWORD *)(this + 200) = v3;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(this);
    v5 = 4;
    v6 = (unsigned __int8 *)(this + 102);
    v9 = 4;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(this + 54) & 0x3FFF) == 2 || *(__int16 *)(this + 54) < 0 )
        {
          EtwpGetUmProcessImageInfo(*v6, this);
          v5 = v9;
        }
        v7 = 1;
        v10 = 1;
      }
      else
      {
        v7 = v10;
      }
      v6 += 24;
      v9 = --v5;
    }
    while ( v5 );
    if ( v7 )
    {
      if ( (*(_WORD *)(this + 54) & 0x3FFF) == 2 )
      {
        memset(v11, 0, sizeof(v11));
        v11[26] = v8[34];
        v11[27] = v8[35];
        v11[28] = v8[36];
        v11[10] = v8[3];
        v11[11] = v8[4];
        v11[12] = v8[5];
        v11[13] = v8[6];
        RtlReleaseSRWLockShared(v8 + 7);
        return EtwpRegisterGuidsApiCallback(1);
      }
      else
      {
        RtlReleaseSRWLockShared(v4);
        return EtwpPreEnableEventApiCallback(this);
      }
    }
    else
    {
      return RtlReleaseSRWLockShared(v4);
    }
  }
  return result;
}
