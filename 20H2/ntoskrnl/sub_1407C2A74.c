/*
 * XREFs of sub_1407C2A74 @ 0x1407C2A74
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1406B1500 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1407C2AC0 @ 0x1407C2AC0 (sub_1407C2AC0.c)
 */

__int64 __fastcall sub_1407C2A74(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407C2AC0(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
