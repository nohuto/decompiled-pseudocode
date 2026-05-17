/*
 * XREFs of _RtlGetSetBootStatusData@24 @ 0x4B350A70
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpGetSetBootStatusData@24 @ 0x4B350EC6 (_RtlpGetSetBootStatusData@24.c)
 */

int __stdcall RtlGetSetBootStatusData(int a1, char a2, int a3, int a4, int a5, unsigned int *a6)
{
  int result; // eax
  unsigned int v7; // ecx
  char v8; // al
  unsigned int v9; // edx
  unsigned int v10; // edx
  char v11; // [esp+13h] [ebp-BDh] BYREF
  unsigned int v12; // [esp+14h] [ebp-BCh] BYREF
  _BYTE v13[180]; // [esp+18h] [ebp-B8h] BYREF

  if ( a2 )
    return RtlpGetSetBootStatusData(a3, a4, a5, a6);
  if ( a3 == 15 )
    return -1073741811;
  result = RtlpGetSetBootStatusData(15, &v11, 1, 0);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(a3, v13, 176, 0);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(a3, a4, a5, &v12);
      if ( result >= 0 )
      {
        v7 = v12;
        if ( a6 )
          *a6 = v12;
        v8 = v11;
        v9 = 0;
        if ( v7 )
        {
          do
            v8 += v13[v9++];
          while ( v9 < v7 );
          v11 = v8;
        }
        v10 = 0;
        if ( v7 )
        {
          do
            v8 -= *(_BYTE *)(a4 + v10++);
          while ( v10 < v7 );
          v11 = v8;
        }
        return RtlpGetSetBootStatusData(15, &v11, 1, 0);
      }
    }
  }
  return result;
}
