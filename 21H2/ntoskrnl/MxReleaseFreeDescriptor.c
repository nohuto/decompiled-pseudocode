/*
 * XREFs of MxReleaseFreeDescriptor @ 0x140A44A14
 * Callers:
 *     MiCreateFreePfns @ 0x140A44D50 (MiCreateFreePfns.c)
 * Callees:
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 */

__int64 __fastcall MxReleaseFreeDescriptor(unsigned __int64 *a1, int a2)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+30h] [rbp-20h]
  int v10; // [rsp+34h] [rbp-1Ch]
  unsigned __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]

  v8[0] = 0LL;
  v8[1] = 0LL;
  v3 = 0;
  v10 = 0;
  v4 = *a1;
  result = a1[3];
  v11 = v4;
  v9 = a2;
  if ( result != -1 )
  {
    v12 = result - v4 + 512;
    result = MxCreateFreePfns(v8);
    v3 = 1;
  }
  v6 = a1[2];
  if ( v6 != -1LL )
  {
    v7 = *a1;
    if ( (v6 & 0xFFFFFFFFFFFFFE00uLL) <= *a1 )
      v3 = 1;
    else
      v7 = v6 & 0xFFFFFFFFFFFFFE00uLL;
    v11 = v7;
    v12 = v6 - v7 + 1;
    result = MxCreateFreePfns(v8);
    if ( !v3 )
    {
      result = *a1 & 0x1FF;
      if ( (*a1 & 0x1FF) != 0 )
      {
        v11 = *a1;
        v12 = 512 - result;
        return MxCreateFreePfns(v8);
      }
    }
  }
  return result;
}
