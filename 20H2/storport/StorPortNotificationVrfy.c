/*
 * XREFs of StorPortNotificationVrfy @ 0x1C007F440
 * Callers:
 *     <none>
 * Callees:
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 */

void StorPortNotificationVrfy(unsigned int a1, _QWORD **a2, ...)
{
  unsigned __int64 v2; // r9
  unsigned int *v3; // r8
  int v4; // ecx
  int v5; // ecx
  unsigned int *v6; // rbx
  void *v7; // rcx
  char *v8; // [rsp+20h] [rbp-38h]
  _DWORD *v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  _DWORD *v11; // [rsp+38h] [rbp-20h]
  __int16 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]
  int *v14; // [rsp+50h] [rbp-8h]
  _QWORD **v15; // [rsp+68h] [rbp+10h]
  unsigned int *v16; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  unsigned __int64 v18; // [rsp+78h] [rbp+20h]
  char *v19; // [rsp+80h] [rbp+28h]
  _DWORD *v20; // [rsp+88h] [rbp+30h]
  __int64 v21; // [rsp+90h] [rbp+38h]
  _DWORD *v22; // [rsp+98h] [rbp+40h]
  va_list va1; // [rsp+A0h] [rbp+48h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v16 = va_arg(va1, unsigned int *);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, char *);
  v20 = va_arg(va1, _DWORD *);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _DWORD *);
  v15 = a2;
  v2 = a1;
  va_copy((va_list)v3, va);
  v4 = 4096;
  if ( (int)v2 > 4096 )
  {
    switch ( (_DWORD)v2 )
    {
      case 0x1001:
        v4 = 4097;
        break;
      case 0x1002:
        StorPortNotification(4098, a2, v16, v18, v19, v20, v10, v11, v12, v13, v14);
        return;
      case 0x1003:
        StorPortNotification(4099, a2, (unsigned int *)(unsigned int)v16, v18, v19, v9, v10, v11, v12, v13, v14);
        return;
      case 0x1004:
        v3 = v16;
        v5 = 4100;
        goto LABEL_21;
      case 0x1005:
        LODWORD(v8) = (_DWORD)v19;
        StorPortNotification(4101, a2, (unsigned int *)(unsigned int)v16, v18, v8, v20, v21, v22, v12, v13, v14);
        return;
      case 0x1006:
        v4 = 4102;
        break;
      case 0x1007:
        StorPortNotification(4103, a2, v16, v18, v19, v9, v10, v11, v12, v13, v14);
        return;
      default:
        goto LABEL_33;
    }
LABEL_42:
    StorPortNotification(v4, a2, v16, v18, v8, v9, v10, v11, v12, v13, v14);
    return;
  }
  if ( (_DWORD)v2 == 4096 )
    goto LABEL_42;
  if ( !(_DWORD)v2 )
  {
    v6 = v16;
    if ( *((_BYTE *)v16 + 2) == 40 )
      v7 = (void *)*((_QWORD *)v16 + 13);
    else
      v7 = (void *)*((_QWORD *)v16 + 7);
    memset(v7, 254, (*(_DWORD *)(**(a2 - 2) + 468LL) + 7) & 0xFFFFFFF8);
    a2 = v15;
    v3 = v6;
    v5 = 0;
    goto LABEL_21;
  }
  v5 = 3;
  switch ( (_DWORD)v2 )
  {
    case 3:
LABEL_21:
      StorPortNotification(v5, a2, v3, v2, v8, v9, v10, v11, v12, v13, v14);
      return;
    case 6:
      v2 = (unsigned int)v18;
      v5 = 6;
      v3 = v16;
      goto LABEL_21;
    case 8:
      v2 = (unsigned __int8)v18;
      if ( (_BYTE)v18 != 0xFF )
      {
        LODWORD(v9) = (unsigned __int8)v20;
        LODWORD(v8) = (unsigned __int8)v19;
        StorPortNotification(8, a2, v16, (unsigned __int8)v18, v8, v9, v10, v11, v12, v13, v14);
        return;
      }
      v3 = v16;
      v5 = 8;
      goto LABEL_21;
  }
  if ( (_DWORD)v2 != 9 )
  {
    switch ( (_DWORD)v2 )
    {
      case 0xC:
        v3 = v16;
        v5 = 12;
        goto LABEL_21;
      case 0xE:
        StorPortNotification(14, a2, (unsigned int *)(unsigned int)v16, v18, v8, v9, v10, v11, v12, v13, v14);
        return;
      case 0xF:
        v3 = v16;
        v5 = 15;
        goto LABEL_21;
    }
LABEL_33:
    v5 = v2;
    goto LABEL_21;
  }
  if ( (_BYTE)v16 == 0xFF )
  {
    StorPortNotification(9, a2, (unsigned int *)(unsigned __int8)v16, v2, v8, v9, v10, v11, v12, v13, v14);
  }
  else
  {
    LODWORD(v8) = (unsigned __int8)v19;
    StorPortNotification(
      9,
      a2,
      (unsigned int *)(unsigned __int8)v16,
      (unsigned __int8)v18,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}
