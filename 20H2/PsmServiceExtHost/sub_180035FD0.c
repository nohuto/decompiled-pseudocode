/*
 * XREFs of sub_180035FD0 @ 0x180035FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035FD0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+58h] [rbp+10h]

  v7[1] = 0;
  v9 = 0LL;
  v10 = 0LL;
  v7[0] = 32;
  v8 = a2;
  result = D3DKMTQueryProcessOfferInfo(v7);
  if ( (int)result < 0 )
  {
    v6 = v11;
  }
  else
  {
    v6 = v10;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    *a4 += v6;
    return 0LL;
  }
  return result;
}
