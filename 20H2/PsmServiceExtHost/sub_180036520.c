/*
 * XREFs of sub_180036520 @ 0x180036520
 * Callers:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_18002F5D0 @ 0x18002F5D0 (sub_18002F5D0.c)
 *     sub_180030370 @ 0x180030370 (sub_180030370.c)
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 * Callees:
 *     sub_180036608 @ 0x180036608 (sub_180036608.c)
 *     sub_1800849A0 @ 0x1800849A0 (sub_1800849A0.c)
 *     sub_180084A44 @ 0x180084A44 (sub_180084A44.c)
 *     sub_180084A94 @ 0x180084A94 (sub_180084A94.c)
 *     sub_180084B3C @ 0x180084B3C (sub_180084B3C.c)
 *     sub_180084BDC @ 0x180084BDC (sub_180084BDC.c)
 *     sub_180084C2C @ 0x180084C2C (sub_180084C2C.c)
 *     sub_180084CE4 @ 0x180084CE4 (sub_180084CE4.c)
 *     sub_180084D9C @ 0x180084D9C (sub_180084D9C.c)
 *     sub_180084DEC @ 0x180084DEC (sub_180084DEC.c)
 *     sub_180084F20 @ 0x180084F20 (sub_180084F20.c)
 */

__int64 __fastcall sub_180036520(__int64 a1)
{
  int v1; // edx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 <= 23 )
  {
    if ( v1 < 22 )
    {
      if ( v1 > 12 )
      {
        if ( v1 > 17 )
        {
          switch ( v1 )
          {
            case 18:
              v5 = *(void **)(a1 + 64);
              if ( v5 )
                CancelMibChangeNotify2(v5);
              v6 = *(void **)(a1 + 72);
              if ( v6 )
                CancelMibChangeNotify2(v6);
              break;
            case 19:
              sub_180084CE4();
              break;
            case 20:
              sub_180084C2C();
              break;
            default:
              sub_180084D9C();
              break;
          }
          return sub_18003655C(a1);
        }
      }
      else
      {
        if ( v1 == 12 )
          goto LABEL_15;
        if ( v1 < 0 )
          return sub_18003655C(a1);
        if ( v1 <= 1 )
        {
          sub_180084DEC();
          return sub_18003655C(a1);
        }
        if ( v1 == 2 )
        {
          sub_1800849A0();
          return sub_18003655C(a1);
        }
        if ( v1 <= 8 )
        {
          v4 = *(void **)(a1 + 64);
          if ( v4 )
            PowerSettingUnregisterNotification(v4);
          return sub_18003655C(a1);
        }
        if ( v1 != 9 )
        {
          if ( v1 == 10 )
            return sub_18003655C(a1);
LABEL_15:
          sub_180084F20();
          return sub_18003655C(a1);
        }
      }
    }
LABEL_45:
    if ( *(_QWORD *)(a1 + 72) )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    return sub_18003655C(a1);
  }
  if ( v1 <= 29 )
  {
    if ( v1 != 29 && (v7 = v1 - 24) != 0 && (v8 = v7 - 1) != 0 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          sub_180084A94();
      }
      else
      {
        sub_180084A44();
      }
    }
    else
    {
      sub_180036608();
    }
    return sub_18003655C(a1);
  }
  v10 = v1 - 30;
  if ( !v10 )
    goto LABEL_45;
  v11 = v10 - 1;
  if ( !v11 )
  {
    sub_180084BDC();
    return sub_18003655C(a1);
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_45;
  v13 = v12 - 1;
  if ( !v13 )
  {
    sub_180084B3C();
    return sub_18003655C(a1);
  }
  if ( v13 == 1 )
    goto LABEL_45;
  return sub_18003655C(a1);
}
