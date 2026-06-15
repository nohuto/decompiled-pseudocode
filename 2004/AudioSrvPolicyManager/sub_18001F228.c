/*
 * XREFs of sub_18001F228 @ 0x18001F228
 * Callers:
 *     sub_1800209A0 @ 0x1800209A0 (sub_1800209A0.c)
 *     sub_18002CE60 @ 0x18002CE60 (sub_18002CE60.c)
 * Callees:
 *     sub_180010888 @ 0x180010888 (sub_180010888.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_1800123B4 @ 0x1800123B4 (sub_1800123B4.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18001E024 @ 0x18001E024 (sub_18001E024.c)
 *     sub_18001F090 @ 0x18001F090 (sub_18001F090.c)
 *     sub_180029028 @ 0x180029028 (sub_180029028.c)
 *     sub_1800290D8 @ 0x1800290D8 (sub_1800290D8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001F228(__int64 a1, const WCHAR *a2, __int64 a3, unsigned int a4)
{
  int v8; // ebp
  volatile signed __int32 *v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v14; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v15; // [rsp+98h] [rbp+10h]

  v8 = 0;
  v9 = 0LL;
  v15 = 0LL;
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( a2 )
  {
    if ( *a2 )
    {
      v8 = sub_18001DBC4(a1, a2, a3, a4, &v14, 0, 0LL);
      if ( v8 >= 0 )
      {
        v11 = v14;
        v9 = v14;
        v15 = v14;
        if ( v14 )
        {
          _InterlockedIncrement(v14 + 2);
          v9 = v15;
          v11 = v14;
        }
        if ( !(unsigned int)sub_180013074((__int64)v11) && *((_DWORD *)v11 + 149) )
          sub_18001F090(a1, v11);
        sub_180010888((__int64)v11, 0, 0LL);
        if ( (unsigned int)sub_1800290D8(v11) )
          sub_180029028(a4);
        sub_180012270((__int64)v11);
        if ( *((_BYTE *)v11 + 664) )
          v8 = sub_18001E024(a1, &v14);
      }
    }
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v9 )
  {
    sub_1800123B4((__int64)v9);
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      v12 = v15;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1LL);
    }
  }
  return (unsigned int)v8;
}
