/*
 * XREFs of sub_180052E04 @ 0x180052E04
 * Callers:
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_180052D54 @ 0x180052D54 (sub_180052D54.c)
 *     sub_180052F70 @ 0x180052F70 (sub_180052F70.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800EA8B0 @ 0x1800EA8B0 (sub_1800EA8B0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180052E04(__int64 a1, __int64 a2, DWORD a3, __int64 a4, struct _TP_TIMER ***a5)
{
  __int64 v7; // r13
  int v9; // edi
  struct _TP_TIMER **v10; // rax
  struct _TP_TIMER **v11; // rsi
  struct _TP_TIMER **v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r14
  struct _TP_TIMER **v15; // rcx
  signed int LastError; // eax
  _QWORD v18[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v19[56]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h]
  struct _FILETIME pftDueTime; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+58h]

  v22 = a4;
  v7 = (unsigned int)a2;
  v9 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v9 = sub_180052F70();
    if ( v9 >= 0 )
    {
      v10 = (struct _TP_TIMER **)sub_18006A18C(32LL, &unk_18019F848);
      v11 = v10;
      v18[0] = v10;
      if ( v10 )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        v10[2] = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      v12 = v11;
      v18[0] = v11;
      if ( v11 )
      {
        v18[1] = v19;
        v20 = 0LL;
        v13 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
        if ( v13 )
          v20 = (**v13)(v13, v19);
        v9 = sub_180052D54((__int64)v11, (__int64)v19, a1);
        if ( v9 >= 0 )
        {
          ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)sub_180043B50,
                              v11,
                              (PTP_CALLBACK_ENVIRON)(a1 + 8));
          if ( ThreadpoolTimer )
          {
            v9 = 0;
          }
          else
          {
            LastError = GetLastError();
            v9 = LastError;
            if ( LastError > 0 )
              v9 = (unsigned __int16)LastError | 0x80070000;
          }
          *v11 = ThreadpoolTimer;
          if ( v9 >= 0 )
          {
            pftDueTime = (struct _FILETIME)(-10000 * v7);
            SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, a3, 0);
            if ( a5 != v18 )
            {
              v12 = 0LL;
              v15 = *a5;
              *a5 = v11;
              if ( v15 )
                sub_1800EA8B0(v15, a2);
            }
          }
        }
      }
      else
      {
        v9 = -2147024882;
      }
      if ( v12 )
        sub_1800EA8B0(v12, a2);
    }
  }
  unknown_libname_207(a4, a2);
  return (unsigned int)v9;
}
