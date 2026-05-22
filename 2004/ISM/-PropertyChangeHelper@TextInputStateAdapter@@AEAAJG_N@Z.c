/*
 * XREFs of ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801A2C84
 * Callers:
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A2AF0 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x1801A2BD0 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180148D70 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall TextInputStateAdapter::PropertyChangeHelper(TextInputStateAdapter *this, unsigned __int16 a2)
{
  unsigned int v2; // r14d
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r9
  _BYTE v10[4]; // [rsp+30h] [rbp-99h] BYREF
  int v11; // [rsp+34h] [rbp-95h] BYREF
  __int16 v12; // [rsp+38h] [rbp-91h] BYREF
  __int64 v13; // [rsp+40h] [rbp-89h] BYREF
  int v14; // [rsp+48h] [rbp-81h] BYREF
  int v15; // [rsp+4Ch] [rbp-7Dh] BYREF
  __int64 v16; // [rsp+50h] [rbp-79h] BYREF
  __int64 v17; // [rsp+58h] [rbp-71h] BYREF
  __int64 v18; // [rsp+60h] [rbp-69h] BYREF
  __int64 v19; // [rsp+68h] [rbp-61h] BYREF
  int v20; // [rsp+70h] [rbp-59h]
  __m128i si128; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v22[96]; // [rsp+90h] [rbp-39h] BYREF

  v2 = a2;
  v13 = 0LL;
  v16 = 0LL;
  if ( a2 >= 0x25u || !*((_BYTE *)this + a2 + 57) )
    goto LABEL_53;
  v11 = 0;
  v17 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v12 = 0;
  v10[0] = 0;
  v14 = 0;
  memset_0(v22, 0, 0x54uLL);
  v15 = -1;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( v2 > 0x13 )
  {
    if ( v2 > 0x1D )
    {
      switch ( v2 )
      {
        case 0x1Eu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 272LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1103LL;
            goto LABEL_32;
          }
          break;
        case 0x1Fu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 5) + 280LL))(
                 *((_QWORD *)this + 5),
                 &v12);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1108LL;
            goto LABEL_32;
          }
          break;
        case 0x20u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 288LL))(
                 *((_QWORD *)this + 5),
                 &v13);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1113LL;
            goto LABEL_32;
          }
          break;
        case 0x21u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 296LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1118LL;
            goto LABEL_32;
          }
          break;
        case 0x22u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 304LL))(
                 *((_QWORD *)this + 5),
                 &v18);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1123LL;
            goto LABEL_32;
          }
          break;
        case 0x23u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 312LL))(
                 *((_QWORD *)this + 5),
                 &v13);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1128LL;
            goto LABEL_32;
          }
          break;
        case 0x24u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 320LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1022LL;
            goto LABEL_32;
          }
          break;
      }
    }
    else
    {
      switch ( v2 )
      {
        case 0x1Du:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 264LL))(
                 *((_QWORD *)this + 5),
                 &v17);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1040LL;
            goto LABEL_32;
          }
          break;
        case 0x14u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 192LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1004LL;
            goto LABEL_32;
          }
          break;
        case 0x15u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 200LL))(*((_QWORD *)this + 5), &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1010LL;
            goto LABEL_32;
          }
          break;
        case 0x16u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 208LL))(
                 *((_QWORD *)this + 5),
                 v22);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 953LL;
            goto LABEL_32;
          }
          break;
        case 0x17u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 216LL))(
                 *((_QWORD *)this + 5),
                 &v16);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 959LL;
            goto LABEL_32;
          }
          break;
        case 0x18u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 224LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1016LL;
            goto LABEL_32;
          }
          break;
        case 0x19u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 232LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1088LL;
            goto LABEL_32;
          }
          break;
        case 0x1Au:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 240LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1098LL;
            goto LABEL_32;
          }
          break;
        case 0x1Bu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), &v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_54;
            v8 = 1093LL;
            goto LABEL_32;
          }
          break;
      }
    }
    goto LABEL_141;
  }
  if ( v2 == 19 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 184LL))(*((_QWORD *)this + 5), v10);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_54;
      v8 = 998LL;
      goto LABEL_32;
    }
    goto LABEL_141;
  }
  if ( v2 > 8 )
  {
    switch ( v2 )
    {
      case 9u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 104LL))(
               *((_QWORD *)this + 5),
               &si128);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1046LL;
          goto LABEL_32;
        }
        goto LABEL_141;
      case 0xAu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 112LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1034LL;
          goto LABEL_32;
        }
        goto LABEL_141;
      case 0xDu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 136LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 983LL;
          goto LABEL_32;
        }
        goto LABEL_141;
      case 0xEu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 144LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1073LL;
          goto LABEL_32;
        }
        goto LABEL_141;
      case 0xFu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 152LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1078LL;
          goto LABEL_32;
        }
        goto LABEL_141;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 160LL))(
               *((_QWORD *)this + 5),
               &v19);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1083LL;
          goto LABEL_32;
        }
        goto LABEL_141;
    }
    if ( v2 != 18 )
      goto LABEL_141;
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 176LL))(*((_QWORD *)this + 5), &v11);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_54;
      v8 = 989LL;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 24) != v11 )
    {
LABEL_141:
      switch ( v2 )
      {
        case 0u:
        case 2u:
        case 5u:
        case 6u:
        case 7u:
        case 0xAu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x12u:
        case 0x1Bu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v11,
                 4LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1155LL;
          break;
        case 1u:
        case 3u:
        case 0x23u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v13,
                 8LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1210LL;
          break;
        case 4u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v15,
                 4LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1266LL;
          break;
        case 8u:
        case 9u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __m128i *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &si128,
                 16LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1248LL;
          break;
        case 0x10u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v19,
                 12LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1257LL;
          break;
        case 0x13u:
        case 0x14u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Cu:
        case 0x1Eu:
        case 0x21u:
        case 0x24u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 v10,
                 1LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1190LL;
          break;
        case 0x15u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v14,
                 4LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1199LL;
          break;
        case 0x16u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 v22,
                 84LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1238LL;
          break;
        case 0x17u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v16,
                 8LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1229LL;
          break;
        case 0x1Du:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v17,
                 8LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1173LL;
          break;
        case 0x1Fu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v12,
                 2LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1164LL;
          break;
        case 0x20u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v13,
                 8LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1220LL;
          break;
        case 0x22u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v18,
                 8LL);
          v7 = v4;
          if ( v4 >= 0 )
            goto LABEL_53;
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_54;
          v8 = 1275LL;
          break;
        default:
          goto LABEL_53;
      }
      goto LABEL_32;
    }
LABEL_53:
    v7 = 0;
    goto LABEL_54;
  }
  switch ( v2 )
  {
    case 8u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 96LL))(
             *((_QWORD *)this + 5),
             &si128);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_54;
        v8 = 1028LL;
        goto LABEL_32;
      }
      goto LABEL_141;
    case 0u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_54;
        v8 = 1058LL;
        goto LABEL_32;
      }
      goto LABEL_141;
    case 1u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_54;
        v8 = 1063LL;
        goto LABEL_32;
      }
      goto LABEL_141;
    case 2u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 947LL;
          goto LABEL_32;
        }
        goto LABEL_54;
      }
      goto LABEL_141;
    case 3u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 965LL;
          goto LABEL_32;
        }
        goto LABEL_54;
      }
      goto LABEL_141;
    case 4u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), &v15);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 971LL;
          goto LABEL_32;
        }
        goto LABEL_54;
      }
      goto LABEL_141;
    case 5u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 977LL;
          goto LABEL_32;
        }
        goto LABEL_54;
      }
      goto LABEL_141;
  }
  if ( v2 != 6 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v11);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v8 = 1052LL;
LABEL_32:
        McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::PropertyChangeHelper", v8, v4);
        goto LABEL_54;
      }
      goto LABEL_54;
    }
    goto LABEL_141;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v11);
  v7 = v4;
  if ( v4 >= 0 )
    goto LABEL_141;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v8 = 1068LL;
    goto LABEL_32;
  }
LABEL_54:
  MsgRelease(v13);
  MsgRelease(v16);
  return v7;
}
