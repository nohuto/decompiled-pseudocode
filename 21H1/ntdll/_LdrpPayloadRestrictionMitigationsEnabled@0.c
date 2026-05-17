/*
 * XREFs of _LdrpPayloadRestrictionMitigationsEnabled@0 @ 0x4B3335DC
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __stdcall LdrpPayloadRestrictionMitigationsEnabled()
{
  bool v0; // bl
  char v1; // dl
  char v2; // al
  _QWORD v4[3]; // [esp+Ch] [ebp-1Ch] BYREF

  qmemcpy(v4, &unk_4B3A92E8, sizeof(v4));
  v0 = 1;
  v1 = 0;
  if ( ((v4[1] >> 20) & 3) != 1 )
  {
    qmemcpy(v4, &unk_4B3A92E8, sizeof(v4));
    if ( (BYTE2(v4[1]) & 3) != 1 )
    {
      qmemcpy(v4, &unk_4B3A92E8, sizeof(v4));
      if ( (BYTE3(v4[1]) & 3) != 1 )
      {
        qmemcpy(v4, &unk_4B3A92E8, sizeof(v4));
        if ( ((v4[1] >> 28) & 3) != 1 )
        {
          qmemcpy(v4, &unk_4B3A92E8, sizeof(v4));
          if ( (BYTE4(v4[1]) & 3) != 1 )
          {
            qmemcpy(v4, &unk_4B3A92E8, sizeof(v4));
            v0 = (BYTE5(v4[1]) & 3) == 1;
          }
        }
      }
    }
  }
  qmemcpy(v4, &unk_4B3A9320, sizeof(v4));
  if ( ((v4[1] >> 20) & 3) == 1
    || (qmemcpy(v4, &unk_4B3A9320, sizeof(v4)), (BYTE2(v4[1]) & 3) == 1)
    || (qmemcpy(v4, &unk_4B3A9320, sizeof(v4)), (BYTE3(v4[1]) & 3) == 1)
    || (qmemcpy(v4, &unk_4B3A9320, sizeof(v4)), ((v4[1] >> 28) & 3) == 1)
    || (qmemcpy(v4, &unk_4B3A9320, sizeof(v4)), (BYTE4(v4[1]) & 3) == 1)
    || (qmemcpy(v4, &unk_4B3A9320, sizeof(v4)), v2 = 0, (BYTE5(v4[1]) & 3) == 1) )
  {
    v2 = 1;
  }
  if ( v0 || v2 )
    return 1;
  return v1;
}
