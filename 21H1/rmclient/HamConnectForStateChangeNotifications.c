/*
 * XREFs of HamConnectForStateChangeNotifications @ 0x1800092E0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     HampConnectionCreate @ 0x1800039B0 (HampConnectionCreate.c)
 */

__int64 __fastcall HamConnectForStateChangeNotifications(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( a1 )
  {
    v8[0] = a1;
    v8[1] = a2;
    v5 = HampConnectionCreate((__int64)v8, (__int64)&unk_180015B30, 0, a3, &v9);
    if ( v5 < 0 )
    {
      v6 = v9;
    }
    else
    {
      v6 = 0LL;
      *a4 = v9;
      v5 = 0;
    }
    if ( v6 )
      HampConnectionDestroy(v6);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v5;
}
