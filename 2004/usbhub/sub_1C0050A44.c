/*
 * XREFs of sub_1C0050A44 @ 0x1C0050A44
 * Callers:
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C0051798 @ 0x1C0051798 (sub_1C0051798.c)
 */

void __fastcall sub_1C0050A44(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rbx
  const wchar_t *v4; // rdi
  char *v5; // rsi
  void *v6; // r14
  __int64 v7; // r15
  void *v8; // rcx
  char *PoolWithTag; // rax
  _QWORD *v10; // rdi
  POOL_TYPE v11; // ecx
  int v12; // r12d
  _OWORD *v13; // rax
  _OWORD *v14; // rbp
  char *v15; // rcx
  int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  sub_1C000FD80(a1, 4096, 1970161988, a2, 0LL);
  v3 = sub_1C0011220(v2);
  switch ( v3[705] )
  {
    case 0x40010000:
      v4 = L"USB\\DEVICE_DESCRIPTOR_FAILURE";
      v5 = "23456789ABCDEFU";
      break;
    case 0x40010001:
      v4 = L"USB\\SET_ADDRESS_FAILURE";
      v5 = "456789ABCDEFU";
      break;
    case 0x40010002:
      v4 = L"USB\\RESET_FAILURE";
      v5 = "123456789ABCDEFU";
      break;
    case 0x40010004:
      v4 = L"USB\\CONFIGURATION_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = "6789ABCDEFU";
      break;
    case 0x40010005:
      v4 = L"USB\\DEVICE_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = "56789ABCDEFU";
      break;
    case 0x40010007:
      v4 = L"USB\\CONFIG_DESCRIPTOR_FAILURE";
      v5 = "3456789ABCDEFU";
      break;
    default:
      return;
  }
  v17 = 0;
  v16 = 0;
  v6 = (void *)sub_1C0051798(0, (_DWORD)v4, 0, (unsigned int)&v17, 2, 0, 0, 0LL);
  if ( v6 )
  {
    v7 = sub_1C0051798(0, (_DWORD)v4, 0, (unsigned int)&v16, 2, 0, 0, 0LL);
    if ( v7 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x18uLL, 0x42554855u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_OWORD *)PoolWithTag = 0LL;
        *((_QWORD *)PoolWithTag + 2) = 0LL;
        *(_OWORD *)PoolWithTag = *(_OWORD *)"U";
        for ( *((_QWORD *)PoolWithTag + 2) = 0x6E006E006E006ELL; *(_WORD *)PoolWithTag != 110; PoolWithTag += 2 )
          ;
        v11 = PoolType;
        v12 = 46;
        *(_DWORD *)PoolWithTag = 3145776;
        *((_DWORD *)PoolWithTag + 1) = 3145776;
        v13 = ExAllocatePoolWithTag(v11, 0x2EuLL, 0x42554855u);
        v14 = v13;
        if ( v13 )
        {
          v15 = (char *)v13 + 24;
          *v13 = 0LL;
          v13[1] = 0LL;
          *((_QWORD *)v13 + 4) = 0LL;
          *((_DWORD *)v13 + 10) = 0;
          *((_WORD *)v13 + 22) = 0;
          *v13 = *(_OWORD *)v10;
          *((_QWORD *)v13 + 2) = v10[2];
          *(_OWORD *)((char *)v13 + 24) = xmmword_1C0064C00;
          *((_WORD *)v13 + 20) = 110;
          while ( *(_WORD *)v15 != 110 )
            v15 += 2;
          *(_WORD *)v15 = (unsigned __int8)a0123456789abcd[0];
          *((_WORD *)v15 + 3) = (unsigned __int8)*v5;
          *(_DWORD *)(v15 + 2) = 3145776;
        }
        else
        {
          v12 = 0;
        }
        ExFreePoolWithTag(v10, 0);
        if ( v14 )
        {
          sub_1C0050D40(v3 + 528);
          v3[529] = v16;
          *((_QWORD *)v3 + 265) = v7;
          sub_1C0050D40(v3 + 524);
          v3[525] = v17;
          *((_QWORD *)v3 + 263) = v6;
          sub_1C0050D40(v3 + 520);
          *((_QWORD *)v3 + 261) = v14;
          v3[521] = v12;
          return;
        }
      }
      ExFreePoolWithTag(v6, 0);
      v8 = (void *)v7;
    }
    else
    {
      v8 = v6;
    }
    ExFreePoolWithTag(v8, 0);
  }
}
