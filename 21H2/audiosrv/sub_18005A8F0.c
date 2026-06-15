/*
 * XREFs of sub_18005A8F0 @ 0x18005A8F0
 * Callers:
 *     sub_18005A578 @ 0x18005A578 (sub_18005A578.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011BFE4 @ 0x18011BFE4 (sub_18011BFE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005A8F0(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // r8
  int v8; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v5 = 2 * v2;
      if ( (v2 & 0x40000000) != 0 )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    if ( (unsigned __int64)v5 <= 0xFFFFFFF )
    {
      v6 = o__recalloc(*(_QWORD *)a1, v5, 8LL);
      if ( v6 )
      {
        *(_QWORD *)a1 = v6;
        v2 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 12) = v5;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  v7 = (_QWORD *)(*(_QWORD *)a1 + 8LL * v2);
  if ( v7 )
  {
    *v7 = *a2;
    v2 = *(_DWORD *)(a1 + 8);
  }
  v8 = v2 + 1;
  result = 1LL;
  *(_DWORD *)(a1 + 8) = v8;
  return result;
}
