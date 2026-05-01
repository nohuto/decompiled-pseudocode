/*
 * XREFs of sub_180030C60 @ 0x180030C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030D28 @ 0x180030D28 (sub_180030D28.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030C60(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 56);
  v8[0] = a1 - 16;
  v8[1] = &v9;
  if ( v2 >= 0 )
  {
    v5 = sub_180030D28(v8);
    v2 = v5;
    if ( *(_DWORD *)(a1 + 68) != *(_DWORD *)(v4 + 120) )
    {
      *(_DWORD *)(a1 + 64) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v6 = *v9;
        *v9 = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v2, 0LL);
  }
  return (unsigned int)v2;
}
