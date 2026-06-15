/*
 * XREFs of sub_1800DBDC0 @ 0x1800DBDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800D2160 @ 0x1800D2160 (sub_1800D2160.c)
 *     sub_1800DD840 @ 0x1800DD840 (sub_1800DD840.c)
 */

__int64 __fastcall sub_1800DBDC0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = 2201;
    v9 = -2147467261;
LABEL_12:
    sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v9);
    goto LABEL_14;
  }
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v7 = -2004287487;
    v8 = 2202;
    v9 = -2004287487;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(a1 + 192) )
  {
    v7 = -2004287487;
    v8 = 2203;
    v9 = -2004287487;
    goto LABEL_12;
  }
  v10 = sub_1800DD840(a1, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = sub_1800D2160(*(_QWORD *)(a1 + 192), a3);
    v7 = v12;
    if ( v12 < 0 )
    {
      v9 = v12;
      v8 = 2209;
      goto LABEL_12;
    }
    v7 = 0;
  }
  else
  {
    v7 = -2005139336;
    if ( v10 != -2005139336 )
    {
      sub_18004BD84((int)retaddr, 2204, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v10);
      v7 = v11;
    }
  }
LABEL_14:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
