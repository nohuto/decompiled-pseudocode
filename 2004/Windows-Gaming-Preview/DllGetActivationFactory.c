/*
 * XREFs of DllGetActivationFactory @ 0x180009490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009A40 @ 0x180009A40 (sub_180009A40.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, _QWORD *Ptr)
{
  PCWSTR StringRawBuffer; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  bool i; // cf
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // r9
  unsigned int v13; // ebx
  BOOL hasEmbedNull; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v17[2]; // [rsp+38h] [rbp-50h] BYREF
  int v18; // [rsp+58h] [rbp-30h]
  __int16 v19; // [rsp+5Ch] [rbp-2Ch]

  InitOnceExecuteOnce(&InitOnce, InitFn, 0LL, 0LL);
  byte_18005AE90 = 1;
  *Ptr = 0LL;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v18 = 6553673;
    v13 = -2147024809;
    v19 = 0;
    v17[0] = xmmword_1800510D8;
    v17[1] = xmmword_1800510E8;
    RoOriginateErrorW(2147942487LL, 18LL, v17);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v5 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)&qword_18005AE88 + 40LL))(&qword_18005AE88) + 8;
    v6 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)&qword_18005AE88 + 48LL))(&qword_18005AE88);
    for ( i = v5 < v6; i; i = v5 < v6 )
    {
      if ( *(_QWORD *)v5 )
      {
        v8 = (*(__int64 (**)(void))(*(_QWORD *)v5 + 8LL))() - (_QWORD)StringRawBuffer;
        v9 = (unsigned __int16 *)StringRawBuffer;
        do
        {
          v10 = *(unsigned __int16 *)((char *)v9 + v8);
          v11 = *v9 - v10;
          if ( v11 )
            break;
          ++v9;
        }
        while ( v10 );
        if ( !v11 )
        {
          v12 = *(_QWORD *)v5;
          v16 = 1;
          return (unsigned int)sub_180009A40((int)&qword_18005AE88, (int)&v16, (int)&xmmword_180051100, v12, Ptr);
        }
      }
      v5 += 8LL;
    }
    v13 = -2147221231;
    RoOriginateError(2147746065LL, string);
  }
  return v13;
}
