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

void __thiscall EtwpCheckForPrivatePreEnable(int this)
{
  _RTL_SRWLOCK *GuidEntry; // eax
  _RTL_SRWLOCK *v3; // esi
  _RTL_SRWLOCK *v4; // edi
  int v5; // edx
  unsigned __int8 *v6; // esi
  char v7; // al
  size_t v8; // [esp-4h] [ebp-A4h]
  _RTL_SRWLOCK *v9; // [esp+10h] [ebp-90h]
  int v10; // [esp+18h] [ebp-88h]
  char v11; // [esp+1Fh] [ebp-81h]
  _BYTE v12[40]; // [esp+20h] [ebp-80h] BYREF
  unsigned int v13; // [esp+48h] [ebp-58h]
  unsigned int v14; // [esp+4Ch] [ebp-54h]
  unsigned int v15; // [esp+50h] [ebp-50h]
  unsigned int v16; // [esp+54h] [ebp-4Ch]
  unsigned int Value; // [esp+88h] [ebp-18h]
  unsigned int v18; // [esp+8Ch] [ebp-14h]
  unsigned int v19; // [esp+90h] [ebp-10h]

  v11 = 0;
  GuidEntry = (_RTL_SRWLOCK *)EtwpFindGuidEntry(this + 12);
  v3 = GuidEntry;
  v9 = GuidEntry;
  if ( GuidEntry )
  {
    v4 = GuidEntry + 7;
    RtlAcquireSRWLockShared(GuidEntry + 7);
    *(_DWORD *)(this + 200) = v3;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(this);
    v5 = 4;
    v6 = (unsigned __int8 *)(this + 102);
    v10 = 4;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(this + 54) & 0x3FFF) == 2 || *(__int16 *)(this + 54) < 0 )
        {
          EtwpGetUmProcessImageInfo(*v6, this);
          v5 = v10;
        }
        v7 = 1;
        v11 = 1;
      }
      else
      {
        v7 = v11;
      }
      v6 += 24;
      v10 = --v5;
    }
    while ( v5 );
    if ( v7 )
    {
      if ( (*(_WORD *)(this + 54) & 0x3FFF) == 2 )
      {
        LODWORD(v8) = 120;
        memset(v12, 0, v8);
        Value = v9[34].Value;
        v18 = v9[35].Value;
        v19 = v9[36].Value;
        v13 = v9[3].Value;
        v14 = v9[4].Value;
        v15 = v9[5].Value;
        v16 = v9[6].Value;
        RtlReleaseSRWLockShared(v9 + 7);
        EtwpRegisterGuidsApiCallback(1);
      }
      else
      {
        RtlReleaseSRWLockShared(v4);
        EtwpPreEnableEventApiCallback(this);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v4);
    }
  }
}
