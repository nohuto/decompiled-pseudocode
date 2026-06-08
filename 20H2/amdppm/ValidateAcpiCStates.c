/*
 * XREFs of ValidateAcpiCStates @ 0x1C002ACAC
 * Callers:
 *     InitAcpi2CStates @ 0x1C0032404 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00096C8 (WPP_RECORDER_SF_ddd.c)
 *     IsValidAcpiGenericAddress @ 0x1C002A810 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(unsigned int *a1)
{
  unsigned int v1; // r9d
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 i; // rdx
  unsigned int j; // r11d
  unsigned __int16 v6; // r9
  int v8; // [rsp+20h] [rbp-28h]

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    v3 = *a1;
    for ( i = 1LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v3 )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= v3 )
            return v1;
          if ( LOBYTE(v2[5 * j + 1]) != 127 )
          {
            switch ( LOBYTE(v2[5 * j + 4]) )
            {
              case 0:
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return (unsigned int)-1073741823;
                v6 = 28;
                goto LABEL_27;
              case 1:
                return (unsigned int)-1073741823;
              case 2:
                if ( !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C2C) )
                {
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    return (unsigned int)-1073741823;
                  v6 = 26;
                  goto LABEL_27;
                }
                break;
              default:
                if ( !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C44)
                  || !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C14)
                  || !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C2C) )
                {
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    return (unsigned int)-1073741823;
                  v6 = 27;
LABEL_27:
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    1u,
                    v6,
                    (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids);
                  return (unsigned int)-1073741823;
                }
                break;
            }
          }
        }
      }
      if ( LOBYTE(a1[5 * (unsigned int)i + 4]) < LOBYTE(a1[5 * (unsigned int)(i - 1) + 4])
        || HIWORD(a1[5 * (unsigned int)i + 4]) < HIWORD(a1[5 * (unsigned int)(i - 1) + 4])
        || a1[5 * (unsigned int)i + 5] > a1[5 * (unsigned int)(i - 1) + 5] )
      {
        break;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, 5LL * (unsigned int)(i - 1), 0x19u, v8);
  }
  return (unsigned int)-1073741823;
}
