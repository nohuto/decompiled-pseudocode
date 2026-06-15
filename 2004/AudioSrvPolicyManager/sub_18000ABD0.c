/*
 * XREFs of sub_18000ABD0 @ 0x18000ABD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800273FC @ 0x1800273FC (sub_1800273FC.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

__int64 __fastcall sub_18000ABD0(__int64 a1, DWORD a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v5; // ebx
  float v6; // xmm3_4
  int v7; // ebx
  int v8; // xmm0_4
  int v9; // ecx
  int v10; // ecx
  __int64 v12; // [rsp+40h] [rbp+8h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v5 = 1;
  if ( !(unsigned int)sub_18002880C(a2) && (int)sub_1800273FC(v12) >= 0 )
    v5 = *(_DWORD *)(v12 + 320);
  if ( v3 )
    LeaveCriticalSection(v3);
  v6 = 0.0;
  *(_DWORD *)(a1 + 440) = v5;
  if ( v5 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v8 = -1061158912;
      else
        v8 = 0;
    }
    else
    {
      v8 = -1047527424;
    }
  }
  else
  {
    v8 = -1027604480;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 464) + 8LL) = v8;
  v9 = *(_DWORD *)(a1 + 440);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        v6 = -6.0;
    }
    else
    {
      v6 = -18.0;
    }
  }
  else
  {
    v6 = -96.0;
  }
  return sub_180006EA0(qword_18004FE68, a2, (__int64)L"Comm", v6);
}
